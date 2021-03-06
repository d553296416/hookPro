//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface MDGameFriendRankViewCell : UITableViewCell
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (id)createAccessoryViewWithRank:(long long)arg1;
- (void)refreshRankCellWithModel:(id)arg1;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

