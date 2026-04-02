maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		var_2_object = null;
		var_0_int = 1;
		var_4_bool = false;
		var_5_bool = false;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnGameTime(int iID, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		int var_9_int;
		if(!var_4_bool) { //@nz
			var_5_bool = true;

			while(0 < 4) {
				string var_14_string; int var_15_int;
				var_9_int = var_15_int;
				func_235(var_14_string, var_15_int);
				@SendMessage(-5, var_14_string);
				var_9_int += 1;
			}

			var_4_bool = true;
		}
		@SendMessageToParent(-9);
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, int var_9_int, float var_10_float)
	{
		@SendToParent();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string)
	{
		if(!var_2_object) { //@nz
		}
		@Blit(var_3_string, 1, 1);
		if(var_1_int > 1)
			@Print("default", 2, 35, var_0_int);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, int var_9_int)
	{
		if(var_2_object != 0)
			@SendMessageToParent(0);
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, string var_7_string, int var_8_int, string var_9_string, object var_10_object)
	{
		int var_12_int;
		if(var_8_int == -7) {
			if(var_4_bool != 0)
				func_36();
			return 2;
		}
		if(var_8_int == -6) {
			var_4_bool = true;
			return 2;
		}
		if(var_8_int == -1) {
			if(var_10_object != null) {
				var_10_object->get(var_6_string, 0);
				var_10_object->get(var_7_string, 1);
			}
			return 2;
		}
		if(var_8_int == -2) {
			if(var_4_bool != 0)
				func_54(var_12_int, var_6_string);
			return 2;
		}
		if(var_8_int == -3) {
			if(var_4_bool != 0)
				func_54(var_12_int, var_7_string);
			return 2;
		}
		if(var_8_int == -4) {
			var_4_bool = true;
			func_36();
			return 2;
		}
		if(var_8_int == -5) {
			if(var_5_bool != 0)
				var_5_bool = false;
			else
				var_4_bool = false;
			if((var_8_int & 65536) != 0) {
				var_0_int = var_8_int & 16383;
				return 2;
			}
			if((var_8_int & 32768) != 0) {
				var_2_object = null;
				@SetTooltip(-1, "");
			} else {
					var_2_object = var_10_object;
					if(var_2_object == 0) goto Label_230;
					var_2_object->GetItemID(var_12_int); //@t
					@GetInvItemSprite(var_3_string, var_12_int);
					@LoadImage(var_3_string);
					@GetInvItemMaxStackSize(var_1_int, var_12_int);
					@SetTooltip(1, "", var_2_object);
			}
			for(;;) {
				return 2;

			}

		Label_230:
			@SetTooltip(-1, "");
		}
	
	}

}


// @pe
void func_235(string var_14_string, int var_15_int)
{
	if((var_15_int + 1) < 10)
		var_14_string = "cslot0" + (var_15_int + 1);
	var_14_string = "cslot" + (var_15_int + 1);
}


void func_36(void)
{
	int var_20_int = 0;
	int var_21_int = 0;
	int var_22_int = 0;
	int var_23_int = 0;
	@ClientToScreen(var_20_int, var_21_int);
	@GetWindowSize(var_22_int, var_23_int);
	@SetMousePos((var_20_int + (var_22_int / 2)), (var_21_int + (var_23_int / 2)));
}


void func_54(bool var_4_bool, string var_40_string)
{
	int var_47_int; int var_48_int; int var_49_int; int var_50_int; int var_51_int; int var_52_int;
	if(var_40_string != "") {
		var_47_int = 0;
		var_48_int = 0;
		var_49_int = 0;
		var_50_int = 0;
		@ClientToScreen(var_47_int, var_48_int);
		@GetWindowSize(var_49_int, var_50_int);
		var_51_int = 0;
		var_52_int = 0;
		@GetCursorPos(var_51_int, var_52_int);
		bool var_55_bool = false;
		bool var_56_bool = false;
		bool var_57_bool = false;
		if(var_51_int > var_47_int) {
			if(var_52_int > var_48_int)
				var_57_bool = true;
		}
		if(var_57_bool != 0) {
			if(var_51_int < (var_47_int + var_49_int))
				var_56_bool = true;
		}
		if(var_56_bool != 0) {
			if(var_52_int < (var_48_int + var_50_int))
				var_55_bool = true;
		}
		if(var_55_bool != 0) {
			var_4_bool = false;
			if(var_40_string == "$parent")
				@SendMessageToParent(-4);
			else
				@SendMessage(-4, var_40_string);
			func_36();
		}
		goto Label_107;
	}
Label_107:
	
}


