maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@GetWindowData(var_5_object);
		if(!var_5_object) //@nz
			@DestroyWindow();
		var_5_object->GetProperty("agony", var_6_float); //@t
		func_54(var_2_object, var_3_object, var_4_object, var_5_object, var_6_float);
		func_150(var_4_object, var_5_object, var_6_float);
		func_141();
		@ProcessEvents();
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int)
	{
		@DestroyWindow();
	}

	void event_200(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, string var_8_string, object var_9_object)
	{
		int var_10_int; int var_11_int;
		if(var_8_string == "ok") {
			func_336(var_11_int);
		} else if(var_8_string == "cancel") {
				func_358(var_11_int);
		}
	Label_242:
		for(;;) {

		}
	
		int var_147_int; int var_148_int; string var_149_string;
		var_7_int = var_148_int;
		var_8_string = var_149_string;
		func_451(var_148_int, var_149_string);
		var_147_int = var_11_int;
		if(!(var_11_int != -1)) goto Label_242;
		if(var_7_int == 0) {
			int var_162_int;
			func_377(var_9_object, var_10_int, var_162_int, var_162_int);
		} else if(var_7_int == 1) {
			int var_176_int;
			func_404(var_10_int, var_176_int, var_176_int);
		}
	}

}


void func_32(object var_0_object, bool var_37_bool, int var_38_int)
{
	int var_42_int; object var_44_object;
	var_0_object->size(var_42_int); //@t
	int var_43_int = 0;
	
	while(var_43_int < var_42_int) {
		var_0_object->get(var_44_object, var_43_int); //@t
		int var_46_int; object var_47_object;
		var_44_object = var_47_object;
		func_446(var_46_int, var_47_object);
		if(var_46_int == var_38_int)
			var_37_bool = true;
		var_44_object = null;
		var_43_int += 1;
	}
	
	var_37_bool = false;
}


void func_451(int var_147_int, string var_149_string)
{
	int var_151_int;
	
	while(0 < 6) {
		string var_154_string; int var_155_int;
		var_151_int = var_155_int;
		func_430(var_154_string, var_155_int);
		if(var_149_string == var_154_string)
			var_151_int = var_147_int;
		var_151_int += 1;
	}
	
	var_147_int = -1;
}


void func_358(object var_3_object)
{
	int var_100_int;
	var_3_object->size(var_100_int); //@t
	int var_101_int = 0;
	
	while(var_101_int < var_100_int) {
		var_3_object->set(var_101_int, 0); //@t
		var_101_int += 1;
	}
	
	int var_99_int;
	func_150(var_99_int, var_100_int, var_101_int);
	func_141();
}


void func_141(void)
{
	var_90_int = 100;
	float var_91_float;
	func_120(var_4_object, var_5_object, var_6_float, var_90_int, var_91_float);
	@SendMessage((var_90_int * var_91_float), "level");
}


// @pe
void func_430(string var_67_string, int var_68_int)
{
	if((var_68_int + 1) < 10)
		var_67_string = "slot0" + (var_68_int + 1);
	var_67_string = "slot" + (var_68_int + 1);
}


void func_336(object var_5_object)
{
	float var_14_float; float var_15_float;
	float var_16_float;
	func_120(var_10_int, var_11_int, var_14_float, var_15_float, var_16_float);
	var_16_float = var_15_float;
	if(var_15_float < 0.001)
		var_15_float = 0;
	@Trace("Do " + var_15_float);
	var_5_object->SetProperty("agony", var_15_float); //@t
	func_305(var_14_float, var_15_float);
	@DestroyWindow();
}


void func_305(object var_0_object, object var_3_object)
{
	int var_42_int; int var_44_int; object var_45_object; int var_46_int;
	var_3_object->size(var_42_int); //@t
	int var_43_int = 0;
	
	while(var_43_int < var_42_int) {
		var_3_object->get(var_44_int, var_43_int); //@t
		if(var_44_int != 0) {
			var_0_object->get(var_45_object, var_43_int); //@t
			var_46_int = 0;

			while(var_46_int < var_44_int) {
				int var_50_int;
				int var_51_int; object var_52_object;
				var_45_object = var_52_object;
				func_446(var_51_int, var_52_object);
				var_51_int = var_50_int;
				func_243(var_46_int, var_50_int);
				var_46_int += 1;
			}

			var_45_object = null;
		}
		var_43_int += 1;
	}
	
}


void func_243(object var_2_object, int var_50_int)
{
	int var_63_int; float var_65_float; object var_67_object; int var_68_int; bool var_69_bool; float var_70_float;
	var_2_object->GetItemCount(var_63_int, 2); //@t
	int var_64_int = -1;
	int var_66_int = 0;
	
	for(;;) {
		if(var_66_int < var_63_int) {
			var_2_object->GetItem(var_67_object, var_66_int, 2); //@t
			int var_74_int; object var_75_object;
			var_67_object = var_75_object;
			func_446(var_74_int, var_75_object);
			var_74_int = var_68_int;
			if(var_68_int == var_50_int) {
				var_67_object->HasProperty(var_69_bool, "disease");
				if(!var_69_bool) { //@nz
					bool var_79_bool = true;
					var_81_bool = var_64_int == -1;
					if(var_81_bool != 1) {
						var_83_bool = var_65_float > 0;
						if(var_83_bool != 1)
							var_79_bool = false;
					}
					if(var_79_bool != 0) {
						var_66_int = var_64_int;
						var_65_float = 0;
					}
				} else {
				var_67_object->GetProperty(var_70_float, "disease");
				bool var_86_bool = true;
				var_88_bool = var_64_int == -1;
				if(var_88_bool != 1) {
					var_89_bool = var_70_float < var_65_float;
					if(var_89_bool != 1)
						var_86_bool = false;
				}
				if(var_86_bool == 0) goto Label_293;
				var_66_int = var_64_int;
				var_70_float = var_65_float;
		}
			if(var_64_int != -1)
				var_2_object->RemoveItem(var_64_int, 1, 2); //@t
			}
		}
	Label_293:
		var_67_object = null;
		var_66_int += 1;
	}
	
}


void func_404(object var_0_object, object var_3_object, int var_176_int)
{
	int var_180_int;
	var_3_object->size(var_180_int); //@t
	if(var_176_int >= var_180_int)
		return 6;
	object var_181_object;
	var_0_object->get(var_181_object, var_176_int); //@t
	int var_182_int;
	var_3_object->get(var_182_int, var_176_int); //@t
	if(var_182_int == 0)
		return 6;
	var_182_int -= 1;
	var_3_object->set(var_176_int, var_182_int); //@t
	func_150(var_180_int, var_181_object, var_182_int);
	func_141();
}
EMIT "Stack[-2] = 0";


void func_150(object var_0_object, object var_3_object, object var_4_object)
{
	int var_57_int; object var_59_object; int var_60_int; int var_61_int;
	var_0_object->size(var_57_int); //@t
	int var_58_int = 0;
	
	for(;;) {
		if(var_58_int < 6) {
			if(var_58_int < var_57_int) {
				var_0_object->get(var_59_object, var_58_int); //@t
				var_3_object->get(var_60_int, var_58_int); //@t
				var_4_object->get(var_61_int, var_58_int); //@t
				if(var_60_int != 0) {
					string var_67_string; int var_68_int;
					var_58_int = var_68_int;
					func_430(var_67_string, var_68_int);
					@SendMessage(16384, var_67_string, var_59_object);
				} else {
				string var_85_string; int var_86_int;
				var_58_int = var_86_int;
				func_430(var_85_string, var_86_int);
				@SendMessage(0, var_85_string, var_59_object);
			}
			string var_88_string; int var_89_int;
			var_58_int = var_89_int;
			func_430(var_88_string, var_89_int);
			@SendMessage(32768, var_88_string);
		}
		}
		string var_81_string; int var_82_int;
		var_58_int = var_82_int;
		func_430(var_81_string, var_82_int);
		@SendMessage((var_60_int | 65536), var_81_string);
		var_59_object = null;
		goto Label_199;

	Label_199:
		var_58_int += 1;
	}
	
}


void func_54(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	object var_20_object; int var_21_int; bool var_22_bool; float var_23_float; int var_24_int;
	@CreateObjectVector(var_0_object);
	@CreateFloatVector(var_1_object);
	@CreateIntVector(var_3_object);
	@CreateIntVector(var_4_object);
	@FindActor(var_2_object, "player");
	if(!var_2_object) { //@nz
		@DestroyWindow();
		return 14;
	}
	int var_18_int;
	var_2_object->GetItemCount(var_18_int, 2); //@t
	int var_19_int = 0;
	
	for(;;) {
		if(var_19_int < var_18_int) {
			var_2_object->GetItem(var_20_object, var_19_int, 2); //@t
			int var_30_int; object var_31_object;
			func_446(var_30_int, var_31_object);
			var_30_int = var_21_int;
			@HasInvItemProperty(var_22_bool, var_21_int, "Agony");
			if(!var_22_bool) { //@nz
			} else {
			bool var_37_bool; int var_38_int;
			var_21_int = var_38_int;
			func_32(var_24_int, var_37_bool, var_38_int);
			if(var_37_bool != 0) {
				goto Label_112;
			}
			@GetInvItemProperty(var_23_float, var_21_int, "Agony");
			var_2_object->GetItemCountOfType(var_24_int, var_21_int); //@t
			var_0_object->add(var_31_object); //@t
			var_1_object->add(var_23_float); //@t
			var_4_object->add(var_24_int); //@t
			var_3_object->add(0); //@t
			var_20_object = null;
		}
		return 14;
		}
	Label_112:
		var_19_int += 1;
	}
	
}


void func_120(object var_0_object, object var_1_object, object var_3_object, float var_6_float, float var_91_float)
{
	float var_98_float; object var_101_object; float var_102_float; int var_103_int;
	var_98_float = var_6_float;
	int var_99_int;
	var_0_object->size(var_99_int); //@t
	int var_100_int = 0;
	
	while(var_100_int < var_99_int) {
		var_0_object->get(var_101_object, var_100_int); //@t
		var_1_object->get(var_102_float, var_100_int); //@t
		var_3_object->get(var_103_int, var_100_int); //@t
		var_98_float -= (var_103_int * var_102_float);
		var_101_object = null;
		var_100_int += 1;
	}
	
	var_98_float = var_91_float;
}


void func_377(object var_0_object, object var_3_object, object var_4_object, int var_162_int)
{
	int var_167_int;
	var_3_object->size(var_167_int); //@t
	if(var_162_int >= var_167_int)
		return 8;
	object var_168_object;
	var_0_object->get(var_168_object, var_162_int); //@t
	int var_169_int;
	var_4_object->get(var_169_int, var_162_int); //@t
	int var_170_int;
	var_3_object->get(var_170_int, var_162_int); //@t
	if(var_169_int <= var_170_int)
		return 8;
	var_170_int += 1;
	var_3_object->set(var_162_int, var_170_int); //@t
	func_150(var_168_object, var_169_int, var_170_int);
	func_141();
}
EMIT "Stack[-3] = 0";


void func_446(int var_30_int, object var_31_object)
{
	int var_33_int;
	var_31_object->GetItemID(var_33_int);
	var_33_int = var_30_int;
}


