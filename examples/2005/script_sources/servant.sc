include std.sci
include idle.sci

maintask TServant : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			super.init(300, 100);
			@Sleep(3);
		}
	}
}