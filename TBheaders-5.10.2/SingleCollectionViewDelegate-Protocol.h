//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@protocol SingleCollectionViewDelegate <UIScrollViewDelegate>

@optional
- (long long)pageSize;
- (long long)totalPage;
- (long long)currentPage;
- (void)loadMorePage;
- (_Bool)isPageLoading;
- (_Bool)hasMoreData;
- (void)footprintsButtonDidPressed;
- (void)scrollToTopButtonDidPressed;
@end

