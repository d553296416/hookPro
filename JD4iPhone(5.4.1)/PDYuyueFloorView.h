//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PDViewProtocol.h"

@class JDLabel, NSString, NewProductModel, PDYuyueCountDownTimerView, UIImageView;

@interface PDYuyueFloorView : UIView <PDViewProtocol>
{
    UIImageView *_mainImageView;
    PDYuyueCountDownTimerView *_countDownTimerView;
    JDLabel *_priceLabel;
    JDLabel *_yuyuePeopleCountLabel;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDLabel *yuyuePeopleCountLabel; // @synthesize yuyuePeopleCountLabel=_yuyuePeopleCountLabel;
@property(retain, nonatomic) JDLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) PDYuyueCountDownTimerView *countDownTimerView; // @synthesize countDownTimerView=_countDownTimerView;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)layoutUseTwoLine;
- (void)layoutUseOneLine;
- (_Bool)canDisplayOneLine;
- (void)configYuyuePeopleLabel:(_Bool)arg1;
- (void)configPriceLabel:(_Bool)arg1;
- (void)defaultLayout;
- (void)renderUIWithProductModel:(id)arg1;
- (void)updateWithTime:(double)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

