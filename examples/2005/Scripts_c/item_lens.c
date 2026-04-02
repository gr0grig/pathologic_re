// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container

maintask task_0
{
	void init(void)
	{
		int var_2_int; int var_3_int;
		@GetProperty("visir", var_2_int);
		bool var_5_bool = false;
		if(var_2_int != 0) {
			if(var_2_int < 4)
				var_5_bool = true;
		}
		if(var_5_bool != 0) {
			@SetProperty("visir", (var_2_int + 1));
			var_12_int = GlobalVars[0];
			var_13_int = GlobalVars[1];
			var_14_int = GlobalVars[2];
			@GetItemPosByID(var_3_int, var_12_int, var_13_int, var_14_int);
			var_16_int = GlobalVars[2];
			@RemoveItem(var_3_int, 1, var_16_int);
		}
	}

}


