// @GLOBALS: 0:float:,1:float:

maintask task_0
{
	void init(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool)
	{
		string var_46_string; int var_47_int; int var_48_int; int var_49_int; int var_50_int;
		@GetMap(var_22_object);
		if(var_22_object == null)
			@Trace("Map not found");
		@CreatePolyImage(var_24_object, 16, 16, "ui/ui_player.png");
		var_22_object->GetSize(var_1_int, var_2_int); //@t
		float var_42_float;
		float var_43_float;
		var_22_object->GetMapParams(var_42_float, var_43_float, var_14_float); //@t
		var_22_object->ConvertToMapCoordinates(var_42_float, var_43_float); //@t
		var_12_float = var_42_float;
		var_13_float = var_43_float;
		var_27_bool = false;
		var_28_bool = false;
		var_29_bool = false;
		var_30_bool = false;
		var_31_bool = false;
		var_32_bool = false;
		var_16_bool = true;
		@GetWindowSize(var_3_int, var_4_int);
		var_56_float = GlobalVars[0];
		GlobalVars[0] = (var_3_int / 2048.0);
		var_58_float = GlobalVars[1];
		var_59_float = GlobalVars[0];
		var_59_float = var_58_float;
		GlobalVars[1] = var_58_float;
		var_19_bool = false;
		if(var_14_float < 0) {
			var_18_bool = true;
			func_176(var_49_int, var_50_int);
			var_14_float = 2;
		}
		var_99_float = GlobalVars[0];
		if(var_14_float < var_99_float) {
			var_101_float = GlobalVars[0];
			var_14_float = var_101_float;
		}
		int var_44_int;
		@GetVariable("map_chertez_force", var_44_int);
		if(var_44_int != 0) {
			var_18_bool = true;
			func_176(var_49_int, var_50_int);
			@SetVariable("map_chertez_force", 0);
		}
		if(var_18_bool != 0)
			var_107_int = 1;
		else
			var_187_int = 0; //@pi
		@SendMessage(var_107_int, "tavro");
		var_0_int = 0;
		var_5_int = -1;
		var_6_int = -1;
		var_15_bool = false;
		var_23_object = null;
		var_11_int = -1;
		@CreateObjectVector(var_20_object);
		object var_45_object;
		@GetMainOutdoorScene(var_45_object);
		@GetActiveScene(var_21_object);
		if(var_45_object != var_21_object) {
			var_17_bool = true;
			var_21_object->GetName(var_46_string); //@t
			cvector var_110_cvector;
			func_1067(var_110_cvector, ("pt_gmap_" + var_46_string));
			var_25_cvector = var_110_cvector;
			var_125_float = GetByIndex(var_25_cvector, 0);
			var_125_float = var_47_int;
			var_126_float = GetByIndex(var_25_cvector, 2);
			var_126_float = var_48_int;
			var_22_object->ConvertToMapCoordinates(var_47_int, var_48_int); //@t
			var_127_float = GetByIndex(var_25_cvector, 0);
			var_47_int = var_127_float;
			SetByIndex(var_25_cvector, 0) = var_127_float;
			var_128_float = GetByIndex(var_25_cvector, 2);
			var_48_int = var_128_float;
			SetByIndex(var_25_cvector, 2) = var_128_float;
			@Trace("indoor map: pt_gmap_" + var_46_string);
		} else {
			@Trace("outdoor map");
			var_17_bool = false;
			@GetPlayerMapPos(var_49_int, var_50_int);
			var_185_float = GetByIndex(var_25_cvector, 0);
			var_49_int = var_185_float;
			SetByIndex(var_25_cvector, 0) = var_185_float;
			var_186_float = GetByIndex(var_25_cvector, 2);
			var_50_int = var_186_float;
			SetByIndex(var_25_cvector, 2) = var_186_float;

		}
		func_246();
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

	void OnSee(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, float var_33_float)
	{
		float var_59_float; float var_60_float; int var_61_int; int var_62_int; int var_63_int; object var_64_object; string var_65_string; cvector var_66_cvector; int var_67_int; int var_68_int; int var_69_int; int var_70_int; string var_71_string;
		if(var_30_bool != 0)
			var_12_float += (500 * var_33_float);
		if(var_29_bool != 0)
			var_12_float -= (500 * var_33_float);
		if(var_27_bool != 0)
			var_13_float -= (500 * var_33_float);
		if(var_28_bool != 0)
			var_13_float += (500 * var_33_float);
		if(var_31_bool != 0) {
			if(!var_18_bool) { //@nz
				if((var_14_float + (1.1 * var_33_float)) > 2.0)
					var_14_float = 2.0;
				if((var_0_int + -1) < 0)
					var_0_int = 0;
			}
		}
		if(var_32_bool != 0) {
			if(!var_18_bool) { //@nz
				var_97_float = GlobalVars[0];
				if((var_14_float - (1.1 * var_33_float)) < var_97_float) {
					var_99_float = GlobalVars[0];
					var_14_float = var_99_float;
					if((var_0_int + 1) > 2)
						var_0_int = 2;
				}
			}
		}
		int var_53_int = var_12_float - ((var_3_int / var_14_float) / 2);
		int var_54_int = var_12_float + ((var_3_int / var_14_float) / 2);
		int var_55_int = var_13_float - ((var_4_int / var_14_float) / 2);
		int var_56_int = var_13_float + ((var_4_int / var_14_float) / 2);
		int var_57_int = 0;
		int var_58_int = 0;
		if(var_53_int < 0) {
			var_57_int = -var_53_int;
		} else if(var_54_int > 2048) {
					var_57_int = 2048 - var_54_int;
		}
		if(var_55_int < 0) {
			var_58_int = -var_55_int;
		} else if(var_56_int > 2048) {
				var_58_int = 2048 - var_56_int;

		}
		var_12_float += var_57_int;
		var_13_float += var_58_int;
		bool var_119_bool;
		bool var_120_bool;
		func_0(false, var_120_bool);
		if(!var_120_bool) { //@nz
			if(!var_18_bool) //@nz
				var_119_bool = true;
		}
		if(var_119_bool != 0) {
			var_20_object->clear(); //@t
			var_62_int = 0;
			var_22_object->GetMarkCount(var_61_int); //@t
			var_63_int = 0;

			while(var_63_int < var_61_int) {
				var_22_object->GetMark(var_63_int, var_64_object); //@t
				var_64_object->GetLocator(var_65_string);
				cvector var_135_cvector; string var_136_string;
				var_65_string = var_136_string;
				func_1067(var_135_cvector, var_136_string);
				var_135_cvector = var_66_cvector;
				var_149_float = GetByIndex(var_66_cvector, 0);
				var_149_float = var_59_float;
				var_150_float = GetByIndex(var_66_cvector, 2);
				var_150_float = var_60_float;
				var_22_object->ConvertToMapCoordinates(var_59_float, var_60_float); //@t
				int var_151_int; int var_152_int;
				var_59_float = var_152_int;
				func_304(var_69_int, var_70_int, var_71_string, var_151_int, var_152_int);
				var_151_int = var_59_float;
				int var_157_int; int var_158_int;
				var_60_float = var_158_int;
				func_311(var_69_int, var_70_int, var_71_string, var_157_int, var_158_int);
				var_157_int = var_60_float;
				if((((var_59_float - var_5_int) * (var_59_float - var_5_int)) + ((var_60_float - var_6_int) * (var_60_float - var_6_int))) < 900) {
					var_20_object->add(var_64_object); //@t
					var_62_int += 1;
				}
				var_64_object = null;
				var_63_int += 1;
			}

			if(!var_62_int) { //@nz
				int var_175_int;
				func_290(var_69_int, var_70_int, var_71_string, var_175_int, var_5_int);
				var_175_int = var_69_int;
				int var_181_int;
				func_297(var_69_int, var_70_int, var_71_string, var_181_int, var_6_int);
				var_181_int = var_70_int;
				var_22_object->GetObjectFromPoint(var_67_int, var_69_int, var_70_int); //@t
				if(var_67_int >= 0) {
					var_22_object->GetObjectID(var_68_int, var_67_int); //@t
					@GetStringByID(var_71_string, (var_68_int + 100000));
					@SetTooltip(5, var_71_string);
					if(var_11_int != var_67_int) {
						var_22_object->CreateObjectHighlight(var_23_object, var_67_int); //@t
						var_11_int = var_67_int;
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
		goto Label_524;
	
	Label_524:
		goto Label_531;
	
	Label_531:
	
	}

	void OnUse(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool)
	{
		if(var_18_bool != 0)
			func_674(var_32_bool);
		else
			func_604(var_26_string, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool);
	
	}

	// @pe
	void event_11(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int, int var_34_int)
	{
		bool var_35_bool;
		bool var_36_bool;
		func_0(true, var_36_bool);
		if(var_36_bool != 1) {
			if(var_18_bool != 1)
				var_35_bool = false;
		}
		if(var_35_bool != 0)
			return 0;
		var_15_bool = true;
		var_7_int = var_33_int;
		var_8_int = var_34_int;
		var_9_int = var_12_float;
		var_10_int = var_13_float;
		@SetCursor("drag");
	}

	// @pe
	void OnMusicChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int, int var_34_int, bool var_35_bool)
	{
		var_15_bool = false;
		@SetCursor("default");
	}

	// @pe
	void OnRegionChange(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int, int var_34_int)
	{
		var_5_int = var_33_int;
		var_6_int = var_34_int;
		var_16_bool = false;
		if(var_15_bool != 0) {
			var_12_float = var_9_int + ((var_7_int - var_33_int) / var_14_float);
			var_13_float = var_10_int + ((var_8_int - var_34_int) / var_14_float);
		}
	}

	void OnCollision(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool)
	{
		var_16_bool = true;
	}

	void OnPlayerHolsterWeapon(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int, int var_34_int, float var_35_float)
	{
		int var_38_int; int var_39_int;
		if(var_18_bool != 0)
			return 4;
		if(var_35_float == 0.2) {
		} else if(var_35_float == -0.2) {
		}
	Label_821:
		for(;;) {
			return 4;

		}
	
		if(var_35_float > 0) {
			var_38_int = 0;

			while(var_38_int < var_35_float) {
				func_822(var_38_int, var_39_int, 1.1);
				var_38_int += 1;
			}

			goto Label_821;
		}
		var_39_int = 0;
	
		for(;;) {
			var_56_int = -var_35_float;
			if(!(var_39_int < var_56_int)) goto Label_821;
			func_838(var_38_int, var_39_int, 1.1);
			var_39_int += 1;
		}
	}

	// @pe
	void event_200(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int, string var_34_string, object var_35_object)
	{
		if(var_34_string == "button_plus") {
			func_822(var_34_string, var_35_object, 1.4);
		} else if(var_34_string == "button_minus") {
				func_838(var_34_string, var_35_object, 1.4);
		}
	Label_891:
		for(;;) {
			return 0;

		}
	
		if(!(var_34_string == "tavro")) goto Label_891;
		var_18_bool = var_33_int == 0;
		if(var_18_bool != 0)
			var_59_int = 1;
		else
			var_99_int = 0; //@pi
		@SendMessage(var_59_int, "tavro");
		if(var_18_bool == 0) goto Label_891;
		func_176(var_34_string, var_35_object);
	
	}

	// @pe
	void event_102(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int)
	{
		bool var_34_bool = true;
		var_36_bool = var_33_int == 270;
		if(var_36_bool != 1) {
			var_38_bool = var_33_int == 271;
			if(var_38_bool != 1)
				var_34_bool = false;
		}
		if(var_34_bool != 0)
			var_30_bool = false;
		bool var_39_bool = true;
		var_41_bool = var_33_int == 269;
		if(var_41_bool != 1) {
			var_43_bool = var_33_int == 273;
			if(var_43_bool != 1)
				var_39_bool = false;
		}
		if(var_39_bool != 0)
			var_29_bool = false;
		bool var_44_bool = true;
		var_46_bool = var_33_int == 267;
		if(var_46_bool != 1) {
			var_48_bool = var_33_int == 272;
			if(var_48_bool != 1)
				var_44_bool = false;
		}
		if(var_44_bool != 0)
			var_27_bool = false;
		bool var_49_bool = true;
		var_51_bool = var_33_int == 268;
		if(var_51_bool != 1) {
			var_53_bool = var_33_int == 274;
			if(var_53_bool != 1)
				var_49_bool = false;
		}
		if(var_49_bool != 0)
			var_28_bool = false;
		if(var_33_int == 275)
			var_31_bool = false;
		if(var_33_int == 276)
			var_32_bool = false;
	}

	// @pe
	void event_101(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int)
	{
		bool var_34_bool = true;
		var_36_bool = var_33_int == 270;
		if(var_36_bool != 1) {
			var_38_bool = var_33_int == 271;
			if(var_38_bool != 1)
				var_34_bool = false;
		}
		if(var_34_bool != 0)
			var_30_bool = true;
		bool var_39_bool = true;
		var_41_bool = var_33_int == 269;
		if(var_41_bool != 1) {
			var_43_bool = var_33_int == 273;
			if(var_43_bool != 1)
				var_39_bool = false;
		}
		if(var_39_bool != 0)
			var_29_bool = true;
		bool var_44_bool = true;
		var_46_bool = var_33_int == 267;
		if(var_46_bool != 1) {
			var_48_bool = var_33_int == 272;
			if(var_48_bool != 1)
				var_44_bool = false;
		}
		if(var_44_bool != 0)
			var_27_bool = true;
		bool var_49_bool = true;
		var_51_bool = var_33_int == 268;
		if(var_51_bool != 1) {
			var_53_bool = var_33_int == 274;
			if(var_53_bool != 1)
				var_49_bool = false;
		}
		if(var_49_bool != 0)
			var_28_bool = true;
		if(var_33_int == 275)
			var_31_bool = true;
		if(var_33_int == 276)
			var_32_bool = true;
	}

	void event_100(int var_0_int, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, int var_7_int, int var_8_int, int var_9_int, int var_10_int, int var_11_int, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, object var_23_object, object var_24_object, cvector var_25_cvector, string var_26_string, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, bool var_31_bool, bool var_32_bool, int var_33_int)
	{
		int var_36_int = var_12_float;
		int var_37_int = var_13_float;
		var_22_object->ConvertToWorldCoordinates(var_36_int, var_37_int); //@t
		var_22_object->SetMapParams(var_36_int, var_37_int, var_14_float); //@t
		@DestroyWindow();
	}

}


void func_0(int var_0_int, bool var_36_bool)
{
	bool var_37_bool = false;
	if(var_0_int == 2) {
		int var_40_int;
		func_1016(var_40_int);
		if(var_40_int >= 8)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		var_36_bool = true;
		return 0;
	}
	var_36_bool = false;
}


// @pe
void func_1025(string var_139_string, int var_140_int)
{
	var_139_string = ("Region" + var_140_int) + "State";
}


void func_1031(bool var_135_bool, int var_136_int)
{
	int var_140_int;
	var_136_int = var_140_int;
	string var_139_string;
	func_1025(var_139_string, var_140_int);
	int var_138_int;
	@GetVariable(var_139_string, var_138_int);
	var_135_bool = (var_138_int & 3) == 0;
}


void func_1043(bool var_152_bool, int var_153_int)
{
	int var_157_int;
	var_153_int = var_157_int;
	string var_156_string;
	func_1025(var_156_string, var_157_int);
	int var_155_int;
	@GetVariable(var_156_string, var_155_int);
	var_152_bool = (var_155_int & 3) == 1;
}


void func_532(object var_105_object, int var_106_int)
{
	float var_115_float; float var_116_float; int var_117_int; object var_119_object; string var_120_string; int var_121_int; cvector var_122_cvector;
	var_105_object->GetMarkCount(var_117_int);
	int var_118_int = 0;
	
	while(var_118_int < var_117_int) {
		var_105_object->GetMark(var_118_int, var_119_object);
		var_119_object->GetLocator(var_120_string);
		var_119_object->GetType(var_121_int);
		cvector var_124_cvector; string var_125_string;
		var_120_string = var_125_string;
		func_1067(var_124_cvector, var_125_string);
		var_124_cvector = var_122_cvector;
		var_138_float = GetByIndex(var_122_cvector, 0);
		var_138_float = var_115_float;
		var_139_float = GetByIndex(var_122_cvector, 2);
		var_139_float = var_116_float;
		var_105_object->ConvertToMapCoordinates(var_115_float, var_116_float);
		int var_140_int; int var_141_int;
		var_115_float = var_141_int;
		func_304(var_120_string, var_121_int, var_122_cvector, var_140_int, var_141_int);
		var_140_int = var_115_float;
		int var_146_int; int var_147_int;
		var_116_float = var_147_int;
		func_311(var_120_string, var_121_int, var_122_cvector, var_146_int, var_147_int);
		var_146_int = var_116_float;
		if(var_121_int == var_106_int) {
			if(var_121_int == 0)
				@Blit("quest_mark", (var_115_float - 16), (var_116_float - 16));
			if(var_121_int == 1)
				@Blit("mainquest_mark", (var_115_float - 16), (var_116_float - 16));
			if(var_121_int == 3)
				@Blit("info_mark", (var_115_float - 16), (var_116_float - 16));
		}
		var_119_object = null;
		var_118_int += 1;
	}
	
}


void func_1055(bool var_165_bool, int var_166_int)
{
	int var_170_int;
	var_166_int = var_170_int;
	string var_169_string;
	func_1025(var_169_string, var_170_int);
	int var_168_int;
	@GetVariable(var_169_string, var_168_int);
	var_165_bool = (var_168_int & 3) == 2;
}


// @pe
void func_290(int var_3_int, float var_12_float, float var_14_float, int var_175_int, int var_176_int)
{
	var_175_int = var_12_float + ((var_176_int - (var_3_int / 2)) / var_14_float);
}


void func_674(string var_26_string)
{
	int var_39_int = 0;
	int var_40_int = 0;
	@ScreenToClient(var_39_int, var_40_int);
	int var_41_int;
	int var_42_int;
	@GetScreenSize(var_41_int, var_42_int);
	@StretchBlit(var_26_string, var_39_int, var_40_int, var_41_int, ((var_42_int / 768.0) * 1024), 1);
}


// @pe
void func_297(int var_4_int, float var_13_float, float var_14_float, int var_181_int, int var_182_int)
{
	var_181_int = var_13_float + ((var_182_int - (var_4_int / 2)) / var_14_float);
}


void func_1067(cvector var_110_cvector, string var_111_string)
{
	cvector var_118_cvector; object var_120_object;
	@GetMainOutdoorScene(var_120_object);
	if(var_120_object == null) {
		@Trace("Can't find main outdoor scene");
		var_118_cvector = [0.0, 0.0, 0.0];
		var_118_cvector = var_110_cvector;
	}
	cvector var_119_cvector;
	bool var_122_bool;
	var_120_object->GetLocator(var_111_string, var_122_bool, var_118_cvector, var_119_cvector);
	var_118_cvector = var_110_cvector;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_176(bool var_19_bool, string var_26_string)
{
	if(var_19_bool != 0)
		return 2;
	int var_63_int;
	@GetVariable("map_chertez_state", var_63_int);
	int var_66_int;
	func_1010(var_66_int);
	if(var_66_int == 0) {
		var_26_string = "ui\ui_chertez_danko_bg.tex";
		bool var_72_bool = false;
		if(var_63_int >= 1) {
			if(var_63_int <= 6)
				var_72_bool = true;
		}
		if(var_72_bool != 0)
			var_26_string = ("ui\ui_chertez_danko_" + var_63_int) + ".tex";
	} else {
			int var_80_int;
			func_1010(var_80_int);
			if(!(var_80_int == 1)) goto Label_227;
			var_26_string = "ui\ui_chertez_burah_bg.tex";
			bool var_83_bool = false;
			if(var_63_int >= 1) {
				if(var_63_int <= 6)
					var_83_bool = true;
			}
			if(var_83_bool != 0)
				var_26_string = ("ui\ui_chertez_burah_" + var_63_int) + ".tex";
	}
Label_242:
	for(;;) {
		@LoadImage(var_26_string);
		var_19_bool = true;
		return 2;

	}
	
Label_227:
	var_26_string = "ui\ui_chertez_klara_bg.tex";
	bool var_91_bool = false;
	if(var_63_int >= 1) {
		if(var_63_int <= 6)
			var_91_bool = true;
	}
	if(var_91_bool == 0) goto Label_242;
	var_26_string = ("ui\ui_chertez_klara_" + var_63_int) + ".tex";
}


// @pe
void func_304(int var_3_int, float var_12_float, float var_14_float, int var_140_int, int var_141_int)
{
	var_140_int = ((var_141_int - var_12_float) * var_14_float) + (var_3_int / 2);
}


// @pe
void func_822(int var_0_int, float var_14_float, float var_38_float)
{
	if(var_18_bool != 0)
		return 0;
	if((var_14_float * var_38_float) > 2.0)
		var_14_float = 2.0;
	if((var_0_int + -1) < 0)
		var_0_int = 0;
}


// @pe
void func_311(int var_4_int, float var_13_float, float var_14_float, int var_146_int, int var_147_int)
{
	var_146_int = ((var_147_int - var_13_float) * var_14_float) + (var_4_int / 2);
}


void func_699(bool var_17_bool, object var_24_object, cvector var_25_cvector)
{
	int var_182_int; int var_183_int; float var_184_float;
	if(!var_17_bool) { //@nz
		@GetPlayerMapAngle(var_184_float);
		int var_186_int; int var_187_int;
		var_188_float = GetByIndex(var_25_cvector, 0);
		var_188_float = var_187_int;
		func_304(var_182_int, var_183_int, var_184_float, var_186_int, var_187_int);
		var_186_int = var_182_int;
		int var_189_int; int var_190_int;
		var_191_float = GetByIndex(var_25_cvector, 2);
		var_191_float = var_190_int;
		func_311(var_182_int, var_183_int, var_184_float, var_189_int, var_190_int);
		var_189_int = var_183_int;
		@ClientToScreen(var_182_int, var_183_int);
		var_24_object->Blit(var_182_int, var_183_int, var_184_float); //@t
	} else {
		int var_192_int; int var_193_int;
		var_194_float = GetByIndex(var_25_cvector, 0);
		var_194_float = var_193_int;
		func_304(var_182_int, var_183_int, var_184_float, var_192_int, var_193_int);
		var_192_int = var_182_int;
		int var_195_int; int var_196_int;
		var_197_float = GetByIndex(var_25_cvector, 2);
		var_197_float = var_196_int;
		func_311(var_182_int, var_183_int, var_184_float, var_195_int, var_196_int);
		var_195_int = var_183_int;
		@ClientToScreen(var_182_int, var_183_int);
		var_24_object->Blit(var_182_int, var_183_int); //@t
	}
	
}


void func_1084(bool var_91_bool)
{
	int var_96_int;
	func_1016(var_96_int);
	int var_94_int;
	var_96_int = var_94_int;
	int var_95_int;
	@GetVariable(("RMap" + var_94_int), var_95_int);
	var_91_bool = var_95_int != 0;
}


// @pe
void func_838(int var_0_int, float var_14_float, float var_47_float)
{
	if(var_18_bool != 0)
		return 0;
	var_49_float = GlobalVars[0];
	if((var_14_float / var_47_float) < var_49_float) {
		var_51_float = GlobalVars[0];
		var_14_float = var_51_float;
		if((var_0_int + 1) > 2)
			var_0_int = 2;
	}
}


void func_604(int var_3_int, int var_4_int, float var_12_float, float var_13_float, float var_14_float, object var_22_object, object var_23_object)
{
	int var_61_int;
	bool var_62_bool;
	func_0(var_61_int, var_62_bool);
	if(var_62_bool != 0) {
	}
	float var_55_float = var_14_float;
	var_74_float = GlobalVars[0];
	if(var_55_float < var_74_float) {
		var_76_float = GlobalVars[0];
		var_76_float = var_55_float;
	}
	int var_56_int = var_12_float - ((var_3_int / var_55_float) / 2);
	int var_57_int = var_12_float + ((var_3_int / var_55_float) / 2);
	int var_58_int = var_13_float - ((var_4_int / var_55_float) / 2);
	int var_59_int = var_13_float + ((var_4_int / var_55_float) / 2);
	int var_60_int = 0;
	var_61_int = 0;
	@ClientToScreen(var_60_int, var_61_int);
	@RenderMap(var_60_int, var_61_int, (var_3_int + var_60_int), (var_4_int + var_61_int), var_56_int, var_58_int, var_57_int, var_59_int);
	bool var_91_bool;
	func_1084(var_91_bool);
	if(var_91_bool != 0)
		@RenderRegions(var_60_int, var_61_int, (var_3_int + var_60_int), (var_4_int + var_61_int), var_56_int, var_58_int, var_57_int, var_59_int);
	if(var_23_object != 0)
		var_23_object->Render(var_60_int, var_61_int, (var_3_int + var_60_int), (var_4_int + var_61_int), var_56_int, var_58_int, var_57_int, var_59_int); //@t
	func_532(var_22_object, 3);
	func_532(var_22_object, 0);
	func_532(var_22_object, 1);
	func_699(var_59_int, var_60_int, var_61_int);
}


void func_1010(int var_66_int)
{
	int var_68_int;
	@GetVariable("branch", var_68_int);
	var_68_int = var_66_int;
}


void func_246(void)
{
	int var_132_int;
	
	for(;;) {
		if(0 < 16) {
			bool var_135_bool; int var_136_int;
			func_1031(var_135_bool, var_136_int);
			if(var_135_bool != 0) {
				@SetRegionColor(var_136_int, 0.5, 0.5, 0.5, 0.0);
			} else {
			bool var_152_bool; int var_153_int;
			func_1043(var_152_bool, var_153_int);
			if(var_152_bool != 0) {
				@SetRegionColor(var_153_int, 0.5, 0.0, 0.0, 0.5);
				goto Label_286;
			}
			bool var_165_bool; int var_166_int;
			var_132_int = var_166_int;
			func_1055(var_165_bool, var_166_int);
			if(var_165_bool == 0) goto Label_286;
			@SetRegionColor(var_132_int, 0.0, 0.0, 0.0, 0.5);
		}
		}
	Label_286:
		var_132_int += 1;
	}
	
}


void func_1016(int var_40_int)
{
	float var_42_float;
	@GetGameTime(var_42_float);
	var_40_int = 1 + (var_42_float / 24);
}


