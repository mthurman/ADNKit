//
//  ANKClient+ANKInteraction.h
//  ADNKit
//
//  Created by Joel Levin on 3/8/13.
//  Copyright (c) 2013 Afterwork Studios. All rights reserved.
//

#import "ANKClient+ANKHandlerBlocks.h"


@interface ANKClient (ANKInteraction)

- (void)fetchInteractionsForCurrentUserWithCompletion:(ANKClientCompletionBlock)completionHandler;

@end
