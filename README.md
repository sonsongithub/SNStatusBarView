SNStatusBarView
===============
![sample image](http://sonson.jp/wp/wp-content/uploads/2012/08/SNStatusBarViewSample.png)

This is an animating original status bar.

License
=======
BSD License.

SNStatusBarView Reference
=======
	- (void)setColor:(UIColor*)color;
###Parameters
####color
The color to use as a lighting effect.
###Discussion
Unless you call this method, blinking does not start.

	- (void)setMessage:(NSString*)message;
###Parameters
####color
The string to display as default title in SNStatusBarView.
###Discussion
None.

	- (void)startClosingAnimation;
###Discussion
This method is designed to call when setStatusBarHidden:withAnimation: is called.

	- (void)pushTemporaryMessage:(NSString*)string;
###Parameters
####string
The string to display as a temporary message such as a ticker.
###Discussion
The string to be passed is displayed over SNStatusBarView like a ticker for a while.
After queue is vacant, the default message which is set using setMessage: is displayed. 

Properties
======
None.

Blog
=======
 * [sonson.jp][]
Sorry, Japanese only....

Dependency
=======
 * none

[sonson.jp]: http://sonson.jp