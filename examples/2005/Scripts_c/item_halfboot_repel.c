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
		func_153();
		func_118();
		float var_9_float;
		@GetGameTime(var_9_float);
	
		for(;;) {
			@GetGameTime(var_10_float);
			var_11_float = var_10_float - var_9_float;
			var_12_int = var_11_float / 0.48;
			if(var_12_int > 0) {
				var_93_int = var_11_float % 0.48;
				var_9_float = var_10_float - var_93_int;
				var_94_int = GlobalVars[0];
				var_95_int = GlobalVars[1];
				var_96_int = GlobalVars[2];
				@GetItemPosByID(var_13_int, var_94_int, var_95_int, var_96_int);
				if(var_13_int != -1) {
					var_99_int = GlobalVars[2];
					@GetItem(var_14_object, var_13_int, var_99_int);
					var_14_object->HasProperty(var_15_bool, "durability");
					if(var_15_bool != 0) {
						var_14_object->GetProperty(var_16_int, "durability");
						int var_103_int;
						func_201(var_103_int, (var_16_int - var_12_int), 0, 100);
						var_103_int = var_16_int;
					} else {
					}
					var_14_object->SetProperty("durability", 100);
					var_111_int = GlobalVars[2];
					@SetItem(var_14_object, 1, var_13_int, var_111_int);
					int var_112_int;
					var_16_int = var_112_int;
					func_212(var_112_int);
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
		func_194("armor", var_19_int);
		int var_25_int;
		var_26_int = GlobalVars[4];
		var_25_int = -var_26_int;
		func_194("armor_fire", var_25_int);
		int var_28_int;
		var_29_int = GlobalVars[5];
		var_28_int = -var_29_int;
		func_194("armor_phys", var_28_int);
		int var_31_int;
		var_32_int = GlobalVars[6];
		var_31_int = -var_32_int;
		func_194("armor_bullet", var_31_int);
		int var_34_int;
		var_35_int = GlobalVars[7];
		var_34_int = -var_35_int;
		func_194("armor_disease", var_34_int);
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
		func_172(var_5_int, var_6_int, var_7_int);
	}

	// @pe
	void OnInventorySelChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int)
	{
		if(!var_4_bool) { //@nz
			int var_7_int; int var_8_int; int var_9_int;
			var_2_int = var_7_int;
			var_3_int = var_8_int;
			var_5_int = var_9_int;
			func_172(var_7_int, var_8_int, var_9_int);
		}
	}

}


	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float, cvector var_5_cvector, cvector var_6_cvector, object var_7_object, int var_8_int, float var_9_float, float var_10_float)
	{
	int var_19_int; int var_20_int; float var_21_float; int var_22_int; object var_23_object; bool var_24_bool; int var_25_int; int var_26_int;
	if(var_8_int == 5) {
	} else {
		var_29_int = GlobalVars[3];
		var_29_int = var_19_int;
		if(var_8_int == 4) {
			var_32_int = GlobalVars[4];
			var_19_int += var_32_int;
		} else if(var_8_int == 2) {
					var_108_int = GlobalVars[6];
					var_19_int += var_108_int;
		}
		for(;;) {
			@GetProperty("armor", var_20_int);
			if(!var_20_int) { //@nz
				var_21_float = 1;
			} else {
				float var_105_float;
				var_19_int = var_105_float;
				var_21_float = var_105_float / var_20_int;

			}
			var_21_float *= 0.75;
			if(!(var_21_float > 0)) goto Label_368;
			var_38_int = GlobalVars[0];
			var_39_int = GlobalVars[1];
			var_40_int = GlobalVars[2];
			@GetItemPosByID(var_22_int, var_38_int, var_39_int, var_40_int);
			if(!(var_22_int != -1)) goto Label_368;
			var_43_int = GlobalVars[2];
			@GetItem(var_23_object, var_22_int, var_43_int);
			var_23_object->HasProperty(var_24_bool, "durability");
			if(var_24_bool != 0) {
				int var_46_int = (var_21_float * var_10_float) * 100.0;
				var_46_int = var_25_int;
				var_23_object->GetProperty(var_26_int, "durability");
				int var_50_int;
				func_201(var_50_int, (var_26_int - var_25_int), 0, 100);
				var_50_int = var_26_int;
				var_23_object->SetProperty("durability", var_26_int);
				var_58_int = GlobalVars[2];
				@SetItem(var_23_object, 1, var_22_int, var_58_int);
				int var_59_int;
				var_26_int = var_59_int;
				func_212(var_59_int);
			}
			var_23_object = null;

		}

		var_109_int = GlobalVars[5];
		var_19_int += var_109_int;
	}
Label_368:
	
	}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float, cvector var_5_cvector, cvector var_6_cvector)
{
	object var_7_object;
	var_1_object = var_7_object;
	int var_8_int;
	var_2_int = var_8_int;
	float var_9_float;
	var_3_float = var_9_float;
	float var_10_float;
	var_4_float = var_10_float;
	func_287();
}


void func_194(string var_55_string, int var_56_int)
{
	int var_58_int;
	@GetProperty(var_55_string, var_58_int);
	@SetProperty(var_55_string, (var_58_int + var_56_int));
}


// @pe
void func_201(int var_103_int, int var_104_int, int var_105_int, int var_106_int)
{
	if(var_104_int < var_105_int) {
		var_105_int = var_103_int;
		return 0;
	}
	if(var_104_int > var_106_int) {
		var_106_int = var_103_int;
		return 0;
	}
	var_104_int = var_103_int;
}


// @pe
void func_172(int var_7_int, int var_8_int, int var_9_int)
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


void func_274(int var_44_int, string var_45_string, int var_46_int, int var_47_int, int var_48_int)
{
	int var_51_int = var_48_int * (var_47_int / 100.0);
	if(var_51_int != var_46_int) {
		string var_55_string;
		var_45_string = var_55_string;
		func_194(var_55_string, (var_51_int - var_46_int));
	}
	var_51_int = var_44_int;
}


// @pe
void func_212(int var_42_int)
{
	var_43_int = GlobalVars[3];
	int var_44_int; int var_46_int; int var_47_int;
	var_49_int = GlobalVars[3];
	var_49_int = var_46_int;
	var_42_int = var_47_int;
	func_274(var_44_int, "armor", var_46_int, var_47_int, 15);
	var_44_int = var_43_int;
	GlobalVars[3] = var_43_int;
	var_60_int = GlobalVars[4];
	int var_61_int; int var_63_int; int var_64_int;
	var_66_int = GlobalVars[4];
	var_66_int = var_63_int;
	var_42_int = var_64_int;
	func_274(var_61_int, "armor_fire", var_63_int, var_64_int, 0);
	var_61_int = var_60_int;
	GlobalVars[4] = var_60_int;
	var_67_int = GlobalVars[5];
	int var_68_int; int var_70_int; int var_71_int;
	var_73_int = GlobalVars[5];
	var_73_int = var_70_int;
	var_42_int = var_71_int;
	func_274(var_68_int, "armor_phys", var_70_int, var_71_int, 0);
	var_68_int = var_67_int;
	GlobalVars[5] = var_67_int;
	var_74_int = GlobalVars[6];
	int var_75_int; int var_77_int; int var_78_int;
	var_80_int = GlobalVars[6];
	var_80_int = var_77_int;
	var_42_int = var_78_int;
	func_274(var_75_int, "armor_bullet", var_77_int, var_78_int, 0);
	var_75_int = var_74_int;
	GlobalVars[6] = var_74_int;
	var_81_int = GlobalVars[7];
	int var_82_int; int var_84_int; int var_85_int;
	var_87_int = GlobalVars[7];
	var_87_int = var_84_int;
	var_42_int = var_85_int;
	func_274(var_82_int, "armor_disease", var_84_int, var_85_int, 10);
	var_82_int = var_81_int;
	GlobalVars[7] = var_81_int;
}


void func_118(void)
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
		func_212(var_42_int);
		var_28_object = null;
	}
	
}


void func_153(void)
{
}


