maintask task_0
{
	void init(string var_0_string)
	{
		@EnableClipping(true);
		int var_2_int;
		func_33(var_2_int);
		if(var_2_int == 0) {
			var_0_string = "ui/stat_Danko.png";
		} else {
				int var_9_int;
				func_33(var_9_int);
				if(!(var_9_int == 1)) goto Label_19;
				var_0_string = "ui/stat_Burah.png";
		}
		for(;;) {
			@LoadImage(var_0_string);
			@SetOwnerDraw(true);
			@ProcessEvents();
			return 0;

		}
	
	Label_19:
		var_0_string = "ui/stat_Klara.png";
	}

	void OnUse(string var_0_string)
	{
		@Blit(var_0_string, 0, 0);
	}

}


void func_33(int var_2_int)
{
	int var_4_int;
	@GetVariable("branch", var_4_int);
	var_4_int = var_2_int;
}


