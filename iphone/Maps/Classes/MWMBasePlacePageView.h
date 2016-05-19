@class MWMPlacePageEntity, MWMDirectionView, MWMPlacePageTypeDescriptionView;

@interface MWMBasePlacePageView : SolidTouchView

@property (weak, nonatomic) IBOutlet UILabel * titleLabel;
@property (weak, nonatomic) IBOutlet UIView * downloadProgressView;
@property (weak, nonatomic) IBOutlet UILabel * externalTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel * subtitleLabel;
@property (weak, nonatomic) IBOutlet UILabel * placeScheduleLabel;
@property (weak, nonatomic) IBOutlet UILabel * addressLabel;
@property (weak, nonatomic) IBOutlet UILabel * distanceLabel;
@property (weak, nonatomic) IBOutlet UIImageView * directionArrow;
@property (weak, nonatomic) IBOutlet UITableView * featureTable;
@property (weak, nonatomic) IBOutlet UIView * separatorView;
@property (weak, nonatomic) IBOutlet UIButton * directionButton;
@property (weak, nonatomic) IBOutlet UIView * ppPreview;

- (void)configureWithEntity:(MWMPlacePageEntity *)entity;
- (void)addBookmark;
- (void)removeBookmark;
- (void)reloadBookmarkCell;
- (void)updateAndLayoutMyPositionSpeedAndAltitude:(NSString *)text;
- (void)setDistance:(NSString *)distance;

@end
