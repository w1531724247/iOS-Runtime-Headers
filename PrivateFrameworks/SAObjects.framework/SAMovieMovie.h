/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSNumber, NSString, NSURL, SALocalSearchReviewList;

@interface SAMovieMovie : SADomainObject {
}

@property(copy) NSArray * actors;
@property(copy) NSArray * directors;
@property(copy) NSArray * genres;
@property(copy) NSURL * hiResTrailerUri;
@property(copy) NSURL * iTunesUri;
@property bool is3d;
@property(copy) NSNumber * isAvailableOnItunesForPurchase;
@property(copy) NSNumber * isAvailableOnItunesForRent;
@property(copy) NSURL * lowResTrailerUri;
@property(copy) NSString * name;
@property(copy) NSArray * posterImages;
@property(copy) NSURL * posterUri;
@property(copy) NSNumber * qualityRating;
@property(copy) NSString * rating;
@property(retain) SALocalSearchReviewList * reviews;
@property(copy) NSURL * rottenTomatoesUri;
@property long long runtimeInMinutes;
@property(copy) NSArray * studios;
@property(copy) NSString * synopsis;
@property(copy) NSString * theaterShowtimeSearchRegionDescription;
@property(copy) NSArray * theaterShowtimes;
@property(copy) NSDate * theatricalReleaseDate;

+ (id)movie;
+ (id)movieWithDictionary:(id)arg1 context:(id)arg2;

- (id)actors;
- (id)directors;
- (id)encodedClassName;
- (id)genres;
- (id)groupIdentifier;
- (id)hiResTrailerUri;
- (id)iTunesUri;
- (bool)is3d;
- (id)isAvailableOnItunesForPurchase;
- (id)isAvailableOnItunesForRent;
- (id)lowResTrailerUri;
- (id)name;
- (id)posterImages;
- (id)posterUri;
- (id)qualityRating;
- (id)rating;
- (id)reviews;
- (id)rottenTomatoesUri;
- (long long)runtimeInMinutes;
- (void)setActors:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHiResTrailerUri:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsAvailableOnItunesForPurchase:(id)arg1;
- (void)setIsAvailableOnItunesForRent:(id)arg1;
- (void)setLowResTrailerUri:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setPosterUri:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setRottenTomatoesUri:(id)arg1;
- (void)setRuntimeInMinutes:(long long)arg1;
- (void)setStudios:(id)arg1;
- (void)setSynopsis:(id)arg1;
- (void)setTheaterShowtimeSearchRegionDescription:(id)arg1;
- (void)setTheaterShowtimes:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)studios;
- (id)synopsis;
- (id)theaterShowtimeSearchRegionDescription;
- (id)theaterShowtimes;
- (id)theatricalReleaseDate;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end