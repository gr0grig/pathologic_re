include std.sci
include water_source.sci

maintask TBarrel : TWaterSource
{
	void init(void) {
		super.init();
		@SetVisibility(true);
		for (;;) {
			@Hold();
		}
	}
}
