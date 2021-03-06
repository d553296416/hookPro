//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDContentItemDelegate.h"
#import "MyOrderItemDelegate.h"

@class MyJdHomeModel, MyOrderItem, NSArray, NSDictionary, NSString;

@interface MyWalletExtraView : UIView <JDContentItemDelegate, MyOrderItemDelegate>
{
    MyOrderItem *_walletItem;
    _Bool _isDegrade;
    MyJdHomeModel *_walletModel;
    NSArray *_dataArr;
    NSDictionary *_numberDic;
    id <MyWalletExtraViewDelegate> _delegate;
}

@property(nonatomic) _Bool isDegrade; // @synthesize isDegrade=_isDegrade;
@property(nonatomic) __weak id <MyWalletExtraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *numberDic; // @synthesize numberDic=_numberDic;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) MyJdHomeModel *walletModel; // @synthesize walletModel=_walletModel;
- (void).cxx_destruct;
- (void)didOrderItemTapped:(id)arg1;
- (void)didTapAtItemView:(id)arg1;
- (void)layoutItem:(id)arg1 withNumberMessage:(id)arg2;
- (void)setupSubViews;
- (_Bool)isRedPointShow:(id)arg1;
- (void)showItemRedPoint:(id)arg1 show:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

