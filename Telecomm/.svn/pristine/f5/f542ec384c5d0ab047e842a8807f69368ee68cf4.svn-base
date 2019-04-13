//
//  TCChosePlanetController.m
//
//
//  Created by YRH on 2018/4/20.
//  Copyright © 2018年 YRH. All rights reserved.
//  2.注册选择入驻星球
//

#import "TCChosePlanetController.h"
#import "Masonry.h"
#import "Constant.h"
#import "TCPlanetCell.h"
#import "TCPlanetInfoModel.h"
#import "TalkChainHeader.h"
#import "TCSMSController.h"
#import "TCRegisterController.h"
#import "JFLanguageManager.h"

@interface TCChosePlanetController () <UICollectionViewDelegate, UICollectionViewDataSource>
/// 返回按钮
@property (nonatomic, strong) UIButton * backButton;
/// 标题
@property (nonatomic, strong) UIView *titleView;
/// 滑动视图
@property (nonatomic, strong) UICollectionView *collectionView;
/// 星空背景
@property (nonatomic, strong) UIImageView *starrySkyImageView;
/// 太阳背景
@property (nonatomic, strong) UIImageView *sunImageView;
/// 星球名字
@property (nonatomic, strong) UILabel *planetNameLabel;
/// 简介
@property (nonatomic, strong) UITextView *introductionTextView;
/// 入住按钮
@property (nonatomic, strong) UIButton *stayInButton;
/// 比例
@property (nonatomic, assign) CGFloat proportion;
@property (nonatomic, assign) CGFloat starrySkyOffset;
/// 行星数组
@property (nonatomic, strong) NSMutableArray <TCPlanetInfoModel *>*planets;
@property (nonatomic, assign) NSUInteger currentIdx;

@end

@implementation TCChosePlanetController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.clipsToBounds = YES;
    self.view.theme_backgroundColor = [UIColor theme_colorForKey:@"viewDarkBackgroundColor" from:@"login"];
    [self createData];
    [self backButton];
    [self collectionView];
    [self sunRotatingAnimation];
    [self changePlanetShowInfo];
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

#pragma mark - data
- (void)createData {
    self.currentIdx = 0;
    NSMutableArray *planetArray = [NSMutableArray arrayWithContentsOfFile:BundleFile(@"Planet.bundle", @"/Planet/PlanetInformation.plist")];
    self.planets = [TCPlanetInfoModel mj_objectArrayWithKeyValuesArray:planetArray];
    
}

- (void)viewWillLayoutSubviews {
    [super viewWillLayoutSubviews];
    [_introductionTextView setContentOffset:CGPointZero];
    CGFloat starrySkyWidth = CGRectGetWidth(_starrySkyImageView.frame);
    _starrySkyOffset = (starrySkyWidth - kScreenWidth) / self.planets.count;
}

#pragma mark - UICollectionViewDelegate, UICollectionViewDataSource
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.planets.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    TCPlanetCell *cell = [collectionView dequeueReusableCellWithCellClass:TCPlanetCell.class forIndexPath:indexPath];
    TCPlanetInfoModel *planetModel = self.planets[indexPath.row];
    NSString *imagePath = [NSString stringWithFormat:@"/Planet/SolarSystem/%@",planetModel.imageName];
    cell.planetImageView.image = BundleImage(@"Planet.bundle", imagePath);
    return cell;
}

#pragma mark - 改变星球描述信息
- (void)changePlanetShowInfo {
    if (_currentIdx < self.planets.count) {
        TCPlanetInfoModel *planetModel = self.planets[_currentIdx];
        _planetNameLabel.text = [JFLanguageManager stringWithKey:planetModel.name table:Table_OpenPlanet comment:@"名字"];
        _introductionTextView.text = [JFLanguageManager stringWithKey:planetModel.information table:Table_OpenPlanet comment:@"介绍"];
    }
}

#pragma mark - 太阳转圈动画
- (void)sunRotatingAnimation {
    CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:@"transform.rotation.z"];
    animation.fromValue = [NSNumber numberWithFloat:0.f];
    animation.toValue = [NSNumber numberWithFloat: M_PI * 2];
    animation.duration = 150.0f;
    animation.autoreverses = NO;
    animation.removedOnCompletion = NO;
    animation.fillMode = kCAFillModeForwards;
    animation.repeatCount = MAXFLOAT;
    [self.sunImageView.layer addAnimation:animation forKey:nil];
}

#pragma mark - scroll
- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    CGFloat offsetX = scrollView.contentOffset.x;
    CGFloat offset = offsetX / kScreenWidth * _starrySkyOffset;
    if (offsetX < 0 || offsetX > kScreenWidth * self.planets.count) {
        return;
    }
    [self.starrySkyImageView mas_updateConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.view).offset(-offset);
    }];
}

- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    CGFloat offsetX = scrollView.contentOffset.x;
    NSInteger page = offsetX / kScreenWidth;
    if (page != _currentIdx) {
        _currentIdx = page;
        // 展示当前星球信息
        [self changePlanetShowInfo];
    }
}

- (void)nextAction{
    if (self.accountType == 0) {
        TCSMSController *vc = [TCSMSController new];
        vc.phone = self.account;
        vc.type = TCSMSTypeRegister;
        vc.planetEnName = self.planets[_currentIdx].enName;
        [self.navigationController pushViewController:vc animated:YES];
    }else{
        TCRegisterController *createWalletVc = [TCRegisterController new];
        createWalletVc.account = self.account;
        createWalletVc.inviteCode = @"";
        createWalletVc.planetEnName = self.planets[_currentIdx].enName;
        [self.navigationController pushViewController:createWalletVc animated:YES];
    }
}

- (void)backAction{
    [self.navigationController popViewControllerAnimated:YES];
}

#pragma mark - lazy
- (UIButton *)backButton{
    if (!_backButton) {
        _backButton = [UIButton buttonWithType:UIButtonTypeSystem];
        _backButton.tintColor = cWhiteColor;
        [_backButton setImage:[UIImage imageNamed:@"navigationBack"] forState:UIControlStateNormal];
        [self.view insertSubview:_backButton aboveSubview:self.titleView];
        [_backButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.offset(10);
            make.width.height.equalTo(@30);
            if (@available(iOS 11.0, *)) {
                make.top.equalTo(self.view.mas_safeAreaLayoutGuideTop).offset(10);
            } else {
                make.top.equalTo(self.view ).offset(30);
            }
        }];
        [_backButton addTarget:self action:@selector(backAction) forControlEvents:UIControlEventTouchUpInside];
    }
    return _backButton;
}
// 标题
- (UIView *)titleView {
    if (!_titleView) {
        _titleView = [[UIView alloc] init];
        [self.view insertSubview:_titleView aboveSubview:self.starrySkyImageView];
        [_titleView mas_makeConstraints:^(MASConstraintMaker *make) {
            if (@available(iOS 11.0, *)) {
                make.top.equalTo(self.view.mas_safeAreaLayoutGuideTop);
            } else {
                make.top.equalTo(self.view);
            }
            make.left.right.equalTo(self.view);
        }];

        // 标题
        UILabel *titleLabel = [[UILabel alloc] init];
        [_titleView addSubview:titleLabel];
        [titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.equalTo(_titleView.mas_centerX);
            make.left.right.equalTo(_titleView);
            make.top.equalTo(_titleView.mas_top).offset(10);
        }];
        // 副标题
        UILabel *subtitleLabel = [[UILabel alloc] init];
        [_titleView addSubview:subtitleLabel];
        [subtitleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(titleLabel.mas_bottom).offset(5);
            make.left.right.equalTo(_titleView);
            make.centerX.equalTo(_titleView.mas_centerX);
            make.bottom.equalTo(_titleView.mas_bottom).offset(-10);
        }];
        titleLabel.text = [JFLanguageManager stringWithKey:@"openPlanetSelectThePlanet" table:Table_OpenPlanet comment:@"请选择您要入住的星球"];
        subtitleLabel.text = [JFLanguageManager stringWithKey:@"openPlanetSelectionCanNotChange" table:Table_OpenPlanet comment:@"(选择以后将不可更改)"];
        titleLabel.textAlignment = subtitleLabel.textAlignment = NSTextAlignmentCenter;
        titleLabel.font = [UIFont boldSystemFontOfSize:17];
        subtitleLabel.font = [UIFont systemFontOfSize:15];
        titleLabel.theme_textColor = [UIColor theme_colorForKey:@"labelBrightTextColor" from:@"login"];
        subtitleLabel.theme_textColor = [UIColor theme_colorForKey:@"labelTextColor" from:@"login"];
    }
    return _titleView;
}

// 星空背景
- (UIImageView *)starrySkyImageView {
    if (!_starrySkyImageView) {
        _starrySkyImageView = [[UIImageView alloc] init];
        _starrySkyImageView.clipsToBounds = YES;
        UIImage *starrySkyImage = BundleImage(@"Planet.bundle", @"/Planet/StarrySky/StarrySkyBackground.png");
        _proportion = starrySkyImage.size.width / starrySkyImage.size.height;
        _starrySkyImageView.image = starrySkyImage;

        [self.view addSubview:_starrySkyImageView];
        // 星空背景
        [_starrySkyImageView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.top.bottom.equalTo(self.view);
            make.width.equalTo(_starrySkyImageView.mas_height).multipliedBy(_proportion);
        }];
    }
    return _starrySkyImageView;
}

// 太阳背景
- (UIImageView *)sunImageView {
    if (!_sunImageView) {
        _sunImageView = [[UIImageView alloc] init];
        _sunImageView.image = BundleImage(@"Planet.bundle", @"/Planet/Star/Sun.png");;

        [self.starrySkyImageView addSubview:_sunImageView];
        [_sunImageView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.width.height.equalTo(@(SCREEN_WIDTH * 2));
            make.centerX.equalTo(self.view);
            make.top.equalTo(self.introductionTextView.mas_bottom).offset(-20);
        }];
    }
    return _sunImageView;
}
// 星球名字
- (UILabel *)planetNameLabel {
    if (!_planetNameLabel) {
        _planetNameLabel = [[UILabel alloc] init];
        _planetNameLabel.theme_textColor = [UIColor theme_colorForKey:@"labelBrightTextColor" from:@"login"];
        _planetNameLabel.textAlignment = NSTextAlignmentCenter;
        [_planetNameLabel sizeToFit];

        [self.view insertSubview:_planetNameLabel aboveSubview:self.sunImageView];
        [_planetNameLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.centerX.equalTo(self.view);
            make.bottom.equalTo(self.introductionTextView.mas_top).offset(-10);
        }];
    }
    return _planetNameLabel;
}

// 简介
- (UITextView *)introductionTextView {
    if (!_introductionTextView) {
        _introductionTextView = [[UITextView alloc] init];
        _introductionTextView.theme_backgroundColor = [UIColor theme_colorForKey:@"viewDarkAlphaBackgroundColor" from:@"login"];
        _introductionTextView.layer.cornerRadius = 5.0f;
        _introductionTextView.font = [UIFont systemFontOfSize:14];
        _introductionTextView.editable = NO;
        _introductionTextView.theme_textColor = [UIColor theme_colorForKey:@"labelTextColor" from:@"login"];
        _introductionTextView.textContainerInset = UIEdgeInsetsMake(5, 5, 5, 5);

        [self.view insertSubview:_introductionTextView aboveSubview:self.sunImageView];
        [_introductionTextView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.stayInButton);
            make.bottom.equalTo(self.stayInButton.mas_top).offset(-10);
            make.height.equalTo(self.view.mas_height).multipliedBy(0.15);
        }];
    }
    return _introductionTextView;
}

// 入住按钮
- (UIButton *)stayInButton {
    if (!_stayInButton) {
        _stayInButton = [UIButton buttonWithType:(UIButtonTypeCustom)];
        _stayInButton.theme_backgroundColor = [UIColor theme_colorForKey:@"viewDarkBackgroundColor" from:@"login"];
        [_stayInButton setTitle:[JFLanguageManager stringWithKey:@"openPlanetStayingOnThePlanet" table:Table_OpenPlanet comment:@"入住星球"] forState:(UIControlStateNormal)];
        _stayInButton.layer.cornerRadius = 5.0f;
        [_stayInButton addTarget:self action:@selector(nextAction) forControlEvents:UIControlEventTouchUpInside];


        [self.view insertSubview:_stayInButton aboveSubview:self.sunImageView];
        [_stayInButton mas_makeConstraints:^(MASConstraintMaker *make) {
            if (@available(iOS 11.0, *)) {
                make.bottom.equalTo(self.view.mas_safeAreaLayoutGuideBottom).inset(10);
            } else {
                make.bottom.equalTo(self.view).inset(10);
            }
            make.left.right.inset(10);
            make.height.equalTo(@45);
        }];
    }
    return _stayInButton;
}

- (UICollectionView *)collectionView {
    if (!_collectionView) {
        CGFloat space = 0;
        UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
        layout.itemSize = CGSizeMake(kScreenWidth - space * 2, kScreenWidth - space * 2);
        layout.sectionInset = UIEdgeInsetsMake(0, space, 0, space);
        layout.minimumLineSpacing = space * 2;
        layout.minimumInteritemSpacing = 0;
        layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;

        _collectionView = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
        _collectionView.backgroundColor = [UIColor colorWithWhite:1 alpha:0];
        _collectionView.delegate = self;
        _collectionView.dataSource = self;
        _collectionView.pagingEnabled = YES;
        _collectionView.showsVerticalScrollIndicator = NO;
        _collectionView.showsHorizontalScrollIndicator = NO;

        [self.view insertSubview:_collectionView aboveSubview:self.starrySkyImageView];
        [_collectionView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.right.equalTo(self.view);
            make.top.equalTo(self.titleView.mas_bottom);
            make.bottom.equalTo(self.planetNameLabel.mas_top).offset(-10);
        }];

        _collectionView.registerReusableCell(TCPlanetCell.class);
    }
    return _collectionView;
}

- (NSMutableArray *)planets {
    if (!_planets) {
        _planets = [NSMutableArray arrayWithCapacity:5];
    }
    return _planets;
}


@end

