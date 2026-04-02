// @GLOBALS: 0:float:,1:float:

maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector)
	{
		string var_33_string; int var_34_int; int var_35_int; int var_36_int; int var_37_int;
		@GetMap(var_19_object);
		if(var_19_object == null)
			@Trace("Map not found");
		var_19_object->GetSize(var_0_int, var_1_int); //@t
		float var_30_float;
		float var_31_float;
		var_19_object->GetMapParams(var_30_float, var_31_float, var_13_float); //@t
		var_19_object->ConvertToMapCoordinates(var_30_float, var_31_float); //@t
		var_11_float = var_30_float;
		var_12_float = var_31_float;
		var_15_bool = true;
		@GetWindowSize(var_2_int, var_3_int);
		var_40_float = GlobalVars[0];
		GlobalVars[0] = (var_2_int / 2048.0);
		var_42_float = GlobalVars[1];
		var_43_float = GlobalVars[0];
		var_43_float = var_42_float;
		GlobalVars[1] = var_42_float;
		var_4_int = -1;
		var_5_int = -1;
		var_14_bool = false;
		var_20_object = null;
		var_10_int = -1;
		@CreateObjectVector(var_17_object);
		object var_32_object;
		@GetMainOutdoorScene(var_32_object);
		@GetActiveScene(var_18_object);
		if(var_32_object != var_18_object) {
			var_16_bool = true;
			var_18_object->GetName(var_33_string); //@t
			cvector var_45_cvector;
			func_529(var_45_cvector, ("pt_gmap_" + var_33_string));
			var_21_cvector = var_45_cvector;
			var_60_float = GetByIndex(var_21_cvector, 0);
			var_60_float = var_34_int;
			var_61_float = GetByIndex(var_21_cvector, 2);
			var_61_float = var_35_int;
			var_19_object->ConvertToMapCoordinates(var_34_int, var_35_int); //@t
			var_62_float = GetByIndex(var_21_cvector, 0);
			var_34_int = var_62_float;
			SetByIndex(var_21_cvector, 0) = var_62_float;
			var_63_float = GetByIndex(var_21_cvector, 2);
			var_35_int = var_63_float;
			SetByIndex(var_21_cvector, 2) = var_63_float;
			@Trace("indoor map: pt_gmap_" + var_33_string);
		} else {
			@Trace("outdoor map");
			var_16_bool = false;
			@GetPlayerMapPos(var_36_int, var_37_int);
			var_72_float = GetByIndex(var_21_cvector, 0);
			var_36_int = var_72_float;
			SetByIndex(var_21_cvector, 0) = var_72_float;
			var_73_float = GetByIndex(var_21_cvector, 2);
			var_37_int = var_73_float;
			SetByIndex(var_21_cvector, 2) = var_73_float;
		}
		@ShowCursor();
		@SetCursor("default");
		@SetOwnerDraw(true);
		@SetNeedUpdate(true);
		@SetBackground("default");
		@CaptureKeyboard();
		@PlaySound("map_open");
		@ProcessEvents();
	
	}
	EMIT "Stack[-6] = 0";

	void OnSee(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, float var_22_float)
	{
		int var_42_int; float var_48_float; float var_49_float; object var_53_object; string var_54_string; cvector var_55_cvector; int var_56_int; int var_57_int; int var_58_int; int var_59_int; string var_60_string;
		var_42_int = var_11_float - ((var_2_int / var_13_float) / 2);
		int var_43_int = var_11_float + ((var_2_int / var_13_float) / 2);
		int var_44_int = var_12_float - ((var_3_int / var_13_float) / 2);
		int var_45_int = var_12_float + ((var_3_int / var_13_float) / 2);
		int var_46_int = 0;
		int var_47_int = 0;
		if(var_42_int < 0) {
			var_46_int = -var_42_int;
		} else if(var_43_int > 2048) {
					var_46_int = 2048 - var_43_int;
		}
		if(var_44_int < 0) {
			var_47_int = -var_44_int;
		} else if(var_45_int > 2048) {
				var_47_int = 2048 - var_45_int;

		}
		var_11_float += var_46_int;
		var_12_float += var_47_int;
		var_17_object->clear(); //@t
		int var_51_int = 0;
		int var_50_int;
		var_19_object->GetMarkCount(var_50_int); //@t
		int var_52_int = 0;
	
		while(var_52_int < var_50_int) {
			var_19_object->GetMark(var_52_int, var_53_object); //@t
			var_53_object->GetLocator(var_54_string);
			cvector var_78_cvector; string var_79_string;
			var_54_string = var_79_string;
			func_529(var_78_cvector, var_79_string);
			var_78_cvector = var_55_cvector;
			var_92_float = GetByIndex(var_55_cvector, 0);
			var_92_float = var_48_float;
			var_93_float = GetByIndex(var_55_cvector, 2);
			var_93_float = var_49_float;
			var_19_object->ConvertToMapCoordinates(var_48_float, var_49_float); //@t
			int var_94_int; int var_95_int;
			var_48_float = var_95_int;
			func_128(var_58_int, var_59_int, var_60_string, var_94_int, var_95_int);
			var_94_int = var_48_float;
			int var_100_int; int var_101_int;
			var_49_float = var_101_int;
			func_135(var_58_int, var_59_int, var_60_string, var_100_int, var_101_int);
			var_100_int = var_49_float;
			if((((var_48_float - var_4_int) * (var_48_float - var_4_int)) + ((var_49_float - var_5_int) * (var_49_float - var_5_int))) < 900) {
				var_17_object->add(var_53_object); //@t
				var_51_int += 1;
			}
			var_53_object = null;
			var_52_int += 1;
		}
	
		if(!var_51_int) { //@nz
			int var_118_int;
			func_114(var_58_int, var_59_int, var_60_string, var_118_int, var_4_int);
			var_118_int = var_58_int;
			int var_124_int;
			func_121(var_58_int, var_59_int, var_60_string, var_124_int, var_5_int);
			var_124_int = var_59_int;
			var_19_object->GetObjectFromPoint(var_56_int, var_58_int, var_59_int); //@t
			if(var_56_int >= 0) {
				var_19_object->GetObjectID(var_57_int, var_56_int); //@t
				@GetStringByID(var_60_string, (var_57_int + 100000));
				@SetTooltip(5, var_60_string);
				if(var_10_int != var_56_int) {
					var_19_object->CreateObjectHighlight(var_20_object, var_56_int); //@t
					var_10_int = var_56_int;
				}
			} else {
				@SetTooltip(-1, "");
				var_20_object = null;
				var_10_int = -1;
		}
			@SetTooltip(2, "", var_17_object);
			var_20_object = null;
			var_10_int = -1;

		}
		goto Label_281;
	
	Label_281:
	
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector)
	{
		float var_44_float; float var_45_float; object var_48_object; string var_49_string; int var_50_int; cvector var_51_cvector; float var_52_float; int var_53_int;
		bool var_54_bool;
		func_0(var_53_int, var_54_bool);
		if(var_54_bool != 0) {
		}
		int var_38_int = var_11_float - ((var_2_int / var_13_float) / 2);
		int var_39_int = var_11_float + ((var_2_int / var_13_float) / 2);
		int var_40_int = var_12_float - ((var_3_int / var_13_float) / 2);
		int var_41_int = var_12_float + ((var_3_int / var_13_float) / 2);
		int var_42_int = 0;
		int var_43_int = 0;
		@ClientToScreen(var_42_int, var_43_int);
		@RenderMap(var_42_int, var_43_int, (var_2_int + var_42_int), (var_3_int + var_43_int), var_38_int, var_40_int, var_39_int, var_41_int);
		if(var_20_object != 0)
			var_20_object->Render(var_42_int, var_43_int, (var_2_int + var_42_int), (var_3_int + var_43_int), var_38_int, var_40_int, var_39_int, var_41_int); //@t
		int var_46_int;
		var_19_object->GetMarkCount(var_46_int); //@t
		int var_47_int = 0;
	
		while(var_47_int < var_46_int) {
			var_19_object->GetMark(var_47_int, var_48_object); //@t
			var_48_object->GetLocator(var_49_string);
			var_48_object->GetType(var_50_int);
			cvector var_77_cvector; string var_78_string;
			var_49_string = var_78_string;
			func_529(var_77_cvector, var_78_string);
			var_77_cvector = var_51_cvector;
			var_91_float = GetByIndex(var_51_cvector, 0);
			var_91_float = var_44_float;
			var_92_float = GetByIndex(var_51_cvector, 2);
			var_92_float = var_45_float;
			var_19_object->ConvertToMapCoordinates(var_44_float, var_45_float); //@t
			int var_93_int; int var_94_int;
			var_44_float = var_94_int;
			func_128(var_51_cvector, var_52_float, var_53_int, var_93_int, var_94_int);
			var_93_int = var_44_float;
			int var_99_int; int var_100_int;
			var_45_float = var_100_int;
			func_135(var_51_cvector, var_52_float, var_53_int, var_99_int, var_100_int);
			var_99_int = var_45_float;
			if(var_50_int == 0)
				@Blit("quest_mark", (var_44_float - 16), (var_45_float - 16));
			if(var_50_int == 1)
				@Blit("mainquest_mark", (var_44_float - 16), (var_45_float - 16));
			if(var_50_int == 3)
				@Blit("info_mark", (var_44_float - 16), (var_45_float - 16));
			var_48_object = null;
			var_47_int += 1;
		}
	
		if(!var_16_bool) { //@nz
			@GetPlayerMapAngle(var_52_float);
			var_53_int = (var_52_float / 6.28) * 16;
			int var_131_int; int var_132_int;
			var_133_float = GetByIndex(var_21_cvector, 0);
			var_133_float = var_132_int;
			func_128(var_51_cvector, var_52_float, var_53_int, var_131_int, var_132_int);
			var_131_int = var_44_float;
			int var_134_int; int var_135_int;
			var_136_float = GetByIndex(var_21_cvector, 2);
			var_136_float = var_135_int;
			func_135(var_51_cvector, var_52_float, var_53_int, var_134_int, var_135_int);
			var_134_int = var_45_float;
			@Blit(("player" + var_53_int), (var_44_float - 8), (var_45_float - 8));
		} else {
			int var_143_int; int var_144_int;
			var_145_float = GetByIndex(var_21_cvector, 0);
			var_145_float = var_144_int;
			func_128(var_51_cvector, var_52_float, var_53_int, var_143_int, var_144_int);
			var_143_int = var_44_float;
			int var_146_int; int var_147_int;
			var_148_float = GetByIndex(var_21_cvector, 2);
			var_148_float = var_147_int;
			func_135(var_51_cvector, var_52_float, var_53_int, var_146_int, var_147_int);
			var_146_int = var_45_float;
			@Blit("player0", (var_44_float - 8), (var_45_float - 8));
		}
	
	}

	// @pe
	void event_11(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, int var_22_int, int var_23_int)
	{
		bool var_24_bool;
		func_0(var_23_int, var_24_bool);
		if(var_24_bool != 0)
			return 0;
		var_14_bool = true;
		var_6_int = var_22_int;
		var_7_int = var_23_int;
		var_8_int = var_11_float;
		var_9_int = var_12_float;
		@SetCursor("drag");
	}

	// @pe
	void OnMusicChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, int var_22_int, int var_23_int, bool var_24_bool)
	{
		var_14_bool = false;
		@SetCursor("default");
	}

	// @pe
	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, int var_22_int, int var_23_int)
	{
		var_4_int = var_22_int;
		var_5_int = var_23_int;
		var_15_bool = false;
		if(var_14_bool != 0) {
			var_11_float = var_8_int + ((var_6_int - var_22_int) / var_13_float);
			var_12_float = var_9_int + ((var_7_int - var_23_int) / var_13_float);
		}
	}

	void OnCollision(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector)
	{
		var_15_bool = true;
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, int var_22_int, string var_23_string, object var_24_object)
	{
		if(var_23_string == "button_plus")
			func_475(var_24_object);
		if(var_23_string == "button_minus")
			func_482(var_24_object);
	}

	void event_101(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, float var_11_float, float var_12_float, float var_13_float, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, cvector var_21_cvector, int var_22_int)
	{
		int var_26_int;
		if(var_22_int == 107) {
			func_475(var_26_int);
			return 4;
		}
		if(var_22_int == 109) {
			func_482(var_26_int);
			return 4;
		}
		int var_25_int = var_11_float;
		var_26_int = var_12_float;
		var_19_object->ConvertToWorldCoordinates(var_25_int, var_26_int); //@t
		var_19_object->SetMapParams(var_25_int, var_26_int, var_13_float); //@t
		@DestroyWindow();
	}

}


// @pe
void func_128(int var_2_int, float var_11_float, float var_13_float, int var_93_int, int var_94_int)
{
	var_93_int = ((var_94_int - var_11_float) * var_13_float) + (var_2_int / 2);
}


void func_0(float var_13_float, bool var_24_bool)
{
	var_25_float = GlobalVars[0];
	if(var_13_float < (var_25_float + 0.01)) {
		var_24_bool = true;
		return 0;
	}
	var_24_bool = false;
}


void func_482(float var_13_float)
{
	var_35_float = GlobalVars[0];
	if((var_13_float / 1.4) < var_35_float) {
		var_37_float = GlobalVars[0];
		var_13_float = var_37_float;
	}
}


// @pe
void func_135(int var_3_int, float var_12_float, float var_13_float, int var_99_int, int var_100_int)
{
	var_99_int = ((var_100_int - var_12_float) * var_13_float) + (var_3_int / 2);
}


void func_529(cvector var_45_cvector, string var_46_string)
{
	cvector var_53_cvector; object var_55_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_53_cvector = [0.0, 0.0, 0.0];
		var_53_cvector = var_45_cvector;
	}
	cvector var_54_cvector;
	bool var_57_bool;
	var_55_object->GetLocator(var_46_string, var_57_bool, var_53_cvector, var_54_cvector);
	var_53_cvector = var_45_cvector;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_114(int var_2_int, float var_11_float, float var_13_float, int var_118_int, int var_119_int)
{
	var_118_int = var_11_float + ((var_119_int - (var_2_int / 2)) / var_13_float);
}


// @pe
void func_121(int var_3_int, float var_12_float, float var_13_float, int var_124_int, int var_125_int)
{
	var_124_int = var_12_float + ((var_125_int - (var_3_int / 2)) / var_13_float);
}


void func_475(float var_13_float)
{
	if((var_13_float * 1.4) > 2.0)
		var_13_float = 2.0;
}


