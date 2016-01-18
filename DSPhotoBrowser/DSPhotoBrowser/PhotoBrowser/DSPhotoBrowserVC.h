//
//  DSPhotoBrowserVC.h
//  DSPhotoBrowser
//
//  Created by dasheng on 16/1/14.
//  Copyright © 2016年 dasheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSPhotoBrowserConfig.m"

@protocol DSPhotoBrowserVCDelegate <NSObject>

- (void)dismissAtIndex:(NSInteger)index;

@end

@interface DSPhotoBrowserVC : UIViewController

/*-------必选------*/
@property(nonatomic, strong)UIViewController   *handleVC;
@property(nonatomic, strong)NSArray            *photoModels;        //图片数组
@property(nonatomic, assign)NSInteger          currentImageIndex;   //当前图片的位置数


/*------可选------*/
@property(nonatomic, assign)DSPhotoBrowserType type;                //显示的动画类型
@property(nonatomic, assign)BOOL               isNavigationBar;     //是否显示导航栏
@property(nonatomic, assign)BOOL               isIndexLabel;        //是否显示总张数label
@property(nonatomic, weak)id<DSPhotoBrowserVCDelegate>delegate;

- (void)show;
- (void)dismiss;


//override
- (void)initIndexLabel;
- (void)showIndexLabel;
- (void)hideIndexLabel;
- (void)setIndexLabelNumber:(NSInteger)index;

@end
