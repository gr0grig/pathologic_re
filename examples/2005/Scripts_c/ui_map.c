// @GLOBALS: 0:float:,1:float:

maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string)
	{
		string var_40_string; int var_41_int; int var_42_int; int var_43_int; int var_44_int;
		@GetMap(var_22_object);
		if(var_22_object == null)
			@Trace("Map not found");
		@CreatePolyImage(var_24_object, 16, 16, "ui/ui_player.png");
		var_22_object->GetSize(var_1_int, var_2_int); //@t
		float var_36_float;
		float var_37_float;
		var_22_object->GetMapParams(var_36_float, var_37_float, var_14_float); //@t
		var_22_object->ConvertToMapCoordinates(var_36_float, var_37_float); //@t
		var_12_float = var_36_float;
		var_13_float = var_37_float;
		var_16_bool = true;
		@GetWindowSize(var_3_int, var_4_int);
		var_50_float = GlobalVars[0];
		GlobalVars[0] = (var_3_int / 2048.0);
		var_52_float = GlobalVars[1];
		var_53_float = GlobalVars[0];
		var_53_float = var_52_float;
		GlobalVars[1] = var_52_float;
		var_19_bool = false;
		if(var_14_float < 0) {
			var_18_bool = true;
			func_153(var_43_int, var_44_int);
			var_14_float = 2;
		}
		int var_38_int;
		@GetVariable("map_chertez_force", var_38_int);
		if(var_38_int != 0) {
			var_18_bool = true;
			@SetVariable("map_chertez_force", 0);
		}
		var_0_int = 0;
		var_5_int = -1;
		var_6_int = -1;
		var_15_bool = false;
		var_23_object = null;
		var_11_int = -1;
		@CreateObjectVector(var_20_object);
		object var_39_object;
		@GetMainOutdoorScene(var_39_object);
		@GetActiveScene(var_21_object);
		if(var_39_object != var_21_object) {
			var_17_bool = true;
			var_21_object->GetName(var_40_string); //@t
			cvector var_98_cvector;
			func_888(var_98_cvector, ("pt_gmap_" + var_40_string));
			var_25_cvector = var_98_cvector;
			var_113_float = GetByIndex(var_25_cvector, 0);
			var_113_float = var_41_int;
			var_114_float = GetByIndex(var_25_cvector, 2);
			var_114_float = var_42_int;
			var_22_object->ConvertToMapCoordinates(var_41_int, var_42_int); //@t
			var_115_float = GetByIndex(var_25_cvector, 0);
			var_41_int = var_115_float;
			SetByIndex(var_25_cvector, 0) = var_115_float;
			var_116_float = GetByIndex(var_25_cvector, 2);
			var_42_int = var_116_float;
			SetByIndex(var_25_cvector, 2) = var_116_float;
			@Trace("indoor map: pt_gmap_" + var_40_string);
		} else {
			@Trace("outdoor map");
			var_17_bool = false;
			@GetPlayerMapPos(var_43_int, var_44_int);
			var_173_float = GetByIndex(var_25_cvector, 0);
			var_43_int = var_173_float;
			SetByIndex(var_25_cvector, 0) = var_173_float;
			var_174_float = GetByIndex(var_25_cvector, 2);
			var_44_int = var_174_float;
			SetByIndex(var_25_cvector, 2) = var_174_float;
		}
		func_223();
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@SetBackground("default");
		@EnableClipping(true);
		@CaptureKeyboard();
		@PlaySound("map_open");
		@ProcessEvents();
	
	}
	EMIT "Stack[-6] = 0";

	void OnSee(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, float var_27_float)
	{
		int var_47_int; float var_53_float; float var_54_float; int var_55_int; int var_56_int; int var_57_int; object var_58_object; string var_59_string; cvector var_60_cvector; int var_61_int; int var_62_int; int var_63_int; int var_64_int; string var_65_string;
		var_47_int = var_12_float - ((var_3_int / var_14_float) / 2);
		int var_48_int = var_12_float + ((var_3_int / var_14_float) / 2);
		int var_49_int = var_13_float - ((var_4_int / var_14_float) / 2);
		int var_50_int = var_13_float + ((var_4_int / var_14_float) / 2);
		int var_51_int = 0;
		int var_52_int = 0;
		if(var_47_int < 0) {
			var_51_int = -var_47_int;
		} else if(var_48_int > 2048) {
					var_51_int = 2048 - var_48_int;
		}
		if(var_49_int < 0) {
			var_52_int = -var_49_int;
		} else if(var_50_int > 2048) {
				var_52_int = 2048 - var_50_int;

		}
		var_12_float += var_51_int;
		var_13_float += var_52_int;
		bool var_82_bool;
		bool var_83_bool;
		func_0(false, var_83_bool);
		if(!var_83_bool) { //@nz
			if(!var_18_bool) //@nz
				var_82_bool = true;
		}
		if(var_82_bool != 0) {
			var_20_object->clear(); //@t
			var_56_int = 0;
			var_22_object->GetMarkCount(var_55_int); //@t
			var_57_int = 0;

			while(var_57_int < var_55_int) {
				var_22_object->GetMark(var_57_int, var_58_object); //@t
				var_58_object->GetLocator(var_59_string);
				cvector var_98_cvector; string var_99_string;
				var_59_string = var_99_string;
				func_888(var_98_cvector, var_99_string);
				var_98_cvector = var_60_cvector;
				var_112_float = GetByIndex(var_60_cvector, 0);
				var_112_float = var_53_float;
				var_113_float = GetByIndex(var_60_cvector, 2);
				var_113_float = var_54_float;
				var_22_object->ConvertToMapCoordinates(var_53_float, var_54_float); //@t
				int var_114_int; int var_115_int;
				var_53_float = var_115_int;
				func_281(var_63_int, var_64_int, var_65_string, var_114_int, var_115_int);
				var_114_int = var_53_float;
				int var_120_int; int var_121_int;
				var_54_float = var_121_int;
				func_288(var_63_int, var_64_int, var_65_string, var_120_int, var_121_int);
				var_120_int = var_54_float;
				if((((var_53_float - var_5_int) * (var_53_float - var_5_int)) + ((var_54_float - var_6_int) * (var_54_float - var_6_int))) < 900) {
					var_20_object->add(var_58_object); //@t
					var_56_int += 1;
				}
				var_58_object = null;
				var_57_int += 1;
			}

			if(!var_56_int) { //@nz
				int var_138_int;
				func_267(var_63_int, var_64_int, var_65_string, var_138_int, var_5_int);
				var_138_int = var_63_int;
				int var_144_int;
				func_274(var_63_int, var_64_int, var_65_string, var_144_int, var_6_int);
				var_144_int = var_64_int;
				var_22_object->GetObjectFromPoint(var_61_int, var_63_int, var_64_int); //@t
				if(var_61_int >= 0) {
					var_22_object->GetObjectID(var_62_int, var_61_int); //@t
					@GetStringByID(var_65_string, (var_62_int + 100000));
					@SetTooltip(5, var_65_string);
					if(var_11_int != var_61_int) {
						var_22_object->CreateObjectHighlight(var_23_object, var_61_int); //@t
						var_11_int = var_61_int;
					}
				} else {
					@SetTooltip(-1, "");
					var_23_object = null;
					var_11_int = -1;
			}
				@SetTooltip(2, "", var_20_object);
				var_23_object = null;
				var_11_int = -1;
		}
			@SetTooltip(-1, "");
			var_11_int = -1;
			var_23_object = null;

		}
		goto Label_445;
	
	Label_445:
		goto Label_452;
	
	Label_452:
	
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string)
	{
		if(var_18_bool != 0)
			func_595(var_26_string);
		else
			func_525(var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_cvector, var_26_string);
	
	}

	// @pe
	void event_11(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int, int var_28_int)
	{
		bool var_29_bool;
		bool var_30_bool;
		func_0(true, var_30_bool);
		if(var_30_bool != 1) {
			if(var_18_bool != 1)
				var_29_bool = false;
		}
		if(var_29_bool != 0)
			return 0;
		var_15_bool = true;
		var_7_int = var_27_int;
		var_8_int = var_28_int;
		var_9_int = var_12_float;
		var_10_int = var_13_float;
		@SetCursor("drag");
	}

	// @pe
	void OnMusicChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int, int var_28_int, bool var_29_bool)
	{
		var_15_bool = false;
		@SetCursor("default");
	}

	// @pe
	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int, int var_28_int)
	{
		var_5_int = var_27_int;
		var_6_int = var_28_int;
		var_16_bool = false;
		if(var_15_bool != 0) {
			var_12_float = var_9_int + ((var_7_int - var_27_int) / var_14_float);
			var_13_float = var_10_int + ((var_8_int - var_28_int) / var_14_float);
		}
	}

	void OnCollision(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string)
	{
		var_16_bool = true;
	}

	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int, int var_28_int, float var_29_float)
	{
		int var_32_int; int var_33_int;
		if(var_18_bool != 0) {
		}
		if(var_29_float > 0) {
			var_32_int = 0;

			while(var_32_int < var_29_float) {
				func_735(var_32_int, var_33_int, 1.1);
			}

		} else {
			var_33_int = 0;

			for(;;) {
				var_46_int = -var_29_float;
				if(!(var_33_int < var_46_int)) goto Label_734;
				func_751((var_32_int + 1), var_33_int, 1.1);
				var_33_int += 1;
			}
		}
	Label_734:
	
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int, string var_28_string, object var_29_object)
	{
		if(var_28_string == "button_plus") {
			func_735(var_28_string, var_29_object, 1.4);
		} else if(var_28_string == "button_minus") {
				func_751(var_28_string, var_29_object, 1.4);
		}
	Label_804:
		for(;;) {
			return 0;

		}
	
		if(!(var_28_string == "tavro")) goto Label_804;
		var_18_bool = var_27_int == 0;
		if(var_18_bool != 0)
			var_53_int = 1;
		else
			var_93_int = 0; //@pi
		@SendMessage(var_53_int, "tavro");
		if(var_18_bool == 0) goto Label_804;
		func_153(var_28_string, var_29_object);
	
	}

	void event_101(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, int var_27_int)
	{
		int var_30_int; int var_31_int;
		if(var_27_int == 107) {
			func_735(var_30_int, var_31_int, 1.4);
			return 4;
		}
		if(var_27_int == 109) {
			func_751(var_30_int, var_31_int, 1.4);
			return 4;
		}
		var_30_int = var_12_float;
		var_31_int = var_13_float;
		var_22_object->ConvertToWorldCoordinates(var_30_int, var_31_int); //@t
		var_22_object->SetMapParams(var_30_int, var_31_int, var_14_float); //@t
		@DestroyWindow();
	}

}


void func_0(int var_0_int, bool var_30_bool)
{
	bool var_31_bool = false;
	if(var_0_int == 2) {
		int var_34_int;
		func_837(var_34_int);
		if(var_34_int >= 8)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		var_30_bool = true;
		return 0;
	}
	var_30_bool = false;
}


void func_905(bool var_85_bool)
{
	int var_90_int;
	func_837(var_90_int);
	int var_88_int;
	var_90_int = var_88_int;
	int var_89_int;
	@GetVariable(("RMap" + var_88_int), var_89_int);
	var_85_bool = var_89_int != 0;
}


// @pe
void func_267(int var_3_int, float var_12_float, float var_14_float, int var_138_int, int var_139_int)
{
	var_138_int = var_12_float + ((var_139_int - (var_3_int / 2)) / var_14_float);
}


void func_525(int var_3_int, int var_4_int, float var_12_float, float var_13_float, float var_14_float, object var_22_object, object var_23_object)
{
	int var_55_int;
	bool var_56_bool;
	func_0(var_55_int, var_56_bool);
	if(var_56_bool != 0) {
	}
	float var_49_float = var_14_float;
	var_68_float = GlobalVars[0];
	if(var_49_float < var_68_float) {
		var_70_float = GlobalVars[0];
		var_70_float = var_49_float;
	}
	int var_50_int = var_12_float - ((var_3_int / var_49_float) / 2);
	int var_51_int = var_12_float + ((var_3_int / var_49_float) / 2);
	int var_52_int = var_13_float - ((var_4_int / var_49_float) / 2);
	int var_53_int = var_13_float + ((var_4_int / var_49_float) / 2);
	int var_54_int = 0;
	var_55_int = 0;
	@ClientToScreen(var_54_int, var_55_int);
	@RenderMap(var_54_int, var_55_int, (var_3_int + var_54_int), (var_4_int + var_55_int), var_50_int, var_52_int, var_51_int, var_53_int);
	bool var_85_bool;
	func_905(var_85_bool);
	if(var_85_bool != 0)
		@RenderRegions(var_54_int, var_55_int, (var_3_int + var_54_int), (var_4_int + var_55_int), var_50_int, var_52_int, var_51_int, var_53_int);
	if(var_23_object != 0)
		var_23_object->Render(var_54_int, var_55_int, (var_3_int + var_54_int), (var_4_int + var_55_int), var_50_int, var_52_int, var_51_int, var_53_int); //@t
	func_453(var_22_object, 3);
	func_453(var_22_object, 0);
	func_453(var_22_object, 1);
	func_620(var_53_int, var_54_int, var_55_int);
}


// @pe
void func_274(int var_4_int, float var_13_float, float var_14_float, int var_144_int, int var_145_int)
{
	var_144_int = var_13_float + ((var_145_int - (var_4_int / 2)) / var_14_float);
}


// @pe
void func_281(int var_3_int, float var_12_float, float var_14_float, int var_134_int, int var_135_int)
{
	var_134_int = ((var_135_int - var_12_float) * var_14_float) + (var_3_int / 2);
}


void func_153(bool var_19_bool, string var_26_string)
{
	if(var_19_bool != 0)
		return 2;
	int var_57_int;
	@GetVariable("map_chertez_state", var_57_int);
	int var_60_int;
	func_831(var_60_int);
	if(var_60_int == 0) {
		var_26_string = "ui\ui_chertez_danko_bg.tex";
		bool var_66_bool = false;
		if(var_57_int >= 1) {
			if(var_57_int <= 6)
				var_66_bool = true;
		}
		if(var_66_bool != 0)
			var_26_string = ("ui\ui_chertez_danko_" + var_57_int) + ".tex";
	} else {
			int var_74_int;
			func_831(var_74_int);
			if(!(var_74_int == 1)) goto Label_204;
			var_26_string = "ui\ui_chertez_burah_bg.tex";
			bool var_77_bool = false;
			if(var_57_int >= 1) {
				if(var_57_int <= 6)
					var_77_bool = true;
			}
			if(var_77_bool != 0)
				var_26_string = ("ui\ui_chertez_burah_" + var_57_int) + ".tex";
	}
Label_219:
	for(;;) {
		@LoadImage(var_26_string);
		var_19_bool = true;
		return 2;

	}
	
Label_204:
	var_26_string = "ui\ui_chertez_klara_bg.tex";
	bool var_85_bool = false;
	if(var_57_int >= 1) {
		if(var_57_int <= 6)
			var_85_bool = true;
	}
	if(var_85_bool == 0) goto Label_219;
	var_26_string = ("ui\ui_chertez_klara_" + var_57_int) + ".tex";
}


// @pe
void func_288(int var_4_int, float var_13_float, float var_14_float, int var_140_int, int var_141_int)
{
	var_140_int = ((var_141_int - var_13_float) * var_14_float) + (var_4_int / 2);
}


void func_831(int var_60_int)
{
	int var_62_int;
	@GetVariable("branch", var_62_int);
	var_62_int = var_60_int;
}


void func_837(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


void func_453(object var_99_object, int var_100_int)
{
	float var_109_float; float var_110_float; int var_111_int; object var_113_object; string var_114_string; int var_115_int; cvector var_116_cvector;
	var_99_object->GetMarkCount(var_111_int);
	int var_112_int = 0;
	
	while(var_112_int < var_111_int) {
		var_99_object->GetMark(var_112_int, var_113_object);
		var_113_object->GetLocator(var_114_string);
		var_113_object->GetType(var_115_int);
		cvector var_118_cvector; string var_119_string;
		var_114_string = var_119_string;
		func_888(var_118_cvector, var_119_string);
		var_118_cvector = var_116_cvector;
		var_132_float = GetByIndex(var_116_cvector, 0);
		var_132_float = var_109_float;
		var_133_float = GetByIndex(var_116_cvector, 2);
		var_133_float = var_110_float;
		var_99_object->ConvertToMapCoordinates(var_109_float, var_110_float);
		int var_134_int; int var_135_int;
		var_109_float = var_135_int;
		func_281(var_114_string, var_115_int, var_116_cvector, var_134_int, var_135_int);
		var_134_int = var_109_float;
		int var_140_int; int var_141_int;
		var_110_float = var_141_int;
		func_288(var_114_string, var_115_int, var_116_cvector, var_140_int, var_141_int);
		var_140_int = var_110_float;
		if(var_115_int == var_100_int) {
			if(var_115_int == 0)
				@Blit("quest_mark", (var_109_float - 16), (var_110_float - 16));
			if(var_115_int == 1)
				@Blit("mainquest_mark", (var_109_float - 16), (var_110_float - 16));
			if(var_115_int == 3)
				@Blit("info_mark", (var_109_float - 16), (var_110_float - 16));
		}
		var_113_object = null;
		var_112_int += 1;
	}
	
}


// @pe
void func_846(string var_127_string, int var_128_int)
{
	var_127_string = ("Region" + var_128_int) + "State";
}


void func_595(string var_26_string)
{
	int var_33_int = 0;
	int var_34_int = 0;
	@ScreenToClient(var_33_int, var_34_int);
	int var_35_int;
	int var_36_int;
	@GetScreenSize(var_35_int, var_36_int);
	@StretchBlit(var_26_string, var_33_int, var_34_int, var_35_int, ((var_36_int / 768.0) * 1024), 1);
}


void func_852(bool var_123_bool, int var_124_int)
{
	int var_128_int;
	var_124_int = var_128_int;
	string var_127_string;
	func_846(var_127_string, var_128_int);
	int var_126_int;
	@GetVariable(var_127_string, var_126_int);
	var_123_bool = (var_126_int & 3) == 0;
}


void func_223(void)
{
	int var_120_int;
	
	for(;;) {
		if(0 < 16) {
			bool var_123_bool; int var_124_int;
			func_852(var_123_bool, var_124_int);
			if(var_123_bool != 0) {
				@SetRegionColor(var_124_int, 0.5, 0.5, 0.5, 0.0);
			} else {
			bool var_140_bool; int var_141_int;
			func_864(var_140_bool, var_141_int);
			if(var_140_bool != 0) {
				@SetRegionColor(var_141_int, 0.5, 0.0, 0.0, 0.5);
				goto Label_263;
			}
			bool var_153_bool; int var_154_int;
			var_120_int = var_154_int;
			func_876(var_153_bool, var_154_int);
			if(var_153_bool == 0) goto Label_263;
			@SetRegionColor(var_120_int, 0.0, 0.0, 0.0, 0.5);
		}
		}
	Label_263:
		var_120_int += 1;
	}
	
}


void func_864(bool var_140_bool, int var_141_int)
{
	int var_145_int;
	var_141_int = var_145_int;
	string var_144_string;
	func_846(var_144_string, var_145_int);
	int var_143_int;
	@GetVariable(var_144_string, var_143_int);
	var_140_bool = (var_143_int & 3) == 1;
}


// @pe
void func_735(int var_0_int, float var_14_float, float var_34_float)
{
	if(var_18_bool != 0)
		return 0;
	if((var_14_float * var_34_float) > 2.0)
		var_14_float = 2.0;
	if((var_0_int + -1) < 0)
		var_0_int = 0;
}


void func_876(bool var_153_bool, int var_154_int)
{
	int var_158_int;
	var_154_int = var_158_int;
	string var_157_string;
	func_846(var_157_string, var_158_int);
	int var_156_int;
	@GetVariable(var_157_string, var_156_int);
	var_153_bool = (var_156_int & 3) == 2;
}


void func_620(bool var_17_bool, object var_24_object, cvector var_25_cvector)
{
	int var_176_int; int var_177_int; float var_178_float;
	if(!var_17_bool) { //@nz
		@GetPlayerMapAngle(var_178_float);
		int var_180_int; int var_181_int;
		var_182_float = GetByIndex(var_25_cvector, 0);
		var_182_float = var_181_int;
		func_281(var_176_int, var_177_int, var_178_float, var_180_int, var_181_int);
		var_180_int = var_176_int;
		int var_183_int; int var_184_int;
		var_185_float = GetByIndex(var_25_cvector, 2);
		var_185_float = var_184_int;
		func_288(var_176_int, var_177_int, var_178_float, var_183_int, var_184_int);
		var_183_int = var_177_int;
		@ClientToScreen(var_176_int, var_177_int);
		var_24_object->Blit(var_176_int, var_177_int, var_178_float); //@t
	} else {
		int var_186_int; int var_187_int;
		var_188_float = GetByIndex(var_25_cvector, 0);
		var_188_float = var_187_int;
		func_281(var_176_int, var_177_int, var_178_float, var_186_int, var_187_int);
		var_186_int = var_176_int;
		int var_189_int; int var_190_int;
		var_191_float = GetByIndex(var_25_cvector, 2);
		var_191_float = var_190_int;
		func_288(var_176_int, var_177_int, var_178_float, var_189_int, var_190_int);
		var_189_int = var_177_int;
		@ClientToScreen(var_176_int, var_177_int);
		var_24_object->Blit(var_176_int, var_177_int); //@t
	}
	
}


// @pe
void func_751(int var_0_int, float var_14_float, float var_43_float)
{
	if(var_18_bool != 0)
		return 0;
	var_45_float = GlobalVars[0];
	if((var_14_float / var_43_float) < var_45_float) {
		var_47_float = GlobalVars[0];
		var_14_float = var_47_float;
		if((var_0_int + 1) > 2)
			var_0_int = 2;
	}
}


void func_888(cvector var_98_cvector, string var_99_string)
{
	cvector var_106_cvector; object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find main outdoor scene");
		var_106_cvector = [0.0, 0.0, 0.0];
		var_106_cvector = var_98_cvector;
	}
	cvector var_107_cvector;
	bool var_110_bool;
	var_108_object->GetLocator(var_99_string, var_110_bool, var_106_cvector, var_107_cvector);
	var_106_cvector = var_98_cvector;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


