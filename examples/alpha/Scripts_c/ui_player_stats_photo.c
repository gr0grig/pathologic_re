maintask task_0
{
	void init(string var_0_string, string var_1_string, string var_2_string)
	{
		@EnableClipping(true);
		int var_4_int;
		func_62(var_4_int);
		if(var_4_int == 0) {
			var_0_string = "ui/stat_Danko0.png";
			var_1_string = "ui/stat_Danko1.png";
			var_2_string = "ui/stat_Danko2.png";
		} else {
				int var_8_int;
				func_62(var_8_int);
				if(!(var_8_int == 1)) goto Label_23;
				var_0_string = "ui/stat_Burah0.png";
				var_1_string = "ui/stat_Burah1.png";
				var_2_string = "ui/stat_Burah2.png";
		}
		for(;;) {
			@LoadImage(var_0_string);
			@LoadImage(var_1_string);
			@LoadImage(var_2_string);
			@SetOwnerDraw(true);
			@ProcessEvents();
			return 0;

		}
	
	Label_23:
		var_0_string = "ui/stat_Klara0.png";
		var_1_string = "ui/stat_Klara1.png";
		var_2_string = "ui/stat_Klara2.png";
	}

	void OnUse(string var_0_string, string var_1_string, string var_2_string)
	{
		float var_4_float;
		@GetPlayerHealth(var_4_float);
		if(var_4_float >= 0.7) {
			@Blit(var_0_string, 0, 0);
		} else if(var_4_float >= 0.2) {
				@Blit(var_1_string, 0, 0);
		}
		for(;;) {
			return 2;

		}
	
		@Blit(var_2_string, 0, 0);
	}

}


void func_62(int var_4_int)
{
	var_4_int = 0;
}


