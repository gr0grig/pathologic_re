// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 2);
		@SetSaveProperty(0, 2);
		func_52();
		func_7945();
		func_8720();
		func_10991();
		float var_4580_float;
		float var_4581_float;
		func_284(var_4581_float);
		var_4581_float = var_4580_float;
		func_11808();
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_3_int;
		iID = var_3_int;
		float var_4_float;
		fTime = var_4_float;
		func_8665(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4262_bool; int var_4263_int; float var_4264_float;
		iID = var_4263_int;
		fTime = var_4264_float;
		func_10930(var_4263_int, var_4264_float);
		if(var_4262_bool != 0)
			return 0;
		int var_4655_int; float var_4656_float;
		iID = var_4655_int;
		fTime = var_4656_float;
		func_11026(var_4655_int, var_4656_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7645(var_4_int - 1);
	}
Label_7533:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7533;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7722(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_456(var_24_int);
		var_39_object = GlobalVars[13];
		var_39_object->size(var_13_int);
		bool var_40_bool = false;
		if(var_12_int >= 0) {
			if(var_12_int < var_13_int)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			var_44_object->get(var_14_object, var_12_int);
			object var_45_object;
			var_14_object = var_45_object;
			func_320(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_486(var_76_int);
				var_88_object = GlobalVars[13];
				var_88_object->size(var_16_int);
				bool var_89_bool = false;
				if(var_15_int >= 0) {
					if(var_15_int < var_16_int)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					var_93_object = GlobalVars[13];
					var_93_object->get(var_17_object, var_15_int);
					object var_94_object;
					var_17_object = var_94_object;
					func_320(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_74(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_304();
			} else if(var_0_string == "nosepia") {
				func_309();
			}
			}
	}
	goto Label_7644;
	
Label_7644:
	for(;;) {

	}
	
}


// @pe
void func_6146(int var_1607_int, int var_1608_int, object var_1609_object, object var_1610_object, object var_1611_object, object var_1612_object)
{
	if(var_1608_int == 0) {
		func_810(9, false);
		func_827(9, false, 1);
		int var_1620_int; int var_1621_int; object var_1622_object; object var_1623_object; object var_1624_object;
		var_1620_int = 9;
		var_1607_int = var_1621_int;
		var_1609_object = var_1622_object;
		var_1610_object = var_1623_object;
		var_1611_object = var_1624_object;
		func_636(var_1621_int, var_1622_object, var_1623_object, var_1624_object);
		object var_1625_object;
		var_1612_object = var_1625_object;
		func_320(var_1625_object, 0);
		func_884(9, false, 7);
		func_946(9, false, 7);
	}
	int var_1634_int;
	var_1608_int = var_1634_int;
	func_1064(9, var_1634_int);
	int var_1636_int; int var_1637_int;
	var_1607_int = var_1636_int;
	var_1608_int = var_1637_int;
	func_1621(9, var_1636_int, var_1637_int);
}


void func_10246(void)
{
	object var_5468_object;
	func_10907(var_5468_object);
	object var_5466_object;
	var_5468_object = var_5466_object;
	object var_5467_object;
	var_5466_object->FindMark(var_5467_object, "k5q03LaskaGotoAlbinos");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q01AlexandrGotoMladVlad");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q01RubinGotoGeorg");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q04KapellaGotoMaria");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q04MariaGotoDanko");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q02KabatchikGotoAlexandr");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q02KaterinaGotoPetr");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	var_5466_object->FindMark(var_5467_object, "k5q02PetrGotoAndrei");
	if(var_5467_object != 0)
		var_5467_object->Remove();
	bool var_5485_bool;
	func_10882(var_5485_bool, 390);
	bool var_5487_bool;
	func_10882(var_5487_bool, 397);
	bool var_5489_bool;
	func_10882(var_5489_bool, 405);
	bool var_5491_bool;
	func_10882(var_5491_bool, 740);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1034(int var_1324_int, int var_1325_int)
{
	bool var_1326_bool = true;
	var_1328_bool = var_1325_int >= 20;
	if(var_1328_bool != 1) {
		bool var_1329_bool = false;
		if(var_1325_int >= 6) {
			if(var_1325_int < 10)
				var_1329_bool = true;
		}
		if(var_1329_bool != 1)
			var_1326_bool = false;
	}
	if(var_1326_bool != 0) {
		int var_1334_int;
		var_1324_int = var_1334_int;
		func_793(var_1334_int, true);
	} else {
		int var_1336_int;
		var_1324_int = var_1336_int;
		func_793(var_1336_int, false);
	}
	
}


void func_12301(void)
{
}


// @pe
void func_12302(bool var_154_bool, int var_155_int)
{
	if(var_155_int == 6) {
		var_154_bool = false;
		return 0;
	}
	bool var_158_bool;
	func_298(var_158_bool, 4);
	if(var_158_bool != 0) {
		if(var_155_int == 15) {
			var_154_bool = false;
			return 0;
		}
		if(var_155_int == 9) {
			var_154_bool = false;
			return 0;
		}
	} else {
			bool var_170_bool;
			func_298(var_170_bool, 5);
			if(var_170_bool == 0) goto Label_12335;
			if(var_155_int == 15) {
				var_154_bool = false;
				return 0;
			}
	}
Label_12345:
	for(;;) {
		var_154_bool = true;
		return 0;

	}
	
Label_12335:
	bool var_174_bool;
	func_298(var_174_bool, 6);
	if(var_174_bool == 0) goto Label_12345;
	if(!(var_155_int == 15)) goto Label_12345;
	var_154_bool = false;
}


// @pe
void func_1064(int var_722_int, int var_723_int)
{
	bool var_724_bool = true;
	bool var_725_bool = true;
	var_727_bool = var_723_int >= 22;
	if(var_727_bool != 1) {
		var_729_bool = var_723_int < 4;
		if(var_729_bool != 1)
			var_725_bool = false;
	}
	if(var_725_bool != 1) {
		bool var_730_bool = false;
		if(var_723_int >= 6) {
			if(var_723_int < 8)
				var_730_bool = true;
		}
		if(var_730_bool != 1)
			var_724_bool = false;
	}
	if(var_724_bool != 0) {
		int var_735_int;
		var_722_int = var_735_int;
		func_793(var_735_int, true);
	} else {
		int var_746_int;
		var_722_int = var_746_int;
		func_793(var_746_int, false);
	}
	
}


void func_8237(void)
{
	object var_4436_object;
	@GetMainOutdoorScene(var_4436_object);
	var_4437_object = GlobalVars[0];
	object var_4438_object; object var_4439_object;
	var_4436_object = var_4439_object;
	func_7799(var_4438_object, var_4439_object, 1);
	var_4438_object = var_4437_object;
	GlobalVars[0] = var_4437_object;
	var_4460_object = GlobalVars[1];
	object var_4461_object; object var_4462_object;
	var_4436_object = var_4462_object;
	func_7799(var_4461_object, var_4462_object, 2);
	var_4461_object = var_4460_object;
	GlobalVars[1] = var_4460_object;
	var_4464_object = GlobalVars[2];
	object var_4465_object; object var_4466_object;
	var_4436_object = var_4466_object;
	func_7799(var_4465_object, var_4466_object, 3);
	var_4465_object = var_4464_object;
	GlobalVars[2] = var_4464_object;
	var_4468_object = GlobalVars[3];
	object var_4469_object; object var_4470_object;
	var_4436_object = var_4470_object;
	func_7799(var_4469_object, var_4470_object, 4);
	var_4469_object = var_4468_object;
	GlobalVars[3] = var_4468_object;
	var_4472_object = GlobalVars[4];
	object var_4473_object; object var_4474_object;
	var_4436_object = var_4474_object;
	func_7799(var_4473_object, var_4474_object, 5);
	var_4473_object = var_4472_object;
	GlobalVars[4] = var_4472_object;
	var_4476_object = GlobalVars[5];
	object var_4477_object; object var_4478_object;
	var_4436_object = var_4478_object;
	func_7799(var_4477_object, var_4478_object, 6);
	var_4477_object = var_4476_object;
	GlobalVars[5] = var_4476_object;
	var_4480_object = GlobalVars[12];
	object var_4481_object;
	func_126(var_4481_object);
	var_4481_object = var_4480_object;
	GlobalVars[12] = var_4480_object;
	func_7810(false);
	func_8520();
	func_8595();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5167(int var_3688_int, int var_3689_int, object var_3690_object, object var_3691_object, object var_3692_object, object var_3693_object)
{
	if(var_3689_int == 0) {
		func_810(3, false);
		func_827(3, false, 1);
		int var_3702_int; object var_3703_object; object var_3704_object; object var_3705_object;
		var_3688_int = var_3702_int;
		var_3690_object = var_3703_object;
		var_3691_object = var_3704_object;
		var_3692_object = var_3705_object;
		func_734(3, var_3702_int, var_3703_object, var_3704_object, var_3705_object);
		object var_3706_object;
		var_3693_object = var_3706_object;
		func_320(var_3706_object, 2);
		func_884(3, false, 7);
		func_946(3, true, 7);
	}
	func_793(3, false);
	int var_3717_int; int var_3718_int;
	var_3688_int = var_3717_int;
	var_3689_int = var_3718_int;
	func_3890(3, var_3717_int, var_3718_int);
}


// @pe
void func_7219(int var_3008_int, int var_3009_int, object var_3010_object, object var_3011_object, object var_3012_object, object var_3013_object)
{
	if(var_3009_int == 0) {
		func_810(14, true);
		func_827(14, true, 1);
		int var_3022_int; object var_3023_object; object var_3024_object; object var_3025_object;
		var_3008_int = var_3022_int;
		var_3010_object = var_3023_object;
		var_3011_object = var_3024_object;
		var_3012_object = var_3025_object;
		func_655(14, var_3022_int, var_3023_object, var_3024_object, var_3025_object);
		object var_3026_object;
		var_3013_object = var_3026_object;
		func_320(var_3026_object, 1);
		func_884(14, true, 5);
		func_946(14, false, 5);
	}
	func_793(14, false);
	int var_3037_int; int var_3038_int;
	var_3008_int = var_3037_int;
	var_3009_int = var_3038_int;
	func_2627(14, var_3037_int, var_3038_int);
}


void func_52(void)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	object var_10_object;
	@GetMainOutdoorScene(var_10_object);
	if(!var_10_object) //@nz
		@Trace("Starting scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_10_object->GetLocator("pt_birth_Klara", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


// @pe
void func_6198(int var_2843_int, int var_2844_int, object var_2845_object, object var_2846_object, object var_2847_object, object var_2848_object)
{
	if(var_2844_int == 0) {
		func_810(9, true);
		func_827(9, true, 1);
		int var_2857_int; object var_2858_object; object var_2859_object; object var_2860_object;
		var_2843_int = var_2857_int;
		var_2845_object = var_2858_object;
		var_2846_object = var_2859_object;
		var_2847_object = var_2860_object;
		func_655(9, var_2857_int, var_2858_object, var_2859_object, var_2860_object);
		object var_2861_object;
		var_2848_object = var_2861_object;
		func_320(var_2861_object, 1);
		func_884(9, true, 7);
		func_946(9, false, 7);
	}
	func_793(9, false);
	int var_2872_int; int var_2873_int;
	var_2843_int = var_2872_int;
	var_2844_int = var_2873_int;
	func_2807(9, var_2872_int, var_2873_int);
}


void func_12347(int var_4638_int, int var_4639_int)
{
	object var_4642_object;
	@Trace((("Updating game " + var_4638_int) + " ") + var_4639_int);
	bool var_4648_bool = false;
	if(var_4638_int == 7) {
		if(var_4639_int == 0)
			var_4648_bool = true;
	}
	if(var_4648_bool != 0) {
		@GetSceneByName(var_4642_object, "sobor");
		@Trigger(var_4642_object, "aglaja");
		var_4642_object = null;
	}
}


void func_74(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1101(int var_1798_int, int var_1799_int)
{
	bool var_1800_bool = true;
	var_1802_bool = var_1799_int >= 22;
	if(var_1802_bool != 1) {
		var_1804_bool = var_1799_int < 6;
		if(var_1804_bool != 1)
			var_1800_bool = false;
	}
	if(var_1800_bool != 0) {
		int var_1805_int;
		var_1798_int = var_1805_int;
		func_793(var_1805_int, true);
	} else {
		int var_1807_int;
		var_1798_int = var_1807_int;
		func_793(var_1807_int, false);
	}
	
}


void func_81(bool var_583_bool, object var_584_object, string var_585_string)
{
	var_590_bool = IsFuncExist(var_584_object, "HasProperty", 2);
	if(!var_590_bool) { //@nz
		var_583_bool = false;
		return 2;
	}
	bool var_587_bool;
	var_584_object->HasProperty(var_585_string, var_587_bool);
	var_587_bool = var_583_bool;
}


void func_12373(int var_23_int)
{
	int var_35_int; int var_36_int; int var_38_int; int var_39_int; int var_40_int; bool var_41_bool; int var_42_int; int var_43_int;
	@Trace("Disease update");
	int var_34_int = 0;
	if(var_23_int == 0) {
		var_34_int = 0;
	} else {
										if(var_23_int == 1)
											var_34_int = 0;
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_34_int);
			if((var_23_int + 1) < 6) {

				for(;;) {
					if(0 < 16) {
						bool var_59_bool; int var_60_int;
						var_35_int = var_60_int;
						func_444(var_59_bool, var_60_int);
						if(var_59_bool != 0) {
							int var_71_int;
							var_35_int = var_71_int;
							func_486(var_71_int);
						} else {
						bool var_84_bool; int var_85_int;
						var_35_int = var_85_int;
						func_474(var_84_bool, var_85_int);
						if(var_84_bool != 0) {
							int var_93_int;
							var_35_int = var_93_int;
							func_426(var_93_int);
					}
						if(var_23_int == 2) {
							@Trace("Special diseased region: 5");
							func_456(5);
						} else {
							if(var_23_int == 3) {
								@Trace("Special diseased region: 1");
								func_456(1);
			}
							int var_187_int;
							func_12113(var_187_int, (var_23_int + 1));
							var_187_int = var_39_int;
							if(var_39_int != -1) {
								int var_204_int;
								var_39_int = var_204_int;
								func_456(var_204_int);
							}

							while(0 < 16) {
								bool var_207_bool; int var_208_int;
								var_40_int = var_208_int;
								func_474(var_207_bool, var_208_int);
								if(var_207_bool != 0) {
									int var_209_int;
									var_40_int = var_209_int;
									func_426(var_209_int);
								}
								var_40_int += 1;
							}

							int var_211_int; int var_212_int;
							var_23_int = var_212_int;
							func_12113(var_211_int, var_212_int);
							var_211_int = var_39_int;
							if(var_39_int != -1) {
								bool var_215_bool; int var_216_int;
								var_23_int = var_216_int;
								func_12105(var_215_bool, var_216_int);
								var_215_bool = var_41_bool;
								if(var_41_bool != 0) {
									int var_223_int;
									var_39_int = var_223_int;
									func_456(var_223_int);
								} else {
										int var_277_int;
										var_39_int = var_277_int;
										func_486(var_277_int);
		}

									for(;;) {
										if(!(0 < 16)) goto Label_12645;
										bool var_280_bool = true;
										bool var_281_bool; int var_282_int;
										var_43_int = var_282_int;
										func_444(var_281_bool, var_282_int);
										if(var_281_bool != 1) {
											bool var_283_bool; int var_284_int;
											var_43_int = var_284_int;
											func_474(var_283_bool, var_284_int);
											if(var_283_bool != 1)
												var_280_bool = false;
										}
										if(var_280_bool != 0) {
											int var_285_int;
											var_43_int = var_285_int;
											func_426(var_285_int);
										}
										var_43_int += 1;
									}

							}
							int var_224_int; int var_225_int;
							var_23_int = var_225_int;
							func_12159(var_224_int, var_225_int);
							var_224_int = var_39_int;
							bool var_238_bool; int var_239_int;
							var_23_int = var_239_int;
							func_12151(var_238_bool, var_239_int);
							if(var_238_bool != 0) {
								int var_245_int;
								var_39_int = var_245_int;
								func_426(var_245_int);
							} else {
								int var_276_int;
								var_39_int = var_276_int;
								func_456(var_276_int);

							}
							int var_246_int;
							func_12197(var_246_int, (var_23_int + 1));
							var_246_int = var_39_int;
							if(var_39_int != -1) {
								int var_259_int;
								var_39_int = var_259_int;
								func_486(var_259_int);
							}
							int var_260_int;
							func_12223(var_260_int, (var_23_int + 1));
							var_260_int = var_42_int;
							bool var_271_bool = false;
							if(var_42_int != var_39_int) {
								if(var_42_int != -1)
									var_271_bool = true;
							}
							if(var_271_bool == 0) goto Label_12619;
							int var_275_int;
							var_42_int = var_275_int;
							func_486(var_275_int);
						}
					}
					int var_120_int;
					func_358(var_120_int);
					var_120_int = var_36_int;
					if(var_36_int < var_34_int) {
						var_38_int = 0;

						for(;;) {
							if(!(var_38_int < (var_34_int - var_36_int))) goto Label_12514;
							func_376();
							var_38_int += 1;
						}
					}
				Label_12514:
								} else {
				if(var_23_int == 2) {
					var_34_int = 1;
				} else if(var_23_int == 3) {
					var_34_int = 2;
				} else if(var_23_int == 4) {
					var_34_int = 3;
				} else if(var_23_int == 5) {
					var_34_int = 4;
				} else if(var_23_int == 6) {
					var_34_int = 5;
				} else if(var_23_int == 7) {
					var_34_int = 5;
				} else if(var_23_int == 8) {
					var_34_int = 6;
				} else if(var_23_int == 9) {
					var_34_int = 6;
				} else if(var_23_int == 10) {
					var_34_int = 7;
				} else if(var_23_int == 11) {
					var_34_int = 8;
					}
				}
			Label_12619:
			} else {
				var_35_int += 1;
			}
		Label_12645:
			}
		}

	}
	
}


void func_10326(void)
{
	object var_5193_object;
	func_10907(var_5193_object);
	object var_5191_object;
	var_5193_object = var_5191_object;
	object var_5192_object;
	var_5191_object->FindMark(var_5192_object, "k6q03LaskaGotoAlbinos");
	if(var_5192_object != 0)
		var_5192_object->Remove();
	bool var_5196_bool;
	func_10882(var_5196_bool, 408);
	bool var_5198_bool;
	func_10882(var_5198_bool, 500);
	bool var_5200_bool;
	func_10882(var_5200_bool, 748);
	bool var_5202_bool;
	func_10882(var_5202_bool, 723);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_93(bool var_5572_bool, object var_5573_object, string var_5574_string, float var_5575_float, float var_5576_float, float var_5577_float)
{
	object var_5581_object;
	var_5573_object = var_5581_object;
	string var_5582_string;
	var_5574_string = var_5582_string;
	bool var_5580_bool;
	func_81(var_5580_bool, var_5581_object, var_5582_string);
	if(!var_5580_bool) //@nz
		var_5572_bool = false;
	float var_5579_float;
	var_5573_object->GetProperty(var_5574_string, var_5579_float);
	float var_5584_float; float var_5586_float; float var_5587_float;
	var_5576_float = var_5586_float;
	var_5577_float = var_5587_float;
	func_115(var_5584_float, (var_5579_float + var_5575_float), var_5586_float, var_5587_float);
	var_5573_object->SetProperty(var_5574_string, var_5584_float);
	var_5572_bool = true;
}


// @pe
void func_5219(object var_122_object)
{
	var_122_object->add("dt_house3_08_i2");
	var_122_object->add("dt_house3_09");
	var_122_object->add("dt_house3_09_i2");
	var_122_object->add("house1_se_03l");
	var_122_object->add("house1_se_03r");
	var_122_object->add("house1_se_01l");
	var_122_object->add("house1_se_01r");
	var_122_object->add("house1_se_04l");
	var_122_object->add("house1_se_04r");
	var_122_object->add("house5_11");
	var_122_object->add("house5_09");
	var_122_object->add("house5_13");
	var_122_object->add("house5_12");
	var_122_object->add("house5_14");
	var_122_object->add("house5_unoin03l");
	var_122_object->add("house5_unoin03r");
	var_122_object->add("house5_unoin02l");
	var_122_object->add("house5_unoin02r");
	var_122_object->add("house5_unoin01l");
	var_122_object->add("house5_unoin01r");
}


// @pe
void func_1124(float var_766_float, int var_767_int)
{
	if((var_767_int + 1) == 7) {
		var_766_float = 2;
		return 0;
	}
	if((var_767_int + 1) == 8) {
		var_766_float = 0;
		return 0;
	}
	if((var_767_int + 1) == 1) {
		var_766_float = 0;
		return 0;
	}
	var_766_float = 1;
}


// @pe
void func_7271(int var_4138_int, int var_4139_int, object var_4140_object, object var_4141_object, object var_4142_object, object var_4143_object)
{
	if(var_4139_int == 0) {
		func_810(14, false);
		func_827(14, false, 1);
		int var_4152_int; object var_4153_object; object var_4154_object; object var_4155_object;
		var_4138_int = var_4152_int;
		var_4140_object = var_4153_object;
		var_4141_object = var_4154_object;
		var_4142_object = var_4155_object;
		func_734(14, var_4152_int, var_4153_object, var_4154_object, var_4155_object);
		object var_4156_object;
		var_4143_object = var_4156_object;
		func_320(var_4156_object, 2);
		func_884(14, false, 5);
		func_946(14, true, 5);
	}
	func_793(14, false);
	int var_4167_int; int var_4168_int;
	var_4138_int = var_4167_int;
	var_4139_int = var_4168_int;
	func_3514(14, var_4167_int, var_4168_int);
}


// @pe
void func_6250(int var_3973_int, int var_3974_int, object var_3975_object, object var_3976_object, object var_3977_object, object var_3978_object)
{
	if(var_3974_int == 0) {
		func_810(9, false);
		func_827(9, false, 1);
		int var_3987_int; object var_3988_object; object var_3989_object; object var_3990_object;
		var_3973_int = var_3987_int;
		var_3975_object = var_3988_object;
		var_3976_object = var_3989_object;
		var_3977_object = var_3990_object;
		func_734(9, var_3987_int, var_3988_object, var_3989_object, var_3990_object);
		object var_3991_object;
		var_3978_object = var_3991_object;
		func_320(var_3991_object, 2);
		func_884(9, false, 7);
		func_946(9, true, 7);
	}
	func_793(9, false);
	int var_4002_int; int var_4003_int;
	var_3973_int = var_4002_int;
	var_3974_int = var_4003_int;
	func_3702(9, var_4002_int, var_4003_int);
}


void func_3180(int var_2127_int, int var_2128_int, int var_2129_int)
{
	int var_2132_int; int var_2133_int;
	bool var_2134_bool = false;
	if(var_2129_int > 8) {
		if(var_2129_int < 21)
			var_2134_bool = true;
	}
	if(var_2134_bool != 0) {
		int var_2139_int;
		var_2127_int = var_2139_int;
		func_517(var_2139_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2143_int;
		var_2127_int = var_2143_int;
		func_517(var_2143_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2147_int;
		var_2127_int = var_2147_int;
		func_517(var_2147_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2151_int;
		var_2127_int = var_2151_int;
		func_543(var_2151_int, "fog", "fog.xml", 6);
		if(var_2128_int >= 5) {
			int var_2161_int;
			var_2127_int = var_2161_int;
			func_543(var_2161_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2166_float; int var_2167_int;
		func_1238(var_2166_float, var_2167_int);
		if((1 * var_2166_float) != 0) {
			int var_2213_int; int var_2216_int;
			var_2127_int = var_2213_int;
			var_2132_int = var_2216_int;
			func_517(var_2213_int, "pers_bomber", "bomber.xml", var_2216_int);
		}
	} else {
		int var_2252_int;
		var_2127_int = var_2252_int;
		func_517(var_2252_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2256_int;
		var_2127_int = var_2256_int;
		func_517(var_2256_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2260_int;
		var_2127_int = var_2260_int;
		func_517(var_2260_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2264_int;
		var_2127_int = var_2264_int;
		func_543(var_2264_int, "fog", "fog.xml", 6);
		if(var_2167_int >= 5) {
			int var_2270_int;
			var_2127_int = var_2270_int;
			func_543(var_2270_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2275_float; int var_2276_int;
		var_2128_int = var_2276_int;
		func_1238(var_2275_float, var_2276_int);
		if((2 * var_2275_float) == 0) goto Label_3298;
		int var_2278_int; int var_2281_int;
		var_2127_int = var_2278_int;
		var_2133_int = var_2281_int;
		func_517(var_2278_int, "pers_bomber", "bomber.xml", var_2281_int);
	}
Label_3298:
	bool var_2217_bool; int var_2218_int;
	var_2128_int = var_2218_int;
	func_1355(var_2217_bool, var_2218_int);
	if(var_2217_bool != 0) {
		int var_2220_int;
		var_2127_int = var_2220_int;
		func_517(var_2220_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2224_int;
	var_2127_int = var_2224_int;
	func_530(var_2224_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2234_int;
	var_2127_int = var_2234_int;
	func_530(var_2234_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2240_int;
	var_2127_int = var_2240_int;
	func_530(var_2240_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2246_int;
	var_2127_int = var_2246_int;
	func_530(var_2246_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_115(float var_5584_float, float var_5585_float, float var_5586_float, float var_5587_float)
{
	if(var_5585_float < var_5586_float) {
		var_5586_float = var_5584_float;
		return 0;
	}
	if(var_5585_float > var_5587_float) {
		var_5587_float = var_5584_float;
		return 0;
	}
	var_5585_float = var_5584_float;
}


void func_8309(int var_4284_int, int var_4285_int)
{
	int var_4289_int; int var_4290_int;
	if(var_4285_int == 0) {
		if(var_4284_int == 2) {
			int var_4295_int;
			func_10924(var_4295_int);
			if(var_4295_int == 0) {
				@GetVariable("d1q01", var_4289_int);
				if(var_4289_int != 1000)
					@GameOver("gameover_fail.xml");
			} else {
				int var_4304_int;
				func_10924(var_4304_int);
				if(!(var_4304_int == 1)) goto Label_8347;
				@GetVariable("b1q01", var_4290_int);
				if(!(var_4290_int != 1000)) goto Label_8347;
				@GameOver("gameover_fail.xml");
			}
		}
	Label_8347:
		@SendWorldWndMessage(101);
		@SetVariable("c_iWM_RealDayChange", var_4284_int);
	}
	
}


void func_10357(void)
{
	object var_4999_object;
	func_10907(var_4999_object);
	object var_4997_object;
	var_4999_object = var_4997_object;
	object var_4998_object;
	var_4997_object->FindMark(var_4998_object, "k7q01BirdmaskGotoCorpse");
	if(var_4998_object != 0)
		var_4998_object->Remove();
	var_4997_object->FindMark(var_4998_object, "k7q02DankoGotoGatherer");
	if(var_4998_object != 0)
		var_4998_object->Remove();
	var_4997_object->FindMark(var_4998_object, "k7q03BurahGotoFather");
	if(var_4998_object != 0)
		var_4998_object->Remove();
	bool var_5006_bool;
	func_10882(var_5006_bool, 416);
	bool var_5008_bool;
	func_10882(var_5008_bool, 430);
	bool var_5010_bool;
	func_10882(var_5010_bool, 434);
	bool var_5012_bool;
	func_10882(var_5012_bool, 723);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1148(float var_3286_float, int var_3287_int)
{
	if((var_3287_int + 1) == 1) {
		var_3286_float = 0;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 2) {
		var_3286_float = 0;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 3) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 4) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 5) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 6) {
		var_3286_float = 2;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 7) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 8) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 9) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 10) {
		var_3286_float = 1;
		return 0;
	EMIT "GOTO 0x4d4";
	}
	if((var_3287_int + 1) == 11) {
		var_3286_float = 1;
		return 0;
	}
	var_3286_float = 0;
}


void func_126(object var_40_object)
{
	object var_42_object;
	@CreateObjectVector(var_42_object);
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_132(int var_4730_int, string var_4731_string)
{
	int var_4733_int;
	@GetVariable(var_4731_string, var_4733_int);
	var_4733_int = var_4730_int;
}


void func_137(object var_4645_object, string var_4646_string)
{
	object var_4649_object;
	@GetMainOutdoorScene(var_4649_object);
	object var_4650_object;
	@AddBlankActor(var_4650_object, var_4649_object, var_4646_string, (var_4646_string + ".bin"));
	var_4650_object = var_4645_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_148(object var_5493_object, string var_5494_string)
{
	object var_5497_object;
	@GetMainOutdoorScene(var_5497_object);
	object var_5498_object;
	@AddBlankActorFromXml(var_5498_object, var_5497_object, var_5494_string, (var_5494_string + ".xml"));
	var_5498_object = var_5493_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7323(object var_311_object)
{
	var_311_object->add("lc_house3_05_i2");
	var_311_object->add("lc_house3_05");
	var_311_object->add("lc_house3_06_i2");
	var_311_object->add("lc_house3_06");
	var_311_object->add("lc_House6_06");
	var_311_object->add("lc_house3_04_i2");
	var_311_object->add("lc_house3_04");
	var_311_object->add("house3_plus_03_i2");
}


void func_4253(int var_3437_int, int var_3438_int, int var_3439_int)
{
	int var_3444_int; int var_3445_int; int var_3446_int; int var_3447_int;
	bool var_3448_bool = false;
	if(var_3439_int > 8) {
		if(var_3439_int < 21)
			var_3448_bool = true;
	}
	if(var_3448_bool != 0) {
		int var_3453_int;
		var_3437_int = var_3453_int;
		func_517(var_3453_int, "pers_rat", "rat.xml", 4);
		int var_3457_int;
		var_3437_int = var_3457_int;
		func_517(var_3457_int, "pers_alkash", "alkash.xml", 2);
		int var_3461_int;
		var_3437_int = var_3461_int;
		func_517(var_3461_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3466_float; int var_3467_int;
		func_1148(var_3466_float, var_3467_int);
		if((2 * var_3466_float) != 0) {
			int var_3469_int; int var_3472_int;
			var_3437_int = var_3469_int;
			var_3444_int = var_3472_int;
			func_517(var_3469_int, "pers_grabitel", "grabitel.xml", var_3472_int);
		}
		if((var_3467_int + 1) >= 2) {
			int var_3477_int;
			var_3437_int = var_3477_int;
			func_517(var_3477_int, "pers_patrool", "patrol.xml", 2);
			bool var_3481_bool; int var_3482_int;
			var_3438_int = var_3482_int;
			func_1355(var_3481_bool, var_3482_int);
			if(var_3481_bool != 0) {
				int var_3483_int;
				var_3437_int = var_3483_int;
				func_517(var_3483_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3488_float; int var_3489_int;
		var_3438_int = var_3489_int;
		func_1238(var_3488_float, var_3489_int);
		if((1 * var_3488_float) != 0) {
			int var_3491_int; int var_3494_int;
			var_3437_int = var_3491_int;
			var_3445_int = var_3494_int;
			func_517(var_3491_int, "pers_bomber", "bomber.xml", var_3494_int);
		}
	} else {
		int var_3501_int;
		var_3437_int = var_3501_int;
		func_517(var_3501_int, "pers_rat", "rat.xml", 8);
		int var_3505_int;
		var_3437_int = var_3505_int;
		func_517(var_3505_int, "pers_alkash", "alkash.xml", 1);
		int var_3509_int;
		var_3437_int = var_3509_int;
		func_517(var_3509_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3514_float; int var_3515_int;
		func_1148(var_3514_float, var_3515_int);
		if((3 * var_3514_float) != 0) {
			int var_3517_int; int var_3520_int;
			var_3437_int = var_3517_int;
			var_3446_int = var_3520_int;
			func_517(var_3517_int, "pers_grabitel", "grabitel.xml", var_3520_int);
		}
		if((var_3515_int + 1) >= 2) {
			int var_3525_int;
			var_3437_int = var_3525_int;
			func_517(var_3525_int, "pers_patrool", "patrol.xml", 1);
			bool var_3529_bool; int var_3530_int;
			var_3438_int = var_3530_int;
			func_1355(var_3529_bool, var_3530_int);
			if(var_3529_bool != 0) {
				int var_3531_int;
				var_3437_int = var_3531_int;
				func_517(var_3531_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3536_float; int var_3537_int;
		var_3438_int = var_3537_int;
		func_1238(var_3536_float, var_3537_int);
		if((1 * var_3536_float) == 0) goto Label_4415;
		int var_3539_int; int var_3542_int;
		var_3437_int = var_3539_int;
		var_3447_int = var_3542_int;
		func_517(var_3539_int, "pers_bomber", "bomber.xml", var_3542_int);
	}
Label_4415:
	bool var_3495_bool; int var_3496_int;
	var_3438_int = var_3496_int;
	func_1355(var_3495_bool, var_3496_int);
	if(var_3495_bool != 0) {
		int var_3497_int;
		var_3437_int = var_3497_int;
		func_517(var_3497_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_6302(object var_224_object)
{
	var_224_object->add("r4_house_2_02");
	var_224_object->add("r4_house3_03_i2");
	var_224_object->add("r4_house3_03");
	var_224_object->add("r4_house4_02_i2");
	var_224_object->add("r4_house4_02");
	var_224_object->add("r4_house4_01_i2");
	var_224_object->add("r4_house4_01");
	var_224_object->add("r4_house3_02_i2");
	var_224_object->add("r4_house3_02");
	var_224_object->add("r4_house_2_01");
	var_224_object->add("r4_house3_01_i2");
	var_224_object->add("r4_house3_01");
	var_224_object->add("r4_house7_01");
	var_224_object->add("r4_House6_01");
	var_224_object->add("r4_house_2_03");
	var_224_object->add("r4_House6_03");
	var_224_object->add("r4_house_2_04");
}


void func_159(object var_327_object, object var_328_object, string var_329_string, string var_330_string, string var_331_string)
{
	bool var_337_bool; cvector var_338_cvector; cvector var_339_cvector;
	var_328_object->GetLocator(var_329_string, var_337_bool, var_338_cvector, var_339_cvector);
	if(!var_337_bool) //@nz
		@Trace(("Locator " + var_329_string) + " doesn't exist");
	else
		var_328_object->AddStationaryActor(Obj(), var_338_cvector, var_339_cvector, var_330_string, var_331_string);
	object var_340_object = var_327_object;
	
}
EMIT "Stack[-1] = 0";


void func_9373(int var_3178_int, int var_3179_int, int var_3180_int)
{
	var_3189_object = GlobalVars[8];
	object var_3185_object;
	var_3189_object->get(var_3185_object, var_3178_int);
	var_3190_object = GlobalVars[9];
	object var_3186_object;
	var_3190_object->get(var_3186_object, var_3178_int);
	var_3191_object = GlobalVars[10];
	object var_3187_object;
	var_3191_object->get(var_3187_object, var_3178_int);
	var_3192_object = GlobalVars[13];
	object var_3188_object;
	var_3192_object->get(var_3188_object, var_3178_int);
	if(var_3178_int == 0) {
		int var_3195_int; int var_3196_int; object var_3197_object; object var_3198_object; object var_3199_object; object var_3200_object;
		var_3179_int = var_3195_int;
		var_3180_int = var_3196_int;
		var_3185_object = var_3197_object;
		var_3186_object = var_3198_object;
		var_3187_object = var_3199_object;
		var_3188_object = var_3200_object;
		func_4534(var_3195_int, var_3196_int, var_3197_object, var_3198_object, var_3199_object, var_3200_object);
	} else if(var_3178_int == 1) {
			int var_3409_int; int var_3410_int; object var_3411_object; object var_3412_object; object var_3413_object; object var_3414_object;
			var_3179_int = var_3409_int;
			var_3180_int = var_3410_int;
			var_3185_object = var_3411_object;
			var_3186_object = var_3412_object;
			var_3187_object = var_3413_object;
			var_3188_object = var_3414_object;
			func_4731(var_3409_int, var_3410_int, var_3411_object, var_3412_object, var_3413_object, var_3414_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3178_int == 2) {
		int var_3545_int; int var_3546_int; object var_3547_object; object var_3548_object; object var_3549_object; object var_3550_object;
		var_3179_int = var_3545_int;
		var_3180_int = var_3546_int;
		var_3185_object = var_3547_object;
		var_3186_object = var_3548_object;
		var_3187_object = var_3549_object;
		var_3188_object = var_3550_object;
		func_4937(var_3545_int, var_3546_int, var_3547_object, var_3548_object, var_3549_object, var_3550_object);
	} else if(var_3178_int == 3) {
		int var_3688_int; int var_3689_int; object var_3690_object; object var_3691_object; object var_3692_object; object var_3693_object;
		var_3179_int = var_3688_int;
		var_3180_int = var_3689_int;
		var_3185_object = var_3690_object;
		var_3186_object = var_3691_object;
		var_3187_object = var_3692_object;
		var_3188_object = var_3693_object;
		func_5167(var_3688_int, var_3689_int, var_3690_object, var_3691_object, var_3692_object, var_3693_object);
	} else if(var_3178_int == 4) {
		int var_3721_int; int var_3722_int; object var_3723_object; object var_3724_object; object var_3725_object; object var_3726_object;
		var_3179_int = var_3721_int;
		var_3180_int = var_3722_int;
		var_3185_object = var_3723_object;
		var_3186_object = var_3724_object;
		var_3187_object = var_3725_object;
		var_3188_object = var_3726_object;
		func_5385(var_3721_int, var_3722_int, var_3723_object, var_3724_object, var_3725_object, var_3726_object);
	} else if(var_3178_int == 5) {
		int var_3754_int; int var_3755_int; object var_3756_object; object var_3757_object; object var_3758_object; object var_3759_object;
		var_3179_int = var_3754_int;
		var_3180_int = var_3755_int;
		var_3185_object = var_3756_object;
		var_3186_object = var_3757_object;
		var_3187_object = var_3758_object;
		var_3188_object = var_3759_object;
		func_5624(var_3754_int, var_3755_int, var_3756_object, var_3757_object, var_3758_object, var_3759_object);
	} else if(var_3178_int == 6) {
		int var_3787_int; int var_3788_int; object var_3789_object; object var_3790_object; object var_3791_object; object var_3792_object;
		var_3179_int = var_3787_int;
		var_3180_int = var_3788_int;
		var_3185_object = var_3789_object;
		var_3186_object = var_3790_object;
		var_3187_object = var_3791_object;
		var_3188_object = var_3792_object;
		func_5692();
	} else if(var_3178_int == 7) {
		int var_3797_int; int var_3798_int; object var_3799_object; object var_3800_object; object var_3801_object; object var_3802_object;
		var_3179_int = var_3797_int;
		var_3180_int = var_3798_int;
		var_3185_object = var_3799_object;
		var_3186_object = var_3800_object;
		var_3187_object = var_3801_object;
		var_3188_object = var_3802_object;
		func_5847(var_3797_int, var_3798_int, var_3799_object, var_3800_object, var_3801_object, var_3802_object);
	} else if(var_3178_int == 8) {
		int var_3940_int; int var_3941_int; object var_3942_object; object var_3943_object; object var_3944_object; object var_3945_object;
		var_3179_int = var_3940_int;
		var_3180_int = var_3941_int;
		var_3185_object = var_3942_object;
		var_3186_object = var_3943_object;
		var_3187_object = var_3944_object;
		var_3188_object = var_3945_object;
		func_6047(var_3940_int, var_3941_int, var_3942_object, var_3943_object, var_3944_object, var_3945_object);
	} else if(var_3178_int == 9) {
		int var_3973_int; int var_3974_int; object var_3975_object; object var_3976_object; object var_3977_object; object var_3978_object;
		var_3179_int = var_3973_int;
		var_3180_int = var_3974_int;
		var_3185_object = var_3975_object;
		var_3186_object = var_3976_object;
		var_3187_object = var_3977_object;
		var_3188_object = var_3978_object;
		func_6250(var_3973_int, var_3974_int, var_3975_object, var_3976_object, var_3977_object, var_3978_object);
	} else if(var_3178_int == 10) {
		int var_4006_int; int var_4007_int; object var_4008_object; object var_4009_object; object var_4010_object; object var_4011_object;
		var_3179_int = var_4006_int;
		var_3180_int = var_4007_int;
		var_3185_object = var_4008_object;
		var_3186_object = var_4009_object;
		var_3187_object = var_4010_object;
		var_3188_object = var_4011_object;
		func_6459(var_4006_int, var_4007_int, var_4008_object, var_4009_object, var_4010_object, var_4011_object);
	} else if(var_3178_int == 11) {
		int var_4039_int; int var_4040_int; object var_4041_object; object var_4042_object; object var_4043_object; object var_4044_object;
		var_3179_int = var_4039_int;
		var_3180_int = var_4040_int;
		var_3185_object = var_4041_object;
		var_3186_object = var_4042_object;
		var_3187_object = var_4043_object;
		var_3188_object = var_4044_object;
		func_6671(var_4039_int, var_4040_int, var_4041_object, var_4042_object, var_4043_object, var_4044_object);
	} else if(var_3178_int == 12) {
		int var_4072_int; int var_4073_int; object var_4074_object; object var_4075_object; object var_4076_object; object var_4077_object;
		var_3179_int = var_4072_int;
		var_3180_int = var_4073_int;
		var_3185_object = var_4074_object;
		var_3186_object = var_4075_object;
		var_3187_object = var_4076_object;
		var_3188_object = var_4077_object;
		func_6868(var_4072_int, var_4073_int, var_4074_object, var_4075_object, var_4076_object, var_4077_object);
	} else if(var_3178_int == 13) {
		int var_4105_int; int var_4106_int; object var_4107_object; object var_4108_object; object var_4109_object; object var_4110_object;
		var_3179_int = var_4105_int;
		var_3180_int = var_4106_int;
		var_3185_object = var_4107_object;
		var_3186_object = var_4108_object;
		var_3187_object = var_4109_object;
		var_3188_object = var_4110_object;
		func_7071(var_4105_int, var_4106_int, var_4107_object, var_4108_object, var_4109_object, var_4110_object);
	} else if(var_3178_int == 14) {
		int var_4138_int; int var_4139_int; object var_4140_object; object var_4141_object; object var_4142_object; object var_4143_object;
		var_3179_int = var_4138_int;
		var_3180_int = var_4139_int;
		var_3185_object = var_4140_object;
		var_3186_object = var_4141_object;
		var_3187_object = var_4142_object;
		var_3188_object = var_4143_object;
		func_7271(var_4138_int, var_4139_int, var_4140_object, var_4141_object, var_4142_object, var_4143_object);
	} else if(var_3178_int == 15) {
		int var_4281_int; int var_4282_int; object var_4283_object; object var_4284_object; object var_4285_object; object var_4286_object;
		var_3179_int = var_4281_int;
		var_3180_int = var_4282_int;
		var_3185_object = var_4283_object;
		var_3186_object = var_4284_object;
		var_3187_object = var_4285_object;
		var_3188_object = var_4286_object;
		func_7453(var_4281_int, var_4282_int, var_4283_object, var_4284_object, var_4285_object, var_4286_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5281(int var_1298_int, int var_1299_int, object var_1300_object, object var_1301_object, object var_1302_object, object var_1303_object)
{
	if(var_1299_int == 0) {
		func_810(4, false);
		func_827(4, false, 1);
		int var_1311_int; int var_1312_int; object var_1313_object; object var_1314_object; object var_1315_object;
		var_1311_int = 4;
		var_1298_int = var_1312_int;
		var_1300_object = var_1313_object;
		var_1301_object = var_1314_object;
		var_1302_object = var_1315_object;
		func_636(var_1312_int, var_1313_object, var_1314_object, var_1315_object);
		object var_1316_object;
		var_1303_object = var_1316_object;
		func_320(var_1316_object, 0);
		func_884(4, false, 4);
		func_946(4, false, 4);
	}
	int var_1325_int;
	var_1299_int = var_1325_int;
	func_1034(4, var_1325_int);
	int var_1339_int; int var_1340_int;
	var_1298_int = var_1339_int;
	var_1299_int = var_1340_int;
	func_1898(4, var_1339_int, var_1340_int);
}


void func_8354(int var_4322_int, int var_4323_int)
{
	object var_4331_object; object var_4332_object; string var_4333_string; int var_4334_int; int var_4335_int; int var_4336_int;
	bool var_4337_bool = false;
	if(var_4323_int == 5) {
		if(var_4322_int >= 7)
			var_4337_bool = true;
	}
	if(var_4337_bool != 0) {
		func_7818();
	} else {
		bool var_4616_bool = false;
		if(var_4323_int == 22) {
			if(var_4322_int >= 7)
				var_4616_bool = true;
		}
		if(var_4616_bool == 0) goto Label_8382;
		func_7881();
	}
Label_8382:
	bool var_4388_bool = false;
	if(var_4323_int == 7) {
		if(var_4322_int != 1)
			var_4388_bool = true;
	}
	if(var_4388_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4323_int == 0) {
		func_8520();
		func_8595();
		if(var_4322_int == 6) {
			@GetMainOutdoorScene(var_4331_object);
			@AddScriptedActor(var_4332_object, "shed_corpse", "splash_object_wo_pf.bin", var_4331_object, [0.0, 0.0, 0.0]);
			var_4332_object = null;
			var_4331_object = null;
		}
		if(var_4322_int == 9)
			func_8644();
		if(var_4322_int != 1) {
			int var_4511_int;
			func_10924(var_4511_int);
			if(var_4511_int == 1) {
				@GetVariable((("b" + (var_4322_int - 1)) + "q01"), var_4334_int);
				var_4333_string = "volonteers_burah";
			} else {
					int var_4601_int;
					func_10924(var_4601_int);
					if(!(var_4601_int == 0)) goto Label_8457;
					@GetVariable((("d" + (var_4322_int - 1)) + "q01"), var_4334_int);
					var_4333_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4333_string);
				if(var_4334_int == 1000) {
					bool var_4522_bool; string var_4523_string;
					var_4333_string = var_4523_string;
					func_251(var_4522_bool, var_4523_string, "rescue_locked", "");
				}
				bool var_4529_bool; string var_4530_string;
				var_4333_string = var_4530_string;
				func_251(var_4529_bool, var_4530_string, "update", "");
		}
	}
		bool var_4533_bool = false;
		if(var_4322_int == 6) {
			if(var_4323_int == 0)
				var_4533_bool = true;
		}
		if(var_4533_bool != 0)
			func_7938();
		bool var_4540_bool = false;
		if(var_4322_int == 7) {
			if(var_4323_int == 0)
				var_4540_bool = true;
		}
		if(var_4540_bool != 0) {
			var_4545_object = GlobalVars[14];
			var_4545_object->size(var_4335_int);

			for(;;) {
				if(!(0 < var_4335_int)) goto Label_8519;
				int var_4547_int;
				var_4336_int = var_4547_int;
				func_7645(var_4547_int);
				var_4336_int += 1;
			}
		}
	Label_8519:

	}
	
Label_8457:
	@GetVariable((("k" + (var_4322_int - 1)) + "q01"), var_4334_int);
	var_4333_string = "volonteers_klara";
	
}


// @pe
void func_10402(void)
{
	bool var_4976_bool;
	func_10882(var_4976_bool, 438);
	bool var_4978_bool;
	func_10882(var_4978_bool, 723);
	bool var_4980_bool;
	func_10882(var_4980_bool, 751);
	bool var_4982_bool;
	func_10882(var_4982_bool, 757);
}


void func_2221(int var_748_int, int var_749_int, int var_750_int)
{
	int var_752_int;
	if((var_749_int + 1) == 12)
		return 2;
	bool var_757_bool = false;
	bool var_758_bool = true;
	var_760_bool = var_750_int < 7;
	if(var_760_bool != 1) {
		var_762_bool = var_750_int > 21;
		if(var_762_bool != 1)
			var_758_bool = false;
	}
	if(var_758_bool != 0) {
		if(var_749_int != 0)
			var_757_bool = true;
	}
	if(var_757_bool != 0) {
		float var_766_float; int var_767_int;
		var_749_int = var_767_int;
		func_1124(var_766_float, var_767_int);
		if((1 * var_766_float) != 0) {
			int var_781_int; int var_784_int;
			var_748_int = var_781_int;
			var_752_int = var_784_int;
			func_517(var_781_int, "pers_grabitel", "grabitel.xml", var_784_int);
		}
	}
	bool var_789_bool = false;
	bool var_790_bool = false;
	if(var_749_int == 0) {
		if(var_750_int < 21)
			var_790_bool = true;
	}
	if(var_790_bool != 0) {
		int var_795_int;
		func_10924(var_795_int);
		if(var_795_int == 1)
			var_789_bool = true;
	}
	if(var_789_bool != 0) {
		int var_801_int;
		var_748_int = var_801_int;
		func_517(var_801_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_805_int;
		var_748_int = var_805_int;
		func_517(var_805_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_809_int;
		var_748_int = var_809_int;
		func_517(var_809_int, "pers_worker", "worker_attacker.xml", 1);
		int var_813_int;
		var_748_int = var_813_int;
		func_517(var_813_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_817_int;
		var_748_int = var_817_int;
		func_517(var_817_int, "pers_boy", "boy.xml", 1);
		int var_821_int;
		var_748_int = var_821_int;
		func_517(var_821_int, "pers_alkash", "alkash.xml", 1);
		int var_825_int;
		var_748_int = var_825_int;
		func_517(var_825_int, "pers_girl", "girl.xml", 1);
		int var_829_int;
		var_748_int = var_829_int;
		func_517(var_829_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_833_bool = false;
			if(var_750_int > 8) {
				if(var_750_int < 21)
					var_833_bool = true;
			}
			if(var_833_bool == 0) goto Label_2390;
			int var_838_int;
			var_748_int = var_838_int;
			func_517(var_838_int, "pers_boy", "boy.xml", 1);
			int var_842_int;
			var_748_int = var_842_int;
			func_517(var_842_int, "pers_alkash", "alkash.xml", 1);
			int var_846_int;
			var_748_int = var_846_int;
			func_517(var_846_int, "pers_girl", "girl.xml", 1);
			int var_850_int;
			var_748_int = var_850_int;
			func_517(var_850_int, "pers_girl", "girl2.xml", 1);
			int var_854_int;
			var_748_int = var_854_int;
			func_517(var_854_int, "pers_worker", "worker.xml", 2);
			int var_858_int;
			var_748_int = var_858_int;
			func_517(var_858_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2390:
	int var_862_int;
	var_748_int = var_862_int;
	func_517(var_862_int, "pers_alkash", "alkash.xml", 1);
	int var_866_int;
	var_748_int = var_866_int;
	func_517(var_866_int, "pers_worker", "worker.xml", 1);
	int var_870_int;
	var_748_int = var_870_int;
	func_517(var_870_int, "pers_worker", "worker2.xml", 1);
}


void func_177(string var_4591_string, bool var_4592_bool)
{
	object var_4594_object;
	@FindActor(var_4594_object, var_4591_string);
	if(!var_4594_object) //@nz
		@Trace(("Door " + var_4591_string) + " not found");
	else
		var_4594_object->SetProperty("locked", var_4592_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10420(void)
{
	bool var_4957_bool;
	func_10882(var_4957_bool, 517);
	bool var_4959_bool;
	func_10882(var_4959_bool, 723);
	bool var_4961_bool;
	func_10882(var_4961_bool, 751);
	bool var_4963_bool;
	func_10882(var_4963_bool, 757);
}


// @pe
void func_7349(int var_1956_int, int var_1957_int, object var_1958_object, object var_1959_object, object var_1960_object, object var_1961_object)
{
	if(var_1957_int == 0) {
		func_810(15, false);
		func_827(15, false, 1);
		int var_1969_int; int var_1970_int; object var_1971_object; object var_1972_object; object var_1973_object;
		var_1969_int = 15;
		var_1956_int = var_1970_int;
		var_1958_object = var_1971_object;
		var_1959_object = var_1972_object;
		var_1960_object = var_1973_object;
		func_636(var_1970_int, var_1971_object, var_1972_object, var_1973_object);
		object var_1974_object;
		var_1961_object = var_1974_object;
		func_320(var_1974_object, 0);
		func_884(15, false, 5);
		func_946(15, false, 5);
	}
	int var_1983_int;
	var_1957_int = var_1983_int;
	func_1101(15, var_1983_int);
	int var_1985_int; int var_1986_int;
	var_1956_int = var_1985_int;
	var_1957_int = var_1986_int;
	func_1359(15, var_1985_int, var_1986_int);
}


// @pe
void func_194(bool var_5561_bool, object var_5562_object, float var_5563_float)
{
	if(!var_5562_object) { //@nz
		var_5561_bool = false;
		return 0;
	}
	if(var_5563_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_5563_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_5568_float;
		var_5563_float = var_5568_float;
		func_229(var_5568_float);
		bool var_5572_bool; object var_5573_object; float var_5575_float;
		var_5562_object = var_5573_object;
		var_5563_float = var_5575_float;
		func_93(var_5572_bool, var_5573_object, "reputation", var_5575_float, (float)0, (float)1);
		var_5561_bool = true;
		return 0;

	}
	
	var_5561_bool = false;
}


void func_10438(void)
{
	object var_4919_object;
	func_10907(var_4919_object);
	object var_4917_object;
	var_4919_object = var_4917_object;
	object var_4918_object;
	var_4917_object->FindMark(var_4918_object, "k10q01NotkinGotoRubin");
	if(var_4918_object != 0)
		var_4918_object->Remove();
	bool var_4922_bool;
	func_10882(var_4922_bool, 447);
	bool var_4924_bool;
	func_10882(var_4924_bool, 723);
	bool var_4926_bool;
	func_10882(var_4926_bool, 751);
	bool var_4928_bool;
	func_10882(var_4928_bool, 757);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6355(int var_1640_int, int var_1641_int, object var_1642_object, object var_1643_object, object var_1644_object, object var_1645_object)
{
	if(var_1641_int == 0) {
		func_810(10, false);
		func_827(10, false, 1);
		int var_1653_int; int var_1654_int; object var_1655_object; object var_1656_object; object var_1657_object;
		var_1653_int = 10;
		var_1640_int = var_1654_int;
		var_1642_object = var_1655_object;
		var_1643_object = var_1656_object;
		var_1644_object = var_1657_object;
		func_636(var_1654_int, var_1655_object, var_1656_object, var_1657_object);
		object var_1658_object;
		var_1645_object = var_1658_object;
		func_320(var_1658_object, 0);
		func_884(10, false, 7);
		func_946(10, false, 7);
	}
	int var_1667_int;
	var_1641_int = var_1667_int;
	func_997(10, var_1667_int);
	int var_1669_int; int var_1670_int;
	var_1640_int = var_1669_int;
	var_1641_int = var_1670_int;
	func_1621(10, var_1669_int, var_1670_int);
}


// @pe
void func_5333(int var_2595_int, int var_2596_int, object var_2597_object, object var_2598_object, object var_2599_object, object var_2600_object)
{
	if(var_2596_int == 0) {
		func_810(4, true);
		func_827(4, true, 1);
		int var_2609_int; object var_2610_object; object var_2611_object; object var_2612_object;
		var_2595_int = var_2609_int;
		var_2597_object = var_2610_object;
		var_2598_object = var_2611_object;
		var_2599_object = var_2612_object;
		func_655(4, var_2609_int, var_2610_object, var_2611_object, var_2612_object);
		object var_2613_object;
		var_2600_object = var_2613_object;
		func_320(var_2613_object, 1);
		func_884(4, true, 4);
		func_946(4, false, 4);
	}
	func_793(4, false);
	int var_2624_int; int var_2625_int;
	var_2595_int = var_2624_int;
	var_2596_int = var_2625_int;
	func_2987(4, var_2624_int, var_2625_int);
}


// @pe
void func_1238(float var_2166_float, int var_2167_int)
{
	if((var_2167_int + 1) == 1) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 2) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 3) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 4) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 5) {
		var_2166_float = 0;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 6) {
		var_2166_float = 2;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 7) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 8) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 9) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 10) {
		var_2166_float = 1;
		return 0;
	EMIT "GOTO 0x52e";
	}
	if((var_2167_int + 1) == 11) {
		var_2166_float = 1;
		return 0;
	}
	var_2166_float = 0;
}


void func_229(float var_5568_float)
{
	object var_5570_object;
	@CreateFloatVector(var_5570_object);
	var_5570_object->add(var_5568_float);
	@SendWorldWndMessage(16, var_5570_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10469(void)
{
	bool var_4888_bool;
	func_10882(var_4888_bool, 480);
	bool var_4890_bool;
	func_10882(var_4890_bool, 723);
	bool var_4892_bool;
	func_10882(var_4892_bool, 751);
	bool var_4894_bool;
	func_10882(var_4894_bool, 757);
}


// @pe
void func_7401(int var_3147_int, int var_3148_int, object var_3149_object, object var_3150_object, object var_3151_object, object var_3152_object)
{
	if(var_3148_int == 0) {
		func_810(15, true);
		func_827(15, true, 1);
		int var_3161_int; object var_3162_object; object var_3163_object; object var_3164_object;
		var_3147_int = var_3161_int;
		var_3149_object = var_3162_object;
		var_3150_object = var_3163_object;
		var_3151_object = var_3164_object;
		func_655(15, var_3161_int, var_3162_object, var_3163_object, var_3164_object);
		object var_3165_object;
		var_3152_object = var_3165_object;
		func_320(var_3165_object, 1);
		func_884(15, true, 5);
		func_946(15, false, 5);
	}
	func_793(15, false);
	int var_3176_int; int var_3177_int;
	var_3147_int = var_3176_int;
	var_3148_int = var_3177_int;
	func_2627(15, var_3176_int, var_3177_int);
}


void func_239(bool var_670_bool, string var_671_string, string var_672_string)
{
	object var_674_object;
	@FindActor(var_674_object, var_671_string);
	if(var_674_object == null)
		var_670_bool = false;
	@Trigger(var_674_object, var_672_string);
	var_670_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10487(void)
{
	func_177("house1_kabak@door1", true);
}


void func_251(bool var_4522_bool, string var_4523_string, string var_4524_string, string var_4525_string)
{
	object var_4527_object;
	@FindActor(var_4527_object, var_4523_string);
	if(var_4527_object == null)
		var_4522_bool = false;
	@Trigger(var_4527_object, var_4524_string, var_4525_string);
	var_4522_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10494(void)
{
	func_177("mnogogrannik_han@door1", true);
}


void func_10501(void)
{
	object var_5342_object;
	func_10907(var_5342_object);
	object var_5341_object;
	var_5342_object = var_5341_object;
	float var_5347_float;
	func_284(var_5347_float);
	var_5341_object->AddMark("k2q03LaraLetter", "pt_map_lara", 0, 539375, var_5347_float);
}
EMIT "Stack[-1] = 0";


void func_263(object var_597_object)
{
	int var_601_int; int var_602_int; object var_603_object;
	if(var_597_object != 0) {
		var_597_object->size(var_601_int);
		var_602_int = 0;

		while(var_602_int < var_601_int) {
			var_597_object->get(var_603_object, var_602_int);
			if(var_603_object != 0)
				var_603_object->Remove();
			var_603_object = null;
			var_602_int += 1;
		}

		var_597_object->clear();
	}
}


// @pe
void func_6407(int var_2876_int, int var_2877_int, object var_2878_object, object var_2879_object, object var_2880_object, object var_2881_object)
{
	if(var_2877_int == 0) {
		func_810(10, true);
		func_827(10, true, 1);
		int var_2890_int; object var_2891_object; object var_2892_object; object var_2893_object;
		var_2876_int = var_2890_int;
		var_2878_object = var_2891_object;
		var_2879_object = var_2892_object;
		var_2880_object = var_2893_object;
		func_655(10, var_2890_int, var_2891_object, var_2892_object, var_2893_object);
		object var_2894_object;
		var_2881_object = var_2894_object;
		func_320(var_2894_object, 1);
		func_884(10, true, 7);
		func_946(10, false, 7);
	}
	func_793(10, false);
	int var_2905_int; int var_2906_int;
	var_2876_int = var_2905_int;
	var_2877_int = var_2906_int;
	func_2807(10, var_2905_int, var_2906_int);
}


// @pe
void func_5385(int var_3721_int, int var_3722_int, object var_3723_object, object var_3724_object, object var_3725_object, object var_3726_object)
{
	if(var_3722_int == 0) {
		func_810(4, false);
		func_827(4, false, 1);
		int var_3735_int; object var_3736_object; object var_3737_object; object var_3738_object;
		var_3721_int = var_3735_int;
		var_3723_object = var_3736_object;
		var_3724_object = var_3737_object;
		var_3725_object = var_3738_object;
		func_734(4, var_3735_int, var_3736_object, var_3737_object, var_3738_object);
		object var_3739_object;
		var_3726_object = var_3739_object;
		func_320(var_3739_object, 2);
		func_884(4, false, 4);
		func_946(4, true, 4);
	}
	func_793(4, false);
	int var_3750_int; int var_3751_int;
	var_3721_int = var_3750_int;
	var_3722_int = var_3751_int;
	func_3890(4, var_3750_int, var_3751_int);
}


void func_3347(int var_2312_int, int var_2313_int, int var_2314_int)
{
	int var_2317_int; int var_2318_int;
	bool var_2319_bool = false;
	if(var_2314_int > 8) {
		if(var_2314_int < 21)
			var_2319_bool = true;
	}
	if(var_2319_bool != 0) {
		int var_2324_int;
		var_2312_int = var_2324_int;
		func_517(var_2324_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2328_int;
		var_2312_int = var_2328_int;
		func_517(var_2328_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2332_int;
		var_2312_int = var_2332_int;
		func_517(var_2332_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2336_int;
		var_2312_int = var_2336_int;
		func_543(var_2336_int, "fog", "fog.xml", 7);
		if(var_2313_int >= 5) {
			int var_2342_int;
			var_2312_int = var_2342_int;
			func_543(var_2342_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2347_float; int var_2348_int;
		func_1238(var_2347_float, var_2348_int);
		if((2 * var_2347_float) != 0) {
			int var_2350_int; int var_2353_int;
			var_2312_int = var_2350_int;
			var_2317_int = var_2353_int;
			func_517(var_2350_int, "pers_bomber", "bomber.xml", var_2353_int);
		}
	} else {
		int var_2384_int;
		var_2312_int = var_2384_int;
		func_517(var_2384_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2388_int;
		var_2312_int = var_2388_int;
		func_517(var_2388_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2392_int;
		var_2312_int = var_2392_int;
		func_517(var_2392_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2396_int;
		var_2312_int = var_2396_int;
		func_543(var_2396_int, "fog", "fog.xml", 7);
		if(var_2348_int >= 5) {
			int var_2402_int;
			var_2312_int = var_2402_int;
			func_543(var_2402_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2407_float; int var_2408_int;
		var_2313_int = var_2408_int;
		func_1238(var_2407_float, var_2408_int);
		if((2 * var_2407_float) == 0) goto Label_3465;
		int var_2410_int; int var_2413_int;
		var_2312_int = var_2410_int;
		var_2318_int = var_2413_int;
		func_517(var_2410_int, "pers_bomber", "bomber.xml", var_2413_int);
	}
Label_3465:
	bool var_2354_bool; int var_2355_int;
	var_2313_int = var_2355_int;
	func_1355(var_2354_bool, var_2355_int);
	if(var_2354_bool != 0) {
		int var_2356_int;
		var_2312_int = var_2356_int;
		func_517(var_2356_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2360_int;
	var_2312_int = var_2360_int;
	func_530(var_2360_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2366_int;
	var_2312_int = var_2366_int;
	func_530(var_2366_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2372_int;
	var_2312_int = var_2372_int;
	func_530(var_2372_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2378_int;
	var_2312_int = var_2378_int;
	func_530(var_2378_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_10517(void)
{
	int var_4730_int;
	func_132(var_4730_int, "map_chertez_state");
	if(var_4730_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_284(float var_4581_float)
{
	float var_4583_float;
	@GetGameTime(var_4583_float);
	var_4583_float = var_4581_float;
}


// @pe
void func_7453(int var_4281_int, int var_4282_int, object var_4283_object, object var_4284_object, object var_4285_object, object var_4286_object)
{
	if(var_4282_int == 0) {
		func_810(15, false);
		func_827(15, false, 1);
		int var_4295_int; object var_4296_object; object var_4297_object; object var_4298_object;
		var_4281_int = var_4295_int;
		var_4283_object = var_4296_object;
		var_4284_object = var_4297_object;
		var_4285_object = var_4298_object;
		func_734(15, var_4295_int, var_4296_object, var_4297_object, var_4298_object);
		object var_4299_object;
		var_4286_object = var_4299_object;
		func_320(var_4299_object, 2);
		func_884(15, false, 5);
		func_946(15, true, 5);
	}
	func_793(15, false);
	int var_4310_int; int var_4311_int;
	var_4281_int = var_4310_int;
	var_4282_int = var_4311_int;
	func_3514(15, var_4310_int, var_4311_int);
}


void func_289(int var_160_int)
{
	float var_162_float;
	@GetGameTime(var_162_float);
	var_160_int = 1 + (var_162_float / 24);
}


// @pe
void func_10534(void)
{
	int var_4746_int;
	func_132(var_4746_int, "map_chertez_state");
	if(var_4746_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_298(bool var_158_bool, int var_159_int)
{
	int var_160_int;
	func_289(var_160_int);
	var_158_bool = var_160_int == var_159_int;
}


// @pe
void func_1328(bool var_1130_bool, int var_1131_int, int var_1132_int)
{
	var_1130_bool = false;
	if(var_1131_int >= 10) {
		if(var_1132_int < 6)
			var_1130_bool = true;
	}
}


void func_304(void)
{
	@SetSepia(0.5, 0.886);
}


void func_309(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_10551(void)
{
	int var_4760_int;
	func_132(var_4760_int, "map_chertez_state");
	if(var_4760_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_314(string var_444_string, int var_445_int)
{
	var_444_string = ("Region" + var_445_int) + "State";
}


// @pe
void func_1338(bool var_1141_bool, int var_1142_int, int var_1143_int)
{
	var_1141_bool = false;
	if(var_1142_int >= 3) {
		bool var_1146_bool = true;
		var_1148_bool = var_1143_int > 22;
		if(var_1148_bool != 1) {
			var_1150_bool = var_1143_int < 5;
			if(var_1150_bool != 1)
				var_1146_bool = false;
		}
		if(var_1146_bool != 0)
			var_1141_bool = true;
	}
}


// @pe
void func_6459(int var_4006_int, int var_4007_int, object var_4008_object, object var_4009_object, object var_4010_object, object var_4011_object)
{
	if(var_4007_int == 0) {
		func_810(10, false);
		func_827(10, false, 1);
		int var_4020_int; object var_4021_object; object var_4022_object; object var_4023_object;
		var_4006_int = var_4020_int;
		var_4008_object = var_4021_object;
		var_4009_object = var_4022_object;
		var_4010_object = var_4023_object;
		func_734(10, var_4020_int, var_4021_object, var_4022_object, var_4023_object);
		object var_4024_object;
		var_4011_object = var_4024_object;
		func_320(var_4024_object, 2);
		func_884(10, false, 7);
		func_946(10, true, 7);
	}
	func_793(10, false);
	int var_4035_int; int var_4036_int;
	var_4006_int = var_4035_int;
	var_4007_int = var_4036_int;
	func_3702(10, var_4035_int, var_4036_int);
}


// @pe
void func_5437(object var_144_object)
{
	var_144_object->add("dt_house3_14_i2");
	var_144_object->add("dt_house3_14");
	var_144_object->add("house1_arc_01l");
	var_144_object->add("house1_arc_01r");
	var_144_object->add("dt_House6_01");
	var_144_object->add("dt_house_1_09");
	var_144_object->add("house5_24");
	var_144_object->add("dt_House6_03");
	var_144_object->add("dt_House6_04");
	var_144_object->add("dt_house_1_08");
	var_144_object->add("house5_unoin_solidl");
	var_144_object->add("house5_unoin_solidr");
	var_144_object->add("dt_house2_12");
	var_144_object->add("dt_house2_11");
	var_144_object->add("dt_house2_13");
	var_144_object->add("dt_house2_09");
	var_144_object->add("dt_house2_08");
	var_144_object->add("dt_house2_07");
	var_144_object->add("dt_house2_06");
	var_144_object->add("house5_01");
	var_144_object->add("house5_15");
	var_144_object->add("house5_16");
	var_144_object->add("house5_17");
	var_144_object->add("house5_unoin04l");
	var_144_object->add("house5_unoin04r");
	var_144_object->add("house5_23");
	var_144_object->add("house1_se_05");
}


void func_320(object var_610_object, int var_611_int)
{
	int var_618_int; string var_619_string; string var_621_string; object var_623_object;
	var_610_object->size(var_618_int);
	if(var_611_int == 1) {
		var_619_string = "s_";
	} else if(var_611_int == 2) {
	}
	int var_620_int = 0;
	
	for(;;) {
		if(var_620_int < var_618_int) {
			var_610_object->get(var_621_string, var_620_int);
			@GetSceneByName(var_623_object, var_621_string);
			if(!var_623_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_621_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_623_object, (("n_" + var_621_string) + ".isc"));

		}
		var_623_object = null;
		var_620_int += 1;
	}
	
}


void func_8520(void)
{
	object var_4497_object; bool var_4498_bool; cvector var_4499_cvector; cvector var_4500_cvector; string var_4501_string;
	int var_4502_int;
	func_10924(var_4502_int);
	if(var_4502_int != 1)
		return 16;
	var_4505_object = GlobalVars[6];
	int var_4494_int;
	var_4505_object->size(var_4494_int);
	object var_4495_object;
	@GetMainOutdoorScene(var_4495_object);
	int var_4496_int = 0;
	
	for(;;) {
		if(var_4496_int < var_4494_int) {
			var_4507_object = GlobalVars[6];
			var_4507_object->get(var_4497_object, var_4496_int);
			if(var_4497_object != 0) {
			} else {
			var_4495_object->GetLocator(("pt_plant" + (var_4496_int + 1)), var_4498_bool, var_4499_cvector, var_4500_cvector);
			if(!var_4498_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8590;
			}
			@RandOneOf(var_4501_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4501_string != 0) {
				var_4495_object->AddStationaryActorByType(var_4497_object, var_4499_cvector, var_4500_cvector, "scripted", (("item_" + var_4501_string) + "_stat.xml"));
				var_4534_object = GlobalVars[6];
				var_4534_object->set(var_4496_int, var_4497_object);
				@Trace((("New plant: \"" + var_4501_string) + "\" at location #") + (var_4496_int + 1));
			}
			var_4497_object = null;
		}
		return 16;
		}
	Label_8590:
		var_4496_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_10568(void)
{
	int var_5049_int;
	func_132(var_5049_int, "map_chertez_state");
	if(var_5049_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_1355(bool var_2217_bool, int var_2218_int)
{
	var_2217_bool = var_2218_int >= 8;
}


// @pe
void func_4428(void)
{
}


// @pe
void func_4430(int var_516_int, int var_517_int, object var_518_object, object var_519_object, object var_520_object, object var_521_object)
{
	if(var_517_int == 0) {
		func_810(0, false);
		func_827(0, false, 1);
		int var_564_int; int var_565_int; object var_566_object; object var_567_object; object var_568_object;
		var_564_int = 0;
		var_516_int = var_565_int;
		var_518_object = var_566_object;
		var_519_object = var_567_object;
		var_520_object = var_568_object;
		func_636(var_565_int, var_566_object, var_567_object, var_568_object);
		object var_610_object;
		var_521_object = var_610_object;
		func_320(var_610_object, 0);
		func_884(0, false, 4);
		func_946(0, false, 4);
	}
	int var_723_int;
	var_517_int = var_723_int;
	func_1064(0, var_723_int);
	int var_749_int; int var_750_int;
	var_516_int = var_749_int;
	var_517_int = var_750_int;
	func_2221(0, var_749_int, var_750_int);
}


void func_1359(int var_1809_int, int var_1810_int, int var_1811_int)
{
	int var_1813_int;
	if((var_1810_int + 1) == 12)
		return 2;
	bool var_1818_bool = false;
	bool var_1819_bool = true;
	var_1821_bool = var_1811_int < 7;
	if(var_1821_bool != 1) {
		var_1823_bool = var_1811_int > 21;
		if(var_1823_bool != 1)
			var_1819_bool = false;
	}
	if(var_1819_bool != 0) {
		if(var_1810_int != 0)
			var_1818_bool = true;
	}
	if(var_1818_bool != 0) {
		float var_1826_float; int var_1827_int;
		var_1810_int = var_1827_int;
		func_1124(var_1826_float, var_1827_int);
		var_1826_float = var_1813_int;
		if(var_1813_int != 0) {
			int var_1829_int; int var_1832_int;
			var_1809_int = var_1829_int;
			var_1813_int = var_1832_int;
			func_517(var_1829_int, "pers_grabitel", "grabitel.xml", var_1832_int);
		}
	}
	bool var_1833_bool = false;
	bool var_1834_bool = false;
	if(var_1810_int == 0) {
		if(var_1811_int < 21)
			var_1834_bool = true;
	}
	if(var_1834_bool != 0) {
		int var_1839_int;
		func_10924(var_1839_int);
		if(var_1839_int == 1)
			var_1833_bool = true;
	}
	if(var_1833_bool != 0) {
		int var_1842_int;
		var_1809_int = var_1842_int;
		func_517(var_1842_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1846_int;
		var_1809_int = var_1846_int;
		func_517(var_1846_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1850_int;
		var_1809_int = var_1850_int;
		func_517(var_1850_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1854_int;
		var_1809_int = var_1854_int;
		func_517(var_1854_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1858_int;
		var_1809_int = var_1858_int;
		func_517(var_1858_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1862_int;
		var_1809_int = var_1862_int;
		func_517(var_1862_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1866_int;
		var_1809_int = var_1866_int;
		func_517(var_1866_int, "pers_woman", "woman.xml", 3);
		int var_1870_int;
		var_1809_int = var_1870_int;
		func_517(var_1870_int, "pers_boy", "boy.xml", 1);
		int var_1874_int;
		var_1809_int = var_1874_int;
		func_517(var_1874_int, "pers_girl", "girl.xml", 1);
		int var_1878_int;
		var_1809_int = var_1878_int;
		func_517(var_1878_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1901_bool = false;
			if(var_1811_int > 8) {
				if(var_1811_int < 21)
					var_1901_bool = true;
			}
			if(var_1901_bool == 0) goto Label_1555;
			int var_1906_int;
			var_1809_int = var_1906_int;
			func_517(var_1906_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1910_int;
			var_1809_int = var_1910_int;
			func_517(var_1910_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1914_int;
			var_1809_int = var_1914_int;
			func_517(var_1914_int, "pers_woman", "woman.xml", 3);
			int var_1918_int;
			var_1809_int = var_1918_int;
			func_517(var_1918_int, "pers_unosha", "unosha.xml", 2);
			int var_1922_int;
			var_1809_int = var_1922_int;
			func_517(var_1922_int, "pers_unosha", "unosha2.xml", 2);
			int var_1926_int;
			var_1809_int = var_1926_int;
			func_517(var_1926_int, "pers_boy", "boy.xml", 2);
			int var_1930_int;
			var_1809_int = var_1930_int;
			func_517(var_1930_int, "pers_girl", "girl.xml", 1);
			int var_1934_int;
			var_1809_int = var_1934_int;
			func_517(var_1934_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1882_bool = false;
		bool var_1883_bool = false;
		if(var_1810_int == 0) {
			if(var_1811_int > 12)
				var_1883_bool = true;
		}
		if(var_1883_bool != 0) {
			if(var_1811_int < 22)
				var_1882_bool = true;
		}
		if(var_1882_bool != 0) {
			int var_1890_int;
			var_1809_int = var_1890_int;
			func_517(var_1890_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1894_bool; int var_1895_int; int var_1896_int;
		var_1810_int = var_1895_int;
		var_1811_int = var_1896_int;
		func_1328(var_1894_bool, var_1895_int, var_1896_int);
		if(var_1894_bool != 0) {
			int var_1897_int;
			var_1809_int = var_1897_int;
			func_517(var_1897_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1555:
	int var_1938_int;
	var_1809_int = var_1938_int;
	func_517(var_1938_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1942_int;
	var_1809_int = var_1942_int;
	func_517(var_1942_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1946_int;
	var_1809_int = var_1946_int;
	func_517(var_1946_int, "pers_unosha", "unosha.xml", 1);
	int var_1950_int;
	var_1809_int = var_1950_int;
	func_517(var_1950_int, "pers_unosha", "unosha2.xml", 1);
}


// @pe
void func_10585(void)
{
	int var_5063_int;
	func_132(var_5063_int, "map_chertez_state");
	if(var_5063_int <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_12646(int var_4314_int)
{
	object var_4322_object; object var_4323_object; object var_4324_object; object var_4325_object; object var_4326_object; string var_4327_string; string var_4328_string;
	if(var_4314_int == 1) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4322_object, "r4_house_2_02");
		@ReplaceScene(var_4322_object, "s_r4_house_2_02.isc");
		var_4322_object = null;
	}
	if(var_4314_int == 3) {
	} else if(var_4314_int == 4) {
			@GetSceneByName(var_4323_object, "theater");
			@ReplaceScene(var_4323_object, "dtheater_klara.isc");
			var_4323_object = null;
	}

	for(;;) {
		bool var_4336_bool = false;
		if((var_4314_int + 1) >= 8) {
			if((var_4314_int + 1) <= 11)
				var_4336_bool = true;
		}
		if(var_4336_bool != 0) {
			string var_4345_string;
			func_12249(var_4345_string, (var_4314_int + 1));
			var_4345_string = var_4327_string;
			@GetSceneByName(var_4326_object, var_4327_string);
			@ReplaceScene(var_4326_object, (("k2s_" + var_4327_string) + ".isc"));
			string var_4360_string;
			func_12275(var_4360_string, (var_4314_int + 1));
			var_4360_string = var_4328_string;
			@GetSceneByName(var_4326_object, var_4328_string);
			@ReplaceScene(var_4326_object, (("k2s_" + var_4328_string) + ".isc"));
			var_4326_object = null;
		}

	}
	
	if(var_4314_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4324_object, "uprava_admin");
		@ReplaceScene(var_4324_object, "uprava_admin_army_klara.isc");
		var_4324_object = null;
	} else if(var_4314_int == 11) {
		@GetSceneByName(var_4325_object, "theater");
		@ReplaceScene(var_4325_object, "theater_klara.isc");
		var_4325_object = null;
	}
}


void func_358(int var_120_int)
{
	int var_123_int; int var_124_int;
	var_123_int = 0;
	
	while(0 < 16) {
		bool var_127_bool; int var_128_int;
		var_124_int = var_128_int;
		func_444(var_127_bool, var_128_int);
		if(var_127_bool != 0)
			var_123_int += 1;
		var_124_int += 1;
	}
	
	var_123_int = var_120_int;
}


// @pe
void func_10602(void)
{
	int var_5077_int;
	func_132(var_5077_int, "map_chertez_state");
	if(var_5077_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_2412(int var_904_int, int var_905_int, int var_906_int)
{
	int var_908_int;
	if((var_905_int + 1) == 12)
		return 2;
	bool var_913_bool = false;
	bool var_914_bool = true;
	var_916_bool = var_906_int < 7;
	if(var_916_bool != 1) {
		var_918_bool = var_906_int > 21;
		if(var_918_bool != 1)
			var_914_bool = false;
	}
	if(var_914_bool != 0) {
		if(var_905_int != 0)
			var_913_bool = true;
	}
	if(var_913_bool != 0) {
		float var_922_float; int var_923_int;
		var_905_int = var_923_int;
		func_1124(var_922_float, var_923_int);
		if((1 * var_922_float) != 0) {
			int var_925_int; int var_928_int;
			var_904_int = var_925_int;
			var_908_int = var_928_int;
			func_517(var_925_int, "pers_grabitel", "grabitel.xml", var_928_int);
		}
	}
	bool var_929_bool = false;
	bool var_930_bool = false;
	if(var_905_int == 0) {
		if(var_906_int < 21)
			var_930_bool = true;
	}
	if(var_930_bool != 0) {
		int var_935_int;
		func_10924(var_935_int);
		if(var_935_int == 1)
			var_929_bool = true;
	}
	if(var_929_bool != 0) {
		int var_938_int;
		var_904_int = var_938_int;
		func_517(var_938_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_942_int;
		var_904_int = var_942_int;
		func_517(var_942_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_946_int;
		var_904_int = var_946_int;
		func_517(var_946_int, "pers_worker", "worker_attacker.xml", 1);
		int var_950_int;
		var_904_int = var_950_int;
		func_517(var_950_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_954_int;
		var_904_int = var_954_int;
		func_517(var_954_int, "pers_alkash", "alkash.xml", 1);
		int var_958_int;
		var_904_int = var_958_int;
		func_517(var_958_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_974_bool = false;
			if(var_906_int > 8) {
				if(var_906_int < 21)
					var_974_bool = true;
			}
			if(var_974_bool == 0) goto Label_2567;
			int var_979_int;
			var_904_int = var_979_int;
			func_517(var_979_int, "pers_worker", "worker.xml", 2);
			int var_983_int;
			var_904_int = var_983_int;
			func_517(var_983_int, "pers_worker", "worker2.xml", 2);
			int var_987_int;
			var_904_int = var_987_int;
			func_517(var_987_int, "pers_alkash", "alkash.xml", 1);
			int var_991_int;
			var_904_int = var_991_int;
			func_517(var_991_int, "pers_woman", "woman.xml", 2);
			int var_995_int;
			var_904_int = var_995_int;
			func_517(var_995_int, "pers_unosha", "unosha.xml", 1);
			int var_999_int;
			var_904_int = var_999_int;
			func_517(var_999_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_962_bool = false;
		bool var_963_bool = false;
		if(var_905_int == 0) {
			if(var_906_int > 12)
				var_963_bool = true;
		}
		if(var_963_bool != 0) {
			if(var_906_int < 22)
				var_962_bool = true;
		}
		if(var_962_bool != 0) {
			int var_970_int;
			var_904_int = var_970_int;
			func_517(var_970_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2567:
	int var_1003_int;
	var_904_int = var_1003_int;
	func_517(var_1003_int, "pers_alkash", "alkash.xml", 1);
	int var_1007_int;
	var_904_int = var_1007_int;
	func_517(var_1007_int, "pers_worker", "worker.xml", 1);
	int var_1011_int;
	var_904_int = var_1011_int;
	func_517(var_1011_int, "pers_worker", "worker2.xml", 1);
	int var_1015_int;
	var_904_int = var_1015_int;
	func_517(var_1015_int, "pers_unosha", "unosha2.xml", 1);
	int var_1019_int;
	var_904_int = var_1019_int;
	func_517(var_1019_int, "pers_dog", "dog.xml", 1);
}


// @pe
void func_6511(object var_243_object)
{
	var_243_object->add("r5_house2_01");
	var_243_object->add("r5_house2_02");
	var_243_object->add("r5_house2_03");
	var_243_object->add("r5_house3_01_i2");
	var_243_object->add("r5_house3_01");
	var_243_object->add("r5_house3_02_i2");
	var_243_object->add("r5_house3_02");
	var_243_object->add("r5_house3_03_i2");
	var_243_object->add("r5_house3_03");
	var_243_object->add("r5_house3_04_i2");
	var_243_object->add("r5_house3_04");
	var_243_object->add("r5_house3_05_i2");
	var_243_object->add("r5_house3_05");
	var_243_object->add("r5_house3_06_i2");
	var_243_object->add("r5_house3_06");
	var_243_object->add("r5_house3_07_i2");
	var_243_object->add("r5_house3_07");
	var_243_object->add("r5_House6_01");
}


void func_376(void)
{
	int var_136_int; int var_138_int;
	@irand(var_136_int, 16);
	int var_137_int = 0;
	
	while(var_137_int < 16) {
		var_138_int = (var_137_int + var_136_int) % 16;
		bool var_144_bool = false;
		bool var_145_bool; int var_146_int;
		var_138_int = var_146_int;
		func_414(var_145_bool, var_146_int);
		if(var_145_bool != 0) {
			bool var_154_bool; int var_155_int;
			var_138_int = var_155_int;
			func_12302(var_154_bool, var_155_int);
			if(var_154_bool != 0)
				var_144_bool = true;
		}
		if(var_144_bool != 0) {
			int var_178_int;
			func_456(var_178_int);
			@Trace("Diseased Region: " + var_178_int);
		}
		var_137_int += 1;
	}
	
}


// @pe
void func_10619(void)
{
	func_177("cot_georg@door1", false);
	func_177("cot_georg@door2", false);
}


// @pe
void func_9598(int var_4819_int, float var_4820_float)
{
	float var_4824_float;
	var_4820_float = var_4824_float;
	int var_4821_int;
	func_10899(var_4821_int, 530554, 530553, var_4824_float);
	var_4821_int = var_4819_int;
}


// @pe
void func_4482(int var_2014_int, int var_2015_int, object var_2016_object, object var_2017_object, object var_2018_object, object var_2019_object)
{
	if(var_2015_int == 0) {
		func_810(0, true);
		func_827(0, true, 1);
		int var_2028_int; object var_2029_object; object var_2030_object; object var_2031_object;
		var_2014_int = var_2028_int;
		var_2016_object = var_2029_object;
		var_2017_object = var_2030_object;
		var_2018_object = var_2031_object;
		func_655(0, var_2028_int, var_2029_object, var_2030_object, var_2031_object);
		object var_2117_object;
		var_2019_object = var_2117_object;
		func_320(var_2117_object, 1);
		func_884(0, true, 4);
		func_946(0, false, 4);
	}
	func_793(0, false);
	int var_2128_int; int var_2129_int;
	var_2014_int = var_2128_int;
	var_2015_int = var_2129_int;
	func_3180(0, var_2128_int, var_2129_int);
}


// @pe
void func_9607(int var_4797_int, float var_4798_float)
{
	float var_4802_float;
	var_4798_float = var_4802_float;
	int var_4799_int;
	func_10899(var_4799_int, 530556, 530555, var_4802_float);
	var_4799_int = var_4797_int;
}


// @pe
void func_10631(object var_5557_object)
{
	object var_5562_object;
	var_5557_object = var_5562_object;
	bool var_5561_bool;
	func_194(var_5561_bool, var_5562_object, -0.1);
}


// @pe
void func_10638(void)
{
	func_177("termitnik@door1", true);
}


// @pe
void func_5520(int var_1343_int, int var_1344_int, object var_1345_object, object var_1346_object, object var_1347_object, object var_1348_object)
{
	if(var_1344_int == 0) {
		func_810(5, false);
		func_827(5, false, 1);
		int var_1356_int; int var_1357_int; object var_1358_object; object var_1359_object; object var_1360_object;
		var_1356_int = 5;
		var_1343_int = var_1357_int;
		var_1345_object = var_1358_object;
		var_1346_object = var_1359_object;
		var_1347_object = var_1360_object;
		func_636(var_1357_int, var_1358_object, var_1359_object, var_1360_object);
		object var_1361_object;
		var_1348_object = var_1361_object;
		func_320(var_1361_object, 0);
		func_884(5, false, 4);
		func_946(5, false, 4);
	}
	int var_1370_int;
	var_1344_int = var_1370_int;
	func_997(5, var_1370_int);
	int var_1372_int; int var_1373_int;
	var_1343_int = var_1372_int;
	var_1344_int = var_1373_int;
	func_1898(5, var_1372_int, var_1373_int);
}


// @pe
void func_9616(int var_4786_int, float var_4787_float)
{
	float var_4791_float;
	var_4787_float = var_4791_float;
	int var_4788_int;
	func_10899(var_4788_int, 530558, 530557, var_4791_float);
	var_4788_int = var_4786_int;
}


void func_8595(void)
{
	object var_4550_object; object var_4553_object; bool var_4554_bool; cvector var_4555_cvector; cvector var_4556_cvector; string var_4557_string;
	@GetMainOutdoorScene(var_4550_object);
	var_4558_object = GlobalVars[7];
	int var_4551_int;
	var_4558_object->size(var_4551_int);
	int var_4552_int = 0;
	
	for(;;) {
		if(var_4552_int < var_4551_int) {
			var_4560_object = GlobalVars[7];
			var_4560_object->get(var_4553_object, var_4552_int);
			if(var_4553_object != 0) {
			} else {
			var_4550_object->GetLocator(("pt_grave_supply" + (var_4552_int + 1)), var_4554_bool, var_4555_cvector, var_4556_cvector);
			if(!var_4554_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8639;
			}
			@RandOneOf(var_4557_string, 1, 1, "bread", "milk");
			var_4550_object->AddStationaryActorByType(var_4553_object, var_4555_cvector, var_4556_cvector, "scripted", (("item_" + var_4557_string) + "_stat.xml"));
			var_4578_object = GlobalVars[7];
			var_4578_object->set(var_4552_int, var_4553_object);
			var_4553_object = null;
		}
		}
	Label_8639:
		var_4552_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_10645(void)
{
	func_177("mnogogrannik@door1", true);
}


// @pe
void func_9625(int var_4775_int, float var_4776_float)
{
	float var_4780_float;
	var_4776_float = var_4780_float;
	int var_4777_int;
	func_10899(var_4777_int, 530560, 530559, var_4780_float);
	var_4777_int = var_4775_int;
}


// @pe
void func_10652(bool var_5550_bool)
{
	int var_5553_int;
	func_132(var_5553_int, "k3q04SendBurahMail");
	if(var_5553_int != 0) {
		var_5550_bool = true;
		return 0;
	}
	var_5550_bool = false;
}


void func_414(bool var_490_bool, int var_491_int)
{
	int var_495_int;
	var_491_int = var_495_int;
	string var_494_string;
	func_314(var_494_string, var_495_int);
	int var_493_int;
	@GetVariable(var_494_string, var_493_int);
	var_490_bool = (var_493_int & 3) == 0;
}


// @pe
void func_9634(int var_5414_int, float var_5415_float)
{
	float var_5419_float;
	var_5415_float = var_5419_float;
	int var_5416_int;
	func_10899(var_5416_int, 530562, 530561, var_5419_float);
	var_5416_int = var_5414_int;
}


// @pe
void func_6567(int var_1673_int, int var_1674_int, object var_1675_object, object var_1676_object, object var_1677_object, object var_1678_object)
{
	if(var_1674_int == 0) {
		func_810(11, false);
		func_827(11, false, 1);
		int var_1686_int; int var_1687_int; object var_1688_object; object var_1689_object; object var_1690_object;
		var_1686_int = 11;
		var_1673_int = var_1687_int;
		var_1675_object = var_1688_object;
		var_1676_object = var_1689_object;
		var_1677_object = var_1690_object;
		func_636(var_1687_int, var_1688_object, var_1689_object, var_1690_object);
		object var_1691_object;
		var_1678_object = var_1691_object;
		func_320(var_1691_object, 0);
		func_884(11, false, 5);
		func_946(11, false, 5);
	}
	int var_1700_int;
	var_1674_int = var_1700_int;
	func_997(11, var_1700_int);
	int var_1702_int; int var_1703_int;
	var_1673_int = var_1702_int;
	var_1674_int = var_1703_int;
	func_1621(11, var_1702_int, var_1703_int);
}


// @pe
void func_10664(bool var_4937_bool)
{
	int var_4940_int;
	func_132(var_4940_int, "k10q01KnowAboutRubin");
	if(var_4940_int != 0) {
		var_4937_bool = true;
		return 0;
	}
	var_4937_bool = false;
}


void func_426(int var_93_int)
{
	int var_99_int;
	var_93_int = var_99_int;
	string var_98_string;
	func_314(var_98_string, var_99_int);
	int var_96_int;
	@GetVariable(var_98_string, var_96_int);
	string var_103_string; int var_104_int;
	var_93_int = var_104_int;
	func_314(var_103_string, var_104_int);
	@SetVariable(var_103_string, ((var_96_int & 252) | 0));
}


// @pe
void func_9643(int var_5214_int, float var_5215_float)
{
	float var_5219_float;
	var_5215_float = var_5219_float;
	int var_5216_int;
	func_10899(var_5216_int, 530564, 530563, var_5219_float);
	var_5216_int = var_5214_int;
}


// @pe
void func_9652(int var_5148_int, float var_5149_float)
{
	float var_5153_float;
	var_5149_float = var_5153_float;
	int var_5150_int;
	func_10899(var_5150_int, 530566, 530565, var_5153_float);
	var_5150_int = var_5148_int;
}


// @pe
void func_10676(bool var_5387_bool)
{
	int var_5390_int;
	func_132(var_5390_int, "resque_list");
	if(var_5390_int != 0) {
		var_5387_bool = true;
		return 0;
	}
	var_5387_bool = false;
}


// @pe
void func_4534(int var_3195_int, int var_3196_int, object var_3197_object, object var_3198_object, object var_3199_object, object var_3200_object)
{
	if(var_3196_int == 0) {
		func_810(0, false);
		func_827(0, false, 1);
		int var_3209_int; object var_3210_object; object var_3211_object; object var_3212_object;
		var_3195_int = var_3209_int;
		var_3197_object = var_3210_object;
		var_3198_object = var_3211_object;
		var_3199_object = var_3212_object;
		func_734(0, var_3209_int, var_3210_object, var_3211_object, var_3212_object);
		object var_3247_object;
		var_3200_object = var_3247_object;
		func_320(var_3247_object, 2);
		func_884(0, false, 4);
		func_946(0, true, 4);
	}
	func_793(0, false);
	int var_3258_int; int var_3259_int;
	var_3195_int = var_3258_int;
	var_3196_int = var_3259_int;
	func_4078(0, var_3258_int, var_3259_int);
}


void func_3514(int var_4166_int, int var_4167_int, int var_4168_int)
{
	int var_4173_int; int var_4174_int; int var_4175_int; int var_4176_int;
	bool var_4177_bool = false;
	if(var_4168_int > 8) {
		if(var_4168_int < 21)
			var_4177_bool = true;
	}
	if(var_4177_bool != 0) {
		int var_4182_int;
		var_4166_int = var_4182_int;
		func_517(var_4182_int, "pers_rat", "rat.xml", 3);
		int var_4186_int;
		var_4166_int = var_4186_int;
		func_517(var_4186_int, "pers_alkash", "alkash.xml", 2);
		int var_4190_int;
		var_4166_int = var_4190_int;
		func_517(var_4190_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4195_float; int var_4196_int;
		func_1148(var_4195_float, var_4196_int);
		if((2 * var_4195_float) != 0) {
			int var_4198_int; int var_4201_int;
			var_4166_int = var_4198_int;
			var_4173_int = var_4201_int;
			func_517(var_4198_int, "pers_grabitel", "grabitel.xml", var_4201_int);
		}
		if((var_4196_int + 1) >= 2) {
			int var_4206_int;
			var_4166_int = var_4206_int;
			func_517(var_4206_int, "pers_patrool", "patrol.xml", 2);
			bool var_4210_bool; int var_4211_int;
			var_4167_int = var_4211_int;
			func_1355(var_4210_bool, var_4211_int);
			if(var_4210_bool != 0) {
				int var_4212_int;
				var_4166_int = var_4212_int;
				func_517(var_4212_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4217_float; int var_4218_int;
		func_1238(var_4217_float, var_4218_int);
		if((1 * var_4217_float) != 0) {
			int var_4220_int; int var_4223_int;
			var_4166_int = var_4220_int;
			var_4174_int = var_4223_int;
			func_517(var_4220_int, "pers_bomber", "bomber.xml", var_4223_int);
		}
	} else {
		int var_4237_int;
		var_4166_int = var_4237_int;
		func_517(var_4237_int, "pers_rat", "rat.xml", 5);
		int var_4241_int;
		var_4166_int = var_4241_int;
		func_517(var_4241_int, "pers_alkash", "alkash.xml", 1);
		if((var_4218_int + 1) >= 2) {
			int var_4249_int;
			var_4166_int = var_4249_int;
			func_517(var_4249_int, "pers_patrool", "patrol.xml", 1);
			bool var_4253_bool; int var_4254_int;
			var_4167_int = var_4254_int;
			func_1355(var_4253_bool, var_4254_int);
			if(var_4253_bool != 0) {
				int var_4255_int;
				var_4166_int = var_4255_int;
				func_517(var_4255_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4259_int;
		var_4166_int = var_4259_int;
		func_517(var_4259_int, "pers_rat", "rat.xml", 2);
		float var_4264_float; int var_4265_int;
		var_4167_int = var_4265_int;
		func_1148(var_4264_float, var_4265_int);
		if((3 * var_4264_float) != 0) {
			int var_4267_int; int var_4270_int;
			var_4166_int = var_4267_int;
			var_4175_int = var_4270_int;
			func_517(var_4267_int, "pers_grabitel", "grabitel.xml", var_4270_int);
		}
		float var_4272_float; int var_4273_int;
		var_4167_int = var_4273_int;
		func_1238(var_4272_float, var_4273_int);
		if((1 * var_4272_float) == 0) goto Label_3676;
		int var_4275_int; int var_4278_int;
		var_4166_int = var_4275_int;
		var_4176_int = var_4278_int;
		func_517(var_4275_int, "pers_bomber", "bomber.xml", var_4278_int);
	}
Label_3676:
	bool var_4224_bool; int var_4225_int; int var_4226_int;
	var_4167_int = var_4225_int;
	var_4168_int = var_4226_int;
	func_1328(var_4224_bool, var_4225_int, var_4226_int);
	if(var_4224_bool != 0) {
		int var_4227_int;
		var_4166_int = var_4227_int;
		func_517(var_4227_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4231_bool; int var_4232_int;
	var_4167_int = var_4232_int;
	func_1355(var_4231_bool, var_4232_int);
	if(var_4231_bool != 0) {
		int var_4233_int;
		var_4166_int = var_4233_int;
		func_517(var_4233_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_444(bool var_1988_bool, int var_1989_int)
{
	int var_1993_int;
	var_1989_int = var_1993_int;
	string var_1992_string;
	func_314(var_1992_string, var_1993_int);
	int var_1991_int;
	@GetVariable(var_1992_string, var_1991_int);
	var_1988_bool = (var_1991_int & 3) == 1;
}


// @pe
void func_9661(int var_5112_int, float var_5113_float)
{
	float var_5117_float;
	var_5113_float = var_5117_float;
	int var_5114_int;
	func_10899(var_5114_int, 530568, 530567, var_5117_float);
	var_5114_int = var_5112_int;
}


// @pe
void func_10688(bool var_5359_bool)
{
	int var_5362_int;
	func_132(var_5362_int, "k2AlexandrVisit");
	if(var_5362_int != 0) {
		var_5359_bool = true;
		return 0;
	}
	var_5359_bool = false;
}


void func_8644(void)
{
	object var_4498_object;
	@GetMainOutdoorScene(var_4498_object);
	object var_4499_object;
	@AddScriptedActor(var_4499_object, "big_gun", "big_gun.bin", var_4498_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4499_object, "vagon_martira", "big_gun.bin", var_4498_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4499_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4498_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5572(int var_2628_int, int var_2629_int, object var_2630_object, object var_2631_object, object var_2632_object, object var_2633_object)
{
	if(var_2629_int == 0) {
		func_810(5, true);
		func_827(5, true, 1);
		int var_2642_int; object var_2643_object; object var_2644_object; object var_2645_object;
		var_2628_int = var_2642_int;
		var_2630_object = var_2643_object;
		var_2631_object = var_2644_object;
		var_2632_object = var_2645_object;
		func_655(5, var_2642_int, var_2643_object, var_2644_object, var_2645_object);
		object var_2646_object;
		var_2633_object = var_2646_object;
		func_320(var_2646_object, 1);
		func_884(5, true, 4);
		func_946(5, false, 4);
	}
	func_793(5, false);
	int var_2657_int; int var_2658_int;
	var_2628_int = var_2657_int;
	var_2629_int = var_2658_int;
	func_2987(5, var_2657_int, var_2658_int);
}


// @pe
void func_9670(int var_5101_int, float var_5102_float)
{
	float var_5106_float;
	var_5102_float = var_5106_float;
	int var_5103_int;
	func_10899(var_5103_int, 530570, 530569, var_5106_float);
	var_5103_int = var_5101_int;
}


void func_12743(object var_4380_object, object var_4381_object, cvector var_4382_cvector, cvector var_4383_cvector)
{
	object var_4385_object;
	var_4381_object->AddStationaryActor(var_4385_object, var_4382_cvector, var_4383_cvector, "pers_morlok", "Burah_arena_manager.xml");
	var_4385_object = var_4380_object;
}
EMIT "Stack[-1] = 0";


void func_456(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_314(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_314(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_10700(bool var_5328_bool)
{
	int var_5331_int;
	func_132(var_5331_int, "k2LaraVisit");
	if(var_5331_int != 0) {
		var_5328_bool = true;
		return 0;
	}
	var_5328_bool = false;
}


// @pe
void func_9679(int var_4945_int, float var_4946_float)
{
	float var_4950_float;
	var_4946_float = var_4950_float;
	int var_4947_int;
	func_10899(var_4947_int, 527719, 527718, var_4950_float);
	var_4947_int = var_4945_int;
}


// @pe
void func_9688(int var_5090_int, float var_5091_float)
{
	float var_5095_float;
	var_5091_float = var_5095_float;
	int var_5092_int;
	func_10899(var_5092_int, 530572, 530571, var_5095_float);
	var_5092_int = var_5090_int;
}


void func_8665(bool var_2_bool, int var_3_int)
{
	int var_11_int; int var_12_int; int var_13_int; float var_14_float; int var_15_int; int var_16_int;
	bool var_17_bool = false;
	if(var_3_int > 16384) {
		if(var_3_int < 16396)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - 16384;
		int var_23_int;
		var_11_int = var_23_int;
		func_12373(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_309_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_322_int; int var_323_int; int var_324_int; int var_325_int;
		var_12_int = var_322_int;
		var_13_int = var_323_int;
		var_15_int = var_324_int;
		var_16_int = var_325_int;
		func_8803(var_322_int, var_323_int, var_324_int, var_325_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


// @pe
void func_10712(bool var_5280_bool)
{
	int var_5283_int;
	func_132(var_5283_int, "k5LaskaVisit");
	if(var_5283_int != 0) {
		var_5280_bool = true;
		return 0;
	}
	var_5280_bool = false;
}


// @pe
void func_6619(int var_2909_int, int var_2910_int, object var_2911_object, object var_2912_object, object var_2913_object, object var_2914_object)
{
	if(var_2910_int == 0) {
		func_810(11, false);
		func_827(11, true, 1);
		int var_2923_int; object var_2924_object; object var_2925_object; object var_2926_object;
		var_2909_int = var_2923_int;
		var_2911_object = var_2924_object;
		var_2912_object = var_2925_object;
		var_2913_object = var_2926_object;
		func_655(11, var_2923_int, var_2924_object, var_2925_object, var_2926_object);
		object var_2927_object;
		var_2914_object = var_2927_object;
		func_320(var_2927_object, 1);
		func_884(11, true, 5);
		func_946(11, false, 5);
	}
	func_793(11, false);
	int var_2938_int; int var_2939_int;
	var_2909_int = var_2938_int;
	var_2910_int = var_2939_int;
	func_2807(11, var_2938_int, var_2939_int);
}


void func_474(bool var_84_bool, int var_85_int)
{
	int var_89_int;
	var_85_int = var_89_int;
	string var_88_string;
	func_314(var_88_string, var_89_int);
	int var_87_int;
	@GetVariable(var_88_string, var_87_int);
	var_84_bool = (var_87_int & 3) == 2;
}


void func_7645(int var_10_int)
{
	object var_27_object;
	var_28_object = GlobalVars[14];
	int var_20_int;
	var_28_object->size(var_20_int);
	bool var_29_bool = true;
	var_30_bool = var_10_int >= var_20_int;
	if(var_30_bool != 1) {
		var_32_bool = var_10_int == -1;
		if(var_32_bool != 1)
			var_29_bool = false;
	}
	if(var_29_bool != 0) {
		@Trace("Wrong bonfire index " + var_10_int);
		return 16;
	}
	var_35_object = GlobalVars[14];
	object var_21_object;
	var_35_object->get(var_21_object, var_10_int);
	object var_22_object;
	@FindActor(var_22_object, ("bonfire_light" + (var_10_int + 1)));
	if(!var_22_object) //@nz
		@Trace(("Bofire  light " + (var_10_int + 1)) + " not found");
	else
		var_22_object->Switch(true);
	object var_23_object;
	@GetMainOutdoorScene(var_23_object);
	cvector var_24_cvector;
	cvector var_25_cvector;
	bool var_26_bool;
	var_23_object->GetLocator(("pt_bonfire" + (var_10_int + 1)), var_26_bool, var_24_cvector, var_25_cvector);
	if(!var_26_bool) { //@nz
		@Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	if(!var_21_object) { //@nz
		@AddActorByType(var_27_object, "scripted", var_23_object, var_24_cvector, var_25_cvector, "bonfire_big.xml");
		var_56_object = GlobalVars[14];
		var_56_object->set(var_10_int, var_27_object);
		var_27_object = null;
	}
	@Trace(("Setting bonfire " + (var_10_int + 1)) + "... ok");
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


// @pe
void func_9697(int var_4808_int, float var_4809_float)
{
	float var_4813_float;
	var_4809_float = var_4813_float;
	int var_4810_int;
	func_10899(var_4810_int, 530574, 530573, var_4813_float);
	var_4810_int = var_4808_int;
}


// @pe
void func_10724(bool var_5367_bool)
{
	int var_5370_int;
	func_132(var_5370_int, "k2KaterinaVisit");
	if(var_5370_int != 0) {
		var_5367_bool = true;
		return 0;
	}
	var_5367_bool = false;
}


void func_486(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_314(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_314(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_4586(object var_63_object)
{
	var_63_object->add("dt_house3_05_i2");
	var_63_object->add("dt_house3_05");
	var_63_object->add("dt_house3_06_i2");
	var_63_object->add("dt_house_1_10");
	var_63_object->add("house5_10");
	var_63_object->add("house5_07");
	var_63_object->add("dt_house_1_03");
	var_63_object->add("dt_house1_union2_04l");
	var_63_object->add("dt_house1_union2_04r");
	var_63_object->add("house5_22");
	var_63_object->add("house5_08");
	var_63_object->add("dt_house1_union2_02l");
	var_63_object->add("dt_house1_union2_02r");
}


// @pe
void func_9706(int var_5395_int, float var_5396_float)
{
	float var_5400_float;
	var_5396_float = var_5400_float;
	int var_5397_int;
	func_10899(var_5397_int, 538944, 538943, var_5400_float);
	var_5397_int = var_5395_int;
}


// @pe
void func_10736(bool var_5244_bool)
{
	int var_5247_int;
	func_132(var_5247_int, "k3AlexandrVisit");
	if(var_5247_int != 0) {
		var_5244_bool = true;
		return 0;
	}
	var_5244_bool = false;
}


// @pe
void func_9715(int var_5379_int, float var_5380_float)
{
	float var_5384_float;
	var_5380_float = var_5384_float;
	int var_5381_int;
	func_10899(var_5381_int, 538946, 538945, var_5384_float);
	var_5381_int = var_5379_int;
}


void func_504(int var_485_int)
{
	object var_487_object;
	@GetMainOutdoorScene(var_487_object);
	if(var_487_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_487_object->RemoveAllRegionActors(var_485_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5624(int var_3754_int, int var_3755_int, object var_3756_object, object var_3757_object, object var_3758_object, object var_3759_object)
{
	if(var_3755_int == 0) {
		func_810(5, false);
		func_827(5, false, 1);
		int var_3768_int; object var_3769_object; object var_3770_object; object var_3771_object;
		var_3754_int = var_3768_int;
		var_3756_object = var_3769_object;
		var_3757_object = var_3770_object;
		var_3758_object = var_3771_object;
		func_734(5, var_3768_int, var_3769_object, var_3770_object, var_3771_object);
		object var_3772_object;
		var_3759_object = var_3772_object;
		func_320(var_3772_object, 2);
		func_884(5, false, 4);
		func_946(5, true, 4);
	}
	func_793(5, false);
	int var_3783_int; int var_3784_int;
	var_3754_int = var_3783_int;
	var_3755_int = var_3784_int;
	func_3890(5, var_3783_int, var_3784_int);
}


// @pe
void func_9724(int var_5137_int, float var_5138_float)
{
	float var_5142_float;
	var_5138_float = var_5142_float;
	int var_5139_int;
	func_10899(var_5139_int, 538954, 538953, var_5142_float);
	var_5139_int = var_5137_int;
}


// @pe
void func_10748(bool var_5252_bool)
{
	int var_5255_int;
	func_132(var_5255_int, "k3KaterinaVisit");
	if(var_5255_int != 0) {
		var_5252_bool = true;
		return 0;
	}
	var_5252_bool = false;
}


// @pe
void func_9733(int var_5320_int, float var_5321_float)
{
	float var_5325_float;
	var_5321_float = var_5325_float;
	int var_5322_int;
	func_10899(var_5322_int, 538948, 538947, var_5325_float);
	var_5322_int = var_5320_int;
}


void func_517(int var_781_int, string var_782_string, string var_783_string, int var_784_int)
{
	object var_786_object;
	@GetMainOutdoorScene(var_786_object);
	if(var_786_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_786_object->SetRegionActorCount(var_781_int, var_782_string, var_783_string, var_784_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10760(bool var_5223_bool)
{
	int var_5226_int;
	func_132(var_5226_int, "k4AlexandrVisit");
	if(var_5226_int != 0) {
		var_5223_bool = true;
		return 0;
	}
	var_5223_bool = false;
}


// @pe
void func_9742(int var_5350_int, float var_5351_float)
{
	float var_5355_float;
	var_5351_float = var_5355_float;
	int var_5352_int;
	func_10899(var_5352_int, 538950, 538949, var_5355_float);
	var_5352_int = var_5350_int;
}


// @pe
void func_6671(int var_4039_int, int var_4040_int, object var_4041_object, object var_4042_object, object var_4043_object, object var_4044_object)
{
	if(var_4040_int == 0) {
		func_810(11, true);
		func_827(11, false, 1);
		int var_4053_int; object var_4054_object; object var_4055_object; object var_4056_object;
		var_4039_int = var_4053_int;
		var_4041_object = var_4054_object;
		var_4042_object = var_4055_object;
		var_4043_object = var_4056_object;
		func_734(11, var_4053_int, var_4054_object, var_4055_object, var_4056_object);
		object var_4057_object;
		var_4044_object = var_4057_object;
		func_320(var_4057_object, 2);
		func_884(11, false, 5);
		func_946(11, true, 5);
	}
	func_793(11, false);
	int var_4068_int; int var_4069_int;
	var_4039_int = var_4068_int;
	var_4040_int = var_4069_int;
	func_3702(11, var_4068_int, var_4069_int);
}


void func_8720(void)
{
	float var_422_float; int var_424_int; float var_425_float; int var_426_int; object var_427_object; object var_428_object;
	@GetGameTime(var_422_float);
	int var_423_int = 1;
	
	while(var_423_int < 12) {
		@SetTimeEvent((16384 + var_423_int), (24 * var_423_int));
		var_423_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_424_int = var_425_float;
			if(var_425_float < var_422_float) {
			} else {
			@SetTimeEvent((32768 + var_424_int), var_425_float);
		}

		while(0 < 16) {
			string var_444_string; int var_445_int;
			var_426_int = var_445_int;
			func_314(var_444_string, var_445_int);
			@SetVariable(var_444_string, 0);
			int var_450_int;
			var_426_int = var_450_int;
			func_810(var_450_int, false);
			var_426_int += 1;
		}

		int var_463_int; int var_465_int;
		var_463_int = var_422_float % 24;
		var_465_int = var_422_float % 24;
		func_8803(0, var_463_int, 0, var_465_int);
		@FindActor(var_427_object, "dt_house_1_07");
		var_427_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_428_object);
		bool var_4413_bool = true;
		var_4415_bool = var_422_float < 7;
		if(var_4415_bool != 1) {
			var_4417_bool = var_422_float >= 20;
			if(var_4417_bool != 1)
				var_4413_bool = false;
		}
		var_428_object->SwitchLights(0, var_4413_bool);
		}
		var_424_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_530(int var_2224_int, string var_2225_string, string var_2226_string, int var_2227_int, int var_2228_int, int var_2229_int)
{
	object var_2231_object;
	@GetMainOutdoorScene(var_2231_object);
	if(var_2231_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2231_object->SetRegionActorCount(var_2224_int, var_2225_string, var_2226_string, var_2227_int, var_2228_int, var_2229_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4627(int var_876_int, int var_877_int, object var_878_object, object var_879_object, object var_880_object, object var_881_object)
{
	if(var_877_int == 0) {
		func_810(1, false);
		func_827(1, false, 1);
		int var_889_int; int var_890_int; object var_891_object; object var_892_object; object var_893_object;
		var_889_int = 1;
		var_876_int = var_890_int;
		var_878_object = var_891_object;
		var_879_object = var_892_object;
		var_880_object = var_893_object;
		func_636(var_890_int, var_891_object, var_892_object, var_893_object);
		object var_894_object;
		var_881_object = var_894_object;
		func_320(var_894_object, 0);
		func_884(1, false, 8);
		func_946(1, false, 8);
	}
	int var_903_int;
	var_877_int = var_903_int;
	func_1064(1, var_903_int);
	int var_905_int; int var_906_int;
	var_876_int = var_905_int;
	var_877_int = var_906_int;
	func_2412(1, var_905_int, var_906_int);
}


// @pe
void func_10772(bool var_5231_bool)
{
	int var_5234_int;
	func_132(var_5234_int, "k4KaterinaVisit");
	if(var_5234_int != 0) {
		var_5231_bool = true;
		return 0;
	}
	var_5231_bool = false;
}


// @pe
void func_9751(int var_5037_int, float var_5038_float)
{
	float var_5042_float;
	var_5038_float = var_5042_float;
	int var_5039_int;
	func_10899(var_5039_int, 530678, 530677, var_5042_float);
	var_5039_int = var_5037_int;
}


void func_543(int var_2151_int, string var_2152_string, string var_2153_string, int var_2154_int)
{
	object var_2156_object;
	@GetMainOutdoorScene(var_2156_object);
	if(var_2156_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2156_object->SetRegionActorCountByType(var_2151_int, var_2152_string, var_2153_string, var_2154_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11808(void)
{
	var_4584_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45095, 24.0);
	object var_4587_object; object var_4588_object;
	var_4589_object = GlobalVars[16];
	var_4589_object = var_4587_object;
	var_4590_object = GlobalVars[16];
	var_4590_object = var_4588_object;
	func_10619();
	object var_4603_object; object var_4604_object;
	var_4605_object = GlobalVars[16];
	var_4605_object = var_4603_object;
	var_4606_object = GlobalVars[16];
	var_4606_object = var_4604_object;
	func_9864();
	object var_4609_object; object var_4610_object;
	var_4611_object = GlobalVars[16];
	var_4611_object = var_4609_object;
	var_4612_object = GlobalVars[16];
	var_4612_object = var_4610_object;
	func_10638();
	object var_4615_object; object var_4616_object;
	var_4617_object = GlobalVars[16];
	var_4617_object = var_4615_object;
	var_4618_object = GlobalVars[16];
	var_4618_object = var_4616_object;
	func_9850();
	object var_4621_object; object var_4622_object;
	var_4623_object = GlobalVars[16];
	var_4623_object = var_4621_object;
	var_4624_object = GlobalVars[16];
	var_4624_object = var_4622_object;
	func_9857();
	object var_4627_object; object var_4628_object;
	var_4629_object = GlobalVars[16];
	var_4629_object = var_4627_object;
	var_4630_object = GlobalVars[16];
	var_4630_object = var_4628_object;
	func_10487();
	object var_4633_object; object var_4634_object;
	var_4635_object = GlobalVars[16];
	var_4635_object = var_4633_object;
	var_4636_object = GlobalVars[16];
	var_4636_object = var_4634_object;
	func_10645();
	object var_4639_object; object var_4640_object;
	var_4641_object = GlobalVars[16];
	var_4641_object = var_4639_object;
	var_4642_object = GlobalVars[16];
	var_4642_object = var_4640_object;
	func_10494();
	object var_4645_object;
	func_137(var_4645_object, "volonteers_klara");
	object var_4653_object;
	func_137(var_4653_object, "quest_k1_01");
	object var_4655_object;
	func_137(var_4655_object, "klara2_positioner");
	object var_4657_object;
	func_137(var_4657_object, "klara2_svita_positioner");
	object var_4659_object;
	func_137(var_4659_object, "klara2_npc_positioner");
	@SetTimeEvent(45258, 64.26);
	@SetTimeEvent(45272, 144.0);
	@SetTimeEvent(45273, 168.0);
	@SetTimeEvent(45274, 192.0);
	@SetTimeEvent(45166, 103.02);
	@SetTimeEvent(45165, 79.02);
	@SetTimeEvent(45164, 55.02);
	@SetTimeEvent(45173, 271.02);
	@SetTimeEvent(45163, 31.02);
	@SetTimeEvent(45110, 48.0);
	@SetTimeEvent(45109, 264.0);
	@SetTimeEvent(45249, 96.0);
	@SetTimeEvent(45108, 240.0);
	@SetTimeEvent(45107, 224.26);
	@SetTimeEvent(45106, 216.0);
	@SetTimeEvent(45105, 192.0);
	@SetTimeEvent(45104, 168.0);
	@SetTimeEvent(45256, 135.17);
	@SetTimeEvent(45257, 64.0);
	@SetTimeEvent(45275, 216.0);
	@SetTimeEvent(45276, 240.0);
	@SetTimeEvent(45277, 264.0);
	@SetTimeEvent(45172, 247.02);
	@SetTimeEvent(45171, 223.02);
	@SetTimeEvent(45170, 199.02);
	@SetTimeEvent(45253, 130.43);
	@SetTimeEvent(45169, 175.02);
	@SetTimeEvent(45252, 106.5);
	@SetTimeEvent(45254, 95.5);
	@SetTimeEvent(45103, 144.0);
	@SetTimeEvent(45168, 151.02);
	@SetTimeEvent(45251, 83.25);
	@SetTimeEvent(45250, 58.25);
	@SetTimeEvent(45255, 115.0);
	@SetTimeEvent(45248, 111.0);
	@SetTimeEvent(45247, 119.0);
	@SetTimeEvent(45246, 95.0);
	@SetTimeEvent(45245, 71.0);
	@SetTimeEvent(45244, 47.0);
	@SetTimeEvent(45243, 42.25);
	@SetTimeEvent(45242, 34.08);
	@SetTimeEvent(45241, 23.08);
	@SetTimeEvent(45240, 16.25);
	@SetTimeEvent(45236, 90.0);
	@SetTimeEvent(45167, 127.02);
	@SetTimeEvent(45101, 96.0);
	@SetTimeEvent(45102, 120.0);
	@SetTimeEvent(45100, 72.0);
	@SetTimeEvent(45096, 80.0);
}


// @pe
void func_9760(int var_4715_int, float var_4716_float)
{
	float var_4720_float;
	var_4716_float = var_4720_float;
	int var_4717_int;
	func_10899(var_4717_int, 530680, 530679, var_4720_float);
	var_4717_int = var_4715_int;
}


// @pe
void func_10784(bool var_5157_bool)
{
	int var_5160_int;
	func_132(var_5160_int, "k5AlexandrVisit");
	if(var_5160_int != 0) {
		var_5157_bool = true;
		return 0;
	}
	var_5157_bool = false;
}


// @pe
void func_9769(int var_5312_int, float var_5313_float)
{
	float var_5317_float;
	var_5313_float = var_5317_float;
	int var_5314_int;
	func_10899(var_5314_int, 538956, 538955, var_5317_float);
	var_5314_int = var_5312_int;
}


void func_7722(int var_377_int)
{
	var_384_object = GlobalVars[14];
	int var_381_int;
	var_384_object->size(var_381_int);
	bool var_385_bool = true;
	var_386_bool = var_377_int >= var_381_int;
	if(var_386_bool != 1) {
		var_388_bool = var_377_int == -1;
		if(var_388_bool != 1)
			var_385_bool = false;
	}
	if(var_385_bool != 0)
		@Trace("Wrong bonfire index " + var_377_int);
	var_391_object = GlobalVars[14];
	object var_382_object;
	var_391_object->get(var_382_object, var_377_int);
	object var_383_object;
	@FindActor(var_383_object, ("bonfire_light" + (var_377_int + 1)));
	if(!var_383_object) //@nz
		@Trace(("Bofire  light " + (var_377_int + 1)) + " not found");
	else
		var_383_object->Switch(false);
	if(var_382_object != 0)
		@RemoveActor(var_382_object);
	var_404_object = GlobalVars[14];
	var_404_object->set(var_377_int, Obj());
	@Trace(("Cleanup bonfire " + (var_377_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_556(int var_569_int, bool var_570_bool)
{
	object var_575_object; bool var_577_bool; object var_578_object;
	@GetMainOutdoorScene(var_575_object);
	object var_576_object;
	var_575_object->GetGroupActors(var_576_object, (101 + var_569_int));
	if(var_576_object != 0) {

		for(;;) {
			var_576_object->Next(var_577_bool, var_578_object);
			if(var_577_bool != 0) {
				bool var_583_bool; object var_584_object;
				var_578_object = var_584_object;
				func_81(var_583_bool, var_584_object, "locked");
				if(var_583_bool != 0)
					var_578_object->SetProperty("locked", var_570_bool);
				else
					@Trace(("Actor \"" + var_578_object) + "\" can't be locked");
			var_578_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5676(void)
{
}


// @pe
void func_5678(int var_1377_int)
{
	int var_1383_int;
	var_1377_int = var_1383_int;
	func_1064(6, var_1383_int);
}


// @pe
void func_10796(bool var_5165_bool)
{
	int var_5168_int;
	func_132(var_5168_int, "k5KaterinaVisit");
	if(var_5168_int != 0) {
		var_5165_bool = true;
		return 0;
	}
	var_5165_bool = false;
}


// @pe
void func_9778(int var_5403_int, float var_5404_float)
{
	float var_5408_float;
	var_5404_float = var_5408_float;
	int var_5405_int;
	func_10899(var_5405_int, 538402, 538401, var_5408_float);
	var_5405_int = var_5403_int;
}


// @pe
void func_5685(void)
{
	func_793(6, false);
}


// @pe
void func_10808(bool var_5129_bool)
{
	int var_5132_int;
	func_132(var_5132_int, "k6KaterinaVisit");
	if(var_5132_int != 0) {
		var_5129_bool = true;
		return 0;
	}
	var_5129_bool = false;
}


// @pe
void func_9787(int var_5177_int, float var_5178_float)
{
	float var_5182_float;
	var_5178_float = var_5182_float;
	int var_5179_int;
	func_10899(var_5179_int, 539490, 539489, var_5182_float);
	var_5179_int = var_5177_int;
}


// @pe
void func_5692(void)
{
	func_793(6, false);
}


void func_2627(int var_3036_int, int var_3037_int, int var_3038_int)
{
	int var_3041_int; int var_3042_int;
	bool var_3043_bool = false;
	if(var_3038_int > 8) {
		if(var_3038_int < 21)
			var_3043_bool = true;
	}
	if(var_3043_bool != 0) {
		int var_3048_int;
		var_3036_int = var_3048_int;
		func_517(var_3048_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3052_int;
		var_3036_int = var_3052_int;
		func_517(var_3052_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3056_int;
		var_3036_int = var_3056_int;
		func_517(var_3056_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3060_int;
		var_3036_int = var_3060_int;
		func_543(var_3060_int, "fog", "fog.xml", 8);
		if(var_3037_int >= 5) {
			int var_3066_int;
			var_3036_int = var_3066_int;
			func_543(var_3066_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3071_float; int var_3072_int;
		func_1238(var_3071_float, var_3072_int);
		if((1 * var_3071_float) != 0) {
			int var_3074_int; int var_3077_int;
			var_3036_int = var_3074_int;
			var_3041_int = var_3077_int;
			func_517(var_3074_int, "pers_bomber", "bomber.xml", var_3077_int);
		}
	} else {
		int var_3115_int;
		var_3036_int = var_3115_int;
		func_517(var_3115_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3119_int;
		var_3036_int = var_3119_int;
		func_517(var_3119_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3123_int;
		var_3036_int = var_3123_int;
		func_517(var_3123_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3127_int;
		var_3036_int = var_3127_int;
		func_543(var_3127_int, "fog", "fog.xml", 6);
		if(var_3072_int >= 5) {
			int var_3133_int;
			var_3036_int = var_3133_int;
			func_543(var_3133_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3138_float; int var_3139_int;
		var_3037_int = var_3139_int;
		func_1238(var_3138_float, var_3139_int);
		if((1 * var_3138_float) == 0) goto Label_2745;
		int var_3141_int; int var_3144_int;
		var_3036_int = var_3141_int;
		var_3042_int = var_3144_int;
		func_517(var_3141_int, "pers_bomber", "bomber.xml", var_3144_int);
	}
Label_2745:
	int var_3078_int;
	var_3036_int = var_3078_int;
	func_530(var_3078_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3084_int;
	var_3036_int = var_3084_int;
	func_530(var_3084_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3090_int;
	var_3036_int = var_3090_int;
	func_530(var_3090_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3096_int;
	var_3036_int = var_3096_int;
	func_530(var_3096_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3102_bool; int var_3103_int; int var_3104_int;
	var_3037_int = var_3103_int;
	var_3038_int = var_3104_int;
	func_1328(var_3102_bool, var_3103_int, var_3104_int);
	if(var_3102_bool != 0) {
		int var_3105_int;
		var_3036_int = var_3105_int;
		func_517(var_3105_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3109_bool; int var_3110_int;
	var_3037_int = var_3110_int;
	func_1355(var_3109_bool, var_3110_int);
	if(var_3109_bool != 0) {
		int var_3111_int;
		var_3036_int = var_3111_int;
		func_517(var_3111_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_5699(object var_175_object)
{
	var_175_object->add("House6_02");
	var_175_object->add("House6_01");
	var_175_object->add("house_2_01");
	var_175_object->add("house7_03");
	var_175_object->add("house7_02");
	var_175_object->add("house3_01_i2");
	var_175_object->add("house3_01");
	var_175_object->add("house_2_03");
	var_175_object->add("house_2_02");
	var_175_object->add("house4_01_i2");
	var_175_object->add("house4_01");
	var_175_object->add("House6_05");
	var_175_object->add("House6_04");
	var_175_object->add("House6_03");
}


// @pe
void func_6723(object var_263_object)
{
	var_263_object->add("r6_house2_03");
	var_263_object->add("r6_house4_01_i2");
	var_263_object->add("r6_house4_02_i2");
	var_263_object->add("r6_house4_02");
	var_263_object->add("r6_house3_02_i2");
	var_263_object->add("r6_house3_02");
	var_263_object->add("r6_house3_01_i2");
	var_263_object->add("r6_house3_01");
	var_263_object->add("r6_house2_01");
	var_263_object->add("r6_house7_01");
	var_263_object->add("r6_house7_02");
	var_263_object->add("r6_House6_01");
	var_263_object->add("r6_house2_02");
}


// @pe
void func_10820(bool var_5121_bool)
{
	int var_5124_int;
	func_132(var_5124_int, "k6AlexandrVisit");
	if(var_5124_int != 0) {
		var_5121_bool = true;
		return 0;
	}
	var_5121_bool = false;
}


// @pe
void func_4679(int var_2284_int, int var_2285_int, object var_2286_object, object var_2287_object, object var_2288_object, object var_2289_object)
{
	if(var_2285_int == 0) {
		func_810(1, true);
		func_827(1, true, 1);
		int var_2298_int; object var_2299_object; object var_2300_object; object var_2301_object;
		var_2284_int = var_2298_int;
		var_2286_object = var_2299_object;
		var_2287_object = var_2300_object;
		var_2288_object = var_2301_object;
		func_655(1, var_2298_int, var_2299_object, var_2300_object, var_2301_object);
		object var_2302_object;
		var_2289_object = var_2302_object;
		func_320(var_2302_object, 1);
		func_884(1, true, 8);
		func_946(1, false, 8);
	}
	func_793(1, false);
	int var_2313_int; int var_2314_int;
	var_2284_int = var_2313_int;
	var_2285_int = var_2314_int;
	func_3347(1, var_2313_int, var_2314_int);
}


// @pe
void func_9796(int var_5593_int, float var_5594_float)
{
	float var_5598_float;
	var_5594_float = var_5598_float;
	int var_5595_int;
	func_10899(var_5595_int, 525653, 525652, var_5598_float);
	var_5595_int = var_5593_int;
}


// @pe
void func_9805(int var_5304_int, float var_5305_float)
{
	float var_5309_float;
	var_5305_float = var_5309_float;
	int var_5306_int;
	func_10899(var_5306_int, 538962, 538961, var_5309_float);
	var_5306_int = var_5304_int;
}


void func_590(string var_2039_string, object var_2040_object, string var_2041_string, string var_2042_string)
{
	object var_2054_object; bool var_2056_bool; cvector var_2057_cvector; cvector var_2058_cvector; object var_2059_object;
	@GetMainOutdoorScene(var_2054_object);
	int var_2055_int = 0;
	
	for(;;) {
		var_2054_object->GetLocator((var_2039_string + (var_2055_int + 1)), var_2056_bool, var_2057_cvector, var_2058_cvector);
		if(!var_2056_bool) //@nz
			break;
		var_2054_object->AddStationaryActor(var_2059_object, var_2057_cvector, var_2058_cvector, var_2041_string, var_2042_string);
		var_2040_object->add(var_2059_object);
		var_2059_object = null;
		var_2055_int += 1;
	}
}
EMIT "Stack[-6] = 0";


// @pe
void func_10832(bool var_5264_bool)
{
	int var_5267_int;
	func_132(var_5267_int, "k5Kapellavisit");
	if(var_5267_int != 0) {
		var_5264_bool = true;
		return 0;
	}
	var_5264_bool = false;
}


void func_1621(int var_1414_int, int var_1415_int, int var_1416_int)
{
	int var_1418_int;
	if((var_1415_int + 1) == 12)
		return 2;
	bool var_1423_bool = false;
	bool var_1424_bool = true;
	var_1426_bool = var_1416_int < 7;
	if(var_1426_bool != 1) {
		var_1428_bool = var_1416_int > 21;
		if(var_1428_bool != 1)
			var_1424_bool = false;
	}
	if(var_1424_bool != 0) {
		if(var_1415_int != 0)
			var_1423_bool = true;
	}
	if(var_1423_bool != 0) {
		float var_1432_float; int var_1433_int;
		var_1415_int = var_1433_int;
		func_1124(var_1432_float, var_1433_int);
		if((1 * var_1432_float) != 0) {
			int var_1435_int; int var_1438_int;
			var_1414_int = var_1435_int;
			var_1418_int = var_1438_int;
			func_517(var_1435_int, "pers_grabitel", "grabitel.xml", var_1438_int);
		}
	}
	bool var_1439_bool = false;
	bool var_1440_bool = false;
	if(var_1415_int == 0) {
		if(var_1416_int < 21)
			var_1440_bool = true;
	}
	if(var_1440_bool != 0) {
		int var_1445_int;
		func_10924(var_1445_int);
		if(var_1445_int == 1)
			var_1439_bool = true;
	}
	if(var_1439_bool != 0) {
		int var_1448_int;
		var_1414_int = var_1448_int;
		func_517(var_1448_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1452_int;
		var_1414_int = var_1452_int;
		func_517(var_1452_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1456_int;
		var_1414_int = var_1456_int;
		func_517(var_1456_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1460_int;
		var_1414_int = var_1460_int;
		func_517(var_1460_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1464_int;
		var_1414_int = var_1464_int;
		func_517(var_1464_int, "pers_woman", "woman.xml", 1);
		int var_1468_int;
		var_1414_int = var_1468_int;
		func_517(var_1468_int, "pers_boy", "boy.xml", 1);
		int var_1472_int;
		var_1414_int = var_1472_int;
		func_517(var_1472_int, "pers_girl", "girl.xml", 1);
		int var_1476_int;
		var_1414_int = var_1476_int;
		func_517(var_1476_int, "pers_girl", "girl2.xml", 1);
		int var_1480_int;
		var_1414_int = var_1480_int;
		func_517(var_1480_int, "pers_littleboy", "littleboy.xml", 1);
		int var_1484_int;
		var_1414_int = var_1484_int;
		func_517(var_1484_int, "pers_littlegirl", "littlegirl.xml", 1);
		int var_1488_int;
		var_1414_int = var_1488_int;
		func_517(var_1488_int, "pers_alkash", "alkash.xml", 1);
	} else {
			bool var_1499_bool = false;
			if(var_1416_int > 8) {
				if(var_1416_int < 21)
					var_1499_bool = true;
			}
			if(var_1499_bool == 0) goto Label_1844;
			int var_1504_int;
			var_1414_int = var_1504_int;
			func_517(var_1504_int, "pers_woman", "woman.xml", 1);
			int var_1508_int;
			var_1414_int = var_1508_int;
			func_517(var_1508_int, "pers_unosha", "unosha.xml", 1);
			int var_1512_int;
			var_1414_int = var_1512_int;
			func_517(var_1512_int, "pers_unosha", "unosha2.xml", 1);
			int var_1516_int;
			var_1414_int = var_1516_int;
			func_517(var_1516_int, "pers_boy", "boy.xml", 1);
			int var_1520_int;
			var_1414_int = var_1520_int;
			func_517(var_1520_int, "pers_girl", "girl.xml", 1);
			int var_1524_int;
			var_1414_int = var_1524_int;
			func_517(var_1524_int, "pers_girl", "girl2.xml", 1);
			int var_1528_int;
			var_1414_int = var_1528_int;
			func_517(var_1528_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1532_int;
			var_1414_int = var_1532_int;
			func_517(var_1532_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1536_int;
			var_1414_int = var_1536_int;
			func_517(var_1536_int, "pers_alkash", "alkash.xml", 1);
			if((var_1415_int + 1) >= 3) {
				int var_1544_int;
				var_1414_int = var_1544_int;
				func_517(var_1544_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1884:
	for(;;) {
		bool var_1492_bool; int var_1493_int; int var_1494_int;
		var_1415_int = var_1493_int;
		var_1416_int = var_1494_int;
		func_1328(var_1492_bool, var_1493_int, var_1494_int);
		if(var_1492_bool != 0) {
			int var_1495_int;
			var_1414_int = var_1495_int;
			func_517(var_1495_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1844:
	int var_1548_int;
	var_1414_int = var_1548_int;
	func_517(var_1548_int, "pers_woman", "woman.xml", 1);
	int var_1552_int;
	var_1414_int = var_1552_int;
	func_517(var_1552_int, "pers_unosha", "unosha.xml", 1);
	int var_1556_int;
	var_1414_int = var_1556_int;
	func_517(var_1556_int, "pers_unosha", "unosha2.xml", 1);
	int var_1560_int;
	var_1414_int = var_1560_int;
	func_517(var_1560_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1415_int + 1) >= 3)) goto Label_1884;
	int var_1568_int;
	var_1414_int = var_1568_int;
	func_517(var_1568_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


// @pe
void func_9814(int var_5272_int, float var_5273_float)
{
	float var_5277_float;
	var_5273_float = var_5277_float;
	int var_5274_int;
	func_10899(var_5274_int, 539492, 539491, var_5277_float);
	var_5274_int = var_5272_int;
}


// @pe
void func_10844(bool var_5021_bool)
{
	int var_5024_int;
	func_132(var_5024_int, "k6LaskaVisit");
	if(var_5024_int != 0) {
		var_5021_bool = true;
		return 0;
	}
	var_5021_bool = false;
}


// @pe
void func_9823(int var_5296_int, float var_5297_float)
{
	float var_5301_float;
	var_5297_float = var_5301_float;
	int var_5298_int;
	func_10899(var_5298_int, 538964, 538963, var_5301_float);
	var_5298_int = var_5296_int;
}


void func_8803(int var_462_int, int var_463_int, int var_464_int, int var_465_int)
{
	int var_473_int; object var_474_object; object var_475_object; object var_476_object; object var_477_object;
	@Trace("City update");
	bool var_479_bool = false;
	if(var_462_int == var_464_int) {
		if(var_463_int == var_465_int)
			var_479_bool = true;
	}
	if(var_479_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_485_int;
			var_473_int = var_485_int;
			func_504(var_485_int);
			bool var_490_bool; int var_491_int;
			var_473_int = var_491_int;
			func_414(var_490_bool, var_491_int);
			if(var_490_bool != 0) {
				int var_499_int; int var_500_int; int var_501_int;
				var_473_int = var_499_int;
				var_462_int = var_500_int;
				var_463_int = var_501_int;
				func_8923(var_499_int, var_500_int, var_501_int);
			} else {
			bool var_1988_bool; int var_1989_int;
			var_473_int = var_1989_int;
			func_444(var_1988_bool, var_1989_int);
			if(var_1988_bool != 0) {
				int var_1997_int; int var_1998_int; int var_1999_int;
				var_473_int = var_1997_int;
				var_462_int = var_1998_int;
				var_463_int = var_1999_int;
				func_9148(var_1997_int, var_1998_int, var_1999_int);
				goto Label_8856;
			}
			int var_3178_int; int var_3179_int; int var_3180_int;
			var_473_int = var_3178_int;
			var_462_int = var_3179_int;
			var_463_int = var_3180_int;
			func_9373(var_3178_int, var_3179_int, var_3180_int);
		}
		if(var_463_int == 0) {
			int var_4314_int;
			func_12646(var_4314_int);
			bool var_4388_bool = true;
			var_4390_bool = var_4314_int == 1;
			if(var_4390_bool != 1) {
				bool var_4391_bool;
				func_444(var_4391_bool, 5);
				if(var_4391_bool != 1)
					var_4388_bool = false;
			}
			if(var_4388_bool != 0) {
				@FindActor(var_474_object, "dt_house_1_07");
				var_474_object->EnableSubset(200, true);
				var_474_object = null;
			} else {
					@FindActor(var_475_object, "dt_house_1_07");
					var_475_object->EnableSubset(200, false);
					var_475_object = null;
			}
		}
		if(var_463_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_476_object);
			var_476_object->SwitchLights(0, false);
			var_476_object = null;
		} else if(var_463_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_477_object);
			var_477_object->SwitchLights(0, true);
			var_477_object = null;

		}
		}
	Label_8856:
		var_473_int += 1;
	}
	
}


void func_612(string var_2065_string, object var_2066_object)
{
	object var_2079_object; bool var_2081_bool; cvector var_2082_cvector; cvector var_2083_cvector; object var_2084_object;
	@GetMainOutdoorScene(var_2079_object);
	int var_2080_int = 0;
	
	for(;;) {
		var_2079_object->GetLocator((var_2065_string + (var_2080_int + 1)), var_2081_bool, var_2082_cvector, var_2083_cvector);
		if(!var_2081_bool) //@nz
			break;
		var_2079_object->AddStationaryActorByType(var_2084_object, var_2082_cvector, var_2083_cvector, "fog", "fog_stat.xml");
		var_2066_object->add(var_2084_object);
		var_2084_object = null;
		var_2080_int += 1;
	}
}
EMIT "Stack[-7] = 0";


void func_7782(object var_4441_object, object var_4442_object, string var_4443_string, string var_4444_string, string var_4445_string)
{
	bool var_4451_bool; cvector var_4452_cvector; cvector var_4453_cvector; object var_4454_object;
	var_4442_object->GetLocator(("pt_guard_" + var_4443_string), var_4451_bool, var_4452_cvector, var_4453_cvector);
	if(!var_4451_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4443_string);
	else
		var_4442_object->AddStationaryActor(var_4454_object, var_4452_cvector, var_4453_cvector, var_4444_string, var_4445_string);
	var_4454_object = var_4441_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10856(bool var_4770_bool, object var_4771_object)
{
	object var_4774_object;
	var_4771_object = var_4774_object;
	func_10866(var_4774_object);
	bool var_4773_bool;
	if(var_4773_bool != 0) {
		var_4770_bool = true;
		return 0;
	}
	var_4770_bool = false;
}


// @pe
void func_9832(int var_5288_int, float var_5289_float)
{
	float var_5293_float;
	var_5289_float = var_5293_float;
	int var_5290_int;
	func_10899(var_5290_int, 538958, 538957, var_5293_float);
	var_5290_int = var_5288_int;
}


// @pe
void func_6764(int var_1706_int, int var_1707_int, object var_1708_object, object var_1709_object, object var_1710_object, object var_1711_object)
{
	if(var_1707_int == 0) {
		func_810(12, false);
		func_827(12, false, 1);
		int var_1719_int; int var_1720_int; object var_1721_object; object var_1722_object; object var_1723_object;
		var_1719_int = 12;
		var_1706_int = var_1720_int;
		var_1708_object = var_1721_object;
		var_1709_object = var_1722_object;
		var_1710_object = var_1723_object;
		func_636(var_1720_int, var_1721_object, var_1722_object, var_1723_object);
		object var_1724_object;
		var_1711_object = var_1724_object;
		func_320(var_1724_object, 0);
		func_884(12, false, 4);
		func_946(12, false, 4);
	}
	int var_1733_int;
	var_1707_int = var_1733_int;
	func_1034(12, var_1733_int);
	int var_1735_int; int var_1736_int;
	var_1706_int = var_1735_int;
	var_1707_int = var_1736_int;
	func_1621(12, var_1735_int, var_1736_int);
}


// @pe
void func_5743(int var_1386_int, int var_1387_int, object var_1388_object, object var_1389_object, object var_1390_object, object var_1391_object)
{
	if(var_1387_int == 0) {
		func_810(7, false);
		func_827(7, false, 1);
		int var_1399_int; int var_1400_int; object var_1401_object; object var_1402_object; object var_1403_object;
		var_1399_int = 7;
		var_1386_int = var_1400_int;
		var_1388_object = var_1401_object;
		var_1389_object = var_1402_object;
		var_1390_object = var_1403_object;
		func_636(var_1400_int, var_1401_object, var_1402_object, var_1403_object);
		object var_1404_object;
		var_1391_object = var_1404_object;
		func_320(var_1404_object, 0);
		func_884(7, false, 6);
		func_946(7, false, 6);
	}
	int var_1413_int;
	var_1387_int = var_1413_int;
	func_1034(7, var_1413_int);
	int var_1415_int; int var_1416_int;
	var_1386_int = var_1415_int;
	var_1387_int = var_1416_int;
	func_1621(7, var_1415_int, var_1416_int);
}


// @pe
void func_9841(int var_5029_int, float var_5030_float)
{
	float var_5034_float;
	var_5030_float = var_5034_float;
	int var_5031_int;
	func_10899(var_5031_int, 539494, 539493, var_5034_float);
	var_5031_int = var_5029_int;
}


// @pe
void func_10866(bool var_4773_bool)
{
	var_4773_bool = false;
}


void func_10869(object var_4700_object)
{
	object var_4702_object;
	@GetDiaryRoot(var_4702_object);
	if(!var_4702_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4700_object = false;
	}
	var_4702_object = var_4700_object;
}
EMIT "Stack[-1] = 0";


void func_3702(int var_3825_int, int var_3826_int, int var_3827_int)
{
	int var_3832_int; int var_3833_int; int var_3834_int; int var_3835_int;
	bool var_3836_bool = false;
	if(var_3827_int > 8) {
		if(var_3827_int < 21)
			var_3836_bool = true;
	}
	if(var_3836_bool != 0) {
		int var_3841_int;
		var_3825_int = var_3841_int;
		func_517(var_3841_int, "pers_rat", "rat.xml", 1);
		int var_3845_int;
		var_3825_int = var_3845_int;
		func_517(var_3845_int, "pers_alkash", "alkash.xml", 2);
		int var_3849_int;
		var_3825_int = var_3849_int;
		func_517(var_3849_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3854_float; int var_3855_int;
		func_1148(var_3854_float, var_3855_int);
		if((2 * var_3854_float) != 0) {
			int var_3857_int; int var_3860_int;
			var_3825_int = var_3857_int;
			var_3832_int = var_3860_int;
			func_517(var_3857_int, "pers_grabitel", "grabitel.xml", var_3860_int);
		}
		if((var_3855_int + 1) >= 2) {
			int var_3865_int;
			var_3825_int = var_3865_int;
			func_517(var_3865_int, "pers_patrool", "patrol.xml", 1);
			bool var_3869_bool; int var_3870_int;
			var_3826_int = var_3870_int;
			func_1355(var_3869_bool, var_3870_int);
			if(var_3869_bool != 0) {
				int var_3871_int;
				var_3825_int = var_3871_int;
				func_517(var_3871_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3876_float; int var_3877_int;
		var_3826_int = var_3877_int;
		func_1238(var_3876_float, var_3877_int);
		if((1 * var_3876_float) != 0) {
			int var_3879_int; int var_3882_int;
			var_3825_int = var_3879_int;
			var_3833_int = var_3882_int;
			func_517(var_3879_int, "pers_bomber", "bomber.xml", var_3882_int);
		}
	} else {
		int var_3896_int;
		var_3825_int = var_3896_int;
		func_517(var_3896_int, "pers_rat", "rat.xml", 3);
		int var_3900_int;
		var_3825_int = var_3900_int;
		func_517(var_3900_int, "pers_alkash", "alkash.xml", 1);
		int var_3904_int;
		var_3825_int = var_3904_int;
		func_517(var_3904_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3909_float; int var_3910_int;
		func_1148(var_3909_float, var_3910_int);
		if((3 * var_3909_float) != 0) {
			int var_3912_int; int var_3915_int;
			var_3825_int = var_3912_int;
			var_3834_int = var_3915_int;
			func_517(var_3912_int, "pers_grabitel", "grabitel.xml", var_3915_int);
		}
		if((var_3910_int + 1) >= 2) {
			int var_3920_int;
			var_3825_int = var_3920_int;
			func_517(var_3920_int, "pers_patrool", "patrol.xml", 1);
			bool var_3924_bool; int var_3925_int;
			var_3826_int = var_3925_int;
			func_1355(var_3924_bool, var_3925_int);
			if(var_3924_bool != 0) {
				int var_3926_int;
				var_3825_int = var_3926_int;
				func_517(var_3926_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3931_float; int var_3932_int;
		var_3826_int = var_3932_int;
		func_1238(var_3931_float, var_3932_int);
		if((1 * var_3931_float) == 0) goto Label_3864;
		int var_3934_int; int var_3937_int;
		var_3825_int = var_3934_int;
		var_3835_int = var_3937_int;
		func_517(var_3934_int, "pers_bomber", "bomber.xml", var_3937_int);
	}
Label_3864:
	bool var_3883_bool; int var_3884_int; int var_3885_int;
	var_3826_int = var_3884_int;
	var_3827_int = var_3885_int;
	func_1328(var_3883_bool, var_3884_int, var_3885_int);
	if(var_3883_bool != 0) {
		int var_3886_int;
		var_3825_int = var_3886_int;
		func_517(var_3886_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3890_bool; int var_3891_int;
	var_3826_int = var_3891_int;
	func_1355(var_3890_bool, var_3891_int);
	if(var_3890_bool != 0) {
		int var_3892_int;
		var_3825_int = var_3892_int;
		func_517(var_3892_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_7799(object var_4438_object, object var_4439_object, int var_4440_int)
{
	object var_4442_object;
	var_4439_object = var_4442_object;
	object var_4441_object;
	func_7782(var_4441_object, var_4442_object, ("term" + var_4440_int), "pers_patrool", "guard_term.xml");
	var_4441_object = var_4438_object;
}


// @pe
void func_9850(void)
{
	func_177("termitnik2@door1", true);
}


// @pe
void func_4731(int var_3409_int, int var_3410_int, object var_3411_object, object var_3412_object, object var_3413_object, object var_3414_object)
{
	if(var_3410_int == 0) {
		func_810(1, false);
		func_827(1, false, 1);
		int var_3423_int; object var_3424_object; object var_3425_object; object var_3426_object;
		var_3409_int = var_3423_int;
		var_3411_object = var_3424_object;
		var_3412_object = var_3425_object;
		var_3413_object = var_3426_object;
		func_734(1, var_3423_int, var_3424_object, var_3425_object, var_3426_object);
		object var_3427_object;
		var_3414_object = var_3427_object;
		func_320(var_3427_object, 2);
		func_884(1, false, 8);
		func_946(1, true, 8);
	}
	func_793(1, false);
	int var_3438_int; int var_3439_int;
	var_3409_int = var_3438_int;
	var_3410_int = var_3439_int;
	func_4253(1, var_3438_int, var_3439_int);
}


// @pe
void func_636(int var_564_int, object var_566_object, object var_567_object, object var_568_object)
{
	int var_569_int;
	var_564_int = var_569_int;
	func_556(var_569_int, true);
	object var_597_object;
	var_566_object = var_597_object;
	func_263(var_597_object);
	object var_608_object;
	var_567_object = var_608_object;
	func_263(var_608_object);
	object var_609_object;
	var_568_object = var_609_object;
	func_263(var_609_object);
}


// @pe
void func_9857(void)
{
	func_177("house_vlad@door2", true);
}


void func_7810(bool var_4482_bool)
{
	object var_4484_object;
	@FindActor(var_4484_object, "arena_light");
	var_4484_object->Switch(var_4482_bool);
}
EMIT "Stack[-1] = 0";


void func_10882(bool var_4694_bool, int var_4695_int)
{
	object var_4700_object;
	func_10869(var_4700_object);
	object var_4698_object;
	var_4700_object = var_4698_object;
	object var_4699_object;
	var_4698_object->Find(var_4695_int, var_4699_object);
	if(!var_4699_object) //@nz
		var_4694_bool = false;
	var_4699_object->Remove();
	var_4694_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9864(void)
{
	func_177("cot_maria@door1", false);
}


void func_7818(void)
{
	object var_4348_object; bool var_4349_bool; cvector var_4350_cvector; cvector var_4351_cvector; int var_4352_int; object var_4353_object;
	@Trace("Setting arena...");
	var_4355_object = GlobalVars[11];
	if(var_4355_object == null) {
		@GetMainOutdoorScene(var_4348_object);
		var_4348_object->GetLocator("pt_arena_manager", var_4349_bool, var_4350_cvector, var_4351_cvector);
		if(!var_4349_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4379_object = GlobalVars[11];
				object var_4380_object; object var_4381_object; cvector var_4382_cvector; cvector var_4383_cvector;
				var_4348_object = var_4381_object;
				var_4350_cvector = var_4382_cvector;
				var_4351_cvector = var_4383_cvector;
				func_12743(var_4380_object, var_4381_object, var_4382_cvector, var_4383_cvector);
				var_4380_object = var_4379_object;
				GlobalVars[11] = var_4379_object;
		}
		var_4352_int = 0;

		for(;;) {
			if(var_4352_int < 6) {
				var_4348_object->GetLocator(("pt_arena_torch" + (var_4352_int + 1)), var_4349_bool, var_4350_cvector, var_4351_cvector);
				if(!var_4349_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4352_int + 1));
				} else {
				@AddActorByType(var_4353_object, "scripted", var_4348_object, var_4350_cvector, var_4351_cvector, "torch.xml");
				var_4374_object = GlobalVars[12];
				var_4374_object->add(var_4353_object);
				var_4353_object = null;
			}
			func_7810(true);
			var_4348_object = null;
	}
		return 12;

		}
		var_4352_int += 1;
	}
	
}


// @pe
void func_655(int var_2027_int, int var_2028_int, object var_2029_object, object var_2030_object, object var_2031_object)
{
	int var_2032_int;
	var_2027_int = var_2032_int;
	func_556(var_2032_int, false);
	object var_2034_object;
	var_2029_object = var_2034_object;
	func_263(var_2034_object);
	object var_2035_object;
	var_2030_object = var_2035_object;
	func_263(var_2035_object);
	object var_2036_object;
	var_2031_object = var_2036_object;
	func_263(var_2036_object);
	if(var_2028_int < 8) {
		object var_2040_object;
		var_2029_object = var_2040_object;
		func_590((("pt_blockpost" + (var_2027_int + 1)) + "_1_"), var_2040_object, "pers_patrool", "patrol_stat.xml");
		object var_2066_object;
		var_2031_object = var_2066_object;
		func_612((("pt_fog" + (var_2027_int + 1)) + "_"), var_2066_object);
	} else {
		object var_2093_object;
		var_2029_object = var_2093_object;
		func_590((("pt_blockpost" + (var_2027_int + 1)) + "_1_"), var_2093_object, "pers_soldat", "soldier.xml");
		object var_2102_object;
		var_2030_object = var_2102_object;
		func_590((("pt_blockpost" + (var_2027_int + 1)) + "_2_"), var_2102_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2111_object;
		var_2031_object = var_2111_object;
		func_612((("pt_fog" + (var_2027_int + 1)) + "_"), var_2111_object);
	}
	
}


// @pe
void func_9871(void)
{
	func_177("warehouse_rubin@door1", false);
}


void func_10899(int var_4717_int, int var_4718_int, int var_4719_int, float var_4720_float)
{
	int var_4722_int;
	@AddMessage(var_4718_int, var_4719_int, var_4720_float, var_4722_int);
	@SendWorldWndMessage(6);
	var_4722_int = var_4717_int;
}


// @pe
void func_9878(void)
{
	func_177("warehouse_rubin@door1", true);
}


void func_10907(object var_4667_object)
{
	object var_4670_object; object var_4671_object;
	@GetMainOutdoorScene(var_4670_object);
	if(var_4670_object == null) {
		@Trace("Can't find main outdoor scene");
		var_4671_object = null;
		var_4671_object = var_4667_object;
	}
	var_4670_object->GetMap(var_4671_object);
	var_4671_object = var_4667_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_9885(void)
{
	object var_4667_object;
	func_10907(var_4667_object);
	object var_4665_object;
	var_4667_object = var_4665_object;
	object var_4666_object;
	var_4665_object->FindMark(var_4666_object, "k1q01AlexandrGotoKaterina");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01AlexandrGotoStation");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01BurahGotoAnna");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01CompletedGotoAlexandt");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01KaterinaGotoAlexandr");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01LaskaGotoBurah");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q01StationGotoLaska");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q02GeorgGotoMaria");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q02KaterinaGotoGeorg");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "k1q03AnnaGotoNotkin");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	bool var_4694_bool;
	func_10882(var_4694_bool, 318);
	bool var_4706_bool;
	func_10882(var_4706_bool, 326);
	bool var_4708_bool;
	func_10882(var_4708_bool, 333);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6816(int var_2942_int, int var_2943_int, object var_2944_object, object var_2945_object, object var_2946_object, object var_2947_object)
{
	if(var_2943_int == 0) {
		func_810(12, true);
		func_827(12, true, 1);
		int var_2956_int; object var_2957_object; object var_2958_object; object var_2959_object;
		var_2942_int = var_2956_int;
		var_2944_object = var_2957_object;
		var_2945_object = var_2958_object;
		var_2946_object = var_2959_object;
		func_655(12, var_2956_int, var_2957_object, var_2958_object, var_2959_object);
		object var_2960_object;
		var_2947_object = var_2960_object;
		func_320(var_2960_object, 1);
		func_884(12, true, 4);
		func_946(12, false, 4);
	}
	func_793(12, false);
	int var_2971_int; int var_2972_int;
	var_2942_int = var_2971_int;
	var_2943_int = var_2972_int;
	func_2807(12, var_2971_int, var_2972_int);
}


// @pe
void func_5795(int var_2671_int, int var_2672_int, object var_2673_object, object var_2674_object, object var_2675_object, object var_2676_object)
{
	if(var_2672_int == 0) {
		func_810(7, true);
		func_827(7, true, 1);
		int var_2685_int; object var_2686_object; object var_2687_object; object var_2688_object;
		var_2671_int = var_2685_int;
		var_2673_object = var_2686_object;
		var_2674_object = var_2687_object;
		var_2675_object = var_2688_object;
		func_655(7, var_2685_int, var_2686_object, var_2687_object, var_2688_object);
		object var_2689_object;
		var_2676_object = var_2689_object;
		func_320(var_2689_object, 1);
		func_884(7, true, 6);
		func_946(7, false, 6);
	}
	func_793(7, false);
	int var_2700_int; int var_2701_int;
	var_2671_int = var_2700_int;
	var_2672_int = var_2701_int;
	func_2807(7, var_2700_int, var_2701_int);
}


void func_10924(int var_795_int)
{
	int var_797_int;
	@GetVariable("branch", var_797_int);
	var_797_int = var_795_int;
}


// @pe
void func_4783(object var_78_object)
{
	var_78_object->add("dt_house1_union2_05l");
	var_78_object->add("dt_house1_union2_05r");
	var_78_object->add("dt_house2_01");
	var_78_object->add("dt_house2_02");
	var_78_object->add("dt_house2_03");
	var_78_object->add("dt_house2_04");
	var_78_object->add("dt_house2_05");
	var_78_object->add("dt_house3_10_i2");
	var_78_object->add("dt_house3_10");
	var_78_object->add("dt_house3_11_i2");
	var_78_object->add("dt_house3_11");
	var_78_object->add("dt_house3_12_i2");
	var_78_object->add("dt_house3_12");
	var_78_object->add("dt_house_1_06");
	var_78_object->add("dt_house3_07_i2");
	var_78_object->add("dt_house3_07");
}


void func_10930(bool var_4262_bool, int var_4263_int)
{
	int var_4270_int; int var_4271_int; int var_4272_int;
	bool var_4273_bool = false;
	if(var_4263_int > 42000) {
		if(var_4263_int < 42288)
			var_4273_bool = true;
	}
	if(var_4273_bool != 0) {
		var_4270_int = (var_4263_int - 42000) % 24;
		int var_4285_int;
		var_4270_int = var_4285_int;
		func_8309((((var_4263_int - 42000) / 24) + 1), var_4285_int);
		var_4262_bool = true;
		return 8;
	}
	bool var_4311_bool = false;
	if(var_4263_int > 40000) {
		if(var_4263_int < 40288)
			var_4311_bool = true;
	}
	if(var_4311_bool != 0) {
		var_4271_int = (var_4263_int - 40000) / 24;
		var_4272_int = (var_4263_int - 40000) % 24;
		int var_4323_int;
		var_4272_int = var_4323_int;
		func_8354((var_4271_int + 1), var_4323_int);
		int var_4639_int;
		var_4272_int = var_4639_int;
		func_12347((var_4271_int + 1), var_4639_int);
		var_4262_bool = true;
		return 8;
	}
	var_4262_bool = false;
}


void func_7881(void)
{
	int var_4624_int; int var_4625_int; object var_4626_object;
	@Trace("Cleaning arena...");
	var_4628_object = GlobalVars[11];
	if(var_4628_object != null) {
		var_4630_object = GlobalVars[11];
		var_4630_object->Remove();
		var_4631_object = GlobalVars[12];
		var_4631_object->size(var_4624_int);
		var_4625_int = 0;

		while(var_4625_int < var_4624_int) {
			var_4633_object = GlobalVars[12];
			var_4633_object->get(var_4626_object, var_4625_int);
			@Trigger(var_4626_object, "remove");
			var_4626_object = null;
			var_4625_int += 1;
		}

		var_4636_object = GlobalVars[12];
		var_4636_object->clear();
		func_7810(false);
	}
}


// @pe
void func_6868(int var_4072_int, int var_4073_int, object var_4074_object, object var_4075_object, object var_4076_object, object var_4077_object)
{
	if(var_4073_int == 0) {
		func_810(12, false);
		func_827(12, false, 1);
		int var_4086_int; object var_4087_object; object var_4088_object; object var_4089_object;
		var_4072_int = var_4086_int;
		var_4074_object = var_4087_object;
		var_4075_object = var_4088_object;
		var_4076_object = var_4089_object;
		func_734(12, var_4086_int, var_4087_object, var_4088_object, var_4089_object);
		object var_4090_object;
		var_4077_object = var_4090_object;
		func_320(var_4090_object, 2);
		func_884(12, false, 4);
		func_946(12, true, 4);
	}
	func_793(12, false);
	int var_4101_int; int var_4102_int;
	var_4072_int = var_4101_int;
	var_4073_int = var_4102_int;
	func_3702(12, var_4101_int, var_4102_int);
}


// @pe
void func_5847(int var_3797_int, int var_3798_int, object var_3799_object, object var_3800_object, object var_3801_object, object var_3802_object)
{
	if(var_3798_int == 0) {
		func_810(7, false);
		func_827(7, false, 1);
		int var_3811_int; object var_3812_object; object var_3813_object; object var_3814_object;
		var_3797_int = var_3811_int;
		var_3799_object = var_3812_object;
		var_3800_object = var_3813_object;
		var_3801_object = var_3814_object;
		func_734(7, var_3811_int, var_3812_object, var_3813_object, var_3814_object);
		object var_3815_object;
		var_3802_object = var_3815_object;
		func_320(var_3815_object, 2);
		func_884(7, false, 6);
		func_946(7, true, 6);
	}
	func_793(7, false);
	int var_3826_int; int var_3827_int;
	var_3797_int = var_3826_int;
	var_3798_int = var_3827_int;
	func_3702(7, var_3826_int, var_3827_int);
}


void func_8923(int var_499_int, int var_500_int, int var_501_int)
{
	var_510_object = GlobalVars[8];
	object var_506_object;
	var_510_object->get(var_506_object, var_499_int);
	var_511_object = GlobalVars[9];
	object var_507_object;
	var_511_object->get(var_507_object, var_499_int);
	var_512_object = GlobalVars[10];
	object var_508_object;
	var_512_object->get(var_508_object, var_499_int);
	var_513_object = GlobalVars[13];
	object var_509_object;
	var_513_object->get(var_509_object, var_499_int);
	if(var_499_int == 0) {
		int var_516_int; int var_517_int; object var_518_object; object var_519_object; object var_520_object; object var_521_object;
		var_500_int = var_516_int;
		var_501_int = var_517_int;
		var_506_object = var_518_object;
		var_507_object = var_519_object;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		func_4430(var_516_int, var_517_int, var_518_object, var_519_object, var_520_object, var_521_object);
	} else if(var_499_int == 1) {
			int var_876_int; int var_877_int; object var_878_object; object var_879_object; object var_880_object; object var_881_object;
			var_500_int = var_876_int;
			var_501_int = var_877_int;
			var_506_object = var_878_object;
			var_507_object = var_879_object;
			var_508_object = var_880_object;
			var_509_object = var_881_object;
			func_4627(var_876_int, var_877_int, var_878_object, var_879_object, var_880_object, var_881_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_499_int == 2) {
		int var_1025_int; int var_1026_int; object var_1027_object; object var_1028_object; object var_1029_object; object var_1030_object;
		var_500_int = var_1025_int;
		var_501_int = var_1026_int;
		var_506_object = var_1027_object;
		var_507_object = var_1028_object;
		var_508_object = var_1029_object;
		var_509_object = var_1030_object;
		func_4833(var_1025_int, var_1026_int, var_1027_object, var_1028_object, var_1029_object, var_1030_object);
	} else if(var_499_int == 3) {
		int var_1250_int; int var_1251_int; object var_1252_object; object var_1253_object; object var_1254_object; object var_1255_object;
		var_500_int = var_1250_int;
		var_501_int = var_1251_int;
		var_506_object = var_1252_object;
		var_507_object = var_1253_object;
		var_508_object = var_1254_object;
		var_509_object = var_1255_object;
		func_5063(var_1250_int, var_1251_int, var_1252_object, var_1253_object, var_1254_object, var_1255_object);
	} else if(var_499_int == 4) {
		int var_1298_int; int var_1299_int; object var_1300_object; object var_1301_object; object var_1302_object; object var_1303_object;
		var_500_int = var_1298_int;
		var_501_int = var_1299_int;
		var_506_object = var_1300_object;
		var_507_object = var_1301_object;
		var_508_object = var_1302_object;
		var_509_object = var_1303_object;
		func_5281(var_1298_int, var_1299_int, var_1300_object, var_1301_object, var_1302_object, var_1303_object);
	} else if(var_499_int == 5) {
		int var_1343_int; int var_1344_int; object var_1345_object; object var_1346_object; object var_1347_object; object var_1348_object;
		var_500_int = var_1343_int;
		var_501_int = var_1344_int;
		var_506_object = var_1345_object;
		var_507_object = var_1346_object;
		var_508_object = var_1347_object;
		var_509_object = var_1348_object;
		func_5520(var_1343_int, var_1344_int, var_1345_object, var_1346_object, var_1347_object, var_1348_object);
	} else if(var_499_int == 6) {
		int var_1376_int; int var_1377_int; object var_1378_object; object var_1379_object; object var_1380_object; object var_1381_object;
		var_500_int = var_1376_int;
		var_501_int = var_1377_int;
		var_506_object = var_1378_object;
		var_507_object = var_1379_object;
		var_508_object = var_1380_object;
		var_509_object = var_1381_object;
		func_5678(var_1381_object);
	} else if(var_499_int == 7) {
		int var_1386_int; int var_1387_int; object var_1388_object; object var_1389_object; object var_1390_object; object var_1391_object;
		var_500_int = var_1386_int;
		var_501_int = var_1387_int;
		var_506_object = var_1388_object;
		var_507_object = var_1389_object;
		var_508_object = var_1390_object;
		var_509_object = var_1391_object;
		func_5743(var_1386_int, var_1387_int, var_1388_object, var_1389_object, var_1390_object, var_1391_object);
	} else if(var_499_int == 8) {
		int var_1574_int; int var_1575_int; object var_1576_object; object var_1577_object; object var_1578_object; object var_1579_object;
		var_500_int = var_1574_int;
		var_501_int = var_1575_int;
		var_506_object = var_1576_object;
		var_507_object = var_1577_object;
		var_508_object = var_1578_object;
		var_509_object = var_1579_object;
		func_5943(var_1574_int, var_1575_int, var_1576_object, var_1577_object, var_1578_object, var_1579_object);
	} else if(var_499_int == 9) {
		int var_1607_int; int var_1608_int; object var_1609_object; object var_1610_object; object var_1611_object; object var_1612_object;
		var_500_int = var_1607_int;
		var_501_int = var_1608_int;
		var_506_object = var_1609_object;
		var_507_object = var_1610_object;
		var_508_object = var_1611_object;
		var_509_object = var_1612_object;
		func_6146(var_1607_int, var_1608_int, var_1609_object, var_1610_object, var_1611_object, var_1612_object);
	} else if(var_499_int == 10) {
		int var_1640_int; int var_1641_int; object var_1642_object; object var_1643_object; object var_1644_object; object var_1645_object;
		var_500_int = var_1640_int;
		var_501_int = var_1641_int;
		var_506_object = var_1642_object;
		var_507_object = var_1643_object;
		var_508_object = var_1644_object;
		var_509_object = var_1645_object;
		func_6355(var_1640_int, var_1641_int, var_1642_object, var_1643_object, var_1644_object, var_1645_object);
	} else if(var_499_int == 11) {
		int var_1673_int; int var_1674_int; object var_1675_object; object var_1676_object; object var_1677_object; object var_1678_object;
		var_500_int = var_1673_int;
		var_501_int = var_1674_int;
		var_506_object = var_1675_object;
		var_507_object = var_1676_object;
		var_508_object = var_1677_object;
		var_509_object = var_1678_object;
		func_6567(var_1673_int, var_1674_int, var_1675_object, var_1676_object, var_1677_object, var_1678_object);
	} else if(var_499_int == 12) {
		int var_1706_int; int var_1707_int; object var_1708_object; object var_1709_object; object var_1710_object; object var_1711_object;
		var_500_int = var_1706_int;
		var_501_int = var_1707_int;
		var_506_object = var_1708_object;
		var_507_object = var_1709_object;
		var_508_object = var_1710_object;
		var_509_object = var_1711_object;
		func_6764(var_1706_int, var_1707_int, var_1708_object, var_1709_object, var_1710_object, var_1711_object);
	} else if(var_499_int == 13) {
		int var_1739_int; int var_1740_int; object var_1741_object; object var_1742_object; object var_1743_object; object var_1744_object;
		var_500_int = var_1739_int;
		var_501_int = var_1740_int;
		var_506_object = var_1741_object;
		var_507_object = var_1742_object;
		var_508_object = var_1743_object;
		var_509_object = var_1744_object;
		func_6967(var_1739_int, var_1740_int, var_1741_object, var_1742_object, var_1743_object, var_1744_object);
	} else if(var_499_int == 14) {
		int var_1772_int; int var_1773_int; object var_1774_object; object var_1775_object; object var_1776_object; object var_1777_object;
		var_500_int = var_1772_int;
		var_501_int = var_1773_int;
		var_506_object = var_1774_object;
		var_507_object = var_1775_object;
		var_508_object = var_1776_object;
		var_509_object = var_1777_object;
		func_7167(var_1772_int, var_1773_int, var_1774_object, var_1775_object, var_1776_object, var_1777_object);
	} else if(var_499_int == 15) {
		int var_1956_int; int var_1957_int; object var_1958_object; object var_1959_object; object var_1960_object; object var_1961_object;
		var_500_int = var_1956_int;
		var_501_int = var_1957_int;
		var_506_object = var_1958_object;
		var_507_object = var_1959_object;
		var_508_object = var_1960_object;
		var_509_object = var_1961_object;
		func_7349(var_1956_int, var_1957_int, var_1958_object, var_1959_object, var_1960_object, var_1961_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_734(int var_3208_int, int var_3209_int, object var_3210_object, object var_3211_object, object var_3212_object)
{
	int var_3213_int;
	var_3208_int = var_3213_int;
	func_556(var_3213_int, false);
	object var_3215_object;
	var_3210_object = var_3215_object;
	func_263(var_3215_object);
	object var_3216_object;
	var_3211_object = var_3216_object;
	func_263(var_3216_object);
	object var_3217_object;
	var_3212_object = var_3217_object;
	func_263(var_3217_object);
	if(var_3209_int < 8) {
		object var_3221_object;
		var_3210_object = var_3221_object;
		func_590((("pt_blockpost" + (var_3208_int + 1)) + "_1_"), var_3221_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3230_object;
		var_3210_object = var_3230_object;
		func_590((("pt_blockpost" + (var_3208_int + 1)) + "_1_"), var_3230_object, "pers_soldat", "soldier.xml");
		object var_3239_object;
		var_3211_object = var_3239_object;
		func_590((("pt_blockpost" + (var_3208_int + 1)) + "_2_"), var_3239_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_4833(int var_1025_int, int var_1026_int, object var_1027_object, object var_1028_object, object var_1029_object, object var_1030_object)
{
	if(var_1026_int == 0) {
		func_810(2, false);
		func_827(2, false, 1);
		int var_1038_int; int var_1039_int; object var_1040_object; object var_1041_object; object var_1042_object;
		var_1038_int = 2;
		var_1025_int = var_1039_int;
		var_1027_object = var_1040_object;
		var_1028_object = var_1041_object;
		var_1029_object = var_1042_object;
		func_636(var_1039_int, var_1040_object, var_1041_object, var_1042_object);
		object var_1043_object;
		var_1030_object = var_1043_object;
		func_320(var_1043_object, 0);
		func_884(2, false, 5);
		func_946(2, false, 5);
	}
	int var_1052_int;
	var_1026_int = var_1052_int;
	func_1064(2, var_1052_int);
	int var_1054_int; int var_1055_int;
	var_1025_int = var_1054_int;
	var_1026_int = var_1055_int;
	func_1898(2, var_1054_int, var_1055_int);
}


void func_7915(void)
{
	object var_322_object;
	@GetMainOutdoorScene(var_322_object);
	int var_323_int = 1;
	
	while(var_323_int <= 17) {
		var_326_object = GlobalVars[15];
		object var_327_object; object var_328_object;
		var_322_object = var_328_object;
		func_159(var_327_object, var_328_object, ("pt_bull" + var_323_int), "pers_bull", "bull.xml");
		var_326_object->add(var_327_object);
		var_323_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


void func_10991(void)
{
	float var_4421_float; float var_4423_float;
	@GetGameTime(var_4421_float);
	int var_4422_int = 1;
	
	for(;;) {
		if(var_4422_int < 288) {
			var_4423_float = 1.0 * var_4422_int;
			if(var_4423_float < var_4421_float) {
			} else {
			@SetTimeEvent((40000 + var_4422_int), var_4423_float);
			var_4423_float -= 0.0033333334;
			if(var_4423_float < var_4421_float) {
				goto Label_11016;
			}
			@SetTimeEvent((42000 + var_4422_int), var_4423_float);
		}
		func_8237();
		func_12301();
		}
	Label_11016:
		var_4422_int += 1;
	}
	
}


void func_2807(int var_2699_int, int var_2700_int, int var_2701_int)
{
	int var_2704_int; int var_2705_int;
	bool var_2706_bool = false;
	if(var_2701_int > 8) {
		if(var_2701_int < 21)
			var_2706_bool = true;
	}
	if(var_2706_bool != 0) {
		int var_2711_int;
		var_2699_int = var_2711_int;
		func_517(var_2711_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2715_int;
		var_2699_int = var_2715_int;
		func_517(var_2715_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2719_int;
		var_2699_int = var_2719_int;
		func_517(var_2719_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2723_int;
		var_2699_int = var_2723_int;
		func_543(var_2723_int, "fog", "fog.xml", 6);
		if(var_2700_int >= 5) {
			int var_2729_int;
			var_2699_int = var_2729_int;
			func_543(var_2729_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2734_float; int var_2735_int;
		func_1238(var_2734_float, var_2735_int);
		if((1 * var_2734_float) != 0) {
			int var_2737_int; int var_2740_int;
			var_2699_int = var_2737_int;
			var_2704_int = var_2740_int;
			func_517(var_2737_int, "pers_bomber", "bomber.xml", var_2740_int);
		}
	} else {
		int var_2778_int;
		var_2699_int = var_2778_int;
		func_517(var_2778_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2782_int;
		var_2699_int = var_2782_int;
		func_517(var_2782_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2786_int;
		var_2699_int = var_2786_int;
		func_517(var_2786_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2790_int;
		var_2699_int = var_2790_int;
		func_543(var_2790_int, "fog", "fog.xml", 6);
		if(var_2735_int >= 5) {
			int var_2796_int;
			var_2699_int = var_2796_int;
			func_543(var_2796_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2801_float; int var_2802_int;
		var_2700_int = var_2802_int;
		func_1238(var_2801_float, var_2802_int);
		if((1 * var_2801_float) == 0) goto Label_2925;
		int var_2804_int; int var_2807_int;
		var_2699_int = var_2804_int;
		var_2705_int = var_2807_int;
		func_517(var_2804_int, "pers_bomber", "bomber.xml", var_2807_int);
	}
Label_2925:
	int var_2741_int;
	var_2699_int = var_2741_int;
	func_530(var_2741_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2747_int;
	var_2699_int = var_2747_int;
	func_530(var_2747_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2753_int;
	var_2699_int = var_2753_int;
	func_530(var_2753_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2759_int;
	var_2699_int = var_2759_int;
	func_530(var_2759_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2765_bool; int var_2766_int; int var_2767_int;
	var_2700_int = var_2766_int;
	var_2701_int = var_2767_int;
	func_1328(var_2765_bool, var_2766_int, var_2767_int);
	if(var_2765_bool != 0) {
		int var_2768_int;
		var_2699_int = var_2768_int;
		func_517(var_2768_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2772_bool; int var_2773_int;
	var_2700_int = var_2773_int;
	func_1355(var_2772_bool, var_2773_int);
	if(var_2772_bool != 0) {
		int var_2774_int;
		var_2699_int = var_2774_int;
		func_517(var_2774_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_9975(void)
{
	object var_4835_object;
	func_10907(var_4835_object);
	object var_4833_object;
	var_4835_object = var_4833_object;
	object var_4834_object;
	var_4833_object->FindMark(var_4834_object, "k2q03Arfist");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q01AlexandrGotoMladVlad");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q01BigVladGotoOspina");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q01MladVladGotoBigVlad");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q03Arfist");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q04AnnaGotoGatherer1");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q04AnnaGotoGatherer2");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q04AnnaGotoGatherer3");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q04MorlokGotoAndrei");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q03LaraLetter");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q04MladVladGotoAnna");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	var_4833_object->FindMark(var_4834_object, "k2q02KaterinaGotoLara");
	if(var_4834_object != 0)
		var_4834_object->Remove();
	bool var_4860_bool;
	func_10882(var_4860_bool, 461);
	bool var_4862_bool;
	func_10882(var_4862_bool, 470);
	bool var_4864_bool;
	func_10882(var_4864_bool, 476);
	bool var_4866_bool;
	func_10882(var_4866_bool, 507);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7938(void)
{
	var_4539_object = GlobalVars[15];
	object var_4538_object;
	var_4539_object = var_4538_object;
	func_263(var_4538_object);
}


// @pe
void func_6920(object var_278_object)
{
	var_278_object->add("r7_house2_01");
	var_278_object->add("r7_house2_02");
	var_278_object->add("r7_house2_03");
	var_278_object->add("r7_house2_04");
	var_278_object->add("r7_house3_03_i2");
	var_278_object->add("r7_house3_03");
	var_278_object->add("r7_house3_04_i2");
	var_278_object->add("r7_house3_04");
	var_278_object->add("r7_house3_05_i2");
	var_278_object->add("r7_house3_05");
	var_278_object->add("r7_house3_06_i2");
	var_278_object->add("r7_house3_01_i2");
	var_278_object->add("r7_house3_01");
	var_278_object->add("r7_house3_02_i2");
	var_278_object->add("r7_house3_02");
}


void func_7945(void)
{
	bool var_33_bool; int var_34_int; bool var_35_bool; int var_36_int; bool var_37_bool; object var_38_object;
	var_39_object = GlobalVars[15];
	object var_40_object;
	func_126(var_40_object);
	var_40_object = var_39_object;
	GlobalVars[15] = var_39_object;
	var_43_object = GlobalVars[13];
	object var_44_object;
	func_126(var_44_object);
	var_44_object = var_43_object;
	GlobalVars[13] = var_43_object;
	var_45_object = GlobalVars[8];
	object var_46_object;
	func_126(var_46_object);
	var_46_object = var_45_object;
	GlobalVars[8] = var_45_object;
	var_47_object = GlobalVars[9];
	object var_48_object;
	func_126(var_48_object);
	var_48_object = var_47_object;
	GlobalVars[9] = var_47_object;
	var_49_object = GlobalVars[10];
	object var_50_object;
	func_126(var_50_object);
	var_50_object = var_49_object;
	GlobalVars[10] = var_49_object;
	int var_29_int = 0;
	
	while(var_29_int < 16) {
		var_53_object = GlobalVars[8];
		object var_54_object;
		func_126(var_54_object);
		var_53_object->add(var_54_object);
		var_55_object = GlobalVars[9];
		object var_56_object;
		func_126(var_56_object);
		var_55_object->add(var_56_object);
		var_57_object = GlobalVars[10];
		object var_58_object;
		func_126(var_58_object);
		var_57_object->add(var_58_object);
		var_29_int += 1;
	}
	
	object var_30_object;
	@CreateStringVector(var_30_object);
	var_60_object = GlobalVars[13];
	var_60_object->add(var_30_object);
	object var_61_object;
	var_30_object = var_61_object;
	func_4428();
	@CreateStringVector(var_30_object);
	var_62_object = GlobalVars[13];
	var_62_object->add(var_30_object);
	object var_63_object;
	var_30_object = var_63_object;
	func_4586(var_63_object);
	@CreateStringVector(var_30_object);
	var_77_object = GlobalVars[13];
	var_77_object->add(var_30_object);
	object var_78_object;
	var_30_object = var_78_object;
	func_4783(var_78_object);
	@CreateStringVector(var_30_object);
	var_95_object = GlobalVars[13];
	var_95_object->add(var_30_object);
	object var_96_object;
	var_30_object = var_96_object;
	func_4989(var_96_object);
	@CreateStringVector(var_30_object);
	var_121_object = GlobalVars[13];
	var_121_object->add(var_30_object);
	object var_122_object;
	var_30_object = var_122_object;
	func_5219(var_122_object);
	@CreateStringVector(var_30_object);
	var_143_object = GlobalVars[13];
	var_143_object->add(var_30_object);
	object var_144_object;
	var_30_object = var_144_object;
	func_5437(var_144_object);
	@CreateStringVector(var_30_object);
	var_172_object = GlobalVars[13];
	var_172_object->add(var_30_object);
	object var_173_object;
	var_30_object = var_173_object;
	func_5676();
	@CreateStringVector(var_30_object);
	var_174_object = GlobalVars[13];
	var_174_object->add(var_30_object);
	object var_175_object;
	var_30_object = var_175_object;
	func_5699(var_175_object);
	@CreateStringVector(var_30_object);
	var_190_object = GlobalVars[13];
	var_190_object->add(var_30_object);
	object var_191_object;
	var_30_object = var_191_object;
	func_5899(var_191_object);
	@CreateStringVector(var_30_object);
	var_206_object = GlobalVars[13];
	var_206_object->add(var_30_object);
	object var_207_object;
	var_30_object = var_207_object;
	func_6099(var_207_object);
	@CreateStringVector(var_30_object);
	var_223_object = GlobalVars[13];
	var_223_object->add(var_30_object);
	object var_224_object;
	var_30_object = var_224_object;
	func_6302(var_224_object);
	@CreateStringVector(var_30_object);
	var_242_object = GlobalVars[13];
	var_242_object->add(var_30_object);
	object var_243_object;
	var_30_object = var_243_object;
	func_6511(var_243_object);
	@CreateStringVector(var_30_object);
	var_262_object = GlobalVars[13];
	var_262_object->add(var_30_object);
	object var_263_object;
	var_30_object = var_263_object;
	func_6723(var_263_object);
	@CreateStringVector(var_30_object);
	var_277_object = GlobalVars[13];
	var_277_object->add(var_30_object);
	object var_278_object;
	var_30_object = var_278_object;
	func_6920(var_278_object);
	@CreateStringVector(var_30_object);
	var_294_object = GlobalVars[13];
	var_294_object->add(var_30_object);
	object var_295_object;
	var_30_object = var_295_object;
	func_7123(var_295_object);
	@CreateStringVector(var_30_object);
	var_310_object = GlobalVars[13];
	var_310_object->add(var_30_object);
	object var_311_object;
	var_30_object = var_311_object;
	func_7323(var_311_object);
	func_7915();
	object var_31_object;
	@GetMainOutdoorScene(var_31_object);
	var_347_object = GlobalVars[6];
	object var_348_object;
	func_126(var_348_object);
	var_348_object = var_347_object;
	GlobalVars[6] = var_347_object;
	int var_32_int = 0;
	
	for(;;) {
		var_31_object->GetLocator(("pt_plant" + (var_32_int + 1)), var_33_bool);
		if(!var_33_bool) { //@nz
		} else {
			var_32_int += 1;
		}
		var_354_object = GlobalVars[6];
		var_354_object->resize(var_32_int);
		@Trace("Total plants: " + var_32_int);
		var_357_object = GlobalVars[7];
		object var_358_object;
		func_126(var_358_object);
		var_358_object = var_357_object;
		GlobalVars[7] = var_357_object;
		var_34_int = 0;

		for(;;) {
			var_31_object->GetLocator(("pt_grave_supply" + (var_34_int + 1)), var_35_bool);
			if(!var_35_bool) { //@nz
			} else {
				var_34_int += 1;
			}
			var_364_object = GlobalVars[7];
			var_364_object->resize(var_34_int);
			@Trace("Total grave supplies: " + var_34_int);
			var_367_object = GlobalVars[14];
			object var_368_object;
			func_126(var_368_object);
			var_368_object = var_367_object;
			GlobalVars[14] = var_367_object;

			for(;;) {
				var_31_object->GetLocator(("pt_bonfire" + (0 + 1)), var_37_bool);
				if(!var_37_bool) //@nz
					break;
				var_376_object = GlobalVars[14];
				var_376_object->add(Obj());
				int var_377_int;
				var_36_int = var_377_int;
				func_7722(var_377_int);
				var_38_object = null;
				var_36_int += 1;
			}
			@Trace("Total bonfires: " + var_36_int);

		}

	}
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_5899(object var_191_object)
{
	var_191_object->add("r2_house_2_01");
	var_191_object->add("r2_house_2_02");
	var_191_object->add("r2_house_2_03");
	var_191_object->add("r2_house7_02");
	var_191_object->add("r2_house01_01");
	var_191_object->add("r2_house7_01");
	var_191_object->add("r2_house3_01_i2");
	var_191_object->add("r2_house3_01");
	var_191_object->add("r2_house3_02_i2");
	var_191_object->add("r2_house3_02");
	var_191_object->add("r2_house3_03_i2");
	var_191_object->add("r2_house3_03");
	var_191_object->add("r3_house7_01");
	var_191_object->add("r3_house7_02");
}


// @pe
void func_11026(int var_4655_int, float var_4656_float)
{
	if(var_4655_int == 45095) {
		object var_4659_object; object var_4660_object;
		var_4661_object = GlobalVars[16];
		var_4661_object = var_4659_object;
		var_4662_object = GlobalVars[16];
		var_4662_object = var_4660_object;
		func_9885();
		bool var_4710_bool;
		func_239(var_4710_bool, "quest_k1_01", "cleanup");
	}
	if(var_4655_int == 45258) {
		int var_4715_int; float var_4716_float;
		var_4656_float = var_4716_float;
		func_9760(var_4715_int, var_4716_float);
	}
	if(var_4655_int == 45272) {
		object var_4726_object; object var_4727_object;
		var_4728_object = GlobalVars[16];
		var_4728_object = var_4726_object;
		var_4729_object = GlobalVars[16];
		var_4729_object = var_4727_object;
		func_10517();
	}
	if(var_4655_int == 45273) {
		object var_4742_object; object var_4743_object;
		var_4744_object = GlobalVars[16];
		var_4744_object = var_4742_object;
		var_4745_object = GlobalVars[16];
		var_4745_object = var_4743_object;
		func_10534();
	}
	if(var_4655_int == 45274) {
		object var_4756_object; object var_4757_object;
		var_4758_object = GlobalVars[16];
		var_4758_object = var_4756_object;
		var_4759_object = GlobalVars[16];
		var_4759_object = var_4757_object;
		func_10551();
	}
	if(var_4655_int == 45166) {
		bool var_4770_bool; object var_4771_object;
		var_4772_object = GlobalVars[16];
		var_4772_object = var_4771_object;
		func_10856(var_4770_bool, var_4771_object);
		if(var_4770_bool != 0) {
			int var_4775_int; float var_4776_float;
			var_4656_float = var_4776_float;
			func_9625(var_4775_int, var_4776_float);
		}
	}
	if(var_4655_int == 45165) {
		bool var_4783_bool; object var_4784_object;
		var_4785_object = GlobalVars[16];
		var_4785_object = var_4784_object;
		func_10856(var_4783_bool, var_4784_object);
		if(var_4783_bool != 0) {
			int var_4786_int; float var_4787_float;
			var_4656_float = var_4787_float;
			func_9616(var_4786_int, var_4787_float);
		}
	}
	if(var_4655_int == 45164) {
		bool var_4794_bool; object var_4795_object;
		var_4796_object = GlobalVars[16];
		var_4796_object = var_4795_object;
		func_10856(var_4794_bool, var_4795_object);
		if(var_4794_bool != 0) {
			int var_4797_int; float var_4798_float;
			var_4656_float = var_4798_float;
			func_9607(var_4797_int, var_4798_float);
		}
	}
	if(var_4655_int == 45173) {
		bool var_4805_bool; object var_4806_object;
		var_4807_object = GlobalVars[16];
		var_4807_object = var_4806_object;
		func_10856(var_4805_bool, var_4806_object);
		if(var_4805_bool != 0) {
			int var_4808_int; float var_4809_float;
			var_4656_float = var_4809_float;
			func_9697(var_4808_int, var_4809_float);
		}
	}
	if(var_4655_int == 45163) {
		bool var_4816_bool; object var_4817_object;
		var_4818_object = GlobalVars[16];
		var_4818_object = var_4817_object;
		func_10856(var_4816_bool, var_4817_object);
		if(var_4816_bool != 0) {
			int var_4819_int; float var_4820_float;
			var_4656_float = var_4820_float;
			func_9598(var_4819_int, var_4820_float);
		}
	}
	if(var_4655_int == 45110) {
		object var_4827_object; object var_4828_object;
		var_4829_object = GlobalVars[16];
		var_4829_object = var_4827_object;
		var_4830_object = GlobalVars[16];
		var_4830_object = var_4828_object;
		func_9975();
		object var_4868_object; object var_4869_object;
		var_4870_object = GlobalVars[16];
		var_4870_object = var_4868_object;
		var_4871_object = GlobalVars[16];
		var_4871_object = var_4869_object;
		func_9871();
	}
	if(var_4655_int == 45109) {
		object var_4884_object; object var_4885_object;
		var_4886_object = GlobalVars[16];
		var_4886_object = var_4884_object;
		var_4887_object = GlobalVars[16];
		var_4887_object = var_4885_object;
		func_10469();
		bool var_4896_bool;
		func_239(var_4896_bool, "quest_k11_01", "cleanup");
	}
	if(var_4655_int == 45249) {
		object var_4901_object;
		func_137(var_4901_object, "quest_k5_04");
	}
	if(var_4655_int == 45108) {
		object var_4911_object; object var_4912_object;
		var_4913_object = GlobalVars[16];
		var_4913_object = var_4911_object;
		var_4914_object = GlobalVars[16];
		var_4914_object = var_4912_object;
		func_10438();
		bool var_4930_bool;
		func_239(var_4930_bool, "quest_k10_01", "cleanup");
		object var_4933_object;
		func_137(var_4933_object, "quest_k11_01");
	}
	if(var_4655_int == 45107) {
		bool var_4937_bool; object var_4938_object;
		var_4939_object = GlobalVars[16];
		var_4939_object = var_4938_object;
		func_10664(var_4938_object);
		if(!var_4937_bool) { //@nz
			int var_4945_int; float var_4946_float;
			var_4656_float = var_4946_float;
			func_9679(var_4945_int, var_4946_float);
		}
	}
	if(var_4655_int == 45106) {
		object var_4953_object; object var_4954_object;
		var_4955_object = GlobalVars[16];
		var_4955_object = var_4953_object;
		var_4956_object = GlobalVars[16];
		var_4956_object = var_4954_object;
		func_10420();
		bool var_4965_bool;
		func_239(var_4965_bool, "quest_k9_01", "cleanup");
		object var_4968_object;
		func_137(var_4968_object, "quest_k10_01");
	}
	if(var_4655_int == 45105) {
		object var_4972_object; object var_4973_object;
		var_4974_object = GlobalVars[16];
		var_4974_object = var_4972_object;
		var_4975_object = GlobalVars[16];
		var_4975_object = var_4973_object;
		func_10402();
		bool var_4984_bool;
		func_239(var_4984_bool, "quest_k8_01", "cleanup");
		object var_4987_object;
		func_137(var_4987_object, "quest_k9_01");
	}
	if(var_4655_int == 45104) {
		object var_4991_object; object var_4992_object;
		var_4993_object = GlobalVars[16];
		var_4993_object = var_4991_object;
		var_4994_object = GlobalVars[16];
		var_4994_object = var_4992_object;
		func_10357();
		bool var_5014_bool;
		func_239(var_5014_bool, "quest_k7_01", "cleanup");
		object var_5017_object;
		func_137(var_5017_object, "quest_k8_01");
	}
	if(var_4655_int == 45256) {
		bool var_5021_bool; object var_5022_object;
		var_5023_object = GlobalVars[16];
		var_5023_object = var_5022_object;
		func_10844(var_5022_object);
		if(!var_5021_bool) { //@nz
			int var_5029_int; float var_5030_float;
			var_4656_float = var_5030_float;
			func_9841(var_5029_int, var_5030_float);
		}
	}
	if(var_4655_int == 45257) {
		int var_5037_int; float var_5038_float;
		var_4656_float = var_5038_float;
		func_9751(var_5037_int, var_5038_float);
	}
	if(var_4655_int == 45275) {
		object var_5045_object; object var_5046_object;
		var_5047_object = GlobalVars[16];
		var_5047_object = var_5045_object;
		var_5048_object = GlobalVars[16];
		var_5048_object = var_5046_object;
		func_10568();
	}
	if(var_4655_int == 45276) {
		object var_5059_object; object var_5060_object;
		var_5061_object = GlobalVars[16];
		var_5061_object = var_5059_object;
		var_5062_object = GlobalVars[16];
		var_5062_object = var_5060_object;
		func_10585();
	}
	if(var_4655_int == 45277) {
		object var_5073_object; object var_5074_object;
		var_5075_object = GlobalVars[16];
		var_5075_object = var_5073_object;
		var_5076_object = GlobalVars[16];
		var_5076_object = var_5074_object;
		func_10602();
	}
	if(var_4655_int == 45172) {
		bool var_5087_bool; object var_5088_object;
		var_5089_object = GlobalVars[16];
		var_5089_object = var_5088_object;
		func_10856(var_5087_bool, var_5088_object);
		if(var_5087_bool != 0) {
			int var_5090_int; float var_5091_float;
			var_4656_float = var_5091_float;
			func_9688(var_5090_int, var_5091_float);
		}
	}
	if(var_4655_int == 45171) {
		bool var_5098_bool; object var_5099_object;
		var_5100_object = GlobalVars[16];
		var_5100_object = var_5099_object;
		func_10856(var_5098_bool, var_5099_object);
		if(var_5098_bool != 0) {
			int var_5101_int; float var_5102_float;
			var_4656_float = var_5102_float;
			func_9670(var_5101_int, var_5102_float);
		}
	}
	if(var_4655_int == 45170) {
		bool var_5109_bool; object var_5110_object;
		var_5111_object = GlobalVars[16];
		var_5111_object = var_5110_object;
		func_10856(var_5109_bool, var_5110_object);
		if(var_5109_bool != 0) {
			int var_5112_int; float var_5113_float;
			var_4656_float = var_5113_float;
			func_9661(var_5112_int, var_5113_float);
		}
	}
	if(var_4655_int == 45253) {
		bool var_5120_bool = true;
		bool var_5121_bool; object var_5122_object;
		var_5123_object = GlobalVars[16];
		var_5123_object = var_5122_object;
		func_10820(var_5122_object);
		var_5128_bool = !var_5121_bool; //@nz
		if(var_5128_bool != 1) {
			bool var_5129_bool; object var_5130_object;
			var_5131_object = GlobalVars[16];
			var_5131_object = var_5130_object;
			func_10808(var_5130_object);
			var_5136_bool = !var_5129_bool; //@nz
			if(var_5136_bool != 1)
				var_5120_bool = false;
		}
		if(var_5120_bool != 0) {
			int var_5137_int; float var_5138_float;
			var_4656_float = var_5138_float;
			func_9724(var_5137_int, var_5138_float);
		}
	}
	if(var_4655_int == 45169) {
		bool var_5145_bool; object var_5146_object;
		var_5147_object = GlobalVars[16];
		var_5147_object = var_5146_object;
		func_10856(var_5145_bool, var_5146_object);
		if(var_5145_bool != 0) {
			int var_5148_int; float var_5149_float;
			var_4656_float = var_5149_float;
			func_9652(var_5148_int, var_5149_float);
		}
	}
	if(var_4655_int == 45252) {
		bool var_5156_bool = true;
		bool var_5157_bool; object var_5158_object;
		var_5159_object = GlobalVars[16];
		var_5159_object = var_5158_object;
		func_10784(var_5158_object);
		var_5164_bool = !var_5157_bool; //@nz
		if(var_5164_bool != 1) {
			bool var_5165_bool; object var_5166_object;
			var_5167_object = GlobalVars[16];
			var_5167_object = var_5166_object;
			func_10796(var_5166_object);
			var_5172_bool = !var_5165_bool; //@nz
			if(var_5172_bool != 1)
				var_5156_bool = false;
		}
		if(var_5156_bool != 0) {
			int var_5173_int; float var_5174_float;
			var_4656_float = var_5174_float;
			func_9724(var_5173_int, var_5174_float);
		}
	}
	if(var_4655_int == 45254) {
		int var_5177_int; float var_5178_float;
		var_4656_float = var_5178_float;
		func_9787(var_5177_int, var_5178_float);
	}
	if(var_4655_int == 45103) {
		object var_5185_object; object var_5186_object;
		var_5187_object = GlobalVars[16];
		var_5187_object = var_5185_object;
		var_5188_object = GlobalVars[16];
		var_5188_object = var_5186_object;
		func_10326();
		bool var_5204_bool;
		func_239(var_5204_bool, "quest_k6_01", "cleanup");
		object var_5207_object;
		func_137(var_5207_object, "quest_k7_01");
	}
	if(var_4655_int == 45168) {
		bool var_5211_bool; object var_5212_object;
		var_5213_object = GlobalVars[16];
		var_5213_object = var_5212_object;
		func_10856(var_5211_bool, var_5212_object);
		if(var_5211_bool != 0) {
			int var_5214_int; float var_5215_float;
			var_4656_float = var_5215_float;
			func_9643(var_5214_int, var_5215_float);
		}
	}
	if(var_4655_int == 45251) {
		bool var_5222_bool = true;
		bool var_5223_bool; object var_5224_object;
		var_5225_object = GlobalVars[16];
		var_5225_object = var_5224_object;
		func_10760(var_5224_object);
		var_5230_bool = !var_5223_bool; //@nz
		if(var_5230_bool != 1) {
			bool var_5231_bool; object var_5232_object;
			var_5233_object = GlobalVars[16];
			var_5233_object = var_5232_object;
			func_10772(var_5232_object);
			var_5238_bool = !var_5231_bool; //@nz
			if(var_5238_bool != 1)
				var_5222_bool = false;
		}
		if(var_5222_bool != 0) {
			int var_5239_int; float var_5240_float;
			var_4656_float = var_5240_float;
			func_9724(var_5239_int, var_5240_float);
		}
	}
	if(var_4655_int == 45250) {
		bool var_5243_bool = true;
		bool var_5244_bool; object var_5245_object;
		var_5246_object = GlobalVars[16];
		var_5246_object = var_5245_object;
		func_10736(var_5245_object);
		var_5251_bool = !var_5244_bool; //@nz
		if(var_5251_bool != 1) {
			bool var_5252_bool; object var_5253_object;
			var_5254_object = GlobalVars[16];
			var_5254_object = var_5253_object;
			func_10748(var_5253_object);
			var_5259_bool = !var_5252_bool; //@nz
			if(var_5259_bool != 1)
				var_5243_bool = false;
		}
		if(var_5243_bool != 0) {
			int var_5260_int; float var_5261_float;
			var_4656_float = var_5261_float;
			func_9724(var_5260_int, var_5261_float);
		}
	}
	if(var_4655_int == 45255) {
		bool var_5264_bool; object var_5265_object;
		var_5266_object = GlobalVars[16];
		var_5266_object = var_5265_object;
		func_10832(var_5265_object);
		if(!var_5264_bool) { //@nz
			int var_5272_int; float var_5273_float;
			var_4656_float = var_5273_float;
			func_9814(var_5272_int, var_5273_float);
		}
	}
	if(var_4655_int == 45248) {
		bool var_5280_bool; object var_5281_object;
		var_5282_object = GlobalVars[16];
		var_5282_object = var_5281_object;
		func_10712(var_5281_object);
		if(!var_5280_bool) { //@nz
			int var_5288_int; float var_5289_float;
			var_4656_float = var_5289_float;
			func_9832(var_5288_int, var_5289_float);
		}
	}
	if(var_4655_int == 45247) {
		int var_5296_int; float var_5297_float;
		var_4656_float = var_5297_float;
		func_9823(var_5296_int, var_5297_float);
	}
	if(var_4655_int == 45246) {
		int var_5304_int; float var_5305_float;
		var_4656_float = var_5305_float;
		func_9805(var_5304_int, var_5305_float);
	}
	if(var_4655_int == 45245) {
		int var_5312_int; float var_5313_float;
		var_4656_float = var_5313_float;
		func_9769(var_5312_int, var_5313_float);
	}
	if(var_4655_int == 45244) {
		int var_5320_int; float var_5321_float;
		var_4656_float = var_5321_float;
		func_9733(var_5320_int, var_5321_float);
	}
	if(var_4655_int == 45243) {
		bool var_5328_bool; object var_5329_object;
		var_5330_object = GlobalVars[16];
		var_5330_object = var_5329_object;
		func_10700(var_5329_object);
		if(!var_5328_bool) { //@nz
			object var_5336_object; object var_5337_object;
			var_5338_object = GlobalVars[16];
			var_5338_object = var_5336_object;
			var_5339_object = GlobalVars[16];
			var_5339_object = var_5337_object;
			func_10501();
			int var_5350_int; float var_5351_float;
			var_4656_float = var_5351_float;
			func_9742(var_5350_int, var_5351_float);
		}
	}
	if(var_4655_int == 45242) {
		bool var_5358_bool = true;
		bool var_5359_bool; object var_5360_object;
		var_5361_object = GlobalVars[16];
		var_5361_object = var_5360_object;
		func_10688(var_5360_object);
		var_5366_bool = !var_5359_bool; //@nz
		if(var_5366_bool != 1) {
			bool var_5367_bool; object var_5368_object;
			var_5369_object = GlobalVars[16];
			var_5369_object = var_5368_object;
			func_10724(var_5368_object);
			var_5374_bool = !var_5367_bool; //@nz
			if(var_5374_bool != 1)
				var_5358_bool = false;
		}
		if(var_5358_bool != 0) {
			int var_5375_int; float var_5376_float;
			var_4656_float = var_5376_float;
			func_9724(var_5375_int, var_5376_float);
		}
	}
	if(var_4655_int == 45241) {
		int var_5379_int; float var_5380_float;
		var_4656_float = var_5380_float;
		func_9715(var_5379_int, var_5380_float);
	}
	if(var_4655_int == 45240) {
		bool var_5387_bool; object var_5388_object;
		var_5389_object = GlobalVars[16];
		var_5389_object = var_5388_object;
		func_10676(var_5388_object);
		if(!var_5387_bool) { //@nz
			int var_5395_int; float var_5396_float;
			var_4656_float = var_5396_float;
			func_9706(var_5395_int, var_5396_float);
		}
	}
	if(var_4655_int == 45236) {
		int var_5403_int; float var_5404_float;
		var_4656_float = var_5404_float;
		func_9778(var_5403_int, var_5404_float);
	}
	if(var_4655_int == 45167) {
		bool var_5411_bool; object var_5412_object;
		var_5413_object = GlobalVars[16];
		var_5413_object = var_5412_object;
		func_10856(var_5411_bool, var_5412_object);
		if(var_5411_bool != 0) {
			int var_5414_int; float var_5415_float;
			var_4656_float = var_5415_float;
			func_9634(var_5414_int, var_5415_float);
		}
	}
	if(var_4655_int == 45101) {
		object var_5422_object; object var_5423_object;
		var_5424_object = GlobalVars[16];
		var_5424_object = var_5422_object;
		var_5425_object = GlobalVars[16];
		var_5425_object = var_5423_object;
		func_10177();
		object var_5451_object; object var_5452_object;
		var_5453_object = GlobalVars[16];
		var_5453_object = var_5451_object;
		var_5454_object = GlobalVars[16];
		var_5454_object = var_5452_object;
		func_9871();
		bool var_5455_bool;
		func_239(var_5455_bool, "quest_k4_01", "cleanup");
	}
	if(var_4655_int == 45102) {
		object var_5460_object; object var_5461_object;
		var_5462_object = GlobalVars[16];
		var_5462_object = var_5460_object;
		var_5463_object = GlobalVars[16];
		var_5463_object = var_5461_object;
		func_10246();
		object var_5493_object;
		func_148(var_5493_object, "quest_k6_01");
	}
	if(var_4655_int == 45100) {
		object var_5503_object; object var_5504_object;
		var_5505_object = GlobalVars[16];
		var_5505_object = var_5503_object;
		var_5506_object = GlobalVars[16];
		var_5506_object = var_5504_object;
		func_10083();
		object var_5540_object; object var_5541_object;
		var_5542_object = GlobalVars[16];
		var_5542_object = var_5540_object;
		var_5543_object = GlobalVars[16];
		var_5543_object = var_5541_object;
		func_9878();
		object var_5546_object;
		func_148(var_5546_object, "quest_k4_01");
	}
	if(var_4655_int == 45096) {
		bool var_5550_bool; object var_5551_object;
		var_5552_object = GlobalVars[16];
		var_5552_object = var_5551_object;
		func_10652(var_5551_object);
		if(var_5550_bool != 0) {
			object var_5557_object; object var_5558_object;
			var_5559_object = GlobalVars[16];
			var_5559_object = var_5557_object;
			var_5560_object = GlobalVars[16];
			var_5560_object = var_5558_object;
			func_10631(var_5558_object);
			int var_5593_int; float var_5594_float;
			var_4656_float = var_5594_float;
			func_9796(var_5593_int, var_5594_float);
		}
	}
}


// @pe
void func_4885(int var_2416_int, int var_2417_int, object var_2418_object, object var_2419_object, object var_2420_object, object var_2421_object)
{
	if(var_2417_int == 0) {
		func_810(2, true);
		func_827(2, true, 1);
		int var_2430_int; object var_2431_object; object var_2432_object; object var_2433_object;
		var_2416_int = var_2430_int;
		var_2418_object = var_2431_object;
		var_2419_object = var_2432_object;
		var_2420_object = var_2433_object;
		func_655(2, var_2430_int, var_2431_object, var_2432_object, var_2433_object);
		object var_2434_object;
		var_2421_object = var_2434_object;
		func_320(var_2434_object, 1);
		func_884(2, true, 5);
		func_946(2, false, 5);
	}
	func_793(2, false);
	int var_2445_int; int var_2446_int;
	var_2416_int = var_2445_int;
	var_2417_int = var_2446_int;
	func_2987(2, var_2445_int, var_2446_int);
}


void func_793(int var_735_int, bool var_736_bool)
{
	object var_739_object;
	@GetMainOutdoorScene(var_739_object);
	if(var_739_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_739_object->EnableSubsets((var_735_int + 1), 100, var_736_bool, true);
}
EMIT "Stack[-2] = 0";


void func_810(int var_450_int, bool var_451_bool)
{
	object var_454_object;
	@GetMainOutdoorScene(var_454_object);
	if(var_454_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_454_object->EnableSubsets((var_450_int + 1), 200, var_451_bool, false);
}
EMIT "Stack[-2] = 0";


void func_3890(int var_3573_int, int var_3574_int, int var_3575_int)
{
	int var_3580_int; int var_3581_int; int var_3582_int; int var_3583_int;
	bool var_3584_bool = false;
	if(var_3575_int > 8) {
		if(var_3575_int < 21)
			var_3584_bool = true;
	}
	if(var_3584_bool != 0) {
		int var_3589_int;
		var_3573_int = var_3589_int;
		func_517(var_3589_int, "pers_rat", "rat.xml", 2);
		int var_3593_int;
		var_3573_int = var_3593_int;
		func_517(var_3593_int, "pers_alkash", "alkash.xml", 2);
		int var_3597_int;
		var_3573_int = var_3597_int;
		func_517(var_3597_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3602_float; int var_3603_int;
		func_1148(var_3602_float, var_3603_int);
		if((2 * var_3602_float) != 0) {
			int var_3605_int; int var_3608_int;
			var_3573_int = var_3605_int;
			var_3580_int = var_3608_int;
			func_517(var_3605_int, "pers_grabitel", "grabitel.xml", var_3608_int);
		}
		if((var_3603_int + 1) >= 2) {
			int var_3613_int;
			var_3573_int = var_3613_int;
			func_517(var_3613_int, "pers_patrool", "patrol.xml", 2);
			bool var_3617_bool; int var_3618_int;
			var_3574_int = var_3618_int;
			func_1355(var_3617_bool, var_3618_int);
			if(var_3617_bool != 0) {
				int var_3619_int;
				var_3573_int = var_3619_int;
				func_517(var_3619_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3624_float; int var_3625_int;
		var_3574_int = var_3625_int;
		func_1238(var_3624_float, var_3625_int);
		if((1 * var_3624_float) != 0) {
			int var_3627_int; int var_3630_int;
			var_3573_int = var_3627_int;
			var_3581_int = var_3630_int;
			func_517(var_3627_int, "pers_bomber", "bomber.xml", var_3630_int);
		}
	} else {
		int var_3644_int;
		var_3573_int = var_3644_int;
		func_517(var_3644_int, "pers_rat", "rat.xml", 4);
		int var_3648_int;
		var_3573_int = var_3648_int;
		func_517(var_3648_int, "pers_alkash", "alkash.xml", 1);
		int var_3652_int;
		var_3573_int = var_3652_int;
		func_517(var_3652_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3657_float; int var_3658_int;
		func_1148(var_3657_float, var_3658_int);
		if((3 * var_3657_float) != 0) {
			int var_3660_int; int var_3663_int;
			var_3573_int = var_3660_int;
			var_3582_int = var_3663_int;
			func_517(var_3660_int, "pers_grabitel", "grabitel.xml", var_3663_int);
		}
		if((var_3658_int + 1) >= 2) {
			int var_3668_int;
			var_3573_int = var_3668_int;
			func_517(var_3668_int, "pers_patrool", "patrol.xml", 1);
			bool var_3672_bool; int var_3673_int;
			var_3574_int = var_3673_int;
			func_1355(var_3672_bool, var_3673_int);
			if(var_3672_bool != 0) {
				int var_3674_int;
				var_3573_int = var_3674_int;
				func_517(var_3674_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3679_float; int var_3680_int;
		var_3574_int = var_3680_int;
		func_1238(var_3679_float, var_3680_int);
		if((1 * var_3679_float) == 0) goto Label_4052;
		int var_3682_int; int var_3685_int;
		var_3573_int = var_3682_int;
		var_3583_int = var_3685_int;
		func_517(var_3682_int, "pers_bomber", "bomber.xml", var_3685_int);
	}
Label_4052:
	bool var_3631_bool; int var_3632_int; int var_3633_int;
	var_3574_int = var_3632_int;
	var_3575_int = var_3633_int;
	func_1328(var_3631_bool, var_3632_int, var_3633_int);
	if(var_3631_bool != 0) {
		int var_3634_int;
		var_3573_int = var_3634_int;
		func_517(var_3634_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3638_bool; int var_3639_int;
	var_3574_int = var_3639_int;
	func_1355(var_3638_bool, var_3639_int);
	if(var_3638_bool != 0) {
		int var_3640_int;
		var_3573_int = var_3640_int;
		func_517(var_3640_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_5943(int var_1574_int, int var_1575_int, object var_1576_object, object var_1577_object, object var_1578_object, object var_1579_object)
{
	if(var_1575_int == 0) {
		func_810(8, false);
		func_827(8, false, 1);
		int var_1587_int; int var_1588_int; object var_1589_object; object var_1590_object; object var_1591_object;
		var_1587_int = 8;
		var_1574_int = var_1588_int;
		var_1576_object = var_1589_object;
		var_1577_object = var_1590_object;
		var_1578_object = var_1591_object;
		func_636(var_1588_int, var_1589_object, var_1590_object, var_1591_object);
		object var_1592_object;
		var_1579_object = var_1592_object;
		func_320(var_1592_object, 0);
		func_884(8, false, 4);
		func_946(8, false, 4);
	}
	int var_1601_int;
	var_1575_int = var_1601_int;
	func_997(8, var_1601_int);
	int var_1603_int; int var_1604_int;
	var_1574_int = var_1603_int;
	var_1575_int = var_1604_int;
	func_1621(8, var_1603_int, var_1604_int);
}


// @pe
void func_6967(int var_1739_int, int var_1740_int, object var_1741_object, object var_1742_object, object var_1743_object, object var_1744_object)
{
	if(var_1740_int == 0) {
		func_810(13, false);
		func_827(13, false, 1);
		int var_1752_int; int var_1753_int; object var_1754_object; object var_1755_object; object var_1756_object;
		var_1752_int = 13;
		var_1739_int = var_1753_int;
		var_1741_object = var_1754_object;
		var_1742_object = var_1755_object;
		var_1743_object = var_1756_object;
		func_636(var_1753_int, var_1754_object, var_1755_object, var_1756_object);
		object var_1757_object;
		var_1744_object = var_1757_object;
		func_320(var_1757_object, 0);
		func_884(13, false, 4);
		func_946(13, false, 4);
	}
	int var_1766_int;
	var_1740_int = var_1766_int;
	func_1064(13, var_1766_int);
	int var_1768_int; int var_1769_int;
	var_1739_int = var_1768_int;
	var_1740_int = var_1769_int;
	func_1621(13, var_1768_int, var_1769_int);
}


void func_827(int var_526_int, bool var_527_bool, int var_528_int)
{
	string var_536_string; object var_537_object; int var_538_int; string var_539_string; object var_540_object; int var_541_int; object var_542_object;
	var_536_string = "street_rags" + (var_526_int + 1);
	if(var_527_bool != 0) {
		@GetMainOutdoorScene(var_537_object);
		if(var_537_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_538_int = 1;

		for(;;) {
			if(var_538_int <= var_528_int) {
				var_539_string = (var_536_string + "_") + var_538_int;
				@FindActor(var_540_object, var_539_string);
				if(!var_540_object) //@nz
					@AddActor(var_540_object, var_539_string, var_537_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_540_object->RemoveOnUnload(false);
			var_537_object = null;
	} else {
			var_541_int = 1;

			for(;;) {
				if(!(var_541_int <= var_528_int)) goto Label_883;
				@FindActor(var_542_object, ((var_536_string + "_") + var_541_int));
				if(var_542_object != 0)
					var_542_object->RemoveOnUnload();
				var_542_object = null;
				var_541_int += 1;
			}
	}
	Label_883:
		return 14;

		}
		var_540_object = null;
		var_538_int += 1;
	}
	
}


// @pe
void func_4937(int var_3545_int, int var_3546_int, object var_3547_object, object var_3548_object, object var_3549_object, object var_3550_object)
{
	if(var_3546_int == 0) {
		func_810(2, false);
		func_827(2, false, 1);
		int var_3559_int; object var_3560_object; object var_3561_object; object var_3562_object;
		var_3545_int = var_3559_int;
		var_3547_object = var_3560_object;
		var_3548_object = var_3561_object;
		var_3549_object = var_3562_object;
		func_734(2, var_3559_int, var_3560_object, var_3561_object, var_3562_object);
		object var_3563_object;
		var_3550_object = var_3563_object;
		func_320(var_3563_object, 2);
		func_884(2, false, 5);
		func_946(2, true, 5);
	}
	func_793(2, false);
	int var_3574_int; int var_3575_int;
	var_3545_int = var_3574_int;
	var_3546_int = var_3575_int;
	func_3890(2, var_3574_int, var_3575_int);
}


void func_12105(bool var_215_bool, int var_216_int)
{
	int var_218_int;
	@GetVariable(("K2System" + var_216_int), var_218_int);
	var_215_bool = var_218_int != 0;
}


// @pe
void func_12113(int var_187_int, int var_188_int)
{
	if(var_188_int == 6) {
		var_187_int = 14;
		return 0;
	EMIT "GOTO 0x2f75";
	}
	if(var_188_int == 7) {
		var_187_int = 8;
		return 0;
	EMIT "GOTO 0x2f75";
	}
	if(var_188_int == 8) {
		var_187_int = 4;
		return 0;
	EMIT "GOTO 0x2f75";
	}
	if(var_188_int == 9) {
		var_187_int = 13;
		return 0;
	EMIT "GOTO 0x2f75";
	}
	if(var_188_int == 10) {
		var_187_int = 5;
		return 0;
	EMIT "GOTO 0x2f75";
	}
	if(var_188_int == 11) {
		var_187_int = 11;
		return 0;
	}
	var_187_int = -1;
}


void func_10083(void)
{
	object var_5511_object;
	func_10907(var_5511_object);
	object var_5509_object;
	var_5511_object = var_5509_object;
	object var_5510_object;
	var_5509_object->FindMark(var_5510_object, "k3q01AlexandrGotoAnna");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q01AnnaGotoAlexandr");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q01AnnaGotoKapella");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q01AnnaGotoMladVlad");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q01KapellaGotoAnna");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q02EvaGotoKaterina");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q02JuliaGotoEva");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q02KaterinaGotoJulia");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q03AnnaGotoEva");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	var_5509_object->FindMark(var_5510_object, "k3q04KapellaGotoDanko");
	if(var_5510_object != 0)
		var_5510_object->Remove();
	bool var_5532_bool;
	func_10882(var_5532_bool, 337);
	bool var_5534_bool;
	func_10882(var_5534_bool, 344);
	bool var_5536_bool;
	func_10882(var_5536_bool, 350);
	bool var_5538_bool;
	func_10882(var_5538_bool, 354);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1898(int var_1053_int, int var_1054_int, int var_1055_int)
{
	int var_1057_int;
	if((var_1054_int + 1) == 12)
		return 2;
	bool var_1062_bool = false;
	bool var_1063_bool = true;
	var_1065_bool = var_1055_int < 7;
	if(var_1065_bool != 1) {
		var_1067_bool = var_1055_int > 21;
		if(var_1067_bool != 1)
			var_1063_bool = false;
	}
	if(var_1063_bool != 0) {
		if(var_1054_int != 0)
			var_1062_bool = true;
	}
	if(var_1062_bool != 0) {
		float var_1070_float; int var_1071_int;
		var_1054_int = var_1071_int;
		func_1124(var_1070_float, var_1071_int);
		var_1070_float = var_1057_int;
		if(var_1057_int != 0) {
			int var_1073_int; int var_1076_int;
			var_1053_int = var_1073_int;
			var_1057_int = var_1076_int;
			func_517(var_1073_int, "pers_grabitel", "grabitel.xml", var_1076_int);
		}
	}
	bool var_1077_bool = false;
	bool var_1078_bool = false;
	if(var_1054_int == 0) {
		if(var_1055_int < 21)
			var_1078_bool = true;
	}
	if(var_1078_bool != 0) {
		int var_1083_int;
		func_10924(var_1083_int);
		if(var_1083_int == 1)
			var_1077_bool = true;
	}
	if(var_1077_bool != 0) {
		int var_1086_int;
		var_1053_int = var_1086_int;
		func_517(var_1086_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1090_int;
		var_1053_int = var_1090_int;
		func_517(var_1090_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1094_int;
		var_1053_int = var_1094_int;
		func_517(var_1094_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1098_int;
		var_1053_int = var_1098_int;
		func_517(var_1098_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1102_int;
		var_1053_int = var_1102_int;
		func_517(var_1102_int, "pers_woman", "woman.xml", 1);
		int var_1106_int;
		var_1053_int = var_1106_int;
		func_517(var_1106_int, "pers_alkash", "alkash.xml", 1);
		int var_1110_int;
		var_1053_int = var_1110_int;
		func_517(var_1110_int, "pers_girl", "girl.xml", 1);
		int var_1114_int;
		var_1053_int = var_1114_int;
		func_517(var_1114_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1155_bool = false;
			if(var_1055_int > 8) {
				if(var_1055_int < 21)
					var_1155_bool = true;
			}
			if(var_1155_bool == 0) goto Label_2104;
			int var_1160_int;
			var_1053_int = var_1160_int;
			func_517(var_1160_int, "pers_woman", "woman.xml", 1);
			int var_1164_int;
			var_1053_int = var_1164_int;
			func_517(var_1164_int, "pers_unosha", "unosha.xml", 1);
			int var_1168_int;
			var_1053_int = var_1168_int;
			func_517(var_1168_int, "pers_unosha", "unosha2.xml", 1);
			int var_1172_int;
			var_1053_int = var_1172_int;
			func_517(var_1172_int, "pers_worker", "worker.xml", 1);
			int var_1176_int;
			var_1053_int = var_1176_int;
			func_517(var_1176_int, "pers_worker", "worker2.xml", 1);
			int var_1180_int;
			var_1053_int = var_1180_int;
			func_517(var_1180_int, "pers_alkash", "alkash.xml", 1);
			int var_1184_int;
			var_1053_int = var_1184_int;
			func_517(var_1184_int, "pers_girl", "girl.xml", 1);
			int var_1188_int;
			var_1053_int = var_1188_int;
			func_517(var_1188_int, "pers_girl", "girl2.xml", 1);
			if((var_1054_int + 1) >= 3) {
				int var_1196_int;
				var_1053_int = var_1196_int;
				func_517(var_1196_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1054_int + 1) >= 7) {
				int var_1204_int;
				var_1053_int = var_1204_int;
				func_517(var_1204_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2170:
	for(;;) {
		bool var_1118_bool = false;
		bool var_1119_bool = false;
		if(var_1054_int == 0) {
			if(var_1055_int > 12)
				var_1119_bool = true;
		}
		if(var_1119_bool != 0) {
			if(var_1055_int < 22)
				var_1118_bool = true;
		}
		if(var_1118_bool != 0) {
			int var_1126_int;
			var_1053_int = var_1126_int;
			func_517(var_1126_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1130_bool; int var_1131_int; int var_1132_int;
		var_1054_int = var_1131_int;
		var_1055_int = var_1132_int;
		func_1328(var_1130_bool, var_1131_int, var_1132_int);
		if(var_1130_bool != 0) {
			int var_1137_int;
			var_1053_int = var_1137_int;
			func_517(var_1137_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1141_bool; int var_1142_int; int var_1143_int;
		var_1054_int = var_1142_int;
		var_1055_int = var_1143_int;
		func_1338(var_1141_bool, var_1142_int, var_1143_int);
		if(var_1141_bool != 0) {
			int var_1151_int;
			var_1053_int = var_1151_int;
			func_517(var_1151_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2104:
	int var_1208_int;
	var_1053_int = var_1208_int;
	func_517(var_1208_int, "pers_woman", "woman.xml", 1);
	int var_1212_int;
	var_1053_int = var_1212_int;
	func_517(var_1212_int, "pers_unosha", "unosha.xml", 1);
	int var_1216_int;
	var_1053_int = var_1216_int;
	func_517(var_1216_int, "pers_unosha", "unosha2.xml", 1);
	int var_1220_int;
	var_1053_int = var_1220_int;
	func_517(var_1220_int, "pers_worker", "worker.xml", 1);
	int var_1224_int;
	var_1053_int = var_1224_int;
	func_517(var_1224_int, "pers_worker", "worker2.xml", 1);
	int var_1228_int;
	var_1053_int = var_1228_int;
	func_517(var_1228_int, "pers_alkash", "alkash.xml", 1);
	if((var_1054_int + 1) >= 3) {
		int var_1236_int;
		var_1053_int = var_1236_int;
		func_517(var_1236_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1054_int + 1) >= 7)) goto Label_2170;
	int var_1244_int;
	var_1053_int = var_1244_int;
	func_517(var_1244_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_5995(int var_2810_int, int var_2811_int, object var_2812_object, object var_2813_object, object var_2814_object, object var_2815_object)
{
	if(var_2811_int == 0) {
		func_810(8, true);
		func_827(8, true, 1);
		int var_2824_int; object var_2825_object; object var_2826_object; object var_2827_object;
		var_2810_int = var_2824_int;
		var_2812_object = var_2825_object;
		var_2813_object = var_2826_object;
		var_2814_object = var_2827_object;
		func_655(8, var_2824_int, var_2825_object, var_2826_object, var_2827_object);
		object var_2828_object;
		var_2815_object = var_2828_object;
		func_320(var_2828_object, 1);
		func_884(8, true, 4);
		func_946(8, false, 4);
	}
	func_793(8, false);
	int var_2839_int; int var_2840_int;
	var_2810_int = var_2839_int;
	var_2811_int = var_2840_int;
	func_2807(8, var_2839_int, var_2840_int);
}


// @pe
void func_7019(int var_2975_int, int var_2976_int, object var_2977_object, object var_2978_object, object var_2979_object, object var_2980_object)
{
	if(var_2976_int == 0) {
		func_810(13, true);
		func_827(13, true, 1);
		int var_2989_int; object var_2990_object; object var_2991_object; object var_2992_object;
		var_2975_int = var_2989_int;
		var_2977_object = var_2990_object;
		var_2978_object = var_2991_object;
		var_2979_object = var_2992_object;
		func_655(13, var_2989_int, var_2990_object, var_2991_object, var_2992_object);
		object var_2993_object;
		var_2980_object = var_2993_object;
		func_320(var_2993_object, 1);
		func_884(13, true, 4);
		func_946(13, false, 4);
	}
	func_793(13, false);
	int var_3004_int; int var_3005_int;
	var_2975_int = var_3004_int;
	var_2976_int = var_3005_int;
	func_2807(13, var_3004_int, var_3005_int);
}


void func_884(int var_637_int, bool var_638_bool, int var_639_int)
{
	string var_648_string; object var_649_object; int var_650_int; string var_651_string; object var_652_object; int var_653_int; string var_654_string; object var_655_object;
	var_648_string = "dr_mark" + (var_637_int + 1);
	if(var_638_bool != 0) {
		@GetMainOutdoorScene(var_649_object);
		if(var_649_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_650_int = 1;

		for(;;) {
			if(var_650_int <= var_639_int) {
				var_651_string = (var_648_string + "_") + var_650_int;
				@FindActor(var_652_object, var_651_string);
				if(!var_652_object) { //@nz
					@AddActor(var_652_object, var_651_string, var_649_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_670_bool; string var_671_string;
				var_651_string = var_671_string;
				func_239(var_670_bool, var_671_string, "restore");
			}
			var_649_object = null;
	} else {
			var_653_int = 1;

			for(;;) {
				if(!(var_653_int <= var_639_int)) goto Label_945;
				@FindActor(var_655_object, ((var_648_string + "_") + var_653_int));
				if(var_655_object != 0) {
					bool var_680_bool; string var_681_string;
					var_654_string = var_681_string;
					func_239(var_680_bool, var_681_string, "cleanup");
				}
				var_655_object = null;
				var_653_int += 1;
			}
	}
	Label_945:
		return 16;

		}
		var_652_object = null;
		var_650_int += 1;
	}
	
}


void func_12151(bool var_238_bool, int var_239_int)
{
	int var_241_int;
	@GetVariable(("K2SystemSvitaRemoved" + var_239_int), var_241_int);
	var_238_bool = var_241_int != 0;
}


// @pe
void func_4989(object var_96_object)
{
	var_96_object->add("house5_02");
	var_96_object->add("dt_house1_union2_03l");
	var_96_object->add("dt_house1_union2_03r");
	var_96_object->add("dt_house1_union2_01l");
	var_96_object->add("dt_house1_union2_01r");
	var_96_object->add("house5_unoinl");
	var_96_object->add("house5_unoinr");
	var_96_object->add("dt_house_1_01");
	var_96_object->add("house5_05");
	var_96_object->add("house5_06");
	var_96_object->add("dt_house_1_02");
	var_96_object->add("house5_unoin_solid01l");
	var_96_object->add("house5_unoin_solid01r");
	var_96_object->add("house5_03");
	var_96_object->add("house5_04");
	var_96_object->add("house1_se_02l");
	var_96_object->add("house1_se_02r");
	var_96_object->add("dt_house3_01_i2");
	var_96_object->add("dt_house3_02_i2");
	var_96_object->add("dt_house3_02");
	var_96_object->add("dt_house3_03_i2");
	var_96_object->add("dt_house3_03");
	var_96_object->add("dt_house3_04_i2");
	var_96_object->add("house5_21");
}


// @pe
void func_12159(int var_224_int, int var_225_int)
{
	if(var_225_int == 6) {
		var_224_int = 12;
		return 0;
	EMIT "GOTO 0x2fa3";
	}
	if(var_225_int == 7) {
		var_224_int = 4;
		return 0;
	EMIT "GOTO 0x2fa3";
	}
	if(var_225_int == 8) {
		var_224_int = 13;
		return 0;
	EMIT "GOTO 0x2fa3";
	}
	if(var_225_int == 9) {
		var_224_int = 5;
		return 0;
	EMIT "GOTO 0x2fa3";
	}
	if(var_225_int == 10) {
		var_224_int = 9;
		return 0;
	EMIT "GOTO 0x2fa3";
	}
	if(var_225_int == 11) {
		var_224_int = 3;
		return 0;
	}
	var_224_int = -1;
}


// @pe
void func_6047(int var_3940_int, int var_3941_int, object var_3942_object, object var_3943_object, object var_3944_object, object var_3945_object)
{
	if(var_3941_int == 0) {
		func_810(8, false);
		func_827(8, false, 1);
		int var_3954_int; object var_3955_object; object var_3956_object; object var_3957_object;
		var_3940_int = var_3954_int;
		var_3942_object = var_3955_object;
		var_3943_object = var_3956_object;
		var_3944_object = var_3957_object;
		func_734(8, var_3954_int, var_3955_object, var_3956_object, var_3957_object);
		object var_3958_object;
		var_3945_object = var_3958_object;
		func_320(var_3958_object, 2);
		func_884(8, false, 4);
		func_946(8, true, 4);
	}
	func_793(8, false);
	int var_3969_int; int var_3970_int;
	var_3940_int = var_3969_int;
	var_3941_int = var_3970_int;
	func_3702(8, var_3969_int, var_3970_int);
}


// @pe
void func_7071(int var_4105_int, int var_4106_int, object var_4107_object, object var_4108_object, object var_4109_object, object var_4110_object)
{
	if(var_4106_int == 0) {
		func_810(13, false);
		func_827(13, false, 1);
		int var_4119_int; object var_4120_object; object var_4121_object; object var_4122_object;
		var_4105_int = var_4119_int;
		var_4107_object = var_4120_object;
		var_4108_object = var_4121_object;
		var_4109_object = var_4122_object;
		func_734(13, var_4119_int, var_4120_object, var_4121_object, var_4122_object);
		object var_4123_object;
		var_4110_object = var_4123_object;
		func_320(var_4123_object, 2);
		func_884(13, false, 4);
		func_946(13, true, 4);
	}
	func_793(13, false);
	int var_4134_int; int var_4135_int;
	var_4105_int = var_4134_int;
	var_4106_int = var_4135_int;
	func_3702(13, var_4134_int, var_4135_int);
}


// @pe
void func_12197(int var_246_int, int var_247_int)
{
	if(var_247_int == 8) {
		var_246_int = 5;
		return 0;
	EMIT "GOTO 0x2fbd";
	}
	if(var_247_int == 9) {
		var_246_int = 10;
		return 0;
	EMIT "GOTO 0x2fbd";
	}
	if(var_247_int == 10) {
		var_246_int = 3;
		return 0;
	EMIT "GOTO 0x2fbd";
	}
	if(var_247_int == 11) {
		var_246_int = 1;
		return 0;
	}
	var_246_int = -1;
}


void func_2987(int var_2444_int, int var_2445_int, int var_2446_int)
{
	int var_2449_int; int var_2450_int;
	bool var_2451_bool = false;
	if(var_2446_int > 8) {
		if(var_2446_int < 21)
			var_2451_bool = true;
	}
	if(var_2451_bool != 0) {
		int var_2456_int;
		var_2444_int = var_2456_int;
		func_517(var_2456_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2460_int;
		var_2444_int = var_2460_int;
		func_517(var_2460_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2464_int;
		var_2444_int = var_2464_int;
		func_517(var_2464_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2468_int;
		var_2444_int = var_2468_int;
		func_543(var_2468_int, "fog", "fog.xml", 6);
		if(var_2445_int >= 5) {
			int var_2474_int;
			var_2444_int = var_2474_int;
			func_543(var_2474_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2479_float; int var_2480_int;
		func_1238(var_2479_float, var_2480_int);
		if((1 * var_2479_float) != 0) {
			int var_2482_int; int var_2485_int;
			var_2444_int = var_2482_int;
			var_2449_int = var_2485_int;
			func_517(var_2482_int, "pers_bomber", "bomber.xml", var_2485_int);
		}
	} else {
		int var_2530_int;
		var_2444_int = var_2530_int;
		func_517(var_2530_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2534_int;
		var_2444_int = var_2534_int;
		func_517(var_2534_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2538_int;
		var_2444_int = var_2538_int;
		func_517(var_2538_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2542_int;
		var_2444_int = var_2542_int;
		func_543(var_2542_int, "fog", "fog.xml", 6);
		if(var_2480_int >= 5) {
			int var_2548_int;
			var_2444_int = var_2548_int;
			func_543(var_2548_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2553_float; int var_2554_int;
		var_2445_int = var_2554_int;
		func_1238(var_2553_float, var_2554_int);
		if((1 * var_2553_float) == 0) goto Label_3105;
		int var_2556_int; int var_2559_int;
		var_2444_int = var_2556_int;
		var_2450_int = var_2559_int;
		func_517(var_2556_int, "pers_bomber", "bomber.xml", var_2559_int);
	}
Label_3105:
	int var_2486_int;
	var_2444_int = var_2486_int;
	func_530(var_2486_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2492_int;
	var_2444_int = var_2492_int;
	func_530(var_2492_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2498_int;
	var_2444_int = var_2498_int;
	func_530(var_2498_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2504_int;
	var_2444_int = var_2504_int;
	func_530(var_2504_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2510_bool; int var_2511_int; int var_2512_int;
	var_2445_int = var_2511_int;
	var_2446_int = var_2512_int;
	func_1328(var_2510_bool, var_2511_int, var_2512_int);
	if(var_2510_bool != 0) {
		int var_2513_int;
		var_2444_int = var_2513_int;
		func_517(var_2513_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2517_bool; int var_2518_int; int var_2519_int;
	var_2445_int = var_2518_int;
	var_2446_int = var_2519_int;
	func_1338(var_2517_bool, var_2518_int, var_2519_int);
	if(var_2517_bool != 0) {
		int var_2520_int;
		var_2444_int = var_2520_int;
		func_517(var_2520_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2524_bool; int var_2525_int;
	var_2445_int = var_2525_int;
	func_1355(var_2524_bool, var_2525_int);
	if(var_2524_bool != 0) {
		int var_2526_int;
		var_2444_int = var_2526_int;
		func_517(var_2526_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


void func_946(int var_684_int, bool var_685_bool, int var_686_int)
{
	object var_694_object; object var_695_object; string var_697_string; object var_698_object;
	@FindActor(var_694_object, ("br_" + (var_684_int + 1)));
	if(var_685_bool != 0) {
		if(!var_694_object) { //@nz
			@GetMainOutdoorScene(var_695_object);
			@AddActor(var_694_object, ("br_" + (var_684_int + 1)), var_695_object, [0.0, 0.0, 0.0]);
			var_695_object = null;
		}
	} else if(var_694_object != 0) {
		@RemoveActor(var_694_object);
	}
	int var_696_int = 1;
	
	while(var_696_int <= var_686_int) {
		@FindActor(var_698_object, ((("dr_mark" + (var_684_int + 1)) + "_") + var_696_int));
		if(var_698_object != 0) {
			bool var_717_bool; string var_718_string;
			var_697_string = var_718_string;
			func_239(var_717_bool, var_718_string, "cleanup");
		}
		var_698_object = null;
		var_696_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


void func_9148(int var_1997_int, int var_1998_int, int var_1999_int)
{
	var_2008_object = GlobalVars[8];
	object var_2004_object;
	var_2008_object->get(var_2004_object, var_1997_int);
	var_2009_object = GlobalVars[9];
	object var_2005_object;
	var_2009_object->get(var_2005_object, var_1997_int);
	var_2010_object = GlobalVars[10];
	object var_2006_object;
	var_2010_object->get(var_2006_object, var_1997_int);
	var_2011_object = GlobalVars[13];
	object var_2007_object;
	var_2011_object->get(var_2007_object, var_1997_int);
	if(var_1997_int == 0) {
		int var_2014_int; int var_2015_int; object var_2016_object; object var_2017_object; object var_2018_object; object var_2019_object;
		var_1998_int = var_2014_int;
		var_1999_int = var_2015_int;
		var_2004_object = var_2016_object;
		var_2005_object = var_2017_object;
		var_2006_object = var_2018_object;
		var_2007_object = var_2019_object;
		func_4482(var_2014_int, var_2015_int, var_2016_object, var_2017_object, var_2018_object, var_2019_object);
	} else if(var_1997_int == 1) {
			int var_2284_int; int var_2285_int; object var_2286_object; object var_2287_object; object var_2288_object; object var_2289_object;
			var_1998_int = var_2284_int;
			var_1999_int = var_2285_int;
			var_2004_object = var_2286_object;
			var_2005_object = var_2287_object;
			var_2006_object = var_2288_object;
			var_2007_object = var_2289_object;
			func_4679(var_2284_int, var_2285_int, var_2286_object, var_2287_object, var_2288_object, var_2289_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1997_int == 2) {
		int var_2416_int; int var_2417_int; object var_2418_object; object var_2419_object; object var_2420_object; object var_2421_object;
		var_1998_int = var_2416_int;
		var_1999_int = var_2417_int;
		var_2004_object = var_2418_object;
		var_2005_object = var_2419_object;
		var_2006_object = var_2420_object;
		var_2007_object = var_2421_object;
		func_4885(var_2416_int, var_2417_int, var_2418_object, var_2419_object, var_2420_object, var_2421_object);
	} else if(var_1997_int == 3) {
		int var_2562_int; int var_2563_int; object var_2564_object; object var_2565_object; object var_2566_object; object var_2567_object;
		var_1998_int = var_2562_int;
		var_1999_int = var_2563_int;
		var_2004_object = var_2564_object;
		var_2005_object = var_2565_object;
		var_2006_object = var_2566_object;
		var_2007_object = var_2567_object;
		func_5115(var_2562_int, var_2563_int, var_2564_object, var_2565_object, var_2566_object, var_2567_object);
	} else if(var_1997_int == 4) {
		int var_2595_int; int var_2596_int; object var_2597_object; object var_2598_object; object var_2599_object; object var_2600_object;
		var_1998_int = var_2595_int;
		var_1999_int = var_2596_int;
		var_2004_object = var_2597_object;
		var_2005_object = var_2598_object;
		var_2006_object = var_2599_object;
		var_2007_object = var_2600_object;
		func_5333(var_2595_int, var_2596_int, var_2597_object, var_2598_object, var_2599_object, var_2600_object);
	} else if(var_1997_int == 5) {
		int var_2628_int; int var_2629_int; object var_2630_object; object var_2631_object; object var_2632_object; object var_2633_object;
		var_1998_int = var_2628_int;
		var_1999_int = var_2629_int;
		var_2004_object = var_2630_object;
		var_2005_object = var_2631_object;
		var_2006_object = var_2632_object;
		var_2007_object = var_2633_object;
		func_5572(var_2628_int, var_2629_int, var_2630_object, var_2631_object, var_2632_object, var_2633_object);
	} else if(var_1997_int == 6) {
		int var_2661_int; int var_2662_int; object var_2663_object; object var_2664_object; object var_2665_object; object var_2666_object;
		var_1998_int = var_2661_int;
		var_1999_int = var_2662_int;
		var_2004_object = var_2663_object;
		var_2005_object = var_2664_object;
		var_2006_object = var_2665_object;
		var_2007_object = var_2666_object;
		func_5685();
	} else if(var_1997_int == 7) {
		int var_2671_int; int var_2672_int; object var_2673_object; object var_2674_object; object var_2675_object; object var_2676_object;
		var_1998_int = var_2671_int;
		var_1999_int = var_2672_int;
		var_2004_object = var_2673_object;
		var_2005_object = var_2674_object;
		var_2006_object = var_2675_object;
		var_2007_object = var_2676_object;
		func_5795(var_2671_int, var_2672_int, var_2673_object, var_2674_object, var_2675_object, var_2676_object);
	} else if(var_1997_int == 8) {
		int var_2810_int; int var_2811_int; object var_2812_object; object var_2813_object; object var_2814_object; object var_2815_object;
		var_1998_int = var_2810_int;
		var_1999_int = var_2811_int;
		var_2004_object = var_2812_object;
		var_2005_object = var_2813_object;
		var_2006_object = var_2814_object;
		var_2007_object = var_2815_object;
		func_5995(var_2810_int, var_2811_int, var_2812_object, var_2813_object, var_2814_object, var_2815_object);
	} else if(var_1997_int == 9) {
		int var_2843_int; int var_2844_int; object var_2845_object; object var_2846_object; object var_2847_object; object var_2848_object;
		var_1998_int = var_2843_int;
		var_1999_int = var_2844_int;
		var_2004_object = var_2845_object;
		var_2005_object = var_2846_object;
		var_2006_object = var_2847_object;
		var_2007_object = var_2848_object;
		func_6198(var_2843_int, var_2844_int, var_2845_object, var_2846_object, var_2847_object, var_2848_object);
	} else if(var_1997_int == 10) {
		int var_2876_int; int var_2877_int; object var_2878_object; object var_2879_object; object var_2880_object; object var_2881_object;
		var_1998_int = var_2876_int;
		var_1999_int = var_2877_int;
		var_2004_object = var_2878_object;
		var_2005_object = var_2879_object;
		var_2006_object = var_2880_object;
		var_2007_object = var_2881_object;
		func_6407(var_2876_int, var_2877_int, var_2878_object, var_2879_object, var_2880_object, var_2881_object);
	} else if(var_1997_int == 11) {
		int var_2909_int; int var_2910_int; object var_2911_object; object var_2912_object; object var_2913_object; object var_2914_object;
		var_1998_int = var_2909_int;
		var_1999_int = var_2910_int;
		var_2004_object = var_2911_object;
		var_2005_object = var_2912_object;
		var_2006_object = var_2913_object;
		var_2007_object = var_2914_object;
		func_6619(var_2909_int, var_2910_int, var_2911_object, var_2912_object, var_2913_object, var_2914_object);
	} else if(var_1997_int == 12) {
		int var_2942_int; int var_2943_int; object var_2944_object; object var_2945_object; object var_2946_object; object var_2947_object;
		var_1998_int = var_2942_int;
		var_1999_int = var_2943_int;
		var_2004_object = var_2944_object;
		var_2005_object = var_2945_object;
		var_2006_object = var_2946_object;
		var_2007_object = var_2947_object;
		func_6816(var_2942_int, var_2943_int, var_2944_object, var_2945_object, var_2946_object, var_2947_object);
	} else if(var_1997_int == 13) {
		int var_2975_int; int var_2976_int; object var_2977_object; object var_2978_object; object var_2979_object; object var_2980_object;
		var_1998_int = var_2975_int;
		var_1999_int = var_2976_int;
		var_2004_object = var_2977_object;
		var_2005_object = var_2978_object;
		var_2006_object = var_2979_object;
		var_2007_object = var_2980_object;
		func_7019(var_2975_int, var_2976_int, var_2977_object, var_2978_object, var_2979_object, var_2980_object);
	} else if(var_1997_int == 14) {
		int var_3008_int; int var_3009_int; object var_3010_object; object var_3011_object; object var_3012_object; object var_3013_object;
		var_1998_int = var_3008_int;
		var_1999_int = var_3009_int;
		var_2004_object = var_3010_object;
		var_2005_object = var_3011_object;
		var_2006_object = var_3012_object;
		var_2007_object = var_3013_object;
		func_7219(var_3008_int, var_3009_int, var_3010_object, var_3011_object, var_3012_object, var_3013_object);
	} else if(var_1997_int == 15) {
		int var_3147_int; int var_3148_int; object var_3149_object; object var_3150_object; object var_3151_object; object var_3152_object;
		var_1998_int = var_3147_int;
		var_1999_int = var_3148_int;
		var_2004_object = var_3149_object;
		var_2005_object = var_3150_object;
		var_2006_object = var_3151_object;
		var_2007_object = var_3152_object;
		func_7401(var_3147_int, var_3148_int, var_3149_object, var_3150_object, var_3151_object, var_3152_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_12223(int var_260_int, int var_261_int)
{
	if(var_261_int == 8) {
		var_260_int = 7;
		return 0;
	EMIT "GOTO 0x2fd7";
	}
	if(var_261_int == 9) {
		var_260_int = 2;
		return 0;
	EMIT "GOTO 0x2fd7";
	}
	if(var_261_int == 10) {
		var_260_int = 11;
		return 0;
	EMIT "GOTO 0x2fd7";
	}
	if(var_261_int == 11) {
		var_260_int = 15;
		return 0;
	}
	var_260_int = -1;
}


void func_10177(void)
{
	object var_5430_object;
	func_10907(var_5430_object);
	object var_5428_object;
	var_5430_object = var_5428_object;
	object var_5429_object;
	var_5428_object->FindMark(var_5429_object, "k4q03AlexandrGotoBurah");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q01GrifGotoBraga");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q01AlexandrGotoGrif");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q01GrifGotoNotkin");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q02KaterinaGotoTheater");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q02MarkGotoTheater");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	var_5428_object->FindMark(var_5429_object, "k4q03LaraGotoAlexandr");
	if(var_5429_object != 0)
		var_5429_object->Remove();
	bool var_5445_bool;
	func_10882(var_5445_bool, 368);
	bool var_5447_bool;
	func_10882(var_5447_bool, 378);
	bool var_5449_bool;
	func_10882(var_5449_bool, 384);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5063(int var_1250_int, int var_1251_int, object var_1252_object, object var_1253_object, object var_1254_object, object var_1255_object)
{
	if(var_1251_int == 0) {
		func_810(3, false);
		func_827(3, false, 1);
		int var_1263_int; int var_1264_int; object var_1265_object; object var_1266_object; object var_1267_object;
		var_1263_int = 3;
		var_1250_int = var_1264_int;
		var_1252_object = var_1265_object;
		var_1253_object = var_1266_object;
		var_1254_object = var_1267_object;
		func_636(var_1264_int, var_1265_object, var_1266_object, var_1267_object);
		object var_1268_object;
		var_1255_object = var_1268_object;
		func_320(var_1268_object, 0);
		func_884(3, false, 7);
		func_946(3, false, 7);
	}
	int var_1277_int;
	var_1251_int = var_1277_int;
	func_997(3, var_1277_int);
	int var_1294_int; int var_1295_int;
	var_1250_int = var_1294_int;
	var_1251_int = var_1295_int;
	func_1898(3, var_1294_int, var_1295_int);
}


// @pe
void func_6099(object var_207_object)
{
	var_207_object->add("r3_house_2_02");
	var_207_object->add("r3_house3_02_i2");
	var_207_object->add("r3_house3_02");
	var_207_object->add("r3_house4_05_i2");
	var_207_object->add("r3_house4_05");
	var_207_object->add("r3_house4_03_i2");
	var_207_object->add("r3_house4_04_i2");
	var_207_object->add("r3_house4_04");
	var_207_object->add("r3_house4_01_i2");
	var_207_object->add("r3_house4_01");
	var_207_object->add("r3_house_2_01");
	var_207_object->add("r3_house4_02_i2");
	var_207_object->add("r3_house4_02");
	var_207_object->add("r3_house3_01_i2");
	var_207_object->add("r3_house3_01");
}


// @pe
void func_7123(object var_295_object)
{
	var_295_object->add("lc_house7_02");
	var_295_object->add("lc_house7_03");
	var_295_object->add("lc_house7_04");
	var_295_object->add("lc_house7_05");
	var_295_object->add("lc_house7_06");
	var_295_object->add("lc_house7_07");
	var_295_object->add("lc_House6_02");
	var_295_object->add("lc_house7_01");
	var_295_object->add("lc_house_2_02");
	var_295_object->add("lc_House6_01");
	var_295_object->add("lc_house3_03_i2");
	var_295_object->add("lc_house3_03");
	var_295_object->add("lc_House6_03");
	var_295_object->add("lc_House6_04");
}


// @pe
void func_12249(string var_4345_string, int var_4346_int)
{
	if(var_4346_int == 8) {
		var_4345_string = "house5_unoin_solidl";
		return 0;
	EMIT "GOTO 0x2ff1";
	}
	if(var_4346_int == 9) {
		var_4345_string = "r4_house4_02_i2";
		return 0;
	EMIT "GOTO 0x2ff1";
	}
	if(var_4346_int == 10) {
		var_4345_string = "dt_house1_union2_01r";
		return 0;
	EMIT "GOTO 0x2ff1";
	}
	if(var_4346_int == 11) {
		var_4345_string = "dt_house_1_03";
		return 0;
	}
	var_4345_string = "";
}


// @pe
void func_997(int var_1276_int, int var_1277_int)
{
	bool var_1278_bool = true;
	bool var_1279_bool = true;
	var_1281_bool = var_1277_int >= 20;
	if(var_1281_bool != 1) {
		var_1283_bool = var_1277_int < 2;
		if(var_1283_bool != 1)
			var_1279_bool = false;
	}
	if(var_1279_bool != 1) {
		bool var_1284_bool = false;
		if(var_1277_int >= 6) {
			if(var_1277_int < 10)
				var_1284_bool = true;
		}
		if(var_1284_bool != 1)
			var_1278_bool = false;
	}
	if(var_1278_bool != 0) {
		int var_1289_int;
		var_1276_int = var_1289_int;
		func_793(var_1289_int, true);
	} else {
		int var_1291_int;
		var_1276_int = var_1291_int;
		func_793(var_1291_int, false);
	}
	
}


void func_4078(int var_3257_int, int var_3258_int, int var_3259_int)
{
	int var_3264_int; int var_3265_int; int var_3266_int; int var_3267_int;
	bool var_3268_bool = false;
	if(var_3259_int > 8) {
		if(var_3259_int < 21)
			var_3268_bool = true;
	}
	if(var_3268_bool != 0) {
		int var_3273_int;
		var_3257_int = var_3273_int;
		func_517(var_3273_int, "pers_rat", "rat.xml", 4);
		int var_3277_int;
		var_3257_int = var_3277_int;
		func_517(var_3277_int, "pers_alkash", "alkash.xml", 2);
		int var_3281_int;
		var_3257_int = var_3281_int;
		func_517(var_3281_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3286_float; int var_3287_int;
		func_1148(var_3286_float, var_3287_int);
		if((2 * var_3286_float) != 0) {
			int var_3333_int; int var_3336_int;
			var_3257_int = var_3333_int;
			var_3264_int = var_3336_int;
			func_517(var_3333_int, "pers_grabitel", "grabitel.xml", var_3336_int);
		}
		if((var_3287_int + 1) >= 2) {
			int var_3341_int;
			var_3257_int = var_3341_int;
			func_517(var_3341_int, "pers_patrool", "patrol.xml", 2);
			bool var_3345_bool; int var_3346_int;
			var_3258_int = var_3346_int;
			func_1355(var_3345_bool, var_3346_int);
			if(var_3345_bool != 0) {
				int var_3347_int;
				var_3257_int = var_3347_int;
				func_517(var_3347_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3352_float; int var_3353_int;
		var_3258_int = var_3353_int;
		func_1238(var_3352_float, var_3353_int);
		if((1 * var_3352_float) != 0) {
			int var_3355_int; int var_3358_int;
			var_3257_int = var_3355_int;
			var_3265_int = var_3358_int;
			func_517(var_3355_int, "pers_bomber", "bomber.xml", var_3358_int);
		}
	} else {
		int var_3365_int;
		var_3257_int = var_3365_int;
		func_517(var_3365_int, "pers_rat", "rat.xml", 7);
		int var_3369_int;
		var_3257_int = var_3369_int;
		func_517(var_3369_int, "pers_alkash", "alkash.xml", 1);
		int var_3373_int;
		var_3257_int = var_3373_int;
		func_517(var_3373_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3378_float; int var_3379_int;
		func_1148(var_3378_float, var_3379_int);
		if((2 * var_3378_float) != 0) {
			int var_3381_int; int var_3384_int;
			var_3257_int = var_3381_int;
			var_3266_int = var_3384_int;
			func_517(var_3381_int, "pers_grabitel", "grabitel.xml", var_3384_int);
		}
		if((var_3379_int + 1) >= 2) {
			int var_3389_int;
			var_3257_int = var_3389_int;
			func_517(var_3389_int, "pers_patrool", "patrol.xml", 1);
			bool var_3393_bool; int var_3394_int;
			var_3258_int = var_3394_int;
			func_1355(var_3393_bool, var_3394_int);
			if(var_3393_bool != 0) {
				int var_3395_int;
				var_3257_int = var_3395_int;
				func_517(var_3395_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3400_float; int var_3401_int;
		var_3258_int = var_3401_int;
		func_1238(var_3400_float, var_3401_int);
		if((1 * var_3400_float) == 0) goto Label_4240;
		int var_3403_int; int var_3406_int;
		var_3257_int = var_3403_int;
		var_3267_int = var_3406_int;
		func_517(var_3403_int, "pers_bomber", "bomber.xml", var_3406_int);
	}
Label_4240:
	bool var_3359_bool; int var_3360_int;
	var_3258_int = var_3360_int;
	func_1355(var_3359_bool, var_3360_int);
	if(var_3359_bool != 0) {
		int var_3361_int;
		var_3257_int = var_3361_int;
		func_517(var_3361_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_12275(string var_4360_string, int var_4361_int)
{
	if(var_4361_int == 8) {
		var_4360_string = "house7_02";
		return 0;
	EMIT "GOTO 0x300b";
	}
	if(var_4361_int == 9) {
		var_4360_string = "dt_house2_01";
		return 0;
	EMIT "GOTO 0x300b";
	}
	if(var_4361_int == 10) {
		var_4360_string = "r5_House6_01";
		return 0;
	EMIT "GOTO 0x300b";
	}
	if(var_4361_int == 11) {
		var_4360_string = "lc_house3_05";
		return 0;
	}
	var_4360_string = "";
}


// @pe
void func_5115(int var_2562_int, int var_2563_int, object var_2564_object, object var_2565_object, object var_2566_object, object var_2567_object)
{
	if(var_2563_int == 0) {
		func_810(3, true);
		func_827(3, true, 1);
		int var_2576_int; object var_2577_object; object var_2578_object; object var_2579_object;
		var_2562_int = var_2576_int;
		var_2564_object = var_2577_object;
		var_2565_object = var_2578_object;
		var_2566_object = var_2579_object;
		func_655(3, var_2576_int, var_2577_object, var_2578_object, var_2579_object);
		object var_2580_object;
		var_2567_object = var_2580_object;
		func_320(var_2580_object, 1);
		func_884(3, true, 7);
		func_946(3, false, 7);
	}
	func_793(3, false);
	int var_2591_int; int var_2592_int;
	var_2562_int = var_2591_int;
	var_2563_int = var_2592_int;
	func_2987(3, var_2591_int, var_2592_int);
}


// @pe
void func_7167(int var_1772_int, int var_1773_int, object var_1774_object, object var_1775_object, object var_1776_object, object var_1777_object)
{
	if(var_1773_int == 0) {
		func_810(14, false);
		func_827(14, false, 1);
		int var_1785_int; int var_1786_int; object var_1787_object; object var_1788_object; object var_1789_object;
		var_1785_int = 14;
		var_1772_int = var_1786_int;
		var_1774_object = var_1787_object;
		var_1775_object = var_1788_object;
		var_1776_object = var_1789_object;
		func_636(var_1786_int, var_1787_object, var_1788_object, var_1789_object);
		object var_1790_object;
		var_1777_object = var_1790_object;
		func_320(var_1790_object, 0);
		func_884(14, false, 5);
		func_946(14, false, 5);
	}
	int var_1799_int;
	var_1773_int = var_1799_int;
	func_1101(14, var_1799_int);
	int var_1810_int; int var_1811_int;
	var_1772_int = var_1810_int;
	var_1773_int = var_1811_int;
	func_1359(14, var_1810_int, var_1811_int);
}


