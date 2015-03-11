/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, UIButton, UIControl, UIImageView, UILabel;

@interface SKUISearchSpellCorrectedCell : UICollectionViewCell {
    BOOL _autoCorrected;
    SKUIClientContext *_clientContext;
    UIImageView *_imageView;
    UILabel *_label;
    int _preAutoCorrectCount;
    NSString *_searchTerm;
    NSString *_spellCorrectedTerm;
    UIButton *_spellCorrectionButton;
}

@property BOOL autoCorrected;
@property(retain) SKUIClientContext * clientContext;
@property int preAutoCorrectCount;
@property(copy) NSString * searchTerm;
@property(copy) NSString * spellCorrectedTerm;
@property(readonly) UIControl * spellCorrectionButton;

- (void).cxx_destruct;
- (void)_reloadLabel;
- (BOOL)autoCorrected;
- (id)clientContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)preAutoCorrectCount;
- (id)searchTerm;
- (void)setAutoCorrected:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setPreAutoCorrectCount:(int)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSpellCorrectedTerm:(id)arg1;
- (id)spellCorrectedTerm;
- (id)spellCorrectionButton;

@end