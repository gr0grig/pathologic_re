include std.sci

void citHandleUnload(void)
{
	@RemoveActor(self());
	@Hold();
}
