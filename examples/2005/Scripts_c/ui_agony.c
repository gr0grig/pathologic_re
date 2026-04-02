maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int)
	{
		@SetCursor("default");
		@ShowCursor();
		@CaptureKeyboard();
		@SetOwnerDraw(false);
		@GetWindowData(var_5_object);
		if(!var_5_object) //@nz
			@DestroyWindow();
		var_5_object->GetProperty("agony", var_6_float); //@t
		func_57(var_3_object, var_4_object, var_5_object, var_6_float, var_7_int);
		func_166(var_6_float, var_7_int);
		func_195(var_4_object, var_5_object, var_6_float, var_7_int);
		func_157();
		@ProcessEvents();
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int)
	{
		@DestroyWindow();
	}

	// @pe
	void OnPlayerHolsterWeapon(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, int var_9_int, float var_10_float)
	{
		if((var_7_int + var_10_float) < 0)
			var_7_int = 0;
		func_166(var_9_int, var_10_float);
		func_195(var_7_int, var_8_int, var_9_int, var_10_float);
	}

	void event_200(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, float var_6_float, int var_7_int, int var_8_int, string var_9_string, object var_10_object)
	{
		int var_11_int; int var_12_int; int var_13_int; int var_14_int;
		if(var_9_string == "ok") {
			func_405(var_14_int);
		} else if(var_9_string == "cancel") {
				func_427(var_14_int);
		}
	Label_311:
		for(;;) {
			return 4;

		}
	
		if(var_9_string == "scrollbar") {
			var_0_object->size(var_13_int); //@t
			if((((0.01 * (var_13_int - 4)) * var_8_int) + 0.5) < 0)
				var_7_int = 0;
			func_166(var_13_int, var_14_int);
			func_195(var_11_int, var_12_int, var_13_int, var_14_int);
			goto Label_311;
		}
		int var_180_int; int var_181_int; string var_182_string;
		var_8_int = var_181_int;
		var_9_string = var_182_string;
		func_520(var_181_int, var_182_string);
		var_180_int = var_14_int;
		if(!(var_14_int != -1)) goto Label_311;
		if(var_8_int == 0) {
			func_446(var_12_int, var_13_int, var_14_int, (var_14_int + var_7_int));
		} else if(var_8_int == 1) {
			func_473(var_13_int, var_14_int, (var_14_int + var_7_int));
		}
	}

}


void func_515(int var_31_int, object var_32_object)
{
	int var_34_int;
	var_32_object->GetItemID(var_34_int);
	var_34_int = var_31_int;
}


void func_35(object var_0_object, bool var_38_bool, int var_39_int)
{
	int var_43_int; object var_45_object;
	var_0_object->size(var_43_int); //@t
	int var_44_int = 0;
	
	while(var_44_int < var_43_int) {
		var_0_object->get(var_45_object, var_44_int); //@t
		int var_47_int; object var_48_object;
		var_45_object = var_48_object;
		func_515(var_47_int, var_48_object);
		if(var_47_int == var_39_int)
			var_38_bool = true;
		var_45_object = null;
		var_44_int += 1;
	}
	
	var_38_bool = false;
}


void func_195(object var_0_object, object var_3_object, object var_4_object, int var_7_int)
{
	int var_77_int; object var_79_object; int var_80_int; int var_81_int;
	var_0_object->size(var_77_int); //@t
	int var_78_int = var_7_int;
	
	for(;;) {
		if(var_78_int < (4 + var_7_int)) {
			if(var_78_int < var_77_int) {
				var_0_object->get(var_79_object, var_78_int); //@t
				var_3_object->get(var_80_int, var_78_int); //@t
				var_4_object->get(var_81_int, var_78_int); //@t
				if(var_80_int != 0) {
					string var_88_string;
					func_499(var_88_string, (var_78_int - var_7_int));
					@SendMessage(16384, var_88_string, var_79_object);
				} else {
				string var_106_string;
				func_499(var_106_string, (var_78_int - var_7_int));
				@SendMessage(0, var_106_string, var_79_object);
			}
			string var_109_string;
			func_499(var_109_string, (var_78_int - var_7_int));
			@SendMessage(32768, var_109_string);
		}
		}
		string var_102_string;
		func_499(var_102_string, (var_78_int - var_7_int));
		@SendMessage((var_80_int | 65536), var_102_string);
		var_79_object = null;
		goto Label_245;

	Label_245:
		var_78_int += 1;
	}
	
}


void func_166(object var_0_object, int var_7_int)
{
	int var_55_int;
	var_0_object->size(var_55_int); //@t
	if(var_55_int <= 4) {
		@SendMessage(16384, "scrollbar");
		var_7_int = 0;
	} else if((var_7_int + 4) > var_55_int) {
		@SendMessage((((var_7_int - ((var_7_int + 4) - var_55_int)) * 100) / (var_55_int - 4)), "scrollbar");
	}
	
}


void func_136(object var_0_object, object var_1_object, object var_3_object, float var_6_float, float var_112_float)
{
	float var_119_float; object var_122_object; float var_123_float; int var_124_int;
	var_119_float = var_6_float;
	int var_120_int;
	var_0_object->size(var_120_int); //@t
	int var_121_int = 0;
	
	while(var_121_int < var_120_int) {
		var_0_object->get(var_122_object, var_121_int); //@t
		var_1_object->get(var_123_float, var_121_int); //@t
		var_3_object->get(var_124_int, var_121_int); //@t
		var_119_float -= (var_124_int * var_123_float);
		var_122_object = null;
		var_121_int += 1;
	}
	
	var_119_float = var_112_float;
}


void func_520(int var_180_int, string var_182_string)
{
	int var_184_int;
	
	while(0 < 4) {
		string var_187_string; int var_188_int;
		var_184_int = var_188_int;
		func_499(var_187_string, var_188_int);
		if(var_182_string == var_187_string)
			var_184_int = var_180_int;
		var_184_int += 1;
	}
	
	var_180_int = -1;
}


void func_427(object var_3_object)
{
	int var_103_int;
	var_3_object->size(var_103_int); //@t
	int var_104_int = 0;
	
	while(var_104_int < var_103_int) {
		var_3_object->set(var_104_int, 0); //@t
		var_104_int += 1;
	}
	
	int var_101_int;
	int var_102_int;
	func_195(var_101_int, var_102_int, var_103_int, var_104_int);
	func_157();
}


// @pe
void func_499(string var_88_string, int var_89_int)
{
	if((var_89_int + 1) < 10)
		var_88_string = "slot0" + (var_89_int + 1);
	var_88_string = "slot" + (var_89_int + 1);
}


void func_405(object var_5_object)
{
	float var_17_float; float var_18_float;
	float var_19_float;
	func_136(var_13_int, var_14_int, var_17_float, var_18_float, var_19_float);
	var_19_float = var_18_float;
	if(var_18_float < 0.001)
		var_18_float = 0;
	@Trace("Do " + var_18_float);
	var_5_object->SetProperty("agony", var_18_float); //@t
	func_374(var_17_float, var_18_float);
	@DestroyWindow();
}


void func_374(object var_0_object, object var_3_object)
{
	int var_45_int; int var_47_int; object var_48_object; int var_49_int;
	var_3_object->size(var_45_int); //@t
	int var_46_int = 0;
	
	while(var_46_int < var_45_int) {
		var_3_object->get(var_47_int, var_46_int); //@t
		if(var_47_int != 0) {
			var_0_object->get(var_48_object, var_46_int); //@t
			var_49_int = 0;

			while(var_49_int < var_47_int) {
				int var_53_int;
				int var_54_int; object var_55_object;
				var_48_object = var_55_object;
				func_515(var_54_int, var_55_object);
				var_54_int = var_53_int;
				func_312(var_49_int, var_53_int);
				var_49_int += 1;
			}

			var_48_object = null;
		}
		var_46_int += 1;
	}
	
}


void func_312(object var_2_object, int var_53_int)
{
	int var_66_int; float var_68_float; object var_70_object; int var_71_int; bool var_72_bool; float var_73_float;
	var_2_object->GetItemCount(var_66_int, 2); //@t
	int var_67_int = -1;
	int var_69_int = 0;
	
	for(;;) {
		if(var_69_int < var_66_int) {
			var_2_object->GetItem(var_70_object, var_69_int, 2); //@t
			int var_77_int; object var_78_object;
			var_70_object = var_78_object;
			func_515(var_77_int, var_78_object);
			var_77_int = var_71_int;
			if(var_71_int == var_53_int) {
				var_70_object->HasProperty(var_72_bool, "disease");
				if(!var_72_bool) { //@nz
					bool var_82_bool = true;
					var_84_bool = var_67_int == -1;
					if(var_84_bool != 1) {
						var_86_bool = var_68_float > 0;
						if(var_86_bool != 1)
							var_82_bool = false;
					}
					if(var_82_bool != 0) {
						var_69_int = var_67_int;
						var_68_float = 0;
					}
				} else {
				var_70_object->GetProperty(var_73_float, "disease");
				bool var_89_bool = true;
				var_91_bool = var_67_int == -1;
				if(var_91_bool != 1) {
					var_92_bool = var_73_float < var_68_float;
					if(var_92_bool != 1)
						var_89_bool = false;
				}
				if(var_89_bool == 0) goto Label_362;
				var_69_int = var_67_int;
				var_73_float = var_68_float;
		}
			if(var_67_int != -1)
				var_2_object->RemoveItem(var_67_int, 1, 2); //@t
			}
		}
	Label_362:
		var_70_object = null;
		var_69_int += 1;
	}
	
}


void func_473(object var_0_object, object var_3_object, int var_209_int)
{
	int var_213_int;
	var_3_object->size(var_213_int); //@t
	if(var_209_int >= var_213_int)
		return 6;
	object var_214_object;
	var_0_object->get(var_214_object, var_209_int); //@t
	int var_215_int;
	var_3_object->get(var_215_int, var_209_int); //@t
	if(var_215_int == 0)
		return 6;
	var_215_int -= 1;
	var_3_object->set(var_209_int, var_215_int); //@t
	int var_212_int;
	func_195(var_212_int, var_213_int, var_214_object, var_215_int);
	func_157();
}
EMIT "Stack[-2] = 0";


void func_157(void)
{
	var_111_int = 100;
	float var_112_float;
	func_136(var_5_object, var_6_float, var_7_int, var_111_int, var_112_float);
	@SendMessage((var_111_int * var_112_float), "level");
}


void func_446(object var_0_object, object var_3_object, object var_4_object, int var_195_int)
{
	int var_200_int;
	var_3_object->size(var_200_int); //@t
	if(var_195_int >= var_200_int)
		return 8;
	object var_201_object;
	var_0_object->get(var_201_object, var_195_int); //@t
	int var_202_int;
	var_4_object->get(var_202_int, var_195_int); //@t
	int var_203_int;
	var_3_object->get(var_203_int, var_195_int); //@t
	if(var_202_int <= var_203_int)
		return 8;
	var_203_int += 1;
	var_3_object->set(var_195_int, var_203_int); //@t
	func_195(var_200_int, var_201_object, var_202_int, var_203_int);
	func_157();
}
EMIT "Stack[-3] = 0";


void func_57(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	object var_21_object; int var_22_int; bool var_23_bool; float var_24_float; int var_25_int;
	@CreateObjectVector(var_0_object);
	@CreateFloatVector(var_1_object);
	@CreateIntVector(var_3_object);
	@CreateIntVector(var_4_object);
	@FindActor(var_2_object, "player");
	if(!var_2_object) { //@nz
		@DestroyWindow();
		return 14;
	}
	int var_19_int;
	var_2_object->GetItemCount(var_19_int, 2); //@t
	int var_20_int = 0;
	
	for(;;) {
		if(var_20_int < var_19_int) {
			var_2_object->GetItem(var_21_object, var_20_int, 2); //@t
			int var_31_int; object var_32_object;
			func_515(var_31_int, var_32_object);
			var_31_int = var_22_int;
			@HasInvItemProperty(var_23_bool, var_22_int, "Agony");
			if(!var_23_bool) { //@nz
			} else {
			bool var_38_bool; int var_39_int;
			var_22_int = var_39_int;
			func_35(var_25_int, var_38_bool, var_39_int);
			if(var_38_bool != 0) {
				goto Label_115;
			}
			@GetInvItemProperty(var_24_float, var_22_int, "Agony");
			var_2_object->GetItemCountOfType(var_25_int, var_22_int); //@t
			var_0_object->add(var_32_object); //@t
			var_1_object->add(var_24_float); //@t
			var_4_object->add(var_25_int); //@t
			var_3_object->add(0); //@t
			var_21_object = null;
		}
		return 14;
		}
	Label_115:
		var_20_int += 1;
	}
	
}


