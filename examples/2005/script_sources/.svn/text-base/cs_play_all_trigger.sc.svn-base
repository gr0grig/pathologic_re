include std.sci

maintask TPlayAll
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string name) {
		if (name == "play") {
			disable OnTrigger;
			@PlayAnimation();
			@Hold();
			enable OnTrigger;
		}
	}
}
