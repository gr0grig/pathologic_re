include std.sci
include container_base.sci

maintask TContainer : TContainerBase
{
	void init(void) {
		@SetVisibility(true);

		super.init();
	}
}
