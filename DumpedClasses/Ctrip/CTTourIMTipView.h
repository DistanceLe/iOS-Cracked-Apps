//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class CTChatConversation, CTRootViewController, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView, UIImage, UILabel, UITextField;

@interface CTTourIMTipView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    UIImage *scoreBtnDisAbleImage;
    UIImage *scoreBtnSelectedImage;
    UIImage *tipBtnUnSelectedImage;
    _Bool _scoreIsSelected;
    _Bool _leaderIsSelected;
    CTRootViewController *_controller;
    CDUnknownBlockType _tipSucceedBlock;
    NSLayoutConstraint *_tipViewToBottomConst;
    NSLayoutConstraint *_tipViewHeight;
    NSLayoutConstraint *_leaderCollectionViewHeight;
    UIView *_backgdView;
    UILabel *_currentScore;
    UICollectionView *_leaderCollectionView;
    UIView *_selectScoreView;
    UIButton *_firstScoreBtn;
    UIButton *_secondScoreBtn;
    UIButton *_thirdScoreBtn;
    UIButton *_fourthScoreBtn;
    UIButton *_fifthScoreBtn;
    UIButton *_otherScoreBtn;
    UIView *_otherScoreView;
    UITextField *_inputScoreTextField;
    UILabel *_briefTextLabel;
    UIButton *_tipButton;
    UIView *_bottomView;
    UIView *_sendResultView;
    NSMutableArray *_selectScoreArrays;
    NSMutableArray *_leaderArray;
    CTChatConversation *_conversation;
    long long _myScore;
    long long _requestTimes;
}

@property(nonatomic) long long requestTimes; // @synthesize requestTimes=_requestTimes;
@property(nonatomic) _Bool leaderIsSelected; // @synthesize leaderIsSelected=_leaderIsSelected;
@property(nonatomic) long long myScore; // @synthesize myScore=_myScore;
@property(retain, nonatomic) CTChatConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSMutableArray *leaderArray; // @synthesize leaderArray=_leaderArray;
@property(retain, nonatomic) NSMutableArray *selectScoreArrays; // @synthesize selectScoreArrays=_selectScoreArrays;
@property(nonatomic) __weak UIView *sendResultView; // @synthesize sendResultView=_sendResultView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(nonatomic) __weak UILabel *briefTextLabel; // @synthesize briefTextLabel=_briefTextLabel;
@property(nonatomic) __weak UITextField *inputScoreTextField; // @synthesize inputScoreTextField=_inputScoreTextField;
@property(nonatomic) __weak UIView *otherScoreView; // @synthesize otherScoreView=_otherScoreView;
@property(nonatomic) __weak UIButton *otherScoreBtn; // @synthesize otherScoreBtn=_otherScoreBtn;
@property(nonatomic) __weak UIButton *fifthScoreBtn; // @synthesize fifthScoreBtn=_fifthScoreBtn;
@property(nonatomic) __weak UIButton *fourthScoreBtn; // @synthesize fourthScoreBtn=_fourthScoreBtn;
@property(nonatomic) __weak UIButton *thirdScoreBtn; // @synthesize thirdScoreBtn=_thirdScoreBtn;
@property(nonatomic) __weak UIButton *secondScoreBtn; // @synthesize secondScoreBtn=_secondScoreBtn;
@property(nonatomic) __weak UIButton *firstScoreBtn; // @synthesize firstScoreBtn=_firstScoreBtn;
@property(nonatomic) __weak UIView *selectScoreView; // @synthesize selectScoreView=_selectScoreView;
@property(nonatomic) __weak UICollectionView *leaderCollectionView; // @synthesize leaderCollectionView=_leaderCollectionView;
@property(nonatomic) __weak UILabel *currentScore; // @synthesize currentScore=_currentScore;
@property(nonatomic) __weak UIView *backgdView; // @synthesize backgdView=_backgdView;
@property(nonatomic) __weak NSLayoutConstraint *leaderCollectionViewHeight; // @synthesize leaderCollectionViewHeight=_leaderCollectionViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *tipViewHeight; // @synthesize tipViewHeight=_tipViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *tipViewToBottomConst; // @synthesize tipViewToBottomConst=_tipViewToBottomConst;
@property(copy, nonatomic) CDUnknownBlockType tipSucceedBlock; // @synthesize tipSucceedBlock=_tipSucceedBlock;
@property(nonatomic) __weak CTRootViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tipButtonIsHight;
- (void)textDidChange:(id)arg1;
- (void)keyBoardWillHidden:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)checkInputWithString:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)listBtnAction:(id)arg1;
- (void)shopBtnAction:(id)arg1;
- (void)sendCustomMessageWithRiseOrder:(long long)arg1 currentIndex:(long long)arg2;
- (id)getSelectedLeaderModel;
- (_Bool)checkIfCanTip;
- (void)tipSucceedWithRiseOrder:(long long)arg1 currentIndex:(long long)arg2;
- (long long)getTipScore;
- (void)tipBtnAction:(id)arg1;
- (void)closeBtnAction:(id)arg1;
- (void)backgdViewTap:(id)arg1;
- (void)tapView:(id)arg1;
- (void)addKeyboardNotification;
- (void)tipBtnDisenable;
- (void)tipBtnEnable;
- (void)scoreBtnSelect:(id)arg1;
- (void)setSelectScoreBtnStyle;
- (void)setupCollectionView;
- (void)setupInputTextField;
- (void)configTipButtonStyle;
- (void)setTipViewHeight;
- (void)configScore;
- (void)requestScore;
- (void)initData;
- (void)initUI;
- (void)basicConfig;
- (id)initWithConversation:(id)arg1 leaderList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

