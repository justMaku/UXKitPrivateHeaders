//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXView.h>

#import "_UXBarItemsContainer.h"

@class NSArray, NSMutableArray, NSString;

@interface _UXToolbarItemsContainer : UXView <_UXBarItemsContainer>
{
    NSMutableArray *__addedConstraints;
    BOOL _singleItemMode;
    BOOL _isTransitioning;
    NSArray *_items;
    double _interitemSpacing;
    double _baselineOffsetFromBottom;
}

+ (id)toolbarItemsContainerForToolbar:(id)arg1 items:(id)arg2;
@property(nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (double)lastBaselineOffsetFromBottom;
- (void)updateConstraints;
- (void)prepareForTransition;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

