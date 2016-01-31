//
// Created by Hammer on 1/31/16.
//

#import <Overcoat/OVCHTTPSessionManager.h>
#import <PromiseKit/PromiseKit.h>

@interface SKHTTPSessionManager : OVCHTTPSessionManager

- (instancetype)initWithBaseURL:(NSURL *)url
           sessionConfiguration:(NSURLSessionConfiguration *)configuration;

@end