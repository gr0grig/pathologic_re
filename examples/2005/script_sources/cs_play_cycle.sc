maintask TPlayAll
{
	void init(void) {
		float fLen;
		@GetAnimationLength(fLen);
		
		for (;;) {
			@PlayAnimation(0, fLen);
			@WaitForAnimEnd();
		}
	}
}
