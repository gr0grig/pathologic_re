maintask task_0
{
	void init(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object)
	{
		var_1_int = 0;
		@GetWindowSize(var_3_int, var_4_int);
		@EnableClipping(true);
		@SetOwnerDraw(true);
		func_15(var_5_object);
		@ProcessEvents();
	}

	void OnUse(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object)
	{
		int var_6_int; int var_7_int;
		int var_8_int;
		func_77(var_6_int, var_7_int, var_8_int, var_1_int);
		var_8_int = var_7_int;
		int var_346_int; int var_347_int;
		var_7_int = var_347_int;
		func_139(var_6_int, var_7_int, var_346_int, var_347_int);
		var_346_int = var_7_int;
		if(((var_7_int - var_1_int) - var_4_int) < 0)
			var_2_int = 0;
	}

	// @pe
	void event_200(bool var_0_bool, int var_1_int, int var_2_int, int var_3_int, int var_4_int, object var_5_object, int var_6_int, string var_7_string, object var_8_object)
	{
		if(var_7_string == "scrollbar") {
			var_11_int = -var_2_int;
			var_1_int = (var_11_int * var_6_int) / 100;
		}
	}

}


void func_1128(bool var_375_bool, int var_376_int)
{
	int var_378_int;
	@GetVariable(("vol_" + var_376_int), var_378_int);
	var_375_bool = (var_378_int & 4) != 0;
}


void func_924(object var_16_object, object var_17_object)
{
	object var_19_object;
	var_16_object->add(1);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_alexandr@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(2);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("shouse1_kabak@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(3);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_anna@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(4);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_bigvad@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(6);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_georg@door1");
		var_19_object->add("cot_georg@door2");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(9);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_julia@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(10);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_kapella@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(11);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_katerina@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(13);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_lara@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(18);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("vagon_mishka@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(19);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("house_vlad@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(20);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("warehouse_notkin@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(21);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("dt_house_1_04@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(22);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("house_petr@door1");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(24);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("house_spi4ka@door1");
		var_19_object->add("house_spi4ka@door2");
		var_17_object->add(var_19_object);
	}
	var_16_object->add(26);
	if(var_17_object != 0) {
		@CreateStringVector(var_19_object);
		var_19_object->add("cot_viktor@door1");
		var_19_object->add("cot_viktor@door2");
		var_17_object->add(var_19_object);
	}
}
EMIT "Stack[-1] = 0";


void func_139(int var_3_int, object var_5_object, int var_346_int, int var_347_int)
{
	int var_355_int; int var_358_int; int var_359_int; string var_360_string; int var_361_int;
	var_347_int = var_355_int;
	int var_356_int;
	var_5_object->size(var_356_int); //@t
	int var_357_int = 0;
	
	for(;;) {
		if(var_357_int < var_356_int) {
			var_5_object->get(var_358_int, var_357_int); //@t
			bool var_363_bool; int var_364_int;
			var_358_int = var_364_int;
			func_1148(var_363_bool, var_364_int);
			if(var_363_bool != 0) {
				string var_372_string; int var_373_int;
				var_358_int = var_373_int;
				func_566(var_372_string, var_373_int);
				@Blit(var_372_string, 0, var_355_int);
				bool var_375_bool; int var_376_int;
				var_358_int = var_376_int;
				func_1128(var_375_bool, var_376_int);
				if(var_375_bool != 0)
					@Blit("birdmask", 0, var_355_int);
				int var_386_int; int var_387_int;
				var_358_int = var_387_int;
				func_208(var_386_int, var_387_int);
				var_386_int = var_359_int;
				@GetStringByID(var_360_string, var_359_int);
				@PrintInWidth(var_361_int, "default", (var_3_int / 2), var_355_int, (var_3_int / 2), var_360_string, 1.0, 1.0, 1.0);
				if(var_361_int > 140)
					var_355_int += var_361_int;
				else
					var_355_int += 140;
			var_355_int = var_346_int;
			}
		}
		var_357_int += 1;
	}
	
}


void func_77(int var_3_int, object var_5_object, int var_8_int, int var_9_int)
{
	int var_18_int; int var_21_int; int var_22_int; string var_23_string; int var_24_int; int var_25_int;
	var_9_int = var_18_int;
	int var_19_int;
	var_5_object->size(var_19_int); //@t
	int var_20_int = 0;
	
	for(;;) {
		if(var_20_int < var_19_int) {
			var_5_object->get(var_21_int, var_20_int); //@t
			bool var_27_bool; int var_28_int;
			var_21_int = var_28_int;
			func_1138(var_27_bool, var_28_int);
			if(var_27_bool != 0) {
				string var_36_string; int var_37_int;
				var_21_int = var_37_int;
				func_566(var_36_string, var_37_int);
				@Blit(var_36_string, 0, var_18_int);
				int var_181_int; int var_182_int;
				var_21_int = var_182_int;
				func_208(var_181_int, var_182_int);
				var_181_int = var_22_int;
				@GetStringByID(var_23_string, var_22_int);
				@PrintInWidth(var_24_int, "default", (var_3_int / 2), var_18_int, (var_3_int / 2), var_23_string, 1.0, 1.0, 1.0);
				if(var_24_int > 140)
					var_18_int += var_24_int;
				else
					var_18_int += 140;
			@PrintInWidth(var_25_int, "default", ((var_3_int / 2) - 20), var_18_int, var_3_int, "***", 1.0, 1.0, 1.0);
			var_18_int += var_25_int;
			var_18_int = var_8_int;
			}
		}
		var_20_int += 1;
	}
	
}


void func_15(object var_5_object)
{
	int var_15_int;
	@CreateIntVector(var_5_object);
	object var_12_object = null;
	object var_17_object;
	var_12_object = var_17_object;
	func_924(var_5_object, var_17_object);
	int var_13_int;
	var_5_object->size(var_13_int); //@t
	int var_14_int = 0;
	
	for(;;) {
		if(var_14_int < var_13_int) {
			var_5_object->get(var_15_int, var_14_int); //@t
			bool var_72_bool; int var_73_int;
			var_15_int = var_73_int;
			func_1138(var_72_bool, var_73_int);
			if(var_72_bool != 0) {
				string var_81_string; int var_82_int;
				var_15_int = var_82_int;
				func_566(var_81_string, var_82_int);
				@LoadImage(var_81_string);
			} else {
			bool var_226_bool; int var_227_int;
			var_15_int = var_227_int;
			func_1148(var_226_bool, var_227_int);
			if(var_226_bool == 0) goto Label_54;
			string var_235_string; int var_236_int;
			var_15_int = var_236_int;
			func_566(var_235_string, var_236_int);
			@LoadImage(var_235_string);
		}
		}
	Label_54:
		var_14_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_208(int var_181_int, int var_182_int)
{
	if(var_182_int == 1) {
		var_181_int = 2854;
		return 0;
	}
	if(var_182_int == 2) {
		var_181_int = 2855;
		return 0;
	}
	if(var_182_int == 3) {
		var_181_int = 2856;
		return 0;
	}
	if(var_182_int == 4) {
		var_181_int = 2857;
		return 0;
	}
	if(var_182_int == 5) {
		var_181_int = 2858;
		return 0;
	}
	if(var_182_int == 6) {
		var_181_int = 2859;
		return 0;
	}
	if(var_182_int == 7) {
		var_181_int = 2860;
		return 0;
	}
	if(var_182_int == 8) {
		var_181_int = 2861;
		return 0;
	}
	if(var_182_int == 9) {
		var_181_int = 2862;
		return 0;
	}
	if(var_182_int == 10) {
		var_181_int = 2863;
		return 0;
	}
	if(var_182_int == 11) {
		var_181_int = 2864;
		return 0;
	}
	if(var_182_int == 12) {
		var_181_int = 2865;
		return 0;
	}
	if(var_182_int == 13) {
		var_181_int = 2866;
		return 0;
	}
	if(var_182_int == 14) {
		var_181_int = 2867;
		return 0;
	}
	if(var_182_int == 15) {
		var_181_int = 2868;
		return 0;
	}
	if(var_182_int == 16) {
		var_181_int = 2869;
		return 0;
	}
	if(var_182_int == 17) {
		var_181_int = 2870;
		return 0;
	}
	if(var_182_int == 18) {
		var_181_int = 2871;
		return 0;
	}
	if(var_182_int == 19) {
		var_181_int = 2872;
		return 0;
	}
	if(var_182_int == 20) {
		var_181_int = 2873;
		return 0;
	}
	if(var_182_int == 21) {
		var_181_int = 2874;
		return 0;
	}
	if(var_182_int == 22) {
		var_181_int = 2875;
		return 0;
	}
	if(var_182_int == 23) {
		var_181_int = 2876;
		return 0;
	}
	if(var_182_int == 24) {
		var_181_int = 2877;
		return 0;
	}
	if(var_182_int == 25) {
		var_181_int = 2878;
		return 0;
	}
	if(var_182_int == 26) {
		var_181_int = 2879;
		return 0;
	}
	if(var_182_int == 27) {
		var_181_int = 3340;
		return 0;
	}
	if(var_182_int == 28) {
		var_181_int = 3341;
		return 0;
	}
	if(var_182_int == 29) {
		var_181_int = 3342;
		return 0;
	}
	if(var_182_int == 30) {
		var_181_int = 3343;
		return 0;
	}
	if(var_182_int == 31) {
		var_181_int = 3344;
		return 0;
	}
	if(var_182_int == 32) {
		var_181_int = 3345;
		return 0;
	}
	if(var_182_int == 33) {
		var_181_int = 3346;
		return 0;
	}
	if(var_182_int == 34) {
		var_181_int = 3347;
		return 0;
	}
	if(var_182_int == 35) {
		var_181_int = 3348;
		return 0;
	}
	if(var_182_int == 36) {
		var_181_int = 3349;
		return 0;
	}
	if(var_182_int == 37) {
		var_181_int = 3350;
		return 0;
	}
	if(var_182_int == 38) {
		var_181_int = 3351;
		return 0;
	}
	if(var_182_int == 39) {
		var_181_int = 3352;
		return 0;
	}
	if(var_182_int == 40) {
		var_181_int = 3353;
		return 0;
	}
	if(var_182_int == 42) {
		var_181_int = 3354;
		return 0;
	}
	if(var_182_int == 43) {
		var_181_int = 3355;
		return 0;
	}
	if(var_182_int == 44) {
		var_181_int = 4029;
		return 0;
	}
	if(var_182_int == 46) {
		var_181_int = 4031;
		return 0;
	}
	if(var_182_int == 47) {
		var_181_int = 4032;
		return 0;
	}
	if(var_182_int == 48) {
		var_181_int = 6270;
		return 0;
	}
	if(var_182_int == 49) {
		var_181_int = 6271;
		return 0;
	}
	if(var_182_int == 50) {
		var_181_int = 6272;
		return 0;
	}
	if(var_182_int == 51) {
		var_181_int = 6273;
		return 0;
	}
	if(var_182_int == 52) {
		var_181_int = 6274;
		return 0;
	}
	if(var_182_int == 53) {
		var_181_int = 6275;
		return 0;
	}
	if(var_182_int == 54) {
		var_181_int = 6276;
		return 0;
	}
	if(var_182_int == 55) {
		var_181_int = 6277;
		return 0;
	}
	if(var_182_int == 56) {
		var_181_int = 6278;
		return 0;
	}
	if(var_182_int == 57) {
		var_181_int = 6279;
		return 0;
	}
	if(var_182_int == 58) {
		var_181_int = 6280;
		return 0;
	}
	if(var_182_int == 59) {
		var_181_int = 6281;
		return 0;
	}
	if(var_182_int == 60) {
		var_181_int = 6282;
		return 0;
	}
	if(var_182_int == 61) {
		var_181_int = 6283;
		return 0;
	}
	if(var_182_int == 62) {
		var_181_int = 6284;
		return 0;
	}
	if(var_182_int == 63) {
		var_181_int = 6285;
		return 0;
	}
	if(var_182_int == 64) {
		var_181_int = 6286;
		return 0;
	}
	if(var_182_int == 65) {
		var_181_int = 6287;
		return 0;
	}
	if(var_182_int == 66) {
		var_181_int = 11961;
		return 0;
	}
	if(var_182_int == 67) {
		var_181_int = 12582;
		return 0;
	}
	if(var_182_int == 68) {
		var_181_int = 12583;
		return 0;
	}
	if(var_182_int == 69) {
		var_181_int = 12611;
		return 0;
	}
	if(var_182_int == 70) {
		var_181_int = 13334;
		return 0;
	}
	if(var_182_int == 71) {
		var_181_int = 14839;
		return 0;
	}
	if(var_182_int == 72) {
		var_181_int = 14840;
		return 0;
	}
	if(var_182_int == 73) {
		var_181_int = 14841;
		return 0;
	}
	var_181_int = -1;
}


void func_1138(bool var_72_bool, int var_73_int)
{
	int var_75_int;
	@GetVariable(("vol_" + var_73_int), var_75_int);
	var_72_bool = (var_75_int & 2) != 0;
}


// @pe
void func_566(string var_81_string, int var_82_int)
{
	if(var_82_int == 1) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 2) {
		var_81_string = "ui/NPC_Andrei.png";
		return 0;
	}
	if(var_82_int == 3) {
		var_81_string = "ui/NPC_Anna.png";
		return 0;
	}
	if(var_82_int == 4) {
		var_81_string = "ui/NPC_BigVlad.png";
		return 0;
	}
	if(var_82_int == 5) {
		var_81_string = "ui/NPC_Eva.png";
		return 0;
	}
	if(var_82_int == 6) {
		var_81_string = "ui/NPC_Georg.png";
		return 0;
	}
	if(var_82_int == 7) {
		var_81_string = "ui/NPC_Grif.png";
		return 0;
	}
	if(var_82_int == 8) {
		var_81_string = "ui/NPC_Han.png";
		return 0;
	}
	if(var_82_int == 9) {
		var_81_string = "ui/NPC_Julia.png";
		return 0;
	}
	if(var_82_int == 10) {
		var_81_string = "ui/NPC_Kapella.png";
		return 0;
	}
	if(var_82_int == 11) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 12) {
		var_81_string = "ui/NPC_Klara.png";
		return 0;
	}
	if(var_82_int == 13) {
		var_81_string = "ui/NPC_Lara.png";
		return 0;
	}
	if(var_82_int == 14) {
		var_81_string = "ui/NPC_Laska.png";
		return 0;
	}
	if(var_82_int == 15) {
		var_81_string = "ui/NPC_Maria.png";
		return 0;
	}
	if(var_82_int == 16) {
		var_81_string = "ui/NPC_Mark.png";
		return 0;
	}
	if(var_82_int == 17) {
		var_81_string = "ui/NPC_Mat.png";
		return 0;
	}
	if(var_82_int == 18) {
		var_81_string = "ui/NPC_Mishka.png";
		return 0;
	}
	if(var_82_int == 19) {
		var_81_string = "ui/NPC_MladVlad.png";
		return 0;
	}
	if(var_82_int == 20) {
		var_81_string = "ui/NPC_Notkin.png";
		return 0;
	}
	if(var_82_int == 21) {
		var_81_string = "ui/NPC_Ospina.png";
		return 0;
	}
	if(var_82_int == 22) {
		var_81_string = "ui/NPC_Petr.png";
		return 0;
	}
	if(var_82_int == 23) {
		var_81_string = "ui/NPC_Rubin.png";
		return 0;
	}
	if(var_82_int == 24) {
		var_81_string = "ui/NPC_Spi4ka.png";
		return 0;
	}
	if(var_82_int == 25) {
		var_81_string = "ui/NPC_Starshina.png";
		return 0;
	}
	if(var_82_int == 26) {
		var_81_string = "ui/NPC_Viktor.png";
		return 0;
	}
	if(var_82_int == 27) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 28) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 29) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 30) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 31) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 32) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 33) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 34) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 35) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 36) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 37) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 38) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 39) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 40) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 42) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 43) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 44) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 46) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 47) {
		var_81_string = "ui/NPC_Bakalavr.png";
		return 0;
	}
	if(var_82_int == 48) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 49) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 50) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 51) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 52) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 53) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 54) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 55) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 56) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 57) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 58) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 59) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 60) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 61) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 62) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 63) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 64) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 65) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 66) {
		var_81_string = "ui/NPC_Burah.png";
		return 0;
	}
	if(var_82_int == 67) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 68) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 69) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 70) {
		var_81_string = "ui/NPC_Aglaja.png";
		return 0;
	}
	if(var_82_int == 71) {
		var_81_string = "ui/NPC_None.png";
		return 0;
	}
	if(var_82_int == 72) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	if(var_82_int == 73) {
		var_81_string = "ui/NPC_Black.png";
		return 0;
	}
	var_81_string = "";
}


void func_1148(bool var_226_bool, int var_227_int)
{
	int var_229_int;
	@GetVariable(("vol_" + var_227_int), var_229_int);
	var_226_bool = (var_229_int & 8) != 0;
}


