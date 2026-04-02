include std.sci
include actor_std.sci

maintask TMoviePlayer
{
	void init(void) {
		@Hold();
	}
	
	void OnUse(object player) {
		@PlayMovie("test.wmv");
	}
}
