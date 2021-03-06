//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HUDActivityView, NSDictionary, NSMutableArray, NSString, SPNetworkRequest, TBModelStatusHandler, TBShopCatInfoItemX, UITableView;

@interface TBShopSearchCategoryViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_categoryTableView;	// 16 = 0x10
    NSString *_sellerId;	// 24 = 0x18
    NSString *_shopId;	// 32 = 0x20
    NSString *_categoryID;	// 40 = 0x28
    NSDictionary *_query;	// 48 = 0x30
    NSMutableArray *_categoryItems;	// 56 = 0x38
    TBShopCatInfoItemX *_firstItemNavCat;	// 64 = 0x40
    SPNetworkRequest *_categoryInfoRequest;	// 72 = 0x48
    NSMutableArray *_headviewArray;	// 80 = 0x50
    TBModelStatusHandler *_failStatusHandler;	// 88 = 0x58
    HUDActivityView *_categoryLoadingView;	// 96 = 0x60
}

@property(retain, nonatomic) HUDActivityView *categoryLoadingView; // @synthesize categoryLoadingView=_categoryLoadingView;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(retain, nonatomic) NSMutableArray *headviewArray; // @synthesize headviewArray=_headviewArray;
@property(retain, nonatomic) SPNetworkRequest *categoryInfoRequest; // @synthesize categoryInfoRequest=_categoryInfoRequest;
@property(retain, nonatomic) TBShopCatInfoItemX *firstItemNavCat; // @synthesize firstItemNavCat=_firstItemNavCat;
@property(retain, nonatomic) NSMutableArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
- (void).cxx_destruct;
- (id)pageUserInfo;
- (id)dataForUserTrack;
- (void)cellCheckButtonClicked:(id)arg1;
- (void)sectionCheckButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)jumpToCategoryViewWithCatName:(id)arg1;
- (void)reloadCategoryData;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

