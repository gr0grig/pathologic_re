include std.sci
include idle.sci

maintask TWaiter : TIdleBaseLookAsync
{
	void init(void) {
		for (;;) {
			@Sleep(1);
			super.init(300, 100);
		}
	}
}
