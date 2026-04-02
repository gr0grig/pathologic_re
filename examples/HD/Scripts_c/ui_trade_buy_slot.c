maintask task_0
{
	void init(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int)
	{
		var_2_object = null;
		var_0_int = 0;
		var_1_int = 1;
		var_3_bool = false;
		var_5_bool = false;
		var_11_int = 0;
		@SetBackground("default");
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	// @pe
	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int, int var_12_int, int var_13_int, float var_14_float)
	{
		@SendToParent();
	}

	void OnUse(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int)
	{
		if(!var_2_object) //@nz
			return 2;
		@Blit(var_4_string, 1, 1);
		bool var_17_bool = false;
		if(var_1_int > 1) {
			if(!var_3_bool) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0)
			@Print("default", 2, 35, ((var_0_int + "/") + var_1_int));
		if(var_3_bool != 0)
			@StretchBlit("disabled", 1, 1, 50, 50);
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int, int var_12_int, int var_13_int)
	{
		@SendMessageToParent(0);
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int, int var_12_int, int var_13_int)
	{
		@SendMessageToParent(1);
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int, int var_12_int, int var_13_int)
	{
	}

	void OnGameTime(int iID, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int)
	{
		int var_13_int;
		if(!var_5_bool) { //@nz
			var_6_bool = true;
			@SendMessageToParent(-20);

			while(0 < var_11_int) {
				string var_18_string; int var_19_int;
				var_13_int = var_19_int;
				func_329(var_18_string, var_19_int);
				@SendMessage(-5, var_18_string);
				string var_31_string; int var_32_int;
				var_13_int = var_32_int;
				func_345(var_31_string, var_32_int);
				@SendMessage(-5, var_31_string);
				var_13_int += 1;
			}

			var_5_bool = true;
		}
	}

	void event_200(int var_0_int, int var_1_int, object var_2_object, bool var_3_bool, string var_4_string, bool var_5_bool, bool var_6_bool, string var_7_string, string var_8_string, string var_9_string, string var_10_string, int var_11_int, int var_12_int, string var_13_string, object var_14_object)
	{
		int var_16_int;
		if(var_12_int == -1) {
			if(var_14_object != null) {
				var_14_object->get(var_7_string, 0);
				var_14_object->get(var_8_string, 1);
				var_14_object->get(var_9_string, 2);
				var_14_object->get(var_10_string, 3);
			}
			return 2;
		}
		if(var_12_int == -19) {
			var_14_object->get(var_11_int, 0);
			return 2;
		}
		if(var_12_int == -7) {
			if(var_5_bool != 0)
				func_66();
			return 2;
		}
		if(var_12_int == -6) {
			var_5_bool = true;
			return 2;
		}
		if(var_12_int == -13) {
			if(var_5_bool != 0)
				func_113(var_16_int, var_7_string);
			return 2;
		}
		if(var_12_int == -14) {
			if(var_5_bool != 0)
				func_113(var_16_int, var_8_string);
			return 2;
		}
		if(var_12_int == -15) {
			if(var_5_bool != 0)
				func_113(var_16_int, var_9_string);
			return 2;
		}
		if(var_12_int == -16) {
			if(var_5_bool != 0)
				func_113(var_16_int, var_10_string);
			return 2;
		}
		if(var_12_int == -4) {
			var_5_bool = true;
			func_66();
			return 2;
		}
		if(var_12_int == -5) {
			if(var_6_bool != 0)
				var_6_bool = false;
			else
				var_5_bool = false;
			if(var_12_int < 0)
				return 2;
			if((var_12_int & 65536) != 0) {
				var_14_object->get(var_0_int, 0);
				var_14_object->get(var_1_int, 1);
				return 2;
			}
			if((var_12_int & 16384) != 0)
				@SetBackground("selected");
			else
				@SetBackground("default");
			if((var_12_int & 32768) != 0) {
				var_2_object = null;
				@SetTooltip(-1, "");
				return 2;
			}
			if((var_12_int & 131072) != 0)
				var_3_bool = true;
			else
				var_3_bool = false;

			var_2_object = var_14_object;
			if(var_2_object != 0) {
				var_2_object->GetItemID(var_16_int); //@t
				@GetItemImage(var_16_int, var_4_string);
				@LoadImage(var_4_string);
				if(var_3_bool != 0)
					@SetTooltip(-1, "");
				else
					@SetTooltip(4, "", var_2_object);
				@SetTooltip(-1, "");

			}
			goto Label_328;

		Label_328:
			return 2;
		}
	
	}

}


// @pe
void func_345(string var_31_string, int var_32_int)
{
	if((var_32_int + 1) < 10)
		var_31_string = "r_slot0" + (var_32_int + 1);
	var_31_string = "r_slot" + (var_32_int + 1);
}


// @pe
void func_329(string var_18_string, int var_19_int)
{
	if((var_19_int + 1) < 10)
		var_18_string = "l_slot0" + (var_19_int + 1);
	var_18_string = "l_slot" + (var_19_int + 1);
}


void func_66(void)
{
	int var_34_int = 0;
	int var_35_int = 0;
	int var_36_int = 0;
	int var_37_int = 0;
	@ClientToScreen(var_34_int, var_35_int);
	@GetWindowSize(var_36_int, var_37_int);
	@SetMousePos((var_34_int + (var_36_int / 2)), (var_35_int + (var_37_int / 2)));
}


void func_113(bool var_5_bool, string var_49_string)
{
	int var_56_int; int var_57_int; int var_58_int; int var_59_int; int var_60_int; int var_61_int;
	if(var_49_string != "") {
		var_56_int = 0;
		var_57_int = 0;
		var_58_int = 0;
		var_59_int = 0;
		@ClientToScreen(var_56_int, var_57_int);
		@GetWindowSize(var_58_int, var_59_int);
		var_60_int = 0;
		var_61_int = 0;
		@GetCursorPos(var_60_int, var_61_int);
		bool var_64_bool = false;
		bool var_65_bool = false;
		bool var_66_bool = false;
		if(var_60_int > var_56_int) {
			if(var_61_int > var_57_int)
				var_66_bool = true;
		}
		if(var_66_bool != 0) {
			if(var_60_int < (var_56_int + var_58_int))
				var_65_bool = true;
		}
		if(var_65_bool != 0) {
			if(var_61_int < (var_57_int + var_59_int))
				var_64_bool = true;
		}
		if(var_64_bool != 0) {
			var_5_bool = false;
			if(var_49_string == "$parent")
				@SendMessageToParent(-4);
			else
				@SendMessage(-4, var_49_string);
			func_66();
		}
		goto Label_166;
	}
Label_166:
	
}


