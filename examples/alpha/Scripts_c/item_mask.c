// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container,3:int:,4:int:,5:int:,6:int:,7:int:,8:int:

maintask task_0
{
	void init(bool var_0_bool)
	{
		float var_10_float; float var_11_float; int var_12_int; int var_13_int; object var_14_object; bool var_15_bool; int var_16_int;
		var_17_int = GlobalVars[3];
		GlobalVars[3] = 0;
		var_18_int = GlobalVars[4];
		GlobalVars[4] = 0;
		var_19_int = GlobalVars[5];
		GlobalVars[5] = 0;
		var_20_int = GlobalVars[6];
		GlobalVars[6] = 0;
		var_21_int = GlobalVars[7];
		GlobalVars[7] = 0;
		var_22_int = GlobalVars[8];
		GlobalVars[8] = 0;
		func_159();
		func_124();
		float var_9_float;
		@GetGameTime(var_9_float);
	
		for(;;) {
			@GetGameTime(var_10_float);
			var_11_float = var_10_float - var_9_float;
			var_12_int = var_11_float / 0.72;
			if(var_12_int > 0) {
				var_100_int = var_11_float % 0.72;
				var_9_float = var_10_float - var_100_int;
				var_101_int = GlobalVars[0];
				var_102_int = GlobalVars[1];
				var_103_int = GlobalVars[2];
				@GetItemPosByID(var_13_int, var_101_int, var_102_int, var_103_int);
				if(var_13_int != -1) {
					var_106_int = GlobalVars[2];
					@GetItem(var_14_object, var_13_int, var_106_int);
					var_14_object->HasProperty(var_15_bool, "durability");
					if(var_15_bool != 0) {
						var_14_object->GetProperty(var_16_int, "durability");
						int var_110_int;
						func_207(var_110_int, (var_16_int - var_12_int), 0, 100);
						var_110_int = var_16_int;
					} else {
					}
					var_14_object->SetProperty("durability", 100);
					var_118_int = GlobalVars[2];
					@SetItem(var_14_object, 1, var_13_int, var_118_int);
					int var_119_int;
					var_16_int = var_119_int;
					func_218(var_119_int);
					var_14_object = null;
				}
			}
			@sync();
			if(false != 0)
				break;
		}
	
	}

		void OnDispose(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, int var_7_int, int var_8_int, int var_9_int)
		{
		var_20_int = GlobalVars[3];
			int var_19_int = -var_20_int;
		func_200("armor", var_19_int);
		int var_25_int;
		var_26_int = GlobalVars[4];
		var_25_int = -var_26_int;
		func_200("armor_fire", var_25_int);
		int var_28_int;
		var_29_int = GlobalVars[5];
		var_28_int = -var_29_int;
		func_200("armor_phys", var_28_int);
		int var_31_int;
		var_32_int = GlobalVars[6];
		var_31_int = -var_32_int;
		func_200("armor_disease", var_31_int);
		int var_34_int;
		var_35_int = GlobalVars[7];
		var_34_int = -var_35_int;
		func_200("visibility", var_34_int);
		int var_37_int;
		var_38_int = GlobalVars[8];
		var_37_int = -var_38_int;
		func_200("audibility", var_37_int);
		var_0_bool = true;
		}

	// @pe
	void OnInventoryRemoveItem(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, int var_4_int)
	{
		int var_5_int;
		var_2_int = var_5_int;
		int var_6_int;
		var_3_int = var_6_int;
		int var_7_int;
		var_4_int = var_7_int;
		func_178(var_5_int, var_6_int, var_7_int);
	}

	// @pe
	void OnInventorySelChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int)
	{
		if(!var_4_bool) { //@nz
			int var_7_int; int var_8_int; int var_9_int;
			var_2_int = var_7_int;
			var_3_int = var_8_int;
			var_5_int = var_9_int;
			func_178(var_7_int, var_8_int, var_9_int);
		}
	}

}


void OnHit(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float)
{
	int var_13_int; int var_14_int; float var_15_float; int var_16_int; object var_17_object; bool var_18_bool; int var_19_int; int var_20_int;
	if(var_2_int == 5) {
	} else {
		var_23_int = GlobalVars[3];
		var_23_int = var_13_int;
		if(var_2_int == 4) {
			var_26_int = GlobalVars[4];
			var_13_int += var_26_int;
		} else {
				var_107_int = GlobalVars[5];
				var_13_int += var_107_int;
		}
		@GetProperty("armor", var_14_int);
		if(!var_14_int) { //@nz
			var_15_float = 1;
		} else {
			float var_106_float;
			var_13_int = var_106_float;
			var_15_float = var_106_float / var_14_int;

		}
		var_15_float *= 0.75;
		if(!(var_15_float > 0)) goto Label_380;
		var_32_int = GlobalVars[0];
		var_33_int = GlobalVars[1];
		var_34_int = GlobalVars[2];
		@GetItemPosByID(var_16_int, var_32_int, var_33_int, var_34_int);
		if(!(var_16_int != -1)) goto Label_380;
		var_37_int = GlobalVars[2];
		@GetItem(var_17_object, var_16_int, var_37_int);
		var_17_object->HasProperty(var_18_bool, "durability");
		if(var_18_bool != 0) {
			int var_40_int = (var_15_float * var_4_float) * 100.0;
			var_40_int = var_19_int;
			var_17_object->GetProperty(var_20_int, "durability");
			int var_44_int;
			func_207(var_44_int, (var_20_int - var_19_int), 0, 100);
			var_44_int = var_20_int;
			var_17_object->SetProperty("durability", var_20_int);
			var_52_int = GlobalVars[2];
			@SetItem(var_17_object, 1, var_16_int, var_52_int);
			int var_53_int;
			var_20_int = var_53_int;
			func_218(var_53_int);
		}
		var_17_object = null;
	}
Label_380:
	
}


void func_292(int var_44_int, string var_45_string, int var_46_int, int var_47_int, int var_48_int)
{
	int var_51_int = var_48_int * (var_47_int / 100.0);
	if(var_51_int != var_46_int) {
		string var_55_string;
		var_45_string = var_55_string;
		func_200(var_55_string, (var_51_int - var_46_int));
	}
	var_51_int = var_44_int;
}


void func_200(string var_55_string, int var_56_int)
{
	int var_58_int;
	@GetProperty(var_55_string, var_58_int);
	@SetProperty(var_55_string, (var_58_int + var_56_int));
}


// @pe
void func_207(int var_110_int, int var_111_int, int var_112_int, int var_113_int)
{
	if(var_111_int < var_112_int) {
		var_112_int = var_110_int;
		return 0;
	}
	if(var_111_int > var_113_int) {
		var_113_int = var_110_int;
		return 0;
	}
	var_111_int = var_110_int;
}


// @pe
void func_178(int var_7_int, int var_8_int, int var_9_int)
{
	bool var_10_bool = false;
	bool var_11_bool = false;
	var_12_int = GlobalVars[0];
	if(var_7_int == var_12_int) {
		var_14_int = GlobalVars[1];
		if(var_8_int == var_14_int)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		var_16_int = GlobalVars[2];
		if(var_16_int == var_9_int)
			var_10_bool = true;
	}
	if(var_10_bool != 0)
		func_86();
}


// @pe
void func_218(int var_42_int)
{
	var_43_int = GlobalVars[3];
	int var_44_int; int var_46_int; int var_47_int;
	var_49_int = GlobalVars[3];
	var_49_int = var_46_int;
	var_42_int = var_47_int;
	func_292(var_44_int, "armor", var_46_int, var_47_int, 0);
	var_44_int = var_43_int;
	GlobalVars[3] = var_43_int;
	var_60_int = GlobalVars[4];
	int var_61_int; int var_63_int; int var_64_int;
	var_66_int = GlobalVars[4];
	var_66_int = var_63_int;
	var_42_int = var_64_int;
	func_292(var_61_int, "armor_fire", var_63_int, var_64_int, 0);
	var_61_int = var_60_int;
	GlobalVars[4] = var_60_int;
	var_67_int = GlobalVars[5];
	int var_68_int; int var_70_int; int var_71_int;
	var_73_int = GlobalVars[5];
	var_73_int = var_70_int;
	var_42_int = var_71_int;
	func_292(var_68_int, "armor_phys", var_70_int, var_71_int, 0);
	var_68_int = var_67_int;
	GlobalVars[5] = var_67_int;
	var_74_int = GlobalVars[6];
	int var_75_int; int var_77_int; int var_78_int;
	var_80_int = GlobalVars[6];
	var_80_int = var_77_int;
	var_42_int = var_78_int;
	func_292(var_75_int, "armor_disease", var_77_int, var_78_int, 50);
	var_75_int = var_74_int;
	GlobalVars[6] = var_74_int;
	var_81_int = GlobalVars[7];
	int var_82_int; int var_84_int; int var_85_int;
	var_87_int = GlobalVars[7];
	var_87_int = var_84_int;
	var_42_int = var_85_int;
	func_292(var_82_int, "visibility", var_84_int, var_85_int, 0);
	var_82_int = var_81_int;
	GlobalVars[7] = var_81_int;
	var_88_int = GlobalVars[8];
	int var_89_int; int var_91_int; int var_92_int;
	var_94_int = GlobalVars[8];
	var_94_int = var_91_int;
	var_42_int = var_92_int;
	func_292(var_89_int, "audibility", var_91_int, var_92_int, 0);
	var_89_int = var_88_int;
	GlobalVars[8] = var_88_int;
}


void func_124(void)
{
	object var_28_object; bool var_29_bool; int var_30_int;
	var_31_int = GlobalVars[0];
	var_32_int = GlobalVars[1];
	var_33_int = GlobalVars[2];
	int var_27_int;
	@GetItemPosByID(var_27_int, var_31_int, var_32_int, var_33_int);
	if(var_27_int != -1) {
		var_36_int = GlobalVars[2];
		@GetItem(var_28_object, var_27_int, var_36_int);
		var_28_object->HasProperty(var_29_bool, "durability");
		if(!var_29_bool) { //@nz
			var_30_int = 100;
			var_28_object->SetProperty("durability", var_30_int);
			var_41_int = GlobalVars[2];
			@SetItem(var_28_object, 1, var_27_int, var_41_int);
		} else {
			var_28_object->GetProperty(var_30_int, "durability");
		}
		int var_42_int;
		var_30_int = var_42_int;
		func_218(var_42_int);
		var_28_object = null;
	}
	
}


void func_159(void)
{
}


