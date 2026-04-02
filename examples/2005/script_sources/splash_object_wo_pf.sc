include std.sci
// splash object without pathfinding
// object that appears after loading, without blocking pf

maintask TSplashObject
{
	void init(void) {
		@DisableUpdate();
		@Hold();
	}
	
	void OnLoad(void) {
		@SetVisibility(true);
		@StopGroup0();
	}
}
