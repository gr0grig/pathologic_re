// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 31289) {
				func_152(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529907, -1, 31290); //@t
				var_0_object->AddReply(529908, -1, 31291); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 31293) {
				func_355(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529911, -1, 31294); //@t
				var_0_object->AddReply(529912, -1, 31295); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x17a";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 31297) {
				func_558(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529915, -1, 31298); //@t
				var_0_object->AddReply(529916, -1, 31299); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x245";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 31301) {
				func_761(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529919, -1, 31302); //@t
				var_0_object->AddReply(529920, -1, 31303); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x310";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 31313) {
				func_964(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529931, -1, 31314); //@t
				var_0_object->AddReply(529932, -1, 31315); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3db";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 20517) {
				object var_97_object = var_1_object;
				func_13173(var_0_object);
				object var_146_object = var_1_object;
				func_13439(var_0_object);
				object var_170_object = var_1_object;
				func_13046(var_0_object);
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_13245();
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20518) {
				object var_186_object = var_1_object;
				func_13173(var_0_object);
				object var_188_object = var_1_object;
				func_13428(var_0_object);
				object var_194_object = var_1_object;
				func_13406(var_0_object);
				object var_200_object = var_1_object;
				func_13417(var_0_object);
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_13245();
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20519) {
				object var_212_object = var_1_object;
				func_13173(var_0_object);
				object var_214_object = var_1_object;
				func_13379(var_0_object);
				object var_220_object = var_1_object;
				func_13450(var_0_object);
				object var_226_object = var_1_object;
				func_13461(var_0_object);
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_13245();
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20521) {
				object var_238_object = var_1_object;
				func_13173(var_0_object);
				object var_240_object = var_1_object;
				func_13234(var_0_object);
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_13245();
				object var_248_object; object var_249_object;
				var_248_object = var_1_object;
				var_249_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20515) {
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_13148();
			}
			if(var_92_cvector == 20500) {
				object var_297_object = var_1_object;
				func_13173(var_0_object);
				object var_299_object = var_1_object;
				func_13046(var_0_object);
				object var_301_object = var_1_object;
				func_13439(var_0_object);
				object var_303_object; object var_304_object;
				var_303_object = var_1_object;
				var_304_object = var_0_object;
				func_13164();
				object var_315_object; object var_316_object;
				var_315_object = var_1_object;
				var_316_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20501) {
				object var_319_object = var_1_object;
				func_13173(var_0_object);
				object var_321_object = var_1_object;
				func_13379(var_0_object);
				object var_323_object = var_1_object;
				func_13450(var_0_object);
				object var_325_object = var_1_object;
				func_13461(var_0_object);
				object var_327_object; object var_328_object;
				var_327_object = var_1_object;
				var_328_object = var_0_object;
				func_13164();
				object var_329_object; object var_330_object;
				var_329_object = var_1_object;
				var_330_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20502) {
				object var_333_object = var_1_object;
				func_13173(var_0_object);
				object var_335_object = var_1_object;
				func_13428(var_0_object);
				object var_337_object = var_1_object;
				func_13406(var_0_object);
				object var_339_object = var_1_object;
				func_13417(var_0_object);
				object var_341_object; object var_342_object;
				var_341_object = var_1_object;
				var_342_object = var_0_object;
				func_13164();
				object var_343_object; object var_344_object;
				var_343_object = var_1_object;
				var_344_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 20503) {
				object var_347_object = var_1_object;
				func_13173(var_0_object);
				object var_349_object = var_1_object;
				func_13234(var_0_object);
				object var_351_object; object var_352_object;
				var_351_object = var_1_object;
				var_352_object = var_0_object;
				func_13164();
				object var_353_object; object var_354_object;
				var_353_object = var_1_object;
				var_354_object = var_0_object;
				func_13090();
			}
			if(var_92_cvector == 19474) {
				object var_357_object; object var_358_object;
				var_357_object = var_1_object;
				var_358_object = var_0_object;
				func_12772();
			}
			if(var_92_cvector == 19476) {
				object var_363_object; object var_364_object;
				var_363_object = var_1_object;
				var_364_object = var_0_object;
				func_13479();
			}
			if(var_92_cvector == 20522) {
				object var_377_object; object var_378_object;
				var_377_object = var_1_object;
				var_378_object = var_0_object;
				func_12766();
			}
			if(var_92_cvector == 31919) {
				object var_383_object; object var_384_object;
				var_383_object = var_1_object;
				var_384_object = var_0_object;
				func_13142();
			}
			if(var_91_bool == 19463) {
				object var_389_object; object var_390_object;
				var_389_object = var_1_object;
				var_390_object = var_0_object;
				func_13251();
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518350); //@t
				var_0_object->ClearReplies(); //@t
				bool var_406_bool;
				func_14001(var_1_object);
				if(var_406_bool != 0)
					var_0_object->AddReply(518352, 19466, 19465); //@t
				bool var_417_bool = false;
				bool var_418_bool;
				func_14013(var_1_object);
				if(var_418_bool != 0) {
					bool var_424_bool;
					func_13950(var_424_bool, var_1_object);
					if(var_424_bool != 0)
						var_417_bool = true;
				}
				if(var_417_bool != 0)
					var_0_object->AddReply(518358, 19472, 19471); //@t
				bool var_448_bool = false;
				bool var_449_bool;
				func_14059(var_1_object);
				if(var_449_bool != 0) {
					bool var_455_bool;
					func_14259(var_1_object);
					if(var_455_bool != 0)
						var_448_bool = true;
				}
				if(var_448_bool != 0)
					var_0_object->AddReply(518361, 19475, 19474); //@t
				bool var_464_bool;
				func_14247(var_1_object);
				if(var_464_bool != 0)
					var_0_object->AddReply(519361, 20523, 20522); //@t
				bool var_473_bool = false;
				bool var_474_bool;
				func_13891(var_474_bool, var_1_object);
				if(var_474_bool != 0) {
					bool var_479_bool;
					func_13926(var_1_object);
					if(var_479_bool != 0)
						var_473_bool = true;
				}
				if(var_473_bool != 0)
					var_0_object->AddReply(530617, 31920, 31919); //@t
				var_0_object->AddReply(518351, -1, 19464); //@t
				return 0;
			}
			if(var_91_bool == 31920) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530619, 31922, 31921); //@t
				var_0_object->AddReply(530626, 31924, 31928); //@t
				return 0;
			}
			if(var_91_bool == 31922) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530621, 31924, 31923); //@t
				var_0_object->AddReply(530625, -1, 31927); //@t
				return 0;
			}
			if(var_91_bool == 31924) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530622); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530623, -1, 31925); //@t
				var_0_object->AddReply(530624, -1, 31926); //@t
				return 0;
			}
			if(var_91_bool == 20523) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519363, 20525, 20524); //@t
				return 0;
			}
			if(var_91_bool == 20525) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519365, 20527, 20526); //@t
				return 0;
			}
			if(var_91_bool == 20527) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519367, 20529, 20528); //@t
				return 0;
			}
			if(var_91_bool == 20529) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519369, 20531, 20530); //@t
				return 0;
			}
			if(var_91_bool == 20531) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519371, -1, 20532); //@t
				return 0;
			}
			if(var_91_bool == 19475) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519323, 20482, 20481); //@t
				return 0;
			}
			if(var_91_bool == 20482) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519325, 20484, 20483); //@t
				var_0_object->AddReply(519332, 20491, 20490); //@t
				return 0;
			}
			if(var_91_bool == 20484) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519327, 20486, 20485); //@t
				var_0_object->AddReply(519335, 20495, 20494); //@t
				return 0;
			}
			if(var_91_bool == 20495) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519337, 20486, 20496); //@t
				var_0_object->AddReply(519338, -1, 20497); //@t
				return 0;
			}
			if(var_91_bool == 20486) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519329, 20488, 20487); //@t
				var_0_object->AddReply(519331, 20491, 20489); //@t
				return 0;
			}
			if(var_91_bool == 20491) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519334, -1, 20492); //@t
				return 0;
			}
			if(var_91_bool == 20488) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518363, -1, 19476); //@t
				return 0;
			}
			if(var_91_bool == 19472) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518360, 20499, 19473); //@t
				return 0;
			}
			if(var_91_bool == 20499) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519339); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519340, -1, 20500); //@t
				var_0_object->AddReply(519341, -1, 20501); //@t
				var_0_object->AddReply(519342, -1, 20502); //@t
				var_0_object->AddReply(519343, -1, 20503); //@t
				return 0;
			}
			if(var_91_bool == 19466) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519349, 29215, 20510); //@t
				return 0;
			}
			if(var_91_bool == 29215) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527868); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527870, 29218, 29217); //@t
				return 0;
			}
			if(var_91_bool == 29218) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527869, 20511, 29216); //@t
				return 0;
			}
			if(var_91_bool == 20511) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519350); //@t
				var_0_object->ClearReplies(); //@t
				bool var_665_bool;
				func_13950(var_665_bool, var_1_object);
				if(var_665_bool != 0)
					var_0_object->AddReply(518354, 19469, 19467); //@t
				var_0_object->AddReply(518355, 20512, 19468); //@t
				return 0;
			}
			if(var_91_bool == 20512) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519352, 20514, 20513); //@t
				return 0;
			}
			if(var_91_bool == 20514) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519354, -1, 20515); //@t
				return 0;
			}
			if(var_91_bool == 19469) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518357, 29214, 19470); //@t
				return 0;
			}
			if(var_91_bool == 29214) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519344, 20505, 20504); //@t
				return 0;
			}
			if(var_91_bool == 20505) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519346, 20507, 20506); //@t
				return 0;
			}
			if(var_91_bool == 20507) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519348, 20516, 20508); //@t
				return 0;
			}
			if(var_91_bool == 20516) {
				func_1244(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519356, -1, 20517); //@t
				var_0_object->AddReply(519357, -1, 20518); //@t
				var_0_object->AddReply(519358, -1, 20519); //@t
				var_0_object->AddReply(519360, -1, 20521); //@t
				return 0;
			}
			var_3_string = true;
			bool var_731_bool;
			func_12644(var_731_bool);
			if(var_731_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4f3";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 20237) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12646();
				object var_159_object = var_1_object;
				func_13356(var_0_object);
			}
			if(var_92_cvector == 19644) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_object;
				func_12646();
				object var_189_object = var_1_object;
				func_13356(var_0_object);
			}
			if(var_92_cvector == 19649) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_object;
				func_12646();
				object var_195_object = var_1_object;
				func_13356(var_0_object);
			}
			if(var_92_cvector == 19650) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_object;
				func_12692();
			}
			if(var_92_cvector == 19653) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_12692();
			}
			if(var_92_cvector == 31930) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_object;
				func_12698();
			}
			if(var_91_bool == 19641) {
				bool var_215_bool;
				func_14083(var_1_object);
				if(var_215_bool != 0) {
					object var_223_object; object var_224_object;
					var_223_object = var_1_object;
					var_224_object = var_0_object;
					func_12686();
					func_2488(var_92_cvector, "Neutral");
					var_0_object->SetMessage(518531); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519073, 20199, 20198); //@t
					var_0_object->AddReply(519077, 20203, 20202); //@t
					return 0;
				}
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518536); //@t
				var_0_object->ClearReplies(); //@t
				bool var_248_bool;
				func_14071(var_1_object);
				if(var_248_bool != 0)
					var_0_object->AddReply(518537, 19648, 19647); //@t
				bool var_257_bool = false;
				bool var_258_bool = false;
				bool var_259_bool;
				func_14107(var_259_bool, var_1_object);
				if(var_259_bool != 0) {
					bool var_268_bool;
					func_14118(var_1_object);
					if(var_268_bool != 0)
						var_258_bool = true;
				}
				if(var_258_bool != 0) {
					bool var_274_bool;
					func_14095(var_1_object);
					if(!var_274_bool) //@nz
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(518540, 19651, 19650); //@t
				bool var_284_bool = false;
				bool var_285_bool = false;
				bool var_286_bool;
				func_14095(var_1_object);
				if(var_286_bool != 0) {
					bool var_288_bool;
					func_14107(var_288_bool, var_1_object);
					if(var_288_bool != 0)
						var_285_bool = true;
				}
				if(var_285_bool != 0) {
					bool var_290_bool;
					func_14118(var_1_object);
					if(var_290_bool != 0)
						var_284_bool = true;
				}
				if(var_284_bool != 0)
					var_0_object->AddReply(518543, 19654, 19653); //@t
				bool var_295_bool = false;
				bool var_296_bool;
				func_13891(var_296_bool, var_1_object);
				if(var_296_bool != 0) {
					bool var_301_bool;
					func_14130(var_1_object);
					if(var_301_bool != 0)
						var_295_bool = true;
				}
				if(var_295_bool != 0)
					var_0_object->AddReply(530627, 31931, 31930); //@t
				var_0_object->AddReply(518546, -1, 19656); //@t
				return 0;
			}
			if(var_91_bool == 31931) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530629, 31933, 31932); //@t
				var_0_object->AddReply(530636, 31935, 31939); //@t
				return 0;
			}
			if(var_91_bool == 31933) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530630); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530631, 31935, 31934); //@t
				var_0_object->AddReply(530635, -1, 31938); //@t
				return 0;
			}
			if(var_91_bool == 31935) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530633, -1, 31936); //@t
				var_0_object->AddReply(530634, -1, 31937); //@t
				return 0;
			}
			if(var_91_bool == 19654) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519060, 20843, 20185); //@t
				return 0;
			}
			if(var_91_bool == 20843) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519685); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519686, 20845, 20844); //@t
				return 0;
			}
			if(var_91_bool == 20845) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519688, -1, 20846); //@t
				var_0_object->AddReply(530645, 31951, 31950); //@t
				return 0;
			}
			if(var_91_bool == 31951) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530647, 31953, 31952); //@t
				return 0;
			}
			if(var_91_bool == 31953) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530649, 31955, 31954); //@t
				var_0_object->AddReply(530652, -1, 31957); //@t
				return 0;
			}
			if(var_91_bool == 31955) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530651, -1, 31956); //@t
				return 0;
			}
			if(var_91_bool == 19651) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530643, 31949, 31948); //@t
				return 0;
			}
			if(var_91_bool == 31949) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519066, 20192, 20191); //@t
				return 0;
			}
			if(var_91_bool == 20192) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519068, 20195, 20193); //@t
				var_0_object->AddReply(519069, -1, 20194); //@t
				return 0;
			}
			if(var_91_bool == 20195) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518542, -1, 19652); //@t
				return 0;
			}
			if(var_91_bool == 19648) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519071, 20197, 20196); //@t
				return 0;
			}
			if(var_91_bool == 20197) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518539, -1, 19649); //@t
				return 0;
			}
			if(var_91_bool == 20203) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519078); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519079, 20199, 20204); //@t
				var_0_object->AddReply(519080, 20206, 20205); //@t
				return 0;
			}
			if(var_91_bool == 20206) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519082, 20209, 20208); //@t
				var_0_object->AddReply(519086, -1, 20212); //@t
				return 0;
			}
			if(var_91_bool == 20209) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519085, 20214, 20211); //@t
				var_0_object->AddReply(519084, 20214, 20210); //@t
				return 0;
			}
			if(var_91_bool == 20214) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519088); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519089, 20199, 20216); //@t
				return 0;
			}
			if(var_91_bool == 20199) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519075, 20201, 20200); //@t
				var_0_object->AddReply(519087, 20218, 20213); //@t
				return 0;
			}
			if(var_91_bool == 20218) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519091, 20201, 20219); //@t
				return 0;
			}
			if(var_91_bool == 20201) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519092, 20222, 20221); //@t
				return 0;
			}
			if(var_91_bool == 20222) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519094, 20224, 20223); //@t
				return 0;
			}
			if(var_91_bool == 20224) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519095); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519096, 20226, 20225); //@t
				var_0_object->AddReply(519099, -1, 20228); //@t
				return 0;
			}
			if(var_91_bool == 20226) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519098, 20231, 20227); //@t
				var_0_object->AddReply(519100, 20230, 20229); //@t
				return 0;
			}
			if(var_91_bool == 20230) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519101); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519103, 20231, 20232); //@t
				var_0_object->AddReply(519104, 20236, 20234); //@t
				return 0;
			}
			if(var_91_bool == 20231) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519105, 20236, 20235); //@t
				return 0;
			}
			if(var_91_bool == 20236) {
				func_2488(var_92_cvector, "Neutral");
				var_0_object->SetMessage(519106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519107, -1, 20237); //@t
				var_0_object->AddReply(518534, -1, 19644); //@t
				var_0_object->AddReply(519108, -1, 20239); //@t
				return 0;
			}
			var_3_string = true;
			bool var_554_bool;
			func_12644(var_554_bool);
			if(var_554_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9cf";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 19707) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12704();
				object var_159_object = var_1_object;
				func_13324(var_0_object);
				object var_185_object = var_1_object;
				func_13390(var_0_object);
			}
			if(var_92_cvector == 19709) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_12704();
				object var_196_object = var_1_object;
				func_13324(var_0_object);
				object var_198_object = var_1_object;
				func_13390(var_0_object);
			}
			if(var_92_cvector == 19725) {
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_12760();
			}
			if(var_92_cvector == 19730) {
				object var_208_object = var_1_object;
				func_13028(var_0_object);
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_13318();
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_13073();
			}
			if(var_92_cvector == 19733) {
				object var_225_object; object var_226_object;
				var_225_object = var_1_object;
				var_226_object = var_0_object;
				func_13318();
				object var_227_object = var_1_object;
				func_13034(var_0_object);
				object var_233_object; object var_234_object;
				var_233_object = var_1_object;
				var_234_object = var_0_object;
				func_13073();
			}
			if(var_92_cvector == 19736) {
				object var_237_object = var_1_object;
				func_13040(var_0_object);
				object var_243_object; object var_244_object;
				var_243_object = var_1_object;
				var_244_object = var_0_object;
				func_13318();
				object var_245_object; object var_246_object;
				var_245_object = var_1_object;
				var_246_object = var_0_object;
				func_13073();
			}
			if(var_92_cvector == 31273) {
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_12750();
			}
			if(var_91_bool == 19701) {
				bool var_264_bool;
				func_14142(var_1_object);
				if(var_264_bool != 0) {
					object var_272_object; object var_273_object;
					var_272_object = var_1_object;
					var_273_object = var_0_object;
					func_12744();
					func_3634(var_92_cvector, "Neutral");
					var_0_object->SetMessage(518609); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518750, 19843, 19842); //@t
					var_0_object->AddReply(518748, 19845, 19840); //@t
					return 0;
				}
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518612); //@t
				var_0_object->ClearReplies(); //@t
				bool var_297_bool;
				func_14154(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(518613, 19996, 19705); //@t
				bool var_306_bool = false;
				bool var_307_bool = false;
				bool var_308_bool = false;
				bool var_309_bool;
				func_14166(var_1_object);
				if(var_309_bool != 0) {
					bool var_315_bool;
					func_14178(var_1_object);
					if(!var_315_bool) //@nz
						var_308_bool = true;
				}
				if(var_308_bool != 0) {
					bool var_322_bool;
					func_14223(var_1_object);
					if(var_322_bool != 0)
						var_307_bool = true;
				}
				if(var_307_bool != 0) {
					bool var_328_bool;
					func_14235(var_1_object);
					if(var_328_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(518633, 20000, 19725); //@t
				bool var_337_bool = false;
				bool var_338_bool = false;
				bool var_339_bool;
				func_14190(var_339_bool, var_1_object);
				if(var_339_bool != 0) {
					bool var_348_bool;
					func_14223(var_1_object);
					if(var_348_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0) {
					bool var_350_bool;
					func_13807(var_1_object);
					if(!var_350_bool) //@nz
						var_337_bool = true;
				}
				if(var_337_bool != 0)
					var_0_object->AddReply(518636, 19729, 19728); //@t
				bool var_360_bool = false;
				bool var_361_bool = false;
				bool var_362_bool;
				func_14201(var_362_bool, var_1_object);
				if(var_362_bool != 0) {
					bool var_367_bool;
					func_14223(var_1_object);
					if(var_367_bool != 0)
						var_361_bool = true;
				}
				if(var_361_bool != 0) {
					bool var_369_bool;
					func_13807(var_1_object);
					if(!var_369_bool) //@nz
						var_360_bool = true;
				}
				if(var_360_bool != 0)
					var_0_object->AddReply(518639, 19732, 19731); //@t
				bool var_375_bool = false;
				bool var_376_bool = false;
				bool var_377_bool;
				func_14212(var_377_bool, var_1_object);
				if(var_377_bool != 0) {
					bool var_382_bool;
					func_14223(var_1_object);
					if(var_382_bool != 0)
						var_376_bool = true;
				}
				if(var_376_bool != 0) {
					bool var_384_bool;
					func_13807(var_1_object);
					if(!var_384_bool) //@nz
						var_375_bool = true;
				}
				if(var_375_bool != 0)
					var_0_object->AddReply(518642, 19735, 19734); //@t
				bool var_390_bool = false;
				bool var_391_bool;
				func_13807(var_1_object);
				if(var_391_bool != 0) {
					bool var_393_bool;
					func_13819(var_1_object);
					if(!var_393_bool) //@nz
						var_390_bool = true;
				}
				if(var_390_bool != 0)
					var_0_object->AddReply(529822, 31272, 31271); //@t
				bool var_403_bool;
				func_13891(var_403_bool, var_1_object);
				if(var_403_bool != 0)
					var_0_object->AddReply(530667, 31961, 31960); //@t
				var_0_object->AddReply(518618, 29655, 19710); //@t
				return 0;
			}
			if(var_91_bool == 29655) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528291, -1, 29656); //@t
				return 0;
			}
			if(var_91_bool == 31961) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530669, 31963, 31962); //@t
				var_0_object->AddReply(530676, 31965, 31969); //@t
				return 0;
			}
			if(var_91_bool == 31963) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530671, 31965, 31964); //@t
				var_0_object->AddReply(530675, -1, 31968); //@t
				return 0;
			}
			if(var_91_bool == 31965) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530673, -1, 31966); //@t
				var_0_object->AddReply(530674, -1, 31967); //@t
				return 0;
			}
			if(var_91_bool == 31272) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(529823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530179, 31573, 31572); //@t
				return 0;
			}
			if(var_91_bool == 31573) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530637, 31942, 31941); //@t
				var_0_object->AddReply(530639, 31945, 31943); //@t
				return 0;
			}
			if(var_91_bool == 31942) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530638); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530640, 31945, 31944); //@t
				return 0;
			}
			if(var_91_bool == 31945) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529824, -1, 31273); //@t
				return 0;
			}
			if(var_91_bool == 19735) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518912, 20024, 20023); //@t
				return 0;
			}
			if(var_91_bool == 20024) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518914, 20026, 20025); //@t
				var_0_object->AddReply(528298, 29666, 29665); //@t
				return 0;
			}
			if(var_91_bool == 29666) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528300, 20026, 29667); //@t
				return 0;
			}
			if(var_91_bool == 20026) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518644, -1, 19736); //@t
				return 0;
			}
			if(var_91_bool == 19732) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518640); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518910, 20022, 20021); //@t
				return 0;
			}
			if(var_91_bool == 20022) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518641, -1, 19733); //@t
				return 0;
			}
			if(var_91_bool == 19729) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518637); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518901, 20012, 20011); //@t
				var_0_object->AddReply(518907, 20014, 20017); //@t
				return 0;
			}
			if(var_91_bool == 20012) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518903, 20014, 20013); //@t
				return 0;
			}
			if(var_91_bool == 20014) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518905, 20016, 20015); //@t
				return 0;
			}
			if(var_91_bool == 20016) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518638, -1, 19730); //@t
				return 0;
			}
			if(var_91_bool == 20000) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518892, 19726, 20001); //@t
				var_0_object->AddReply(518893, 20004, 20002); //@t
				return 0;
			}
			if(var_91_bool == 20004) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518896, 20003, 20005); //@t
				return 0;
			}
			if(var_91_bool == 19726) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518634); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518635, 20003, 19727); //@t
				return 0;
			}
			if(var_91_bool == 20003) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518897, 20009, 20007); //@t
				var_0_object->AddReply(518898, -1, 20008); //@t
				return 0;
			}
			if(var_91_bool == 20009) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518900, -1, 20010); //@t
				return 0;
			}
			if(var_91_bool == 19996) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518888, 19998, 19997); //@t
				return 0;
			}
			if(var_91_bool == 19998) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518617, -1, 19709); //@t
				return 0;
			}
			if(var_91_bool == 19843) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518752, 19845, 19844); //@t
				var_0_object->AddReply(518758, 19845, 19851); //@t
				return 0;
			}
			if(var_91_bool == 19845) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518755, 19849, 19847); //@t
				var_0_object->AddReply(518756, 19849, 19848); //@t
				return 0;
			}
			if(var_91_bool == 19849) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518759, 19854, 19853); //@t
				var_0_object->AddReply(518761, 19856, 19855); //@t
				var_0_object->AddReply(518765, 19858, 19859); //@t
				return 0;
			}
			if(var_91_bool == 19856) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518762); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518763, 19858, 19857); //@t
				return 0;
			}
			if(var_91_bool == 19858) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518766, 19869, 19861); //@t
				return 0;
			}
			if(var_91_bool == 19854) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518760); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518769, 19869, 19864); //@t
				var_0_object->AddReply(518768, 19870, 19863); //@t
				return 0;
			}
			if(var_91_bool == 19870) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518774, 19873, 19871); //@t
				var_0_object->AddReply(518775, 19878, 19872); //@t
				var_0_object->AddReply(518779, 19877, 19876); //@t
				return 0;
			}
			if(var_91_bool == 19878) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518782, 19841, 19879); //@t
				return 0;
			}
			if(var_91_bool == 19873) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518778, 19877, 19875); //@t
				var_0_object->AddReply(518777, -1, 19874); //@t
				return 0;
			}
			if(var_91_bool == 19877) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518784, 19885, 19883); //@t
				var_0_object->AddReply(518786, 19841, 19886); //@t
				return 0;
			}
			if(var_91_bool == 19885) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518787, 19841, 19888); //@t
				var_0_object->AddReply(518788, 19891, 19889); //@t
				return 0;
			}
			if(var_91_bool == 19891) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518790, 19869, 19892); //@t
				var_0_object->AddReply(518791, -1, 19893); //@t
				return 0;
			}
			if(var_91_bool == 19869) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518772); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518783, 19841, 19881); //@t
				return 0;
			}
			if(var_91_bool == 19841) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518749); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518610, 19706, 19702); //@t
				var_0_object->AddReply(518611, -1, 19703); //@t
				return 0;
			}
			if(var_91_bool == 19706) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518792, 19896, 19895); //@t
				return 0;
			}
			if(var_91_bool == 19896) {
				func_3634(var_92_cvector, "Neutral");
				var_0_object->SetMessage(518793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518615, -1, 19707); //@t
				var_0_object->AddReply(518794, -1, 19897); //@t
				return 0;
			}
			var_3_string = true;
			bool var_764_bool;
			func_12644(var_764_bool);
			if(var_764_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe49";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 21656) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12778();
				object var_124_object = var_1_object;
				func_13372(var_0_object);
			}
			if(var_92_cvector == 21659) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_12778();
				object var_168_object = var_1_object;
				func_13372(var_0_object);
			}
			if(var_91_bool == 21409) {
				bool var_172_bool = false;
				bool var_173_bool;
				func_14283(var_1_object);
				if(!var_173_bool) { //@nz
					bool var_182_bool;
					func_14271(var_1_object);
					if(!var_182_bool) //@nz
						var_172_bool = true;
				}
				if(var_172_bool != 0) {
					func_5007(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520217); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520218, 21411, 21410); //@t
					var_0_object->AddReply(520222, 21415, 21414); //@t
					return 0;
				}
				func_5007(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520440, -1, 21653); //@t
				return 0;
			}
			if(var_91_bool == 21415) {
				func_5007(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520437, 21413, 21648); //@t
				return 0;
			}
			if(var_91_bool == 21411) {
				func_5007(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520220, 21413, 21412); //@t
				var_0_object->AddReply(520438, 21413, 21650); //@t
				return 0;
			}
			if(var_91_bool == 21413) {
				var_0_object->SetMessage(520221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520441, 21655, 21654); //@t
				return 0;
			}
			if(var_91_bool == 21655) {
				func_5007(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520443, -1, 21656); //@t
				var_0_object->AddReply(520444, 21658, 21657); //@t
				return 0;
			}
			if(var_91_bool == 21658) {
				func_5007(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520446, -1, 21659); //@t
				return 0;
			}
			var_3_string = true;
			bool var_253_bool;
			func_12644(var_253_bool);
			if(var_253_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x13a6";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 21528) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12844();
			}
			if(var_92_cvector == 21557) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_12850();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_13096();
				object var_148_object = var_1_object;
				func_13340(var_0_object);
			}
			if(var_92_cvector == 21558) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_12850();
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_13096();
				object var_180_object = var_1_object;
				func_13340(var_0_object);
			}
			if(var_92_cvector == 22171) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_13096();
			}
			if(var_92_cvector == 21574) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_12832();
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_13105();
			}
			if(var_92_cvector == 31916) {
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_12787();
			}
			if(var_92_cvector == 31914) {
				object var_217_object; object var_218_object;
				var_217_object = var_1_object;
				var_218_object = var_0_object;
				func_12787();
			}
			if(var_92_cvector == 21586) {
				object var_221_object; object var_222_object;
				var_221_object = var_1_object;
				var_222_object = var_0_object;
				func_12787();
			}
			if(var_92_cvector == 21594) {
				object var_225_object; object var_226_object;
				var_225_object = var_1_object;
				var_226_object = var_0_object;
				func_12826();
			}
			if(var_91_bool == 21527) {
				bool var_231_bool;
				func_13843(var_1_object);
				if(var_231_bool != 0) {
					object var_239_object; object var_240_object;
					var_239_object = var_1_object;
					var_240_object = var_0_object;
					func_12838();
					func_5490(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520332); //@t
					var_0_object->ClearReplies(); //@t
					bool var_256_bool;
					func_14400(var_1_object);
					if(var_256_bool != 0)
						var_0_object->AddReply(520333, 21529, 21528); //@t
					var_0_object->AddReply(520347, -1, 21544); //@t
					return 0;
				}
				bool var_268_bool = false;
				bool var_269_bool;
				func_14343(var_1_object);
				if(var_269_bool != 0) {
					bool var_275_bool;
					func_13855(var_1_object);
					if(var_275_bool != 0)
						var_268_bool = true;
				}
				if(var_268_bool != 0) {
					object var_281_object; object var_282_object;
					var_281_object = var_1_object;
					var_282_object = var_0_object;
					func_12820();
					func_5490(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520348); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520349, 21548, 21547); //@t
					var_0_object->AddReply(520368, 21548, 21571); //@t
					return 0;
				}
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520369); //@t
				var_0_object->ClearReplies(); //@t
				bool var_295_bool = false;
				bool var_296_bool = false;
				bool var_297_bool;
				func_14367(var_297_bool, var_1_object);
				if(var_297_bool != 0) {
					bool var_310_bool;
					func_14388(var_1_object);
					if(var_310_bool != 0)
						var_296_bool = true;
				}
				if(var_296_bool != 0) {
					bool var_316_bool;
					func_13867(var_1_object);
					if(var_316_bool != 0)
						var_295_bool = true;
				}
				if(var_295_bool != 0)
					var_0_object->AddReply(520370, -1, 21574); //@t
				bool var_325_bool = false;
				bool var_326_bool;
				func_13879(var_1_object);
				if(var_326_bool != 0) {
					bool var_332_bool;
					func_14331(var_1_object);
					if(!var_332_bool) //@nz
						var_325_bool = true;
				}
				if(var_325_bool != 0)
					var_0_object->AddReply(520372, 21577, 21576); //@t
				bool var_342_bool;
				func_14355(var_1_object);
				if(var_342_bool != 0)
					var_0_object->AddReply(520388, 21595, 21594); //@t
				var_0_object->AddReply(520397, -1, 21603); //@t
				return 0;
			}
			if(var_91_bool == 21595) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520390, 21597, 21596); //@t
				var_0_object->AddReply(520396, -1, 21602); //@t
				return 0;
			}
			if(var_91_bool == 21597) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520392, 21599, 21598); //@t
				var_0_object->AddReply(520395, -1, 21601); //@t
				return 0;
			}
			if(var_91_bool == 21599) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520394, -1, 21600); //@t
				return 0;
			}
			if(var_91_bool == 21577) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520374, 21579, 21578); //@t
				var_0_object->AddReply(520387, 21583, 21592); //@t
				return 0;
			}
			if(var_91_bool == 21579) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520376, 21581, 21580); //@t
				var_0_object->AddReply(520386, 21583, 21590); //@t
				return 0;
			}
			if(var_91_bool == 21581) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520378, 21583, 21582); //@t
				var_0_object->AddReply(530616, 21583, 31917); //@t
				return 0;
			}
			if(var_91_bool == 21583) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520380, 21585, 21584); //@t
				bool var_418_bool;
				func_14307(var_1_object);
				if(!var_418_bool) //@nz
					var_0_object->AddReply(520383, 21588, 21587); //@t
				return 0;
			}
			if(var_91_bool == 21588) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520385, 21585, 21589); //@t
				return 0;
			}
			if(var_91_bool == 21585) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530608, 31909, 31908); //@t
				var_0_object->AddReply(520382, -1, 21586); //@t
				return 0;
			}
			if(var_91_bool == 31909) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530609); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530610, 31912, 31911); //@t
				return 0;
			}
			if(var_91_bool == 31912) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530612, 31915, 31913); //@t
				var_0_object->AddReply(530613, -1, 31914); //@t
				return 0;
			}
			if(var_91_bool == 31915) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530614); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530615, -1, 31916); //@t
				return 0;
			}
			if(var_91_bool == 21548) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520351, 21550, 21549); //@t
				var_0_object->AddReply(520363, 21550, 21563); //@t
				var_0_object->AddReply(520364, 21566, 21565); //@t
				return 0;
			}
			if(var_91_bool == 21566) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527832, 29172, 29171); //@t
				return 0;
			}
			if(var_91_bool == 29172) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520367, 21550, 21569); //@t
				var_0_object->AddReply(520366, 21552, 21567); //@t
				return 0;
			}
			if(var_91_bool == 21550) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527834, 29174, 29173); //@t
				return 0;
			}
			if(var_91_bool == 29174) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520353, 21552, 21551); //@t
				var_0_object->AddReply(520362, 21552, 21561); //@t
				return 0;
			}
			if(var_91_bool == 21552) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520355, 21554, 21553); //@t
				var_0_object->AddReply(520361, 21556, 21559); //@t
				return 0;
			}
			if(var_91_bool == 21554) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520357, 21556, 21555); //@t
				bool var_533_bool;
				func_14307(var_1_object);
				if(var_533_bool != 0)
					var_0_object->AddReply(520954, -1, 22171); //@t
				return 0;
			}
			if(var_91_bool == 21556) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520359, -1, 21557); //@t
				var_0_object->AddReply(520360, -1, 21558); //@t
				return 0;
			}
			if(var_91_bool == 21529) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520335, 21531, 21530); //@t
				var_0_object->AddReply(520346, 21531, 21542); //@t
				return 0;
			}
			if(var_91_bool == 21531) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527828, 29168, 29167); //@t
				return 0;
			}
			if(var_91_bool == 29168) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527830, 29170, 29169); //@t
				return 0;
			}
			if(var_91_bool == 29170) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520337, 21533, 21532); //@t
				return 0;
			}
			if(var_91_bool == 21533) {
				bool var_581_bool;
				func_14295(var_1_object);
				if(!var_581_bool) { //@nz
					func_5490(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520338); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520339, 21535, 21534); //@t
					var_0_object->AddReply(520345, 21535, 21540); //@t
					return 0;
				}
				bool var_596_bool;
				func_14295(var_1_object);
				if(var_596_bool != 0) {
					func_5490(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520956); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520957, 29175, 22173); //@t
					var_0_object->AddReply(520958, 29175, 22174); //@t
					return 0;
				}
			}
			if(var_91_bool == 21535) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520341, 29175, 21536); //@t
				var_0_object->AddReply(520342, 21538, 21537); //@t
				return 0;
			}
			if(var_91_bool == 21538) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520344, 29175, 21539); //@t
				return 0;
			}
			if(var_91_bool == 29175) {
				func_5490(var_92_cvector, "Neutral");
				var_0_object->SetMessage(527836); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527837, -1, 29176); //@t
				var_0_object->AddReply(527838, -1, 29177); //@t
				return 0;
			}
			var_3_string = true;
			bool var_633_bool;
			func_12644(var_633_bool);
			if(var_633_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1589";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 21742) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12803();
			}
			if(var_92_cvector == 21743) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_12803();
			}
			if(var_92_cvector == 23366) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_13067();
			}
			if(var_92_cvector == 23368) {
				object var_150_object = var_1_object;
				func_13112(var_0_object);
			}
			if(var_92_cvector == 23377) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_13057();
			}
			if(var_92_cvector == 23378) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_13057();
			}
			if(var_91_bool == 21729) {
				bool var_180_bool;
				func_14319(var_1_object);
				if(var_180_bool != 0) {
					object var_188_object; object var_189_object;
					var_188_object = var_1_object;
					var_189_object = var_0_object;
					func_12797();
					func_6627(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520527); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520528, 21731, 21730); //@t
					return 0;
				}
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520547); //@t
				var_0_object->ClearReplies(); //@t
				bool var_210_bool;
				func_14049(var_210_bool, var_1_object);
				if(var_210_bool != 0)
					var_0_object->AddReply(520548, 21751, 21750); //@t
				bool var_217_bool = false;
				bool var_218_bool;
				func_13772(var_218_bool, var_1_object);
				if(var_218_bool != 0) {
					bool var_227_bool;
					func_13783(var_1_object);
					if(var_227_bool != 0)
						var_217_bool = true;
				}
				if(var_217_bool != 0)
					var_0_object->AddReply(522217, 23367, 23366); //@t
				bool var_236_bool = false;
				bool var_237_bool;
				func_13795(var_1_object);
				if(!var_237_bool) { //@nz
					bool var_244_bool;
					func_13902(var_1_object);
					if(var_244_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0)
					var_0_object->AddReply(522220, 23370, 23369); //@t
				var_0_object->AddReply(520557, -1, 21759); //@t
				return 0;
			}
			if(var_91_bool == 23370) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522222, 23372, 23371); //@t
				return 0;
			}
			if(var_91_bool == 23372) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522224, 23374, 23373); //@t
				return 0;
			}
			if(var_91_bool == 23374) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522226, 23376, 23375); //@t
				var_0_object->AddReply(522229, -1, 23378); //@t
				return 0;
			}
			if(var_91_bool == 23376) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522228, -1, 23377); //@t
				return 0;
			}
			if(var_91_bool == 23367) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522219, -1, 23368); //@t
				return 0;
			}
			if(var_91_bool == 21751) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520550, 21753, 21752); //@t
				return 0;
			}
			if(var_91_bool == 21753) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520552, -1, 21754); //@t
				var_0_object->AddReply(520553, -1, 21755); //@t
				return 0;
			}
			if(var_91_bool == 21731) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520530, 21733, 21732); //@t
				return 0;
			}
			if(var_91_bool == 21733) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520532, 21735, 21734); //@t
				var_0_object->AddReply(528355, 29726, 29725); //@t
				return 0;
			}
			if(var_91_bool == 29726) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528357, 21737, 29727); //@t
				return 0;
			}
			if(var_91_bool == 21735) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520534, 21737, 21736); //@t
				return 0;
			}
			if(var_91_bool == 21737) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520536, 21739, 21738); //@t
				var_0_object->AddReply(520542, 21745, 21744); //@t
				return 0;
			}
			if(var_91_bool == 21745) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520544, 21747, 21746); //@t
				return 0;
			}
			if(var_91_bool == 21747) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520546, 21741, 21748); //@t
				return 0;
			}
			if(var_91_bool == 21739) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520538, 21741, 21740); //@t
				return 0;
			}
			if(var_91_bool == 21741) {
				func_6627(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520540, -1, 21742); //@t
				var_0_object->AddReply(520541, -1, 21743); //@t
				return 0;
			}
			var_3_string = true;
			bool var_383_bool;
			func_12644(var_383_bool);
			if(var_383_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x19fa";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, int var_60_int, int var_61_int, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_bool == 21920) {
				func_7260(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520709); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520710, 21922, 21921); //@t
				var_0_object->AddReply(520714, 21922, 21925); //@t
				return 0;
			}
			if(var_91_bool == 21922) {
				func_7260(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520711); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520712, -1, 21923); //@t
				var_0_object->AddReply(520713, -1, 21924); //@t
				var_0_object->AddReply(530691, -1, 31983); //@t
				return 0;
			}
			var_3_string = true;
			bool var_129_bool;
			func_12644(var_129_bool);
			if(var_129_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c73";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, int var_65_int, int var_66_int, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 22180) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12866();
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_13472();
				object var_166_object = var_1_object;
				func_12897(var_0_object);
			}
			if(var_92_cvector == 30025) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_12866();
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_13472();
				object var_198_object = var_1_object;
				func_12897(var_0_object);
			}
			if(var_91_bool == 22179) {
				bool var_202_bool;
				func_14412(var_1_object);
				if(var_202_bool != 0) {
					func_7506(var_92_cvector, "Neutral");
					var_0_object->SetMessage(520966); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528598, 29999, 29998); //@t
					return 0;
				}
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(520968); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520969, -1, 22182); //@t
				return 0;
			}
			if(var_91_bool == 29999) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528607, 30008, 30007); //@t
				return 0;
			}
			if(var_91_bool == 30008) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528619, 23365, 30021); //@t
				var_0_object->AddReply(528600, 30001, 30000); //@t
				return 0;
			}
			if(var_91_bool == 30001) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528602, 23365, 30002); //@t
				return 0;
			}
			if(var_91_bool == 23365) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522216); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528603, 30004, 30003); //@t
				var_0_object->AddReply(528609, 30012, 30009); //@t
				return 0;
			}
			if(var_91_bool == 30012) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528613, 30015, 30013); //@t
				return 0;
			}
			if(var_91_bool == 30004) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528604); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528605, 30006, 30005); //@t
				var_0_object->AddReply(528610, 30011, 30010); //@t
				return 0;
			}
			if(var_91_bool == 30011) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528611); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528618, 30006, 30018); //@t
				return 0;
			}
			if(var_91_bool == 30006) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528614, 30015, 30014); //@t
				return 0;
			}
			if(var_91_bool == 30015) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528616, 30017, 30016); //@t
				return 0;
			}
			if(var_91_bool == 30017) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520967, -1, 22180); //@t
				var_0_object->AddReply(528620, 30024, 30023); //@t
				return 0;
			}
			if(var_91_bool == 30024) {
				func_7506(var_92_cvector, "Neutral");
				var_0_object->SetMessage(528621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528622, -1, 30025); //@t
				return 0;
			}
			var_3_string = true;
			bool var_320_bool;
			func_12644(var_320_bool);
			if(var_320_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d69";
	
	}

}


task task_27
{
}


task task_28
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, int var_70_int, int var_71_int, object var_72_object, object var_73_object, object var_74_object, string var_75_string, bool var_76_bool, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 22625) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12919();
			}
			if(var_92_cvector == 22629) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_12925();
			}
			if(var_92_cvector == 36200) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_13273();
			}
			if(var_91_bool == 22618) {
				bool var_115_bool;
				func_13500(var_1_object);
				if(var_115_bool != 0) {
					object var_123_object; object var_124_object;
					var_123_object = var_1_object;
					var_124_object = var_0_object;
					func_12913();
					object var_127_object; object var_128_object;
					var_127_object = var_1_object;
					var_128_object = var_0_object;
					func_13279();
					func_8061(var_92_cvector, "Neutral");
					var_0_object->SetMessage(521440); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531320, 32648, 32647); //@t
					var_0_object->AddReply(531327, 32650, 32654); //@t
					return 0;
				}
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521450); //@t
				var_0_object->ClearReplies(); //@t
				bool var_152_bool = false;
				bool var_153_bool = false;
				bool var_154_bool;
				func_13546(var_1_object);
				if(!var_154_bool) { //@nz
					bool var_161_bool;
					func_13558(var_1_object);
					if(var_161_bool != 0)
						var_153_bool = true;
				}
				if(var_153_bool != 0) {
					bool var_167_bool;
					func_13570(var_1_object);
					if(var_167_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(521451, 22630, 22629); //@t
				bool var_176_bool = false;
				bool var_177_bool;
				func_14025(var_1_object);
				if(var_177_bool != 0) {
					bool var_183_bool;
					func_14037(var_1_object);
					if(var_183_bool != 0)
						var_176_bool = true;
				}
				if(var_176_bool != 0)
					var_0_object->AddReply(534566, 36201, 36200); //@t
				var_0_object->AddReply(521454, -1, 22632); //@t
				var_0_object->AddReply(531341, -1, 32672); //@t
				return 0;
			}
			if(var_91_bool == 36201) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(534567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534568, 36203, 36202); //@t
				var_0_object->AddReply(534570, 36206, 36204); //@t
				var_0_object->AddReply(534571, 36206, 36205); //@t
				return 0;
			}
			if(var_91_bool == 36206) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(534572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534573, 36203, 36209); //@t
				var_0_object->AddReply(534576, 36203, 36213); //@t
				return 0;
			}
			if(var_91_bool == 36203) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(534569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534574, -1, 36211); //@t
				var_0_object->AddReply(534575, -1, 36212); //@t
				return 0;
			}
			if(var_91_bool == 22630) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521453, 32674, 22631); //@t
				var_0_object->AddReply(531342, 32674, 32673); //@t
				return 0;
			}
			if(var_91_bool == 32674) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531344, -1, 32675); //@t
				var_0_object->AddReply(531345, -1, 32676); //@t
				return 0;
			}
			if(var_91_bool == 32648) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531322, 32650, 32649); //@t
				var_0_object->AddReply(531328, 32650, 32655); //@t
				return 0;
			}
			if(var_91_bool == 32650) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531324, 32652, 32651); //@t
				var_0_object->AddReply(531329, 32652, 32656); //@t
				return 0;
			}
			if(var_91_bool == 32652) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531325); //@t
				var_0_object->ClearReplies(); //@t
				bool var_275_bool;
				func_13488(var_1_object);
				if(var_275_bool != 0)
					var_0_object->AddReply(521441, 32659, 22619); //@t
				bool var_284_bool;
				func_13512(var_1_object);
				if(var_284_bool != 0)
					var_0_object->AddReply(521444, 22623, 22622); //@t
				bool var_303_bool;
				func_13570(var_1_object);
				if(var_303_bool != 0)
					var_0_object->AddReply(521447, 22626, 22625); //@t
				return 0;
			}
			if(var_91_bool == 22626) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521449, 32664, 22627); //@t
				var_0_object->AddReply(531333, 32663, 32662); //@t
				return 0;
			}
			if(var_91_bool == 32663) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531339, 32664, 32668); //@t
				var_0_object->AddReply(531340, 32664, 32669); //@t
				return 0;
			}
			if(var_91_bool == 32664) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531336, -1, 32665); //@t
				var_0_object->AddReply(531337, -1, 32666); //@t
				var_0_object->AddReply(531338, -1, 32667); //@t
				return 0;
			}
			if(var_91_bool == 22623) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521446, -1, 22624); //@t
				var_0_object->AddReply(531332, -1, 32661); //@t
				return 0;
			}
			if(var_91_bool == 32659) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531326, 22620, 32653); //@t
				return 0;
			}
			if(var_91_bool == 22620) {
				func_8061(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521443, -1, 22621); //@t
				var_0_object->AddReply(531331, -1, 32660); //@t
				return 0;
			}
			var_3_string = true;
			bool var_368_bool;
			func_12644(var_368_bool);
			if(var_368_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1f94";
	
	}

}


task task_29
{
}


task task_30
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, int var_75_int, int var_76_int, object var_77_object, object var_78_object, object var_79_object, string var_80_string, bool var_81_bool, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 23085) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_12931();
			}
			if(var_92_cvector == 23093) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_12931();
			}
			if(var_92_cvector == 23096) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_12959();
			}
			if(var_92_cvector == 23117) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_12943();
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_13285();
				object var_180_object = var_1_object;
				func_13302(var_0_object);
			}
			if(var_91_bool == 23084) {
				bool var_214_bool;
				func_13594(var_1_object);
				if(var_214_bool != 0) {
					object var_220_object; object var_221_object;
					var_220_object = var_1_object;
					var_221_object = var_0_object;
					func_12953();
					object var_224_object; object var_225_object;
					var_224_object = var_1_object;
					var_225_object = var_0_object;
					func_12968();
					func_8854(var_92_cvector, "Neutral");
					var_0_object->SetMessage(521910); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522427, 23595, 23594); //@t
					var_0_object->AddReply(521912, 23599, 23086); //@t
					return 0;
				}
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521913); //@t
				var_0_object->ClearReplies(); //@t
				bool var_249_bool;
				func_13582(var_1_object);
				if(var_249_bool != 0)
					var_0_object->AddReply(521914, 23092, 23088); //@t
				bool var_258_bool;
				func_13606(var_1_object);
				if(var_258_bool != 0)
					var_0_object->AddReply(521920, 23095, 23094); //@t
				bool var_267_bool = false;
				bool var_268_bool = false;
				bool var_269_bool;
				func_13618(var_1_object);
				if(var_269_bool != 0) {
					bool var_275_bool;
					func_13642(var_1_object);
					if(var_275_bool != 0)
						var_268_bool = true;
				}
				if(var_268_bool != 0) {
					bool var_281_bool;
					func_13630(var_1_object);
					if(!var_281_bool) //@nz
						var_267_bool = true;
				}
				if(var_267_bool != 0)
					var_0_object->AddReply(521935, 32896, 23109); //@t
				bool var_291_bool = false;
				bool var_292_bool = false;
				bool var_293_bool;
				func_13618(var_1_object);
				if(var_293_bool != 0) {
					bool var_295_bool;
					func_13630(var_1_object);
					if(var_295_bool != 0)
						var_292_bool = true;
				}
				if(var_292_bool != 0) {
					bool var_297_bool;
					func_13642(var_1_object);
					if(!var_297_bool) //@nz
						var_291_bool = true;
				}
				if(var_291_bool != 0)
					var_0_object->AddReply(521936, 23113, 23110); //@t
				bool var_303_bool = false;
				bool var_304_bool = false;
				bool var_305_bool;
				func_13642(var_1_object);
				if(var_305_bool != 0) {
					bool var_307_bool;
					func_13630(var_1_object);
					if(var_307_bool != 0)
						var_304_bool = true;
				}
				if(var_304_bool != 0) {
					bool var_309_bool;
					func_13618(var_1_object);
					if(var_309_bool != 0)
						var_303_bool = true;
				}
				if(var_303_bool != 0)
					var_0_object->AddReply(521941, 32893, 23115); //@t
				var_0_object->AddReply(521917, -1, 23091); //@t
				return 0;
			}
			if(var_91_bool == 32893) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531533, 32895, 32894); //@t
				var_0_object->AddReply(531538, 32895, 32900); //@t
				return 0;
			}
			if(var_91_bool == 32895) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531534); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531539, 32904, 32902); //@t
				var_0_object->AddReply(531545, 32904, 32908); //@t
				return 0;
			}
			if(var_91_bool == 32904) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531542, 23116, 32905); //@t
				var_0_object->AddReply(531546, 23116, 32910); //@t
				return 0;
			}
			if(var_91_bool == 23116) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531543, 32912, 32906); //@t
				var_0_object->AddReply(531544, 32912, 32907); //@t
				return 0;
			}
			if(var_91_bool == 32912) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531547); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521943, -1, 23117); //@t
				return 0;
			}
			if(var_91_bool == 23113) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521940, 32889, 23114); //@t
				var_0_object->AddReply(531530, 32889, 32890); //@t
				return 0;
			}
			if(var_91_bool == 32889) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531531, -1, 32892); //@t
				return 0;
			}
			if(var_91_bool == 32896) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531536, 23111, 32897); //@t
				var_0_object->AddReply(531537, 23111, 32898); //@t
				return 0;
			}
			if(var_91_bool == 23111) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521938, 32887, 23112); //@t
				return 0;
			}
			if(var_91_bool == 32887) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531527); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531528, -1, 32888); //@t
				return 0;
			}
			if(var_91_bool == 23095) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522470, 23644, 23643); //@t
				var_0_object->AddReply(531518, 23646, 32874); //@t
				return 0;
			}
			if(var_91_bool == 23644) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522472, 23646, 23645); //@t
				var_0_object->AddReply(531517, 32882, 32873); //@t
				return 0;
			}
			if(var_91_bool == 32882) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531524, 23646, 32883); //@t
				var_0_object->AddReply(531525, -1, 32885); //@t
				return 0;
			}
			if(var_91_bool == 23646) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522473); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522474, 23648, 23647); //@t
				var_0_object->AddReply(531519, 32877, 32875); //@t
				return 0;
			}
			if(var_91_bool == 32877) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531521, 23648, 32878); //@t
				var_0_object->AddReply(531522, 23648, 32879); //@t
				return 0;
			}
			if(var_91_bool == 23648) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522476, 23650, 23649); //@t
				return 0;
			}
			if(var_91_bool == 23650) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521922, -1, 23096); //@t
				var_0_object->AddReply(531526, -1, 32886); //@t
				return 0;
			}
			if(var_91_bool == 23092) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(521918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521919, -1, 23093); //@t
				return 0;
			}
			if(var_91_bool == 23595) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522429, 23611, 23596); //@t
				var_0_object->AddReply(522431, 23599, 23598); //@t
				var_0_object->AddReply(522430, 23606, 23597); //@t
				return 0;
			}
			if(var_91_bool == 23606) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522440, 23608, 23607); //@t
				return 0;
			}
			if(var_91_bool == 23608) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522442, 23601, 23609); //@t
				return 0;
			}
			if(var_91_bool == 23599) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522433, 23601, 23600); //@t
				return 0;
			}
			if(var_91_bool == 23601) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522435, 23603, 23602); //@t
				return 0;
			}
			if(var_91_bool == 23603) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522437, 23615, 23604); //@t
				var_0_object->AddReply(522438, -1, 23605); //@t
				return 0;
			}
			if(var_91_bool == 23611) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522443); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522445, 23615, 23614); //@t
				var_0_object->AddReply(522444, 23599, 23612); //@t
				return 0;
			}
			if(var_91_bool == 23615) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522447, 23618, 23616); //@t
				return 0;
			}
			if(var_91_bool == 23618) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522448); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522449, 23621, 23619); //@t
				return 0;
			}
			if(var_91_bool == 23621) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522452, 23623, 23622); //@t
				var_0_object->AddReply(522450, 23623, 23620); //@t
				return 0;
			}
			if(var_91_bool == 23623) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522454, 23627, 23624); //@t
				var_0_object->AddReply(522455, 23626, 23625); //@t
				return 0;
			}
			if(var_91_bool == 23626) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522458, 23630, 23629); //@t
				return 0;
			}
			if(var_91_bool == 23630) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522460, 23627, 23631); //@t
				return 0;
			}
			if(var_91_bool == 23627) {
				func_8854(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521911, -1, 23085); //@t
				var_0_object->AddReply(522461, -1, 23633); //@t
				return 0;
			}
			var_3_string = true;
			bool var_598_bool;
			func_12644(var_598_bool);
			if(var_598_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x22ad";
	
	}

}


task task_31
{
}


task task_32
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, int var_80_int, int var_81_int, object var_82_object, object var_83_object, object var_84_object, string var_85_string, bool var_86_bool, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 24768) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_13022();
			}
			if(var_92_cvector == 23231) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_12974();
			}
			if(var_92_cvector == 24786) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_12974();
			}
			if(var_92_cvector == 24770) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_13022();
			}
			if(var_92_cvector == 31886) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_13080();
			}
			if(var_92_cvector == 32709) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_13080();
			}
			if(var_92_cvector == 32433) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_13123();
			}
			if(var_92_cvector == 32723) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_13123();
			}
			if(var_92_cvector == 32720) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_13132();
			}
			if(var_91_bool == 23230) {
				bool var_195_bool;
				func_13666(var_1_object);
				if(var_195_bool != 0) {
					object var_203_object; object var_204_object;
					var_203_object = var_1_object;
					var_204_object = var_0_object;
					func_12983();
					func_9966(var_92_cvector, "Neutral");
					var_0_object->SetMessage(522061); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523529, 24763, 24762); //@t
					return 0;
				}
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522063); //@t
				var_0_object->ClearReplies(); //@t
				bool var_225_bool;
				func_13760(var_1_object);
				if(var_225_bool != 0)
					var_0_object->AddReply(523535, 24769, 24768); //@t
				bool var_234_bool;
				func_13760(var_1_object);
				if(var_234_bool != 0)
					var_0_object->AddReply(523537, 24771, 24770); //@t
				bool var_239_bool;
				func_13831(var_1_object);
				if(var_239_bool != 0)
					var_0_object->AddReply(530525, 32707, 31884); //@t
				bool var_248_bool;
				func_13914(var_1_object);
				if(var_248_bool != 0)
					var_0_object->AddReply(531113, 32712, 32431); //@t
				var_0_object->AddReply(522064, -1, 23233); //@t
				return 0;
			}
			if(var_91_bool == 32712) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531376, 32432, 32713); //@t
				var_0_object->AddReply(531377, 32717, 32714); //@t
				return 0;
			}
			if(var_91_bool == 32717) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531381, 32432, 32718); //@t
				var_0_object->AddReply(531382, -1, 32720); //@t
				return 0;
			}
			if(var_91_bool == 32432) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531378, 32716, 32715); //@t
				var_0_object->AddReply(531383, 32722, 32721); //@t
				return 0;
			}
			if(var_91_bool == 32722) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531385, -1, 32723); //@t
				var_0_object->AddReply(531386, 32716, 32724); //@t
				return 0;
			}
			if(var_91_bool == 32716) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531115, -1, 32433); //@t
				return 0;
			}
			if(var_91_bool == 32707) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531371, 31885, 32708); //@t
				var_0_object->AddReply(531372, -1, 32709); //@t
				return 0;
			}
			if(var_91_bool == 31885) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(530526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531373, 32711, 32710); //@t
				return 0;
			}
			if(var_91_bool == 32711) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530527, -1, 31886); //@t
				return 0;
			}
			if(var_91_bool == 24771) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523538); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523539, 24773, 24772); //@t
				return 0;
			}
			if(var_91_bool == 24773) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523540); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523541, 24775, 24774); //@t
				return 0;
			}
			if(var_91_bool == 24775) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523543, -1, 24776); //@t
				var_0_object->AddReply(523544, -1, 24777); //@t
				return 0;
			}
			if(var_91_bool == 24769) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523545, 24779, 24778); //@t
				return 0;
			}
			if(var_91_bool == 24779) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523546); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523547, 24781, 24780); //@t
				bool var_369_bool;
				func_13654(var_1_object);
				if(var_369_bool != 0)
					var_0_object->AddReply(522065, -1, 23234); //@t
				return 0;
			}
			if(var_91_bool == 24781) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523549, 24784, 24782); //@t
				return 0;
			}
			if(var_91_bool == 24784) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523551); //@t
				var_0_object->ClearReplies(); //@t
				bool var_389_bool;
				func_13654(var_1_object);
				if(!var_389_bool) //@nz
					var_0_object->AddReply(522062, -1, 23231); //@t
				var_0_object->AddReply(523553, -1, 24786); //@t
				return 0;
			}
			if(var_91_bool == 24763) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523531, 24765, 24764); //@t
				return 0;
			}
			if(var_91_bool == 24765) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523533, 24767, 24766); //@t
				var_0_object->AddReply(523554, 24788, 24787); //@t
				return 0;
			}
			if(var_91_bool == 24788) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523556, 24790, 24789); //@t
				return 0;
			}
			if(var_91_bool == 24790) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523558, 24767, 24791); //@t
				return 0;
			}
			if(var_91_bool == 24767) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523534); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523559, 24794, 24793); //@t
				return 0;
			}
			if(var_91_bool == 24794) {
				func_9966(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523561, -1, 24795); //@t
				var_0_object->AddReply(523562, -1, 24796); //@t
				return 0;
			}
			var_3_string = true;
			bool var_446_bool;
			func_12644(var_446_bool);
			if(var_446_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2705";
	
	}

}


task task_33
{
}


task task_34
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, int var_85_int, int var_86_int, object var_87_object, object var_88_object, object var_89_object, string var_90_string, bool var_91_bool, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_92_cvector == 24209) {
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_13257();
			}
			if(var_92_cvector == 33406) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_12995();
			}
			if(var_92_cvector == 33416) {
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_13257();
			}
			if(var_92_cvector == 33395) {
				object var_150_object; object var_151_object;
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_12995();
			}
			if(var_92_cvector == 42244) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_12995();
			}
			if(var_92_cvector == 24178) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_13016();
			}
			if(var_92_cvector == 24187) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_13010();
			}
			if(var_91_bool == 23274) {
				bool var_170_bool = false;
				bool var_171_bool;
				func_13678(var_1_object);
				if(var_171_bool != 0) {
					bool var_177_bool;
					func_13714(var_1_object);
					if(!var_177_bool) //@nz
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					object var_184_object; object var_185_object;
					var_184_object = var_1_object;
					var_185_object = var_0_object;
					func_12989();
					object var_188_object; object var_189_object;
					var_188_object = var_1_object;
					var_189_object = var_0_object;
					func_13004();
					func_10853(var_92_cvector, "Neutral");
					var_0_object->SetMessage(522107); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522108, 24172, 23275); //@t
					var_0_object->AddReply(522109, 24176, 23276); //@t
					return 0;
				}
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_13004();
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(531983); //@t
				var_0_object->ClearReplies(); //@t
				bool var_215_bool = false;
				bool var_216_bool = false;
				bool var_217_bool;
				func_13750(var_217_bool, var_1_object);
				if(var_217_bool != 0) {
					bool var_267_bool;
					func_13938(var_1_object);
					if(!var_267_bool) //@nz
						var_216_bool = true;
				}
				if(var_216_bool != 0) {
					bool var_274_bool;
					func_13714(var_1_object);
					if(!var_274_bool) //@nz
						var_215_bool = true;
				}
				if(var_215_bool != 0)
					var_0_object->AddReply(540259, 42243, 42242); //@t
				bool var_280_bool = false;
				bool var_281_bool;
				func_13726(var_1_object);
				if(var_281_bool != 0) {
					bool var_287_bool;
					func_13738(var_1_object);
					if(var_287_bool != 0)
						var_280_bool = true;
				}
				if(var_280_bool != 0)
					var_0_object->AddReply(522987, 24179, 24178); //@t
				bool var_296_bool = false;
				bool var_297_bool;
				func_13690(var_1_object);
				if(var_297_bool != 0) {
					bool var_303_bool;
					func_13702(var_1_object);
					if(var_303_bool != 0)
						var_296_bool = true;
				}
				if(var_296_bool != 0)
					var_0_object->AddReply(522996, 24188, 24187); //@t
				var_0_object->AddReply(531987, -1, 33393); //@t
				return 0;
			}
			if(var_91_bool == 24188) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522997); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522998, 24190, 24189); //@t
				return 0;
			}
			if(var_91_bool == 24190) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523000, 24192, 24191); //@t
				return 0;
			}
			if(var_91_bool == 24192) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523001); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523002, 24194, 24193); //@t
				return 0;
			}
			if(var_91_bool == 24194) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523003); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523004, 24196, 24195); //@t
				return 0;
			}
			if(var_91_bool == 24196) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523005); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523006, -1, 24197); //@t
				return 0;
			}
			if(var_91_bool == 24179) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522988); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522992, 24184, 24183); //@t
				return 0;
			}
			if(var_91_bool == 24184) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522989, 24181, 24180); //@t
				return 0;
			}
			if(var_91_bool == 24181) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522991, 24185, 24182); //@t
				return 0;
			}
			if(var_91_bool == 24185) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522995, -1, 24186); //@t
				return 0;
			}
			if(var_91_bool == 42243) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(540260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540261, -1, 42244); //@t
				return 0;
			}
			if(var_91_bool == 24172) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522984, 24176, 24175); //@t
				var_0_object->AddReply(522982, 24174, 24173); //@t
				return 0;
			}
			if(var_91_bool == 24174) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523009, 24176, 24200); //@t
				return 0;
			}
			if(var_91_bool == 24176) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(522985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522986, 24198, 24177); //@t
				var_0_object->AddReply(523012, 33391, 24204); //@t
				return 0;
			}
			if(var_91_bool == 33391) {
				bool var_414_bool;
				func_13750(var_414_bool, var_1_object);
				if(!var_414_bool) { //@nz
					func_10853(var_92_cvector, "Neutral");
					var_0_object->SetMessage(531985); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531986, 33408, 33392); //@t
					return 0;
				}
				bool var_422_bool;
				func_13750(var_422_bool, var_1_object);
				if(var_422_bool != 0) {
					func_10853(var_92_cvector, "Neutral");
					var_0_object->SetMessage(531988); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532018, 33419, 33418); //@t
					return 0;
				}
			}
			if(var_91_bool == 33419) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(532019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531989, -1, 33395); //@t
				var_0_object->AddReply(540262, -1, 42245); //@t
				return 0;
			}
			if(var_91_bool == 33408) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(532008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532009, 33410, 33409); //@t
				var_0_object->AddReply(532017, -1, 33417); //@t
				return 0;
			}
			if(var_91_bool == 33410) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(532010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532011, 33412, 33411); //@t
				var_0_object->AddReply(532013, -1, 33413); //@t
				return 0;
			}
			if(var_91_bool == 33412) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(532012); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532014, 33415, 33414); //@t
				return 0;
			}
			if(var_91_bool == 33415) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(532015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532016, -1, 33416); //@t
				return 0;
			}
			if(var_91_bool == 24198) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523008, 24202, 24199); //@t
				return 0;
			}
			if(var_91_bool == 24202) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(523010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523013, 23277, 24206); //@t
				return 0;
			}
			if(var_91_bool == 23277) {
				bool var_489_bool;
				func_13750(var_489_bool, var_1_object);
				if(!var_489_bool) { //@nz
					func_10853(var_92_cvector, "Neutral");
					var_0_object->SetMessage(522110); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(540119, 42089, 42088); //@t
					var_0_object->AddReply(523014, -1, 24207); //@t
					return 0;
				}
				bool var_500_bool;
				func_13750(var_500_bool, var_1_object);
				if(var_500_bool != 0) {
					func_10853(var_92_cvector, "Neutral");
					var_0_object->SetMessage(531999); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532000, -1, 33406); //@t
					var_0_object->AddReply(532001, -1, 33407); //@t
					return 0;
				}
			}
			if(var_91_bool == 42089) {
				func_10853(var_92_cvector, "Neutral");
				var_0_object->SetMessage(540120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523016, -1, 24209); //@t
				return 0;
			}
			var_3_string = true;
			bool var_517_bool;
			func_12644(var_517_bool);
			if(var_517_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a7c";
	
	}

}


task task_35
{
}


task task_36
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, int var_90_int, int var_91_int, cvector var_92_cvector)
	{
		if(1 != 0) {
			func_12369();
			if(var_91_int == 42563) {
				func_11726(var_92_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_12644(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2de5";
	
	}

}


maintask task_37
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector)
	{
		func_11794(var_90_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector, int var_91_int)
	{
		if(var_91_int == 10) {
			func_11865();
			bool var_95_bool = false;
			bool var_96_bool;
			func_12113(var_96_bool);
			if(var_96_bool != 0) {
				bool var_99_bool;
				func_11834(var_99_bool);
				if(var_99_bool != 0)
					var_95_bool = true;
			}
			if(var_95_bool != 0) {
				bool var_116_bool;
				func_11814(var_116_bool);
				if(var_116_bool != 0) {
					bool var_135_bool; object var_136_object;
					object var_137_object;
					func_12376(var_137_object);
					var_137_object = var_136_object;
					func_12261(var_135_bool, var_136_object);
				}
			} else {
				func_11829(var_91_int);
				func_11856();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector)
	{
		func_12047();
		func_11865();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector)
		{
		@StopGroup0();
		func_11865();
		func_12341("Neutral");
		func_11856();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector, bool var_91_bool)
	{
		if(var_91_bool != 0)
			func_11856();
		else
			func_12341("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, object var_65_object, object var_66_object, object var_67_object, string var_68_string, bool var_69_bool, object var_70_object, object var_71_object, object var_72_object, string var_73_string, bool var_74_bool, object var_75_object, object var_76_object, object var_77_object, string var_78_string, bool var_79_bool, object var_80_object, object var_81_object, object var_82_object, string var_83_string, bool var_84_bool, object var_85_object, object var_86_object, object var_87_object, string var_88_string, bool var_89_bool, cvector var_90_cvector, object var_91_object)
	{
		bool var_93_bool;
		@IsOverrideActive(var_93_bool);
		if(!var_93_bool) { //@nz
			disable OnUse;
			func_12047();
			bool var_95_bool; object var_96_object;
			var_91_object = var_96_object;
			func_12104(var_95_bool, var_96_object);
			enable OnUse;
			object var_109_object;
			var_91_object = var_109_object;
			func_14986(var_109_object);
			func_12341("Neutral");
			func_11865();
			func_11856();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_95_bool;
	func_12113(var_95_bool);
	if(!var_95_bool) goto Label_0; //@nz
}


void func_1028(object var_0_object, int var_875_int, object var_876_object)
{
	var_0_object = var_876_object;
	bool var_886_bool; object var_887_object;
	object var_888_object;
	func_12376(var_888_object);
	var_888_object = var_887_object;
	func_12203(var_886_bool, var_887_object);
	bool var_889_bool; object var_890_object;
	var_876_object = var_890_object;
	func_12118(var_889_bool, var_890_object, 70.0);
	if(!var_889_bool) { //@nz
		var_875_int = -2;
		return 8;
	}
	object var_882_object;
	@CreateDialog(var_882_object);
	int var_893_int;
	func_12638(var_893_int);
	var_882_object->SetNPCName(var_893_int);
	int var_894_int;
	func_12636(var_894_int);
	var_882_object->SetNPCDescription(var_894_int);
	string var_895_string;
	func_12640(var_895_string);
	var_882_object->SetPhoto(var_895_string);
	string var_896_string;
	func_12642(var_896_string);
	var_882_object->SetPhoto2(var_896_string);
	int var_897_int;
	func_14875(var_897_int);
	var_882_object->SetPlayerName(var_897_int);
	bool var_883_bool;
	@IsOverrideActive(var_883_bool);
	if(var_883_bool != 0) {
		var_875_int = -2;
		return 8;
	}
	@DoDialog(var_882_object);
	object var_899_object; object var_900_object;
	var_876_object = var_899_object;
	var_882_object = var_900_object;
	TaskCall(12);
	func_1109(var_901_object, var_902_object, var_903_string, var_904_bool, var_899_object, var_900_object);
	TaskReturn();
	bool var_885_bool;
	var_882_object->IsDialogEnd(var_885_bool);
	
	for(;;) {
		var_1010_bool = !var_885_bool; //@nz
		if(var_1010_bool == 0) goto Label_1098;
		@sync();
		var_882_object->IsDialogEnd(var_885_bool);
	}
	
Label_1098:
	object var_1011_object;
	var_876_object = var_1011_object;
	func_12186();
	@StopDialog(var_882_object);
	var_882_object->GetReturnValue(-1);
	int var_884_int = var_875_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_13318(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_14343(bool var_786_bool)
{
	int var_788_int;
	func_12403(var_788_int, "oob2Danko1");
	if(var_788_int == 0) {
		var_786_bool = true;
		return 0;
	}
	var_786_bool = false;
}


void func_12298(bool var_167_bool, object var_168_object)
{
	bool var_176_bool; int var_177_int; string var_178_string;
	int var_180_int;
	func_12578(var_180_int);
	string var_174_string = ("d" + var_180_int) + "m";
	int var_175_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_168_object->HasProperty((var_174_string + (var_175_int + 1)), var_176_bool);
			if(!var_176_bool) { //@nz
			} else {
				var_175_int += 1;
			}
		}
		if(!var_175_int) { //@nz
			var_167_bool = false;
			return 10;
		}
		var_177_int = 0;
		if(var_175_int > 1)
			@irand(var_177_int, var_175_int);
		var_168_object->GetProperty((var_174_string + (var_177_int + 1)), var_178_string);
		bool var_199_bool; string var_200_string;
		var_178_string = var_200_string;
		func_12354(var_199_bool, var_200_string);
		var_199_bool = var_167_bool;
		return 10;

	}
}


// @pe
void func_13324(object var_160_object)
{
	object var_164_object;
	func_14825(var_164_object);
	object var_161_object;
	var_164_object = var_161_object;
	func_14842(var_161_object, "pt_map_ospina", (float)2);
	object var_184_object;
	func_14825(var_184_object);
	var_160_object->ShowMap(var_184_object);
}


void func_13(object var_0_object, int var_344_int, object var_345_object)
{
	var_0_object = var_345_object;
	bool var_355_bool; object var_356_object;
	object var_357_object;
	func_12376(var_357_object);
	var_357_object = var_356_object;
	func_12203(var_355_bool, var_356_object);
	bool var_358_bool; object var_359_object;
	var_345_object = var_359_object;
	func_12118(var_358_bool, var_359_object, 70.0);
	if(!var_358_bool) { //@nz
		var_344_int = -2;
		return 8;
	}
	object var_351_object;
	@CreateDialog(var_351_object);
	int var_362_int;
	func_12638(var_362_int);
	var_351_object->SetNPCName(var_362_int);
	int var_363_int;
	func_12636(var_363_int);
	var_351_object->SetNPCDescription(var_363_int);
	string var_364_string;
	func_12640(var_364_string);
	var_351_object->SetPhoto(var_364_string);
	string var_365_string;
	func_12642(var_365_string);
	var_351_object->SetPhoto2(var_365_string);
	int var_366_int;
	func_14875(var_366_int);
	var_351_object->SetPlayerName(var_366_int);
	bool var_352_bool;
	@IsOverrideActive(var_352_bool);
	if(var_352_bool != 0) {
		var_344_int = -2;
		return 8;
	}
	@DoDialog(var_351_object);
	object var_368_object; object var_369_object;
	var_345_object = var_368_object;
	var_351_object = var_369_object;
	TaskCall(2);
	func_94(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	bool var_354_bool;
	var_351_object->IsDialogEnd(var_354_bool);
	
	for(;;) {
		var_398_bool = !var_354_bool; //@nz
		if(var_398_bool == 0) goto Label_83;
		@sync();
		var_351_object->IsDialogEnd(var_354_bool);
	}
	
Label_83:
	object var_399_object;
	var_345_object = var_399_object;
	func_12186();
	@StopDialog(var_351_object);
	var_351_object->GetReturnValue(-1);
	int var_353_int = var_344_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_14355(bool var_859_bool)
{
	int var_861_int;
	func_12403(var_861_int, "oob2Danko2");
	if(var_861_int == 0) {
		var_859_bool = true;
		return 0;
	}
	var_859_bool = false;
}


// @pe
void func_13340(object var_149_object)
{
	object var_153_object;
	func_14825(var_153_object);
	object var_150_object;
	var_153_object = var_150_object;
	func_14842(var_150_object, "pt_map_mladvlad", (float)2);
	object var_173_object;
	func_14825(var_173_object);
	var_149_object->ShowMap(var_173_object);
}


// @pe
void func_14367(bool var_814_bool, object var_815_object)
{
	bool var_816_bool = true;
	bool var_817_bool; object var_818_object;
	var_815_object = var_818_object;
	func_12492(var_817_bool, var_818_object, "grass_combination");
	if(var_817_bool != 1) {
		bool var_824_bool; object var_825_object;
		var_815_object = var_825_object;
		func_12492(var_824_bool, var_825_object, "organ_combination");
		if(var_824_bool != 1)
			var_816_bool = false;
	}
	if(var_816_bool != 0) {
		var_814_bool = true;
		return 0;
	}
	var_814_bool = false;
}


// @pe
void func_7202(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_1_object = var_280_object;
	var_3_string = false;
	if(1 != 0) {
		func_7260(var_281_object, "Neutral");
		var_0_object->SetMessage(520709); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520710, 21922, 21921); //@t
		var_0_object->AddReply(520714, 21922, 21925); //@t
		goto Label_7230;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c26";
	}
Label_7230:
	bool var_306_bool;
	func_12644(var_306_bool);
	if(var_306_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_7259;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_7259:
		return 0;

	}
	
}


// @pe
void func_13356(object var_160_object)
{
	object var_164_object;
	func_14825(var_164_object);
	object var_161_object;
	var_164_object = var_161_object;
	func_14842(var_161_object, "pt_map_lara", (float)2);
	object var_184_object;
	func_14825(var_184_object);
	var_160_object->ShowMap(var_184_object);
}


// @pe
void func_14388(bool var_827_bool)
{
	int var_829_int;
	func_12403(var_829_int, "oob2Danko3");
	if(var_829_int == 0) {
		var_827_bool = true;
		return 0;
	}
	var_827_bool = false;
}


void func_12341(string var_98_string)
{
	float var_101_float; float var_102_float;
	@lshGetAnimTimes(var_98_string, var_101_float, var_102_float);
	@lshPlayAnimation(var_101_float, var_102_float, false);
}


void func_12348(string var_291_string, bool var_292_bool)
{
	float var_297_float; float var_298_float;
	@lshGetAnimTimes(var_291_string, var_297_float, var_298_float);
	@lshPlayAnimation(var_297_float, var_298_float, var_292_bool);
}


// @pe
void func_13372(object var_124_object)
{
	object var_127_object;
	var_124_object = var_127_object;
	bool var_126_bool;
	func_12516(var_126_bool, var_127_object, 0.3);
}


// @pe
void func_14400(bool var_765_bool)
{
	int var_767_int;
	func_12403(var_767_int, "oob2Danko4");
	if(var_767_int == 0) {
		var_765_bool = true;
		return 0;
	}
	var_765_bool = false;
}


void func_12354(bool var_159_bool, string var_160_string)
{
	bool var_162_bool;
	bool var_163_bool;
	func_12644(var_163_bool);
	if(var_163_bool != 0) {
		@lshHasSpeech(var_162_bool, var_160_string);
		if(var_162_bool != 0) {
			@lshPlaySpeech(var_160_string);
			var_159_bool = true;
		}
	}
	var_159_bool = false;
}


// @pe
void func_13379(object var_214_object)
{
	@Trace("feromicin is given");
	object var_217_object;
	var_214_object = var_217_object;
	func_12479(var_217_object, "feromicin", 1);
}


// @pe
void func_14412(bool var_1462_bool)
{
	int var_1464_int;
	func_12403(var_1464_int, "b7q01");
	if(var_1464_int == 0) {
		var_1462_bool = true;
		return 0;
	}
	var_1462_bool = false;
}


// @pe
void func_13390(object var_186_object)
{
	object var_190_object;
	func_14825(var_190_object);
	object var_187_object;
	var_190_object = var_187_object;
	func_14842(var_187_object, "pt_map_andrei", (float)2);
	object var_191_object;
	func_14825(var_191_object);
	var_186_object->ShowMap(var_191_object);
}


void func_12369(void)
{
	bool var_94_bool;
	func_12644(var_94_bool);
	if(var_94_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1109(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_899_object, object var_900_object)
{
	var_0_object = var_900_object;
	var_1_object = var_899_object;
	var_3_string = false;
	if(1 != 0) {
		object var_906_object; object var_907_object;
		var_906_object = var_1_object;
		var_907_object = var_0_object;
		func_13251();
		func_1244(var_900_object, "Neutral");
		var_0_object->SetMessage(518350); //@t
		var_0_object->ClearReplies(); //@t
		bool var_919_bool;
		func_14001(var_1_object);
		if(var_919_bool != 0)
			var_0_object->AddReply(518352, 19466, 19465); //@t
		bool var_928_bool = false;
		bool var_929_bool;
		func_14013(var_1_object);
		if(var_929_bool != 0) {
			bool var_935_bool;
			func_13950(var_935_bool, var_1_object);
			if(var_935_bool != 0)
				var_928_bool = true;
		}
		if(var_928_bool != 0)
			var_0_object->AddReply(518358, 19472, 19471); //@t
		bool var_959_bool = false;
		bool var_960_bool;
		func_14059(var_1_object);
		if(var_960_bool != 0) {
			bool var_966_bool;
			func_14259(var_1_object);
			if(var_966_bool != 0)
				var_959_bool = true;
		}
		if(var_959_bool != 0)
			var_0_object->AddReply(518361, 19475, 19474); //@t
		bool var_975_bool;
		func_14247(var_1_object);
		if(var_975_bool != 0)
			var_0_object->AddReply(519361, 20523, 20522); //@t
		bool var_984_bool = false;
		bool var_985_bool;
		func_13891(var_985_bool, var_1_object);
		if(var_985_bool != 0) {
			bool var_990_bool;
			func_13926(var_1_object);
			if(var_990_bool != 0)
				var_984_bool = true;
		}
		if(var_984_bool != 0)
			var_0_object->AddReply(530617, 31920, 31919); //@t
		var_0_object->AddReply(518351, -1, 19464); //@t
		goto Label_1214;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x459";
	}
Label_1214:
	bool var_1002_bool;
	func_12644(var_1002_bool);
	if(var_1002_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1243;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1243:
		return 0;

	}
	
}


void func_12376(object var_127_object)
{
	object var_129_object;
	@self(var_129_object);
	var_129_object = var_127_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_14424(bool var_1945_bool)
{
	bool var_1947_bool;
	func_14948(var_1947_bool);
	var_1947_bool = var_1945_bool;
}


// @pe
void func_7260(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_12644(var_288_bool);
	if(!var_288_bool) //@nz
		return 0;
	if(var_287_string == var_2_object)
		return 0;
	string var_291_string; bool var_292_bool;
	var_287_string = var_291_string;
	if(var_287_string == "")
		var_292_bool = false;
	else
		var_292_bool = true;
	func_12348(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_368_object, object var_369_object)
{
	var_0_object = var_369_object;
	var_1_object = var_368_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_369_object, "Neutral");
		var_0_object->SetMessage(529906); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529907, -1, 31290); //@t
		var_0_object->AddReply(529908, -1, 31291); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_390_bool;
	func_12644(var_390_bool);
	if(var_390_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


// @pe
void func_13406(object var_194_object)
{
	@Trace("morfin is given");
	object var_197_object;
	var_194_object = var_197_object;
	func_12479(var_197_object, "morfin", 1);
}


void func_12382(cvector var_247_cvector, cvector var_248_cvector)
{
	float var_251_float = sqrt(var_248_cvector | var_248_cvector);
	if(var_251_float < 0.000001)
		var_247_cvector = [0.0, 0.0, 0.0];
	var_247_cvector = var_248_cvector / var_251_float;
}


void func_14433(void)
{
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 305, 1, 521956);
	bool var_106_bool; object var_107_object;
	var_102_object = var_107_object;
	func_14797(var_106_bool, var_107_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_14430(bool var_1387_bool)
{
	var_1387_bool = false;
}


// @pe
void func_12392(float var_155_float, float var_156_float, float var_157_float, float var_158_float)
{
	if(var_156_float < var_157_float) {
		var_157_float = var_155_float;
		return 0;
	}
	if(var_156_float > var_158_float) {
		var_158_float = var_155_float;
		return 0;
	}
	var_156_float = var_155_float;
}


// @pe
void func_13417(object var_200_object)
{
	@Trace("etorfin is given");
	object var_203_object;
	var_200_object = var_203_object;
	func_12479(var_203_object, "etorfin", 1);
}


void func_5224(object var_0_object, int var_715_int, object var_716_object)
{
	var_0_object = var_716_object;
	bool var_726_bool; object var_727_object;
	object var_728_object;
	func_12376(var_728_object);
	var_728_object = var_727_object;
	func_12203(var_726_bool, var_727_object);
	bool var_729_bool; object var_730_object;
	var_716_object = var_730_object;
	func_12118(var_729_bool, var_730_object, 70.0);
	if(!var_729_bool) { //@nz
		var_715_int = -2;
		return 8;
	}
	object var_722_object;
	@CreateDialog(var_722_object);
	int var_733_int;
	func_12638(var_733_int);
	var_722_object->SetNPCName(var_733_int);
	int var_734_int;
	func_12636(var_734_int);
	var_722_object->SetNPCDescription(var_734_int);
	string var_735_string;
	func_12640(var_735_string);
	var_722_object->SetPhoto(var_735_string);
	string var_736_string;
	func_12642(var_736_string);
	var_722_object->SetPhoto2(var_736_string);
	int var_737_int;
	func_14875(var_737_int);
	var_722_object->SetPlayerName(var_737_int);
	bool var_723_bool;
	@IsOverrideActive(var_723_bool);
	if(var_723_bool != 0) {
		var_715_int = -2;
		return 8;
	}
	@DoDialog(var_722_object);
	object var_739_object; object var_740_object;
	var_716_object = var_739_object;
	var_722_object = var_740_object;
	TaskCall(20);
	func_5305(var_741_object, var_742_object, var_743_string, var_744_bool, var_739_object, var_740_object);
	TaskReturn();
	bool var_725_bool;
	var_722_object->IsDialogEnd(var_725_bool);
	
	for(;;) {
		var_871_bool = !var_725_bool; //@nz
		if(var_871_bool == 0) goto Label_5294;
		@sync();
		var_722_object->IsDialogEnd(var_725_bool);
	}
	
Label_5294:
	object var_872_object;
	var_716_object = var_872_object;
	func_12186();
	@StopDialog(var_722_object);
	var_722_object->GetReturnValue(-1);
	int var_724_int = var_715_int;
}
EMIT "Stack[-4] = 0";


void func_14446(void)
{
	object var_143_object;
	@CreateDiaryEntry(var_143_object, 310, 1, 521961);
	bool var_147_bool; object var_148_object;
	var_143_object = var_148_object;
	func_14797(var_147_bool, var_148_object, 305);
}
EMIT "Stack[-1] = 0";


void func_12403(int var_669_int, string var_670_string)
{
	int var_672_int;
	@GetVariable(var_670_string, var_672_int);
	var_672_int = var_669_int;
}


// @pe
void func_13428(object var_188_object)
{
	@Trace("novocaine is given");
	object var_191_object;
	var_188_object = var_191_object;
	func_12479(var_191_object, "novocaine", 1);
}


void func_12408(object var_287_object, string var_288_string)
{
	object var_291_object;
	@GetMainOutdoorScene(var_291_object);
	object var_292_object;
	@AddBlankActor(var_292_object, var_291_object, var_288_string, (var_288_string + ".bin"));
	var_292_object = var_287_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_14459(void)
{
	object var_155_object;
	@CreateDiaryEntry(var_155_object, 311, 1, 521962);
	bool var_159_bool; object var_160_object;
	var_155_object = var_160_object;
	func_14797(var_159_bool, var_160_object, 305);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13439(object var_146_object)
{
	@Trace("delta_pills is given");
	object var_149_object;
	var_146_object = var_149_object;
	func_12479(var_149_object, "delta_pills", 1);
}


void func_12419(string var_156_string, bool var_157_bool)
{
	object var_159_object;
	@FindActor(var_159_object, var_156_string);
	if(!var_159_object) //@nz
		@Trace(("Door " + var_156_string) + " not found");
	else
		var_159_object->SetProperty("locked", var_157_bool);
	
}
EMIT "Stack[-1] = 0";


void func_14472(void)
{
	object var_125_object;
	@CreateDiaryEntry(var_125_object, 306, 1, 521957);
	bool var_129_bool; object var_130_object;
	var_125_object = var_130_object;
	func_14797(var_129_bool, var_130_object, 305);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13450(object var_220_object)
{
	@Trace("neomicin is given");
	object var_223_object;
	var_220_object = var_223_object;
	func_12479(var_223_object, "neomicin", 1);
}


void func_12436(int var_165_int, int var_166_int)
{
	object var_168_object;
	@CreateIntVector(var_168_object);
	var_168_object->add(var_165_int);
	var_168_object->add(var_166_int);
	@SendWorldWndMessage(3, var_168_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13461(object var_226_object)
{
	@Trace("monomicin is given");
	object var_229_object;
	var_226_object = var_229_object;
	func_12479(var_229_object, "monomicin", 1);
}


void func_14485(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 315, 1, 522057);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_14797(var_112_bool, var_113_object, 313);
}
EMIT "Stack[-1] = 0";


// @pe
void func_152(object var_2_object, string var_375_string)
{
	bool var_376_bool;
	func_12644(var_376_bool);
	if(!var_376_bool) //@nz
		return 0;
	if(var_375_string == var_2_object)
		return 0;
	string var_379_string; bool var_380_bool;
	var_375_string = var_379_string;
	if(var_375_string == "")
		var_380_bool = false;
	else
		var_380_bool = true;
	func_12348(var_379_string, var_380_bool);
	var_2_object = var_375_string;
	
}


// @pe
void func_13472(void)
{
	func_12419("sobor@door1", false);
}


void func_12448(int var_117_int, int var_118_int)
{
	object var_120_object;
	@CreateIntVector(var_120_object);
	var_120_object->add(var_117_int);
	var_120_object->add(var_118_int);
	@SendWorldWndMessage(4, var_120_object);
}
EMIT "Stack[-1] = 0";


void func_14498(void)
{
	object var_183_object;
	@CreateDiaryEntry(var_183_object, 609, 2, 531504);
	bool var_187_bool; object var_188_object;
	var_183_object = var_188_object;
	func_14797(var_187_bool, var_188_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13479(void)
{
	@SetVariable("b3q02", 3);
	func_14602();
}


void func_12460(object var_154_object, object var_155_object, int var_156_int)
{
	int var_160_int;
	var_155_object->GetItemID(var_160_int);
	int var_161_int;
	@GetInvItemProperty(var_161_int, var_160_int, "Category");
	bool var_162_bool;
	var_154_object->AddItem(var_162_bool, var_155_object, var_161_int, var_156_int);
	if(!var_162_bool) { //@nz
		var_154_object->DropItems(var_155_object, var_156_int);
	} else {
		int var_165_int; int var_166_int;
		var_160_int = var_165_int;
		var_156_int = var_166_int;
		func_12436(var_165_int, var_166_int);
	}
	
}


void func_14511(void)
{
	object var_167_object;
	@CreateDiaryEntry(var_167_object, 600, 2, 531151);
	bool var_171_bool; object var_172_object;
	var_167_object = var_172_object;
	func_14797(var_171_bool, var_172_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13488(bool var_275_bool)
{
	int var_277_int;
	func_12403(var_277_int, "b8q01");
	if(var_277_int == 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


void func_7352(object var_0_object, int var_1431_int, object var_1432_object)
{
	var_0_object = var_1432_object;
	bool var_1442_bool; object var_1443_object;
	object var_1444_object;
	func_12376(var_1444_object);
	var_1444_object = var_1443_object;
	func_12203(var_1442_bool, var_1443_object);
	bool var_1445_bool; object var_1446_object;
	var_1432_object = var_1446_object;
	func_12118(var_1445_bool, var_1446_object, 70.0);
	if(!var_1445_bool) { //@nz
		var_1431_int = -2;
		return 8;
	}
	object var_1438_object;
	@CreateDialog(var_1438_object);
	int var_1449_int;
	func_12638(var_1449_int);
	var_1438_object->SetNPCName(var_1449_int);
	int var_1450_int;
	func_12636(var_1450_int);
	var_1438_object->SetNPCDescription(var_1450_int);
	string var_1451_string;
	func_12640(var_1451_string);
	var_1438_object->SetPhoto(var_1451_string);
	string var_1452_string;
	func_12642(var_1452_string);
	var_1438_object->SetPhoto2(var_1452_string);
	int var_1453_int;
	func_14875(var_1453_int);
	var_1438_object->SetPlayerName(var_1453_int);
	bool var_1439_bool;
	@IsOverrideActive(var_1439_bool);
	if(var_1439_bool != 0) {
		var_1431_int = -2;
		return 8;
	}
	@DoDialog(var_1438_object);
	object var_1455_object; object var_1456_object;
	var_1432_object = var_1455_object;
	var_1438_object = var_1456_object;
	TaskCall(26);
	func_7433(var_1457_object, var_1458_object, var_1459_string, var_1460_bool, var_1455_object, var_1456_object);
	TaskReturn();
	bool var_1441_bool;
	var_1438_object->IsDialogEnd(var_1441_bool);
	
	for(;;) {
		var_1493_bool = !var_1441_bool; //@nz
		if(var_1493_bool == 0) goto Label_7422;
		@sync();
		var_1438_object->IsDialogEnd(var_1441_bool);
	}
	
Label_7422:
	object var_1494_object;
	var_1432_object = var_1494_object;
	func_12186();
	@StopDialog(var_1438_object);
	var_1438_object->GetReturnValue(-1);
	int var_1440_int = var_1431_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5305(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_739_object, object var_740_object)
{
	var_0_object = var_740_object;
	var_1_object = var_739_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_746_bool;
		func_13843(var_1_object);
		if(var_746_bool != 0) {
			object var_752_object; object var_753_object;
			var_752_object = var_1_object;
			var_753_object = var_0_object;
			func_12838();
			func_5490(var_740_object, "Neutral");
			var_0_object->SetMessage(520332); //@t
			var_0_object->ClearReplies(); //@t
			bool var_765_bool;
			func_14400(var_1_object);
			if(var_765_bool != 0)
				var_0_object->AddReply(520333, 21529, 21528); //@t
			var_0_object->AddReply(520347, -1, 21544); //@t
		} else {
					bool var_785_bool = false;
					bool var_786_bool;
					func_14343(var_1_object);
					if(var_786_bool != 0) {
						bool var_792_bool;
						func_13855(var_1_object);
						if(var_792_bool != 0)
							var_785_bool = true;
					}
					if(var_785_bool == 0) goto Label_5385;
					object var_798_object; object var_799_object;
					var_798_object = var_1_object;
					var_799_object = var_0_object;
					func_12820();
					func_5490(var_740_object, "Neutral");
					var_0_object->SetMessage(520348); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520349, 21548, 21547); //@t
					var_0_object->AddReply(520368, 21548, 21571); //@t
		}
	}
Label_5460:
	for(;;) {
		bool var_777_bool;
		func_12644(var_777_bool);
		if(var_777_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_5489;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5489:
			return 0;

		}

	}
	
Label_5385:
	func_5490(var_740_object, "Neutral");
	var_0_object->SetMessage(520369); //@t
	var_0_object->ClearReplies(); //@t
	bool var_812_bool = false;
	bool var_813_bool = false;
	bool var_814_bool;
	func_14367(var_814_bool, var_1_object);
	if(var_814_bool != 0) {
		bool var_827_bool;
		func_14388(var_1_object);
		if(var_827_bool != 0)
			var_813_bool = true;
	}
	if(var_813_bool != 0) {
		bool var_833_bool;
		func_13867(var_1_object);
		if(var_833_bool != 0)
			var_812_bool = true;
	}
	if(var_812_bool != 0)
		var_0_object->AddReply(520370, -1, 21574); //@t
	bool var_842_bool = false;
	bool var_843_bool;
	func_13879(var_1_object);
	if(var_843_bool != 0) {
		bool var_849_bool;
		func_14331(var_1_object);
		if(!var_849_bool) //@nz
			var_842_bool = true;
	}
	if(var_842_bool != 0)
		var_0_object->AddReply(520372, 21577, 21576); //@t
	bool var_859_bool;
	func_14355(var_1_object);
	if(var_859_bool != 0)
		var_0_object->AddReply(520388, 21595, 21594); //@t
	var_0_object->AddReply(520397, -1, 21603); //@t
	goto Label_5460;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x14bd";


// @pe
void func_13500(bool var_1528_bool)
{
	int var_1530_int;
	func_12403(var_1530_int, "oob8Danko1");
	if(var_1530_int == 0) {
		var_1528_bool = true;
		return 0;
	}
	var_1528_bool = false;
}


void func_14524(void)
{
	object var_143_object;
	@CreateDiaryEntry(var_143_object, 555, 2, 530530);
	bool var_147_bool; object var_148_object;
	var_143_object = var_148_object;
	func_14797(var_147_bool, var_148_object, 551);
}
EMIT "Stack[-1] = 0";


void func_2238(object var_0_object, int var_1014_int, object var_1015_object)
{
	var_0_object = var_1015_object;
	bool var_1025_bool; object var_1026_object;
	object var_1027_object;
	func_12376(var_1027_object);
	var_1027_object = var_1026_object;
	func_12203(var_1025_bool, var_1026_object);
	bool var_1028_bool; object var_1029_object;
	var_1015_object = var_1029_object;
	func_12118(var_1028_bool, var_1029_object, 70.0);
	if(!var_1028_bool) { //@nz
		var_1014_int = -2;
		return 8;
	}
	object var_1021_object;
	@CreateDialog(var_1021_object);
	int var_1032_int;
	func_12638(var_1032_int);
	var_1021_object->SetNPCName(var_1032_int);
	int var_1033_int;
	func_12636(var_1033_int);
	var_1021_object->SetNPCDescription(var_1033_int);
	string var_1034_string;
	func_12640(var_1034_string);
	var_1021_object->SetPhoto(var_1034_string);
	string var_1035_string;
	func_12642(var_1035_string);
	var_1021_object->SetPhoto2(var_1035_string);
	int var_1036_int;
	func_14875(var_1036_int);
	var_1021_object->SetPlayerName(var_1036_int);
	bool var_1022_bool;
	@IsOverrideActive(var_1022_bool);
	if(var_1022_bool != 0) {
		var_1014_int = -2;
		return 8;
	}
	@DoDialog(var_1021_object);
	object var_1038_object; object var_1039_object;
	var_1015_object = var_1038_object;
	var_1021_object = var_1039_object;
	TaskCall(14);
	func_2319(var_1040_object, var_1041_object, var_1042_string, var_1043_bool, var_1038_object, var_1039_object);
	TaskReturn();
	bool var_1024_bool;
	var_1021_object->IsDialogEnd(var_1024_bool);
	
	for(;;) {
		var_1138_bool = !var_1024_bool; //@nz
		if(var_1138_bool == 0) goto Label_2308;
		@sync();
		var_1021_object->IsDialogEnd(var_1024_bool);
	}
	
Label_2308:
	object var_1139_object;
	var_1015_object = var_1139_object;
	func_12186();
	@StopDialog(var_1021_object);
	var_1021_object->GetReturnValue(-1);
	int var_1023_int = var_1014_int;
}
EMIT "Stack[-4] = 0";


void func_12479(object var_149_object, string var_150_string, int var_151_int)
{
	object var_153_object;
	@CreateInvItem(var_153_object);
	var_153_object->SetItemName(var_150_string);
	object var_154_object; object var_155_object; int var_156_int;
	var_149_object = var_154_object;
	var_153_object = var_155_object;
	var_151_int = var_156_int;
	func_12460(var_154_object, var_155_object, var_156_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13512(bool var_284_bool)
{
	bool var_286_bool = false;
	bool var_287_bool = false;
	int var_288_int;
	func_12403(var_288_int, "b8q01");
	if(var_288_int != 0) {
		int var_292_int;
		func_12403(var_292_int, "b8q01");
		if(var_292_int != 1000)
			var_287_bool = true;
	}
	if(var_287_bool != 0) {
		int var_296_int;
		func_12403(var_296_int, "b8q01");
		if(var_296_int != -1)
			var_286_bool = true;
	}
	if(var_286_bool != 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


void func_14537(void)
{
	object var_137_object;
	@CreateDiaryEntry(var_137_object, 614, 1, 532003);
	bool var_141_bool; object var_142_object;
	var_137_object = var_142_object;
	func_14797(var_141_bool, var_142_object, 613);
}
EMIT "Stack[-1] = 0";


void func_12492(bool var_817_bool, object var_818_object, string var_819_string)
{
	int var_822_int;
	@GetInvItemByName(var_822_int, var_819_string);
	bool var_823_bool;
	var_818_object->HasItem(var_822_int, var_823_bool);
	var_823_bool = var_817_bool;
}


void func_12499(bool var_106_bool, object var_107_object, string var_108_string)
{
	int var_112_int;
	@GetInvItemByName(var_112_int, var_108_string);
	int var_113_int;
	@GetInvItemProperty(var_113_int, var_112_int, "Category");
	bool var_114_bool;
	var_107_object->RemoveItemByType(var_114_bool, var_112_int, var_113_int);
	if(var_114_bool != 0) {
		int var_117_int;
		var_112_int = var_117_int;
		func_12448(var_117_int, 1);
	}
	var_114_bool = var_106_bool;
}


void func_14550(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 695, 1, 535403);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_14797(var_112_bool, var_113_object, 613);
}
EMIT "Stack[-1] = 0";


void func_216(object var_0_object, int var_402_int, object var_403_object)
{
	var_0_object = var_403_object;
	bool var_413_bool; object var_414_object;
	object var_415_object;
	func_12376(var_415_object);
	var_415_object = var_414_object;
	func_12203(var_413_bool, var_414_object);
	bool var_416_bool; object var_417_object;
	var_403_object = var_417_object;
	func_12118(var_416_bool, var_417_object, 70.0);
	if(!var_416_bool) { //@nz
		var_402_int = -2;
		return 8;
	}
	object var_409_object;
	@CreateDialog(var_409_object);
	int var_420_int;
	func_12638(var_420_int);
	var_409_object->SetNPCName(var_420_int);
	int var_421_int;
	func_12636(var_421_int);
	var_409_object->SetNPCDescription(var_421_int);
	string var_422_string;
	func_12640(var_422_string);
	var_409_object->SetPhoto(var_422_string);
	string var_423_string;
	func_12642(var_423_string);
	var_409_object->SetPhoto2(var_423_string);
	int var_424_int;
	func_14875(var_424_int);
	var_409_object->SetPlayerName(var_424_int);
	bool var_410_bool;
	@IsOverrideActive(var_410_bool);
	if(var_410_bool != 0) {
		var_402_int = -2;
		return 8;
	}
	@DoDialog(var_409_object);
	object var_426_object; object var_427_object;
	var_403_object = var_426_object;
	var_409_object = var_427_object;
	TaskCall(4);
	func_297(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object);
	TaskReturn();
	bool var_412_bool;
	var_409_object->IsDialogEnd(var_412_bool);
	
	for(;;) {
		var_456_bool = !var_412_bool; //@nz
		if(var_456_bool == 0) goto Label_286;
		@sync();
		var_409_object->IsDialogEnd(var_412_bool);
	}
	
Label_286:
	object var_457_object;
	var_403_object = var_457_object;
	func_12186();
	@StopDialog(var_409_object);
	var_409_object->GetReturnValue(-1);
	int var_411_int = var_402_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1244(object var_2_object, string var_910_string)
{
	bool var_911_bool;
	func_12644(var_911_bool);
	if(!var_911_bool) //@nz
		return 0;
	if(var_910_string == var_2_object)
		return 0;
	string var_914_string; bool var_915_bool;
	var_910_string = var_914_string;
	if(var_910_string == "")
		var_915_bool = false;
	else
		var_915_bool = true;
	func_12348(var_914_string, var_915_bool);
	var_2_object = var_910_string;
	
}


void func_14563(void)
{
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 244, 1, 520448);
	bool var_106_bool; object var_107_object;
	var_102_object = var_107_object;
	func_14797(var_106_bool, var_107_object, 242);
}
EMIT "Stack[-1] = 0";


// @pe
void func_12516(bool var_126_bool, object var_127_object, float var_128_float)
{
	if(!var_127_object) { //@nz
		var_126_bool = false;
		return 0;
	}
	if(var_128_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_128_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_133_float;
		var_128_float = var_133_float;
		func_12551(var_133_float);
		bool var_137_bool; object var_138_object; float var_140_float;
		var_127_object = var_138_object;
		var_128_float = var_140_float;
		func_12072(var_137_bool, var_138_object, "reputation", var_140_float, (float)0, (float)1);
		var_126_bool = true;
		return 0;

	}
	
	var_126_bool = false;
}


void func_3305(object var_0_object, int var_1142_int, object var_1143_object)
{
	var_0_object = var_1143_object;
	bool var_1153_bool; object var_1154_object;
	object var_1155_object;
	func_12376(var_1155_object);
	var_1155_object = var_1154_object;
	func_12203(var_1153_bool, var_1154_object);
	bool var_1156_bool; object var_1157_object;
	var_1143_object = var_1157_object;
	func_12118(var_1156_bool, var_1157_object, 70.0);
	if(!var_1156_bool) { //@nz
		var_1142_int = -2;
		return 8;
	}
	object var_1149_object;
	@CreateDialog(var_1149_object);
	int var_1160_int;
	func_12638(var_1160_int);
	var_1149_object->SetNPCName(var_1160_int);
	int var_1161_int;
	func_12636(var_1161_int);
	var_1149_object->SetNPCDescription(var_1161_int);
	string var_1162_string;
	func_12640(var_1162_string);
	var_1149_object->SetPhoto(var_1162_string);
	string var_1163_string;
	func_12642(var_1163_string);
	var_1149_object->SetPhoto2(var_1163_string);
	int var_1164_int;
	func_14875(var_1164_int);
	var_1149_object->SetPlayerName(var_1164_int);
	bool var_1150_bool;
	@IsOverrideActive(var_1150_bool);
	if(var_1150_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	@DoDialog(var_1149_object);
	object var_1166_object; object var_1167_object;
	var_1143_object = var_1166_object;
	var_1149_object = var_1167_object;
	TaskCall(16);
	func_3386(var_1168_object, var_1169_object, var_1170_string, var_1171_bool, var_1166_object, var_1167_object);
	TaskReturn();
	bool var_1152_bool;
	var_1149_object->IsDialogEnd(var_1152_bool);
	
	for(;;) {
		var_1318_bool = !var_1152_bool; //@nz
		if(var_1318_bool == 0) goto Label_3375;
		@sync();
		var_1149_object->IsDialogEnd(var_1152_bool);
	}
	
Label_3375:
	object var_1319_object;
	var_1143_object = var_1319_object;
	func_12186();
	@StopDialog(var_1149_object);
	var_1149_object->GetReturnValue(-1);
	int var_1151_int = var_1142_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_13546(bool var_1569_bool)
{
	int var_1571_int;
	func_12403(var_1571_int, "oob8DankoStop");
	if(var_1571_int != 0) {
		var_1569_bool = true;
		return 0;
	}
	var_1569_bool = false;
}


void func_14576(void)
{
	object var_205_object;
	@CreateDiaryEntry(var_205_object, 248, 1, 520469);
	bool var_209_bool; object var_210_object;
	var_205_object = var_210_object;
	func_14797(var_209_bool, var_210_object, 245);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13558(bool var_1576_bool)
{
	int var_1578_int;
	func_12403(var_1578_int, "oob8Danko2");
	if(var_1578_int == 0) {
		var_1576_bool = true;
		return 0;
	}
	var_1576_bool = false;
}


void func_14589(void)
{
	object var_126_object;
	@CreateDiaryEntry(var_126_object, 573, 1, 530606);
	bool var_130_bool; object var_131_object;
	var_126_object = var_131_object;
	func_14797(var_130_bool, var_131_object, 245);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13570(bool var_1582_bool)
{
	int var_1584_int;
	func_12403(var_1584_int, "b8q01KnowSgustki");
	if(var_1584_int != 0) {
		var_1582_bool = true;
		return 0;
	}
	var_1582_bool = false;
}


void func_12551(float var_133_float)
{
	object var_135_object;
	@CreateFloatVector(var_135_object);
	var_135_object->add(var_133_float);
	@SendWorldWndMessage(16, var_135_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7433(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1455_object, object var_1456_object)
{
	var_0_object = var_1456_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1462_bool;
		func_14412(var_1455_object);
		if(var_1462_bool != 0) {
			func_7506(var_1456_object, "Neutral");
			var_0_object->SetMessage(520966); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528598, 29999, 29998); //@t
		} else {
					func_7506(var_1456_object, "Neutral");
					var_0_object->SetMessage(520968); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520969, -1, 22182); //@t
		}
	}
	for(;;) {
		bool var_1480_bool;
		func_12644(var_1480_bool);
		if(var_1480_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_7505;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_7505:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1d0d";


void func_14602(void)
{
	object var_368_object;
	@CreateDiaryEntry(var_368_object, 230, 2, 519658);
	bool var_372_bool; object var_373_object;
	var_368_object = var_373_object;
	func_14797(var_372_bool, var_373_object, 227);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13582(bool var_1687_bool)
{
	int var_1689_int;
	func_12403(var_1689_int, "b10q01");
	if(var_1689_int == 0) {
		var_1687_bool = true;
		return 0;
	}
	var_1687_bool = false;
}


// @pe
void func_2319(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1038_object, object var_1039_object)
{
	var_0_object = var_1039_object;
	var_1_object = var_1038_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1045_bool;
		func_14083(var_1_object);
		if(var_1045_bool != 0) {
			object var_1051_object; object var_1052_object;
			var_1051_object = var_1_object;
			var_1052_object = var_0_object;
			func_12686();
			func_2488(var_1039_object, "Neutral");
			var_0_object->SetMessage(518531); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519073, 20199, 20198); //@t
			var_0_object->AddReply(519077, 20203, 20202); //@t
		} else {
					func_2488(var_1039_object, "Neutral");
					var_0_object->SetMessage(518536); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1080_bool;
					func_14071(var_1_object);
					if(var_1080_bool != 0)
						var_0_object->AddReply(518537, 19648, 19647); //@t
					bool var_1089_bool = false;
					bool var_1090_bool = false;
					bool var_1091_bool;
					func_14107(var_1091_bool, var_1_object);
					if(var_1091_bool != 0) {
						bool var_1096_bool;
						func_14118(var_1_object);
						if(var_1096_bool != 0)
							var_1090_bool = true;
					}
					if(var_1090_bool != 0) {
						bool var_1102_bool;
						func_14095(var_1_object);
						if(!var_1102_bool) //@nz
							var_1089_bool = true;
					}
					if(var_1089_bool != 0)
						var_0_object->AddReply(518540, 19651, 19650); //@t
					bool var_1112_bool = false;
					bool var_1113_bool = false;
					bool var_1114_bool;
					func_14095(var_1_object);
					if(var_1114_bool != 0) {
						bool var_1116_bool;
						func_14107(var_1116_bool, var_1_object);
						if(var_1116_bool != 0)
							var_1113_bool = true;
					}
					if(var_1113_bool != 0) {
						bool var_1118_bool;
						func_14118(var_1_object);
						if(var_1118_bool != 0)
							var_1112_bool = true;
					}
					if(var_1112_bool != 0)
						var_0_object->AddReply(518543, 19654, 19653); //@t
					bool var_1123_bool = false;
					bool var_1124_bool;
					func_13891(var_1124_bool, var_1_object);
					if(var_1124_bool != 0) {
						bool var_1126_bool;
						func_14130(var_1_object);
						if(var_1126_bool != 0)
							var_1123_bool = true;
					}
					if(var_1123_bool != 0)
						var_0_object->AddReply(530627, 31931, 31930); //@t
					var_0_object->AddReply(518546, -1, 19656); //@t
		}
	}
	for(;;) {
		bool var_1070_bool;
		func_12644(var_1070_bool);
		if(var_1070_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2487;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2487:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x913";


void func_12561(bool var_150_bool, string var_151_string, string var_152_string)
{
	object var_154_object;
	@FindActor(var_154_object, var_151_string);
	if(var_154_object == null)
		var_150_bool = false;
	@Trigger(var_154_object, var_152_string);
	var_150_bool = true;
}
EMIT "Stack[-1] = 0";


void func_6419(object var_0_object, int var_1322_int, object var_1323_object)
{
	var_0_object = var_1323_object;
	bool var_1333_bool; object var_1334_object;
	object var_1335_object;
	func_12376(var_1335_object);
	var_1335_object = var_1334_object;
	func_12203(var_1333_bool, var_1334_object);
	bool var_1336_bool; object var_1337_object;
	var_1323_object = var_1337_object;
	func_12118(var_1336_bool, var_1337_object, 70.0);
	if(!var_1336_bool) { //@nz
		var_1322_int = -2;
		return 8;
	}
	object var_1329_object;
	@CreateDialog(var_1329_object);
	int var_1340_int;
	func_12638(var_1340_int);
	var_1329_object->SetNPCName(var_1340_int);
	int var_1341_int;
	func_12636(var_1341_int);
	var_1329_object->SetNPCDescription(var_1341_int);
	string var_1342_string;
	func_12640(var_1342_string);
	var_1329_object->SetPhoto(var_1342_string);
	string var_1343_string;
	func_12642(var_1343_string);
	var_1329_object->SetPhoto2(var_1343_string);
	int var_1344_int;
	func_14875(var_1344_int);
	var_1329_object->SetPlayerName(var_1344_int);
	bool var_1330_bool;
	@IsOverrideActive(var_1330_bool);
	if(var_1330_bool != 0) {
		var_1322_int = -2;
		return 8;
	}
	@DoDialog(var_1329_object);
	object var_1346_object; object var_1347_object;
	var_1323_object = var_1346_object;
	var_1329_object = var_1347_object;
	TaskCall(22);
	func_6500(var_1348_object, var_1349_object, var_1350_string, var_1351_bool, var_1346_object, var_1347_object);
	TaskReturn();
	bool var_1332_bool;
	var_1329_object->IsDialogEnd(var_1332_bool);
	
	for(;;) {
		var_1427_bool = !var_1332_bool; //@nz
		if(var_1427_bool == 0) goto Label_6489;
		@sync();
		var_1329_object->IsDialogEnd(var_1332_bool);
	}
	
Label_6489:
	object var_1428_object;
	var_1323_object = var_1428_object;
	func_12186();
	@StopDialog(var_1329_object);
	var_1329_object->GetReturnValue(-1);
	int var_1331_int = var_1322_int;
}
EMIT "Stack[-4] = 0";


void func_14615(void)
{
	object var_257_object;
	@CreateDiaryEntry(var_257_object, 631, 2, 532899);
	bool var_261_bool; object var_262_object;
	var_257_object = var_262_object;
	func_14797(var_261_bool, var_262_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13594(bool var_1648_bool)
{
	int var_1650_int;
	func_12403(var_1650_int, "oob10Danko1");
	if(var_1650_int == 0) {
		var_1648_bool = true;
		return 0;
	}
	var_1648_bool = false;
}


void func_12573(float var_114_float)
{
	float var_116_float;
	@GetGameTime(var_116_float);
	var_116_float = var_114_float;
}


void func_12578(int var_180_int)
{
	float var_182_float;
	@GetGameTime(var_182_float);
	var_180_int = 1 + (var_182_float / 24);
}


void func_14628(void)
{
	object var_280_object;
	@CreateDiaryEntry(var_280_object, 632, 2, 532900);
	bool var_284_bool; object var_285_object;
	var_280_object = var_285_object;
	func_14797(var_284_bool, var_285_object, 631);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13606(bool var_1696_bool)
{
	int var_1698_int;
	func_12403(var_1698_int, "b10q01");
	if(var_1698_int == 3)
		var_1696_bool = true;
	var_1696_bool = false;
}


// @pe
void func_297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_426_object, object var_427_object)
{
	var_0_object = var_427_object;
	var_1_object = var_426_object;
	var_3_string = false;
	if(1 != 0) {
		func_355(var_427_object, "Neutral");
		var_0_object->SetMessage(529910); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529911, -1, 31294); //@t
		var_0_object->AddReply(529912, -1, 31295); //@t
		goto Label_325;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12d";
	}
Label_325:
	bool var_448_bool;
	func_12644(var_448_bool);
	if(var_448_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_354;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_354:
		return 0;

	}
	
}


// @pe
void func_12587(bool var_632_bool, int var_633_int)
{
	int var_634_int;
	func_12578(var_634_int);
	var_632_bool = var_634_int == var_633_int;
}


void func_14641(void)
{
	object var_123_object;
	@CreateDiaryEntry(var_123_object, 216, 1, 518594);
	bool var_127_bool; object var_128_object;
	var_123_object = var_128_object;
	func_14797(var_127_bool, var_128_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13618(bool var_1707_bool)
{
	int var_1709_int;
	func_12403(var_1709_int, "b10q01");
	if(var_1709_int == 4)
		var_1707_bool = true;
	var_1707_bool = false;
}


void func_12593(bool var_329_bool, int var_330_int)
{
	float var_334_float;
	@GetGameTime(var_334_float);
	if((1 + (var_334_float / 24)) != var_330_int)
		var_329_bool = false;
	int var_341_int;
	var_334_float = var_341_int;
	int var_336_int = var_341_int % 24;
	var_329_bool = var_336_int < 7;
}


// @pe
void func_3386(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1166_object, object var_1167_object)
{
	var_0_object = var_1167_object;
	var_1_object = var_1166_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1173_bool;
		func_14142(var_1_object);
		if(var_1173_bool != 0) {
			object var_1179_object; object var_1180_object;
			var_1179_object = var_1_object;
			var_1180_object = var_0_object;
			func_12744();
			func_3634(var_1167_object, "Neutral");
			var_0_object->SetMessage(518609); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518750, 19843, 19842); //@t
			var_0_object->AddReply(518748, 19845, 19840); //@t
		} else {
					func_3634(var_1167_object, "Neutral");
					var_0_object->SetMessage(518612); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1208_bool;
					func_14154(var_1_object);
					if(var_1208_bool != 0)
						var_0_object->AddReply(518613, 19996, 19705); //@t
					bool var_1217_bool = false;
					bool var_1218_bool = false;
					bool var_1219_bool = false;
					bool var_1220_bool;
					func_14166(var_1_object);
					if(var_1220_bool != 0) {
						bool var_1226_bool;
						func_14178(var_1_object);
						if(!var_1226_bool) //@nz
							var_1219_bool = true;
					}
					if(var_1219_bool != 0) {
						bool var_1233_bool;
						func_14223(var_1_object);
						if(var_1233_bool != 0)
							var_1218_bool = true;
					}
					if(var_1218_bool != 0) {
						bool var_1239_bool;
						func_14235(var_1_object);
						if(var_1239_bool != 0)
							var_1217_bool = true;
					}
					if(var_1217_bool != 0)
						var_0_object->AddReply(518633, 20000, 19725); //@t
					bool var_1248_bool = false;
					bool var_1249_bool = false;
					bool var_1250_bool;
					func_14190(var_1250_bool, var_1_object);
					if(var_1250_bool != 0) {
						bool var_1255_bool;
						func_14223(var_1_object);
						if(var_1255_bool != 0)
							var_1249_bool = true;
					}
					if(var_1249_bool != 0) {
						bool var_1257_bool;
						func_13807(var_1_object);
						if(!var_1257_bool) //@nz
							var_1248_bool = true;
					}
					if(var_1248_bool != 0)
						var_0_object->AddReply(518636, 19729, 19728); //@t
					bool var_1267_bool = false;
					bool var_1268_bool = false;
					bool var_1269_bool;
					func_14201(var_1269_bool, var_1_object);
					if(var_1269_bool != 0) {
						bool var_1274_bool;
						func_14223(var_1_object);
						if(var_1274_bool != 0)
							var_1268_bool = true;
					}
					if(var_1268_bool != 0) {
						bool var_1276_bool;
						func_13807(var_1_object);
						if(!var_1276_bool) //@nz
							var_1267_bool = true;
					}
					if(var_1267_bool != 0)
						var_0_object->AddReply(518639, 19732, 19731); //@t
					bool var_1282_bool = false;
					bool var_1283_bool = false;
					bool var_1284_bool;
					func_14212(var_1284_bool, var_1_object);
					if(var_1284_bool != 0) {
						bool var_1289_bool;
						func_14223(var_1_object);
						if(var_1289_bool != 0)
							var_1283_bool = true;
					}
					if(var_1283_bool != 0) {
						bool var_1291_bool;
						func_13807(var_1_object);
						if(!var_1291_bool) //@nz
							var_1282_bool = true;
					}
					if(var_1282_bool != 0)
						var_0_object->AddReply(518642, 19735, 19734); //@t
					bool var_1297_bool = false;
					bool var_1298_bool;
					func_13807(var_1_object);
					if(var_1298_bool != 0) {
						bool var_1300_bool;
						func_13819(var_1_object);
						if(!var_1300_bool) //@nz
							var_1297_bool = true;
					}
					if(var_1297_bool != 0)
						var_0_object->AddReply(529822, 31272, 31271); //@t
					bool var_1310_bool;
					func_13891(var_1310_bool, var_1_object);
					if(var_1310_bool != 0)
						var_0_object->AddReply(530667, 31961, 31960); //@t
					var_0_object->AddReply(518618, 29655, 19710); //@t
		}
	}
	for(;;) {
		bool var_1198_bool;
		func_12644(var_1198_bool);
		if(var_1198_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3633;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3633:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd3e";


// @pe
void func_13630(bool var_1719_bool)
{
	int var_1721_int;
	func_12403(var_1721_int, "b10q01TalkKaterina");
	if(var_1721_int == 1)
		var_1719_bool = true;
	var_1719_bool = false;
}


void func_14654(void)
{
	object var_146_object;
	@CreateDiaryEntry(var_146_object, 220, 1, 518598);
	bool var_150_bool; object var_151_object;
	var_146_object = var_151_object;
	func_14797(var_150_bool, var_151_object, 216);
}
EMIT "Stack[-1] = 0";


void func_11587(object var_0_object, int var_2043_int, object var_2044_object)
{
	var_0_object = var_2044_object;
	bool var_2054_bool; object var_2055_object;
	object var_2056_object;
	func_12376(var_2056_object);
	var_2056_object = var_2055_object;
	func_12203(var_2054_bool, var_2055_object);
	bool var_2057_bool; object var_2058_object;
	var_2044_object = var_2058_object;
	func_12118(var_2057_bool, var_2058_object, 70.0);
	if(!var_2057_bool) { //@nz
		var_2043_int = -2;
		return 8;
	}
	object var_2050_object;
	@CreateDialog(var_2050_object);
	int var_2061_int;
	func_12638(var_2061_int);
	var_2050_object->SetNPCName(var_2061_int);
	int var_2062_int;
	func_12636(var_2062_int);
	var_2050_object->SetNPCDescription(var_2062_int);
	string var_2063_string;
	func_12640(var_2063_string);
	var_2050_object->SetPhoto(var_2063_string);
	string var_2064_string;
	func_12642(var_2064_string);
	var_2050_object->SetPhoto2(var_2064_string);
	int var_2065_int;
	func_14875(var_2065_int);
	var_2050_object->SetPlayerName(var_2065_int);
	bool var_2051_bool;
	@IsOverrideActive(var_2051_bool);
	if(var_2051_bool != 0) {
		var_2043_int = -2;
		return 8;
	}
	@DoDialog(var_2050_object);
	object var_2067_object; object var_2068_object;
	var_2044_object = var_2067_object;
	var_2050_object = var_2068_object;
	TaskCall(36);
	func_11668(var_2069_object, var_2070_object, var_2071_string, var_2072_bool, var_2067_object, var_2068_object);
	TaskReturn();
	bool var_2053_bool;
	var_2050_object->IsDialogEnd(var_2053_bool);
	
	for(;;) {
		var_2097_bool = !var_2053_bool; //@nz
		if(var_2097_bool == 0) goto Label_11657;
		@sync();
		var_2050_object->IsDialogEnd(var_2053_bool);
	}
	
Label_11657:
	object var_2098_object;
	var_2044_object = var_2098_object;
	func_12186();
	@StopDialog(var_2050_object);
	var_2050_object->GetReturnValue(-1);
	int var_2052_int = var_2043_int;
}
EMIT "Stack[-4] = 0";


void func_12612(string var_129_string, int var_130_int)
{
	string var_132_string = "idle";
	if(var_130_int != 0)
		var_132_string += var_130_int;
	var_132_string = var_129_string;
}


// @pe
void func_13642(bool var_1713_bool)
{
	int var_1715_int;
	func_12403(var_1715_int, "b10q01TalkKapella");
	if(var_1715_int == 1)
		var_1713_bool = true;
	var_1713_bool = false;
}


void func_12619(int var_123_int)
{
	int var_126_int; bool var_127_bool;
	var_126_int = 0;
	
	for(;;) {
		string var_129_string; int var_130_int;
		var_126_int = var_130_int;
		func_12612(var_129_string, var_130_int);
		@HasAnimation(var_127_bool, "all", var_129_string);
		if(!var_127_bool) //@nz
			break;
		var_126_int += 1;
	}
	var_126_int = var_123_int;
}


void func_14667(void)
{
	object var_308_object;
	@CreateDiaryEntry(var_308_object, 633, 2, 532901);
	bool var_312_bool; object var_313_object;
	var_308_object = var_313_object;
	func_14797(var_312_bool, var_313_object, 631);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7506(object var_2_object, string var_1468_string)
{
	bool var_1469_bool;
	func_12644(var_1469_bool);
	if(!var_1469_bool) //@nz
		return 0;
	if(var_1468_string == var_2_object)
		return 0;
	string var_1472_string; bool var_1473_bool;
	var_1468_string = var_1472_string;
	if(var_1468_string == "")
		var_1473_bool = false;
	else
		var_1473_bool = true;
	func_12348(var_1472_string, var_1473_bool);
	var_2_object = var_1468_string;
	
}


// @pe
void func_13654(bool var_369_bool)
{
	int var_371_int;
	func_12403(var_371_int, "b11q01");
	if(var_371_int == 1000)
		var_369_bool = true;
	var_369_bool = false;
}


void func_14680(void)
{
	object var_123_object;
	@CreateDiaryEntry(var_123_object, 238, 1, 519743);
	bool var_127_bool; object var_128_object;
	var_123_object = var_128_object;
	func_14797(var_127_bool, var_128_object, -1);
}
EMIT "Stack[-1] = 0";


void func_12636(int var_268_int)
{
	var_268_int = 515573;
}


void func_12638(int var_267_int)
{
	var_267_int = 504032;
}


void func_12640(string var_269_string)
{
	var_269_string = "ui/NPC_Bakalavr.png";
}


void func_12642(string var_270_string)
{
	var_270_string = "ui/NPC_Bakalavr_b.png";
}


// @pe
void func_355(object var_2_object, string var_433_string)
{
	bool var_434_bool;
	func_12644(var_434_bool);
	if(!var_434_bool) //@nz
		return 0;
	if(var_433_string == var_2_object)
		return 0;
	string var_437_string; bool var_438_bool;
	var_433_string = var_437_string;
	if(var_433_string == "")
		var_438_bool = false;
	else
		var_438_bool = true;
	func_12348(var_437_string, var_438_bool);
	var_2_object = var_433_string;
	
}


void func_12644(bool var_163_bool)
{
	var_163_bool = true;
}


// @pe
void func_6500(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1346_object, object var_1347_object)
{
	var_0_object = var_1347_object;
	var_1_object = var_1346_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1353_bool;
		func_14319(var_1_object);
		if(var_1353_bool != 0) {
			object var_1359_object; object var_1360_object;
			var_1359_object = var_1_object;
			var_1360_object = var_0_object;
			func_12797();
			func_6627(var_1347_object, "Neutral");
			var_0_object->SetMessage(520527); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520528, 21731, 21730); //@t
		} else {
					func_6627(var_1347_object, "Neutral");
					var_0_object->SetMessage(520547); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1385_bool;
					func_14049(var_1385_bool, var_1_object);
					if(var_1385_bool != 0)
						var_0_object->AddReply(520548, 21751, 21750); //@t
					bool var_1392_bool = false;
					bool var_1393_bool;
					func_13772(var_1393_bool, var_1_object);
					if(var_1393_bool != 0) {
						bool var_1398_bool;
						func_13783(var_1_object);
						if(var_1398_bool != 0)
							var_1392_bool = true;
					}
					if(var_1392_bool != 0)
						var_0_object->AddReply(522217, 23367, 23366); //@t
					bool var_1407_bool = false;
					bool var_1408_bool;
					func_13795(var_1_object);
					if(!var_1408_bool) { //@nz
						bool var_1415_bool;
						func_13902(var_1_object);
						if(var_1415_bool != 0)
							var_1407_bool = true;
					}
					if(var_1407_bool != 0)
						var_0_object->AddReply(522220, 23370, 23369); //@t
					var_0_object->AddReply(520557, -1, 21759); //@t
		}
	}
	for(;;) {
		bool var_1375_bool;
		func_12644(var_1375_bool);
		if(var_1375_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_6626;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_6626:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1968";


void func_12646(void)
{
	@SetVariable("b4q01", 1);
	object var_103_object;
	func_14825(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	float var_114_float;
	func_12573(var_114_float);
	var_100_object->AddMark("b4q01DankoGotoLaraSelf", "pt_map_eva", 1, 518592, var_114_float);
	float var_121_float;
	func_12573(var_121_float);
	var_100_object->AddMark("b4q01DankoGotoLara", "pt_map_lara", 1, 518591, var_121_float);
	func_14641();
	func_14654();
	bool var_153_bool;
	func_12561(var_153_bool, "quest_b4_01", "rubin_unlock");
}
EMIT "Stack[-1] = 0";


// @pe
void func_13666(bool var_1790_bool)
{
	int var_1792_int;
	func_12403(var_1792_int, "oob11Danko1");
	if(var_1792_int == 0) {
		var_1790_bool = true;
		return 0;
	}
	var_1790_bool = false;
}


void func_14693(void)
{
	object var_252_object;
	@CreateDiaryEntry(var_252_object, 241, 1, 519746);
	bool var_256_bool; object var_257_object;
	var_252_object = var_257_object;
	func_14797(var_256_bool, var_257_object, 238);
}
EMIT "Stack[-1] = 0";


void func_10601(object var_0_object, int var_1861_int, object var_1862_object)
{
	var_0_object = var_1862_object;
	bool var_1872_bool; object var_1873_object;
	object var_1874_object;
	func_12376(var_1874_object);
	var_1874_object = var_1873_object;
	func_12203(var_1872_bool, var_1873_object);
	bool var_1875_bool; object var_1876_object;
	var_1862_object = var_1876_object;
	func_12118(var_1875_bool, var_1876_object, 70.0);
	if(!var_1875_bool) { //@nz
		var_1861_int = -2;
		return 8;
	}
	object var_1868_object;
	@CreateDialog(var_1868_object);
	int var_1879_int;
	func_12638(var_1879_int);
	var_1868_object->SetNPCName(var_1879_int);
	int var_1880_int;
	func_12636(var_1880_int);
	var_1868_object->SetNPCDescription(var_1880_int);
	string var_1881_string;
	func_12640(var_1881_string);
	var_1868_object->SetPhoto(var_1881_string);
	string var_1882_string;
	func_12642(var_1882_string);
	var_1868_object->SetPhoto2(var_1882_string);
	int var_1883_int;
	func_14875(var_1883_int);
	var_1868_object->SetPlayerName(var_1883_int);
	bool var_1869_bool;
	@IsOverrideActive(var_1869_bool);
	if(var_1869_bool != 0) {
		var_1861_int = -2;
		return 8;
	}
	@DoDialog(var_1868_object);
	object var_1885_object; object var_1886_object;
	var_1862_object = var_1885_object;
	var_1868_object = var_1886_object;
	TaskCall(34);
	func_10682(var_1887_object, var_1888_object, var_1889_string, var_1890_bool, var_1885_object, var_1886_object);
	TaskReturn();
	bool var_1871_bool;
	var_1868_object->IsDialogEnd(var_1871_bool);
	
	for(;;) {
		var_2041_bool = !var_1871_bool; //@nz
		if(var_2041_bool == 0) goto Label_10671;
		@sync();
		var_1868_object->IsDialogEnd(var_1871_bool);
	}
	
Label_10671:
	object var_2042_object;
	var_1862_object = var_2042_object;
	func_12186();
	@StopDialog(var_1868_object);
	var_1868_object->GetReturnValue(-1);
	int var_1870_int = var_1861_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_13678(bool var_1893_bool)
{
	int var_1895_int;
	func_12403(var_1895_int, "oob12Danko1");
	if(var_1895_int == 0) {
		var_1893_bool = true;
		return 0;
	}
	var_1893_bool = false;
}


// @pe
void func_5490(object var_2_object, string var_756_string)
{
	bool var_757_bool;
	func_12644(var_757_bool);
	if(!var_757_bool) //@nz
		return 0;
	if(var_756_string == var_2_object)
		return 0;
	string var_760_string; bool var_761_bool;
	var_756_string = var_760_string;
	if(var_756_string == "")
		var_761_bool = false;
	else
		var_761_bool = true;
	func_12348(var_760_string, var_761_bool);
	var_2_object = var_756_string;
	
}


void func_14706(void)
{
	object var_146_object;
	@CreateDiaryEntry(var_146_object, 239, 1, 519744);
	bool var_150_bool; object var_151_object;
	var_146_object = var_151_object;
	func_14797(var_150_bool, var_151_object, 238);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13690(bool var_2023_bool)
{
	int var_2025_int;
	func_12403(var_2025_int, "b12q01ChildsAreVisited");
	if(var_2025_int != 0) {
		var_2023_bool = true;
		return 0;
	}
	var_2023_bool = false;
}


void func_14719(void)
{
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 265, 1, 521192);
	bool var_106_bool; object var_107_object;
	var_102_object = var_107_object;
	func_14797(var_106_bool, var_107_object, -1);
}
EMIT "Stack[-1] = 0";


void func_8579(object var_0_object, int var_1617_int, object var_1618_object)
{
	var_0_object = var_1618_object;
	bool var_1628_bool; object var_1629_object;
	object var_1630_object;
	func_12376(var_1630_object);
	var_1630_object = var_1629_object;
	func_12203(var_1628_bool, var_1629_object);
	bool var_1631_bool; object var_1632_object;
	var_1618_object = var_1632_object;
	func_12118(var_1631_bool, var_1632_object, 70.0);
	if(!var_1631_bool) { //@nz
		var_1617_int = -2;
		return 8;
	}
	object var_1624_object;
	@CreateDialog(var_1624_object);
	int var_1635_int;
	func_12638(var_1635_int);
	var_1624_object->SetNPCName(var_1635_int);
	int var_1636_int;
	func_12636(var_1636_int);
	var_1624_object->SetNPCDescription(var_1636_int);
	string var_1637_string;
	func_12640(var_1637_string);
	var_1624_object->SetPhoto(var_1637_string);
	string var_1638_string;
	func_12642(var_1638_string);
	var_1624_object->SetPhoto2(var_1638_string);
	int var_1639_int;
	func_14875(var_1639_int);
	var_1624_object->SetPlayerName(var_1639_int);
	bool var_1625_bool;
	@IsOverrideActive(var_1625_bool);
	if(var_1625_bool != 0) {
		var_1617_int = -2;
		return 8;
	}
	@DoDialog(var_1624_object);
	object var_1641_object; object var_1642_object;
	var_1618_object = var_1641_object;
	var_1624_object = var_1642_object;
	TaskCall(30);
	func_8660(var_1643_object, var_1644_object, var_1645_string, var_1646_bool, var_1641_object, var_1642_object);
	TaskReturn();
	bool var_1627_bool;
	var_1624_object->IsDialogEnd(var_1627_bool);
	
	for(;;) {
		var_1755_bool = !var_1627_bool; //@nz
		if(var_1755_bool == 0) goto Label_8649;
		@sync();
		var_1624_object->IsDialogEnd(var_1627_bool);
	}
	
Label_8649:
	object var_1756_object;
	var_1618_object = var_1756_object;
	func_12186();
	@StopDialog(var_1624_object);
	var_1624_object->GetReturnValue(-1);
	int var_1626_int = var_1617_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_13702(bool var_2029_bool)
{
	int var_2031_int;
	func_12403(var_2031_int, "oob12Danko2");
	if(var_2031_int == 0) {
		var_2029_bool = true;
		return 0;
	}
	var_2029_bool = false;
}


void func_14732(void)
{
	object var_164_object;
	@CreateDiaryEntry(var_164_object, 366, 1, 525666);
	bool var_168_bool; object var_169_object;
	var_164_object = var_169_object;
	func_14797(var_168_bool, var_169_object, 265);
}
EMIT "Stack[-1] = 0";


// @pe
void func_12686(void)
{
	@SetVariable("oob4Danko1", 1);
}


// @pe
void func_13714(bool var_1899_bool)
{
	int var_1901_int;
	func_12403(var_1901_int, "game_final");
	if(var_1901_int != 0) {
		var_1899_bool = true;
		return 0;
	}
	var_1899_bool = false;
}


// @pe
void func_12692(void)
{
	@SetVariable("oob4Danko2", 1);
}


// @pe
void func_11668(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_2067_object, object var_2068_object)
{
	var_0_object = var_2068_object;
	var_1_object = var_2067_object;
	var_3_string = false;
	if(1 != 0) {
		func_11726(var_2068_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_11696;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2d98";
	}
Label_11696:
	bool var_2089_bool;
	func_12644(var_2089_bool);
	if(var_2089_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_11725;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_11725:
		return 0;

	}
	
}


void func_14745(void)
{
	object var_125_object;
	@CreateDiaryEntry(var_125_object, 360, 1, 525660);
	bool var_129_bool; object var_130_object;
	var_125_object = var_130_object;
	func_14797(var_129_bool, var_130_object, 265);
}
EMIT "Stack[-1] = 0";


// @pe
void func_12698(void)
{
	@SetVariable("oob4Danko3", 1);
}


// @pe
void func_13726(bool var_2007_bool)
{
	int var_2009_int;
	func_12403(var_2009_int, "b12q01MariaFinalTalk");
	if(var_2009_int != 0) {
		var_2007_bool = true;
		return 0;
	}
	var_2007_bool = false;
}


void func_12704(void)
{
	@SetVariable("b5q01", 1);
	object var_103_object;
	func_14825(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	float var_114_float;
	func_12573(var_114_float);
	var_100_object->AddMark("b5q01DankoGotoAndrei", "pt_map_andrei", 1, 519742, var_114_float);
	float var_121_float;
	func_12573(var_121_float);
	var_100_object->AddMark("b5q01DankoGotoOspina", "pt_map_ospina", 1, 519741, var_121_float);
	func_14680();
	func_14706();
	bool var_153_bool;
	func_12561(var_153_bool, "quest_b5_01", "vera_kabak");
}
EMIT "Stack[-1] = 0";


void func_419(object var_0_object, int var_460_int, object var_461_object)
{
	var_0_object = var_461_object;
	bool var_471_bool; object var_472_object;
	object var_473_object;
	func_12376(var_473_object);
	var_473_object = var_472_object;
	func_12203(var_471_bool, var_472_object);
	bool var_474_bool; object var_475_object;
	var_461_object = var_475_object;
	func_12118(var_474_bool, var_475_object, 70.0);
	if(!var_474_bool) { //@nz
		var_460_int = -2;
		return 8;
	}
	object var_467_object;
	@CreateDialog(var_467_object);
	int var_478_int;
	func_12638(var_478_int);
	var_467_object->SetNPCName(var_478_int);
	int var_479_int;
	func_12636(var_479_int);
	var_467_object->SetNPCDescription(var_479_int);
	string var_480_string;
	func_12640(var_480_string);
	var_467_object->SetPhoto(var_480_string);
	string var_481_string;
	func_12642(var_481_string);
	var_467_object->SetPhoto2(var_481_string);
	int var_482_int;
	func_14875(var_482_int);
	var_467_object->SetPlayerName(var_482_int);
	bool var_468_bool;
	@IsOverrideActive(var_468_bool);
	if(var_468_bool != 0) {
		var_460_int = -2;
		return 8;
	}
	@DoDialog(var_467_object);
	object var_484_object; object var_485_object;
	var_461_object = var_484_object;
	var_467_object = var_485_object;
	TaskCall(6);
	func_500(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object);
	TaskReturn();
	bool var_470_bool;
	var_467_object->IsDialogEnd(var_470_bool);
	
	for(;;) {
		var_514_bool = !var_470_bool; //@nz
		if(var_514_bool == 0) goto Label_489;
		@sync();
		var_467_object->IsDialogEnd(var_470_bool);
	}
	
Label_489:
	object var_515_object;
	var_461_object = var_515_object;
	func_12186();
	@StopDialog(var_467_object);
	var_467_object->GetReturnValue(-1);
	int var_469_int = var_460_int;
}
EMIT "Stack[-4] = 0";


void func_14758(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 253, 1, 521019);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_14797(var_122_bool, var_123_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13738(bool var_2013_bool)
{
	int var_2015_int;
	func_12403(var_2015_int, "oob12Danko3");
	if(var_2015_int == 0) {
		var_2013_bool = true;
		return 0;
	}
	var_2013_bool = false;
}


void func_14771(void)
{
	object var_141_object;
	@CreateDiaryEntry(var_141_object, 254, 1, 521020);
	bool var_145_bool; object var_146_object;
	var_141_object = var_146_object;
	func_14797(var_145_bool, var_146_object, 253);
}
EMIT "Stack[-1] = 0";


// @pe
void func_13750(bool var_1943_bool, object var_1944_object)
{
	object var_1946_object;
	var_1944_object = var_1946_object;
	func_14424(var_1946_object);
	bool var_1945_bool;
	if(var_1945_bool != 0) {
		var_1943_bool = true;
		return 0;
	}
	var_1943_bool = false;
}


// @pe
void func_2488(object var_2_object, string var_1055_string)
{
	bool var_1056_bool;
	func_12644(var_1056_bool);
	if(!var_1056_bool) //@nz
		return 0;
	if(var_1055_string == var_2_object)
		return 0;
	string var_1059_string; bool var_1060_bool;
	var_1055_string = var_1059_string;
	if(var_1055_string == "")
		var_1060_bool = false;
	else
		var_1060_bool = true;
	func_12348(var_1059_string, var_1060_bool);
	var_2_object = var_1055_string;
	
}


// @pe
void func_10682(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1885_object, object var_1886_object)
{
	var_0_object = var_1886_object;
	var_1_object = var_1885_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1892_bool = false;
		bool var_1893_bool;
		func_13678(var_1_object);
		if(var_1893_bool != 0) {
			bool var_1899_bool;
			func_13714(var_1_object);
			if(!var_1899_bool) //@nz
				var_1892_bool = true;
		}
		if(var_1892_bool != 0) {
			object var_1906_object; object var_1907_object;
			var_1906_object = var_1_object;
			var_1907_object = var_0_object;
			func_12989();
			object var_1910_object; object var_1911_object;
			var_1910_object = var_1_object;
			var_1911_object = var_0_object;
			func_13004();
			func_10853(var_1886_object, "Neutral");
			var_0_object->SetMessage(522107); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522108, 24172, 23275); //@t
			var_0_object->AddReply(522109, 24176, 23276); //@t
		} else {
					object var_1937_object; object var_1938_object;
					var_1937_object = var_1_object;
					var_1938_object = var_0_object;
					func_13004();
					func_10853(var_1886_object, "Neutral");
					var_0_object->SetMessage(531983); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1941_bool = false;
					bool var_1942_bool = false;
					bool var_1943_bool;
					func_13750(var_1943_bool, var_1_object);
					if(var_1943_bool != 0) {
						bool var_1993_bool;
						func_13938(var_1_object);
						if(!var_1993_bool) //@nz
							var_1942_bool = true;
					}
					if(var_1942_bool != 0) {
						bool var_2000_bool;
						func_13714(var_1_object);
						if(!var_2000_bool) //@nz
							var_1941_bool = true;
					}
					if(var_1941_bool != 0)
						var_0_object->AddReply(540259, 42243, 42242); //@t
					bool var_2006_bool = false;
					bool var_2007_bool;
					func_13726(var_1_object);
					if(var_2007_bool != 0) {
						bool var_2013_bool;
						func_13738(var_1_object);
						if(var_2013_bool != 0)
							var_2006_bool = true;
					}
					if(var_2006_bool != 0)
						var_0_object->AddReply(522987, 24179, 24178); //@t
					bool var_2022_bool = false;
					bool var_2023_bool;
					func_13690(var_1_object);
					if(var_2023_bool != 0) {
						bool var_2029_bool;
						func_13702(var_1_object);
						if(var_2029_bool != 0)
							var_2022_bool = true;
					}
					if(var_2022_bool != 0)
						var_0_object->AddReply(522996, 24188, 24187); //@t
					var_0_object->AddReply(531987, -1, 33393); //@t
		}
	}
	for(;;) {
		bool var_1929_bool;
		func_12644(var_1929_bool);
		if(var_1929_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_10852;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_10852:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x29be";


// @pe
void func_13760(bool var_1822_bool)
{
	int var_1824_int;
	func_12403(var_1824_int, "oob11Danko2");
	if(var_1824_int == 0) {
		var_1822_bool = true;
		return 0;
	}
	var_1822_bool = false;
}


void func_14784(object var_121_object)
{
	object var_123_object;
	@GetDiaryRoot(var_123_object);
	if(!var_123_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_121_object = false;
	}
	var_123_object = var_121_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_12744(void)
{
	@SetVariable("oob5Danko1", 1);
}


// @pe
void func_13772(bool var_1393_bool, object var_1394_object)
{
	object var_1396_object;
	var_1394_object = var_1396_object;
	bool var_1395_bool;
	func_12492(var_1395_bool, var_1396_object, "b6q01_bull_blood");
	if(var_1395_bool != 0) {
		var_1393_bool = true;
		return 0;
	}
	var_1393_bool = false;
}


void func_14797(bool var_112_bool, object var_113_object, int var_114_int)
{
	object var_121_object;
	func_14784(var_121_object);
	object var_118_object;
	var_121_object = var_118_object;
	object var_119_object;
	var_118_object->Find(var_114_int, var_119_object);
	if(!var_119_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_114_int);
		var_112_bool = false;
	}
	var_119_object->AddChild(var_113_object);
	@SendWorldWndMessage(7);
	int var_120_int;
	var_113_object->GetCategory(var_120_int);
	@SetDiarySection(var_120_int);
	var_112_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_12750(void)
{
	func_14693();
	bool var_259_bool;
	func_12561(var_259_bool, "quest_b5_01", "completed");
}


// @pe
void func_11726(object var_2_object, string var_2074_string)
{
	bool var_2075_bool;
	func_12644(var_2075_bool);
	if(!var_2075_bool) //@nz
		return 0;
	if(var_2074_string == var_2_object)
		return 0;
	string var_2078_string; bool var_2079_bool;
	var_2074_string = var_2078_string;
	if(var_2074_string == "")
		var_2079_bool = false;
	else
		var_2079_bool = true;
	func_12348(var_2078_string, var_2079_bool);
	var_2_object = var_2074_string;
	
}


// @pe
void func_8660(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1641_object, object var_1642_object)
{
	var_0_object = var_1642_object;
	var_1_object = var_1641_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1648_bool;
		func_13594(var_1_object);
		if(var_1648_bool != 0) {
			object var_1654_object; object var_1655_object;
			var_1654_object = var_1_object;
			var_1655_object = var_0_object;
			func_12953();
			object var_1658_object; object var_1659_object;
			var_1658_object = var_1_object;
			var_1659_object = var_0_object;
			func_12968();
			func_8854(var_1642_object, "Neutral");
			var_0_object->SetMessage(521910); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522427, 23595, 23594); //@t
			var_0_object->AddReply(521912, 23599, 23086); //@t
		} else {
					func_8854(var_1642_object, "Neutral");
					var_0_object->SetMessage(521913); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1687_bool;
					func_13582(var_1_object);
					if(var_1687_bool != 0)
						var_0_object->AddReply(521914, 23092, 23088); //@t
					bool var_1696_bool;
					func_13606(var_1_object);
					if(var_1696_bool != 0)
						var_0_object->AddReply(521920, 23095, 23094); //@t
					bool var_1705_bool = false;
					bool var_1706_bool = false;
					bool var_1707_bool;
					func_13618(var_1_object);
					if(var_1707_bool != 0) {
						bool var_1713_bool;
						func_13642(var_1_object);
						if(var_1713_bool != 0)
							var_1706_bool = true;
					}
					if(var_1706_bool != 0) {
						bool var_1719_bool;
						func_13630(var_1_object);
						if(!var_1719_bool) //@nz
							var_1705_bool = true;
					}
					if(var_1705_bool != 0)
						var_0_object->AddReply(521935, 32896, 23109); //@t
					bool var_1729_bool = false;
					bool var_1730_bool = false;
					bool var_1731_bool;
					func_13618(var_1_object);
					if(var_1731_bool != 0) {
						bool var_1733_bool;
						func_13630(var_1_object);
						if(var_1733_bool != 0)
							var_1730_bool = true;
					}
					if(var_1730_bool != 0) {
						bool var_1735_bool;
						func_13642(var_1_object);
						if(!var_1735_bool) //@nz
							var_1729_bool = true;
					}
					if(var_1729_bool != 0)
						var_0_object->AddReply(521936, 23113, 23110); //@t
					bool var_1741_bool = false;
					bool var_1742_bool = false;
					bool var_1743_bool;
					func_13642(var_1_object);
					if(var_1743_bool != 0) {
						bool var_1745_bool;
						func_13630(var_1_object);
						if(var_1745_bool != 0)
							var_1742_bool = true;
					}
					if(var_1742_bool != 0) {
						bool var_1747_bool;
						func_13618(var_1_object);
						if(var_1747_bool != 0)
							var_1741_bool = true;
					}
					if(var_1741_bool != 0)
						var_0_object->AddReply(521941, 32893, 23115); //@t
					var_0_object->AddReply(521917, -1, 23091); //@t
		}
	}
	for(;;) {
		bool var_1677_bool;
		func_12644(var_1677_bool);
		if(var_1677_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_8853;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_8853:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x21d8";


// @pe
void func_13783(bool var_1398_bool)
{
	int var_1400_int;
	func_12403(var_1400_int, "oob6Danko2");
	if(var_1400_int == 0) {
		var_1398_bool = true;
		return 0;
	}
	var_1398_bool = false;
}


// @pe
void func_12760(void)
{
	@SetVariable("oob5Danko2", 1);
}


// @pe
void func_12766(void)
{
	@SetVariable("oob3Danko1", 1);
}


// @pe
void func_6627(object var_2_object, string var_1363_string)
{
	bool var_1364_bool;
	func_12644(var_1364_bool);
	if(!var_1364_bool) //@nz
		return 0;
	if(var_1363_string == var_2_object)
		return 0;
	string var_1367_string; bool var_1368_bool;
	var_1363_string = var_1367_string;
	if(var_1363_string == "")
		var_1368_bool = false;
	else
		var_1368_bool = true;
	func_12348(var_1367_string, var_1368_bool);
	var_2_object = var_1363_string;
	
}


// @pe
void func_12772(void)
{
	@SetVariable("oob3Danko2", 1);
}


// @pe
void func_13795(bool var_1408_bool)
{
	int var_1410_int;
	func_12403(var_1410_int, "b6q01");
	if(var_1410_int == 1000)
		var_1408_bool = true;
	var_1408_bool = false;
}


void func_14825(object var_185_object)
{
	object var_188_object; object var_189_object;
	@GetMainOutdoorScene(var_188_object);
	if(var_188_object == null) {
		@Trace("Can't find main outdoor scene");
		var_189_object = null;
		var_189_object = var_185_object;
	}
	var_188_object->GetMap(var_189_object);
	var_189_object = var_185_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_12778(void)
{
	@SetVariable("b1q01", 1000);
	func_14563();
}


// @pe
void func_13807(bool var_1257_bool)
{
	int var_1259_int;
	func_12403(var_1259_int, "b5q01MicroscopeCS");
	if(var_1259_int != 0) {
		var_1257_bool = true;
		return 0;
	}
	var_1257_bool = false;
}


// @pe
void func_12787(void)
{
	func_14576();
	bool var_212_bool;
	func_12561(var_212_bool, "quest_b2_01", "completed");
}


// @pe
void func_500(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_484_object, object var_485_object)
{
	var_0_object = var_485_object;
	var_1_object = var_484_object;
	var_3_string = false;
	if(1 != 0) {
		func_558(var_485_object, "Neutral");
		var_0_object->SetMessage(529914); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529915, -1, 31298); //@t
		var_0_object->AddReply(529916, -1, 31299); //@t
		goto Label_528;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1f8";
	}
Label_528:
	bool var_506_bool;
	func_12644(var_506_bool);
	if(var_506_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_557;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_557:
		return 0;

	}
	
}


void func_14842(object var_182_object, string var_183_string, float var_184_float)
{
	object var_198_object;
	@GetMainOutdoorScene(var_198_object);
	if(var_198_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_196_cvector;
	cvector var_197_cvector;
	bool var_199_bool;
	var_198_object->GetLocator(var_183_string, var_199_bool, var_196_cvector, var_197_cvector);
	if(!var_199_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_183_string) + " doesnt exist");
	var_198_object->GetMap(var_182_object);
	if(var_182_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_209_float = GetByIndex(var_196_cvector, 0);
	var_210_float = GetByIndex(var_196_cvector, 2);
	var_182_object->SetMapParams(var_209_float, var_210_float, var_184_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_13819(bool var_1300_bool)
{
	int var_1302_int;
	func_12403(var_1302_int, "b5q01");
	if(var_1302_int == 1000)
		var_1300_bool = true;
	var_1300_bool = false;
}


// @pe
void func_12797(void)
{
	@SetVariable("oob6Danko1", 1);
}


// @pe
void func_12803(void)
{
	@SetVariable("b6q01", 1);
	func_14719();
	func_14745();
	bool var_132_bool;
	func_12561(var_132_bool, "quest_b6_01", "place_klara");
}


// @pe
void func_13831(bool var_1836_bool)
{
	int var_1838_int;
	func_12403(var_1838_int, "b11q04");
	if(var_1838_int == 3)
		var_1836_bool = true;
	var_1836_bool = false;
}


void func_11794(object var_0_object)
{
	bool var_91_bool;
	func_12113(var_91_bool);
	if(!var_91_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_11922();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_11976();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_13843(bool var_746_bool)
{
	int var_748_int;
	func_12403(var_748_int, "b2q01");
	if(var_748_int < 3)
		var_746_bool = true;
	var_746_bool = false;
}


// @pe
void func_12820(void)
{
	@SetVariable("oob2Danko1", 1);
}


// @pe
void func_12826(void)
{
	@SetVariable("oob2Danko2", 1);
}


void func_14875(int var_271_int)
{
	int var_273_int;
	@GetVariable("branch", var_273_int);
	if(var_273_int == 0) {
		var_271_int = 1;
		return 2;
	EMIT "GOTO 0x3a2a";
	}
	if(var_273_int == 1) {
		var_271_int = 2;
		return 2;
	}
	var_271_int = 3;
}


// @pe
void func_13855(bool var_792_bool)
{
	int var_794_int;
	func_12403(var_794_int, "b2q01");
	if(var_794_int == 3)
		var_792_bool = true;
	var_792_bool = false;
}


// @pe
void func_12832(void)
{
	@SetVariable("oob2Danko3", 1);
}


// @pe
void func_12838(void)
{
	@SetVariable("b2DankoTalk", 1);
}


void func_11814(bool var_116_bool)
{
	object var_118_object;
	@FindActor(var_118_object, "player");
	if(!var_118_object) //@nz
		var_116_bool = false;
	bool var_121_bool; object var_122_object;
	var_118_object = var_122_object;
	func_12104(var_121_bool, var_122_object);
	var_121_bool = var_116_bool;
}
EMIT "Stack[-1] = 0";


void func_9767(object var_0_object, int var_1759_int, object var_1760_object)
{
	var_0_object = var_1760_object;
	bool var_1770_bool; object var_1771_object;
	object var_1772_object;
	func_12376(var_1772_object);
	var_1772_object = var_1771_object;
	func_12203(var_1770_bool, var_1771_object);
	bool var_1773_bool; object var_1774_object;
	var_1760_object = var_1774_object;
	func_12118(var_1773_bool, var_1774_object, 70.0);
	if(!var_1773_bool) { //@nz
		var_1759_int = -2;
		return 8;
	}
	object var_1766_object;
	@CreateDialog(var_1766_object);
	int var_1777_int;
	func_12638(var_1777_int);
	var_1766_object->SetNPCName(var_1777_int);
	int var_1778_int;
	func_12636(var_1778_int);
	var_1766_object->SetNPCDescription(var_1778_int);
	string var_1779_string;
	func_12640(var_1779_string);
	var_1766_object->SetPhoto(var_1779_string);
	string var_1780_string;
	func_12642(var_1780_string);
	var_1766_object->SetPhoto2(var_1780_string);
	int var_1781_int;
	func_14875(var_1781_int);
	var_1766_object->SetPlayerName(var_1781_int);
	bool var_1767_bool;
	@IsOverrideActive(var_1767_bool);
	if(var_1767_bool != 0) {
		var_1759_int = -2;
		return 8;
	}
	@DoDialog(var_1766_object);
	object var_1783_object; object var_1784_object;
	var_1760_object = var_1783_object;
	var_1766_object = var_1784_object;
	TaskCall(32);
	func_9848(var_1785_object, var_1786_object, var_1787_string, var_1788_bool, var_1783_object, var_1784_object);
	TaskReturn();
	bool var_1769_bool;
	var_1766_object->IsDialogEnd(var_1769_bool);
	
	for(;;) {
		var_1857_bool = !var_1769_bool; //@nz
		if(var_1857_bool == 0) goto Label_9837;
		@sync();
		var_1766_object->IsDialogEnd(var_1769_bool);
	}
	
Label_9837:
	object var_1858_object;
	var_1760_object = var_1858_object;
	func_12186();
	@StopDialog(var_1766_object);
	var_1766_object->GetReturnValue(-1);
	int var_1768_int = var_1759_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_13867(bool var_833_bool)
{
	int var_835_int;
	func_12403(var_835_int, "b2q01");
	if(var_835_int == 4)
		var_833_bool = true;
	var_833_bool = false;
}


// @pe
void func_12844(void)
{
	@SetVariable("oob2Danko4", 1);
}


// @pe
void func_14892(object var_1956_object, bool var_1957_bool, int var_1958_int)
{
	var_1956_object->add(6);
	var_1956_object->add(26);
	var_1956_object->add(2);
	var_1956_object->add(22);
	if(var_1957_bool == false) {
		var_1956_object->add(15);
		var_1956_object->add(5);
		var_1956_object->add(16);
		var_1956_object->add(19);
	} else if(var_1958_int != 0) {
		var_1956_object->add(15);
	}
	
}


// @pe
void func_558(object var_2_object, string var_491_string)
{
	bool var_492_bool;
	func_12644(var_492_bool);
	if(!var_492_bool) //@nz
		return 0;
	if(var_491_string == var_2_object)
		return 0;
	string var_495_string; bool var_496_bool;
	var_491_string = var_495_string;
	if(var_491_string == "")
		var_496_bool = false;
	else
		var_496_bool = true;
	func_12348(var_495_string, var_496_bool);
	var_2_object = var_491_string;
	
}


// @pe
void func_3634(object var_2_object, string var_1183_string)
{
	bool var_1184_bool;
	func_12644(var_1184_bool);
	if(!var_1184_bool) //@nz
		return 0;
	if(var_1183_string == var_2_object)
		return 0;
	string var_1187_string; bool var_1188_bool;
	var_1183_string = var_1187_string;
	if(var_1183_string == "")
		var_1188_bool = false;
	else
		var_1188_bool = true;
	func_12348(var_1187_string, var_1188_bool);
	var_2_object = var_1183_string;
	
}


void func_12850(void)
{
	object var_107_object;
	func_14825(var_107_object);
	object var_106_object;
	var_107_object = var_106_object;
	float var_118_float;
	func_12573(var_118_float);
	var_106_object->AddMark("b2DankoGotoMladVlad", "pt_map_mladvlad", 3, 520955, var_118_float);
}
EMIT "Stack[-1] = 0";


void func_11829(object var_0_object)
{
	var_168_float = GetByIndex(var_0_object, 0);
	var_169_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_168_float, var_169_float);
}


// @pe
void func_13879(bool var_843_bool)
{
	int var_845_int;
	func_12403(var_845_int, "b2q01MicroscopeCS");
	if(var_845_int != 0) {
		var_843_bool = true;
		return 0;
	}
	var_843_bool = false;
}


void func_11834(bool var_99_bool)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	if(!var_102_object) { //@nz
		var_99_bool = false;
		return 4;
	}
	float var_106_float; object var_107_object;
	func_12052(var_106_float, var_107_object);
	if(var_106_float > 90000.0) {
		var_99_bool = false;
		return 4;
	}
	bool var_103_bool;
	@CanSee(var_103_bool, var_107_object);
	var_103_bool = var_99_bool;
}
EMIT "Stack[-2] = 0";


void func_12866(void)
{
	@SetVariable("b7q01", 1);
	object var_103_object;
	func_14825(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	float var_114_float;
	func_12573(var_114_float);
	var_100_object->AddMark("b7q01DankoGotoSobor", "pt_map_aglaja", 1, 521021, var_114_float);
	func_14758();
	func_14771();
	bool var_148_bool;
	func_12561(var_148_bool, "quest_b7_01", "init_sobor");
}
EMIT "Stack[-1] = 0";


// @pe
void func_13891(bool var_985_bool, object var_986_object)
{
	object var_988_object;
	var_986_object = var_988_object;
	bool var_987_bool;
	func_12492(var_987_bool, var_988_object, "organ_combination");
	if(var_987_bool != 0) {
		var_985_bool = true;
		return 0;
	}
	var_985_bool = false;
}


// @pe
void func_13902(bool var_1415_bool)
{
	int var_1417_int;
	func_12403(var_1417_int, "b6q01MicroscopeCS");
	if(var_1417_int != 0) {
		var_1415_bool = true;
		return 0;
	}
	var_1415_bool = false;
}


void func_11856(void)
{
	float var_105_float;
	@rand(var_105_float, 8, 16);
	@SetTimer(10, var_105_float);
}


void func_14928(bool var_1983_bool, int var_1984_int)
{
	int var_1986_int;
	@GetVariable(("vol_" + var_1984_int), var_1986_int);
	var_1983_bool = (var_1986_int & 4) != 0;
}


void func_11865(void)
{
	@KillTimer(10);
}


// @pe
void func_13914(bool var_1845_bool)
{
	int var_1847_int;
	func_12403(var_1847_int, "b11q02");
	if(var_1847_int == 1)
		var_1845_bool = true;
	var_1845_bool = false;
}


void func_14938(bool var_1974_bool, int var_1975_int)
{
	int var_1977_int;
	@GetVariable(("vol_" + var_1975_int), var_1977_int);
	var_1974_bool = (var_1977_int & 16) != 0;
}


// @pe
void func_12897(object var_167_object)
{
	object var_171_object;
	func_14825(var_171_object);
	object var_168_object;
	var_171_object = var_168_object;
	func_14842(var_168_object, "pt_map_aglaja", (float)2);
	object var_191_object;
	func_14825(var_191_object);
	var_167_object->ShowMap(var_191_object);
}


void func_14948(bool var_1947_bool)
{
	object var_1952_object; int var_1955_int;
	@CreateIntVector(var_1952_object);
	object var_1956_object;
	var_1952_object = var_1956_object;
	func_14892(var_1956_object, false, -1);
	int var_1953_int;
	var_1952_object->size(var_1953_int);
	int var_1954_int = 0;
	
	while(var_1954_int < var_1953_int) {
		var_1952_object->get(var_1955_int, var_1954_int);
		bool var_1973_bool = true;
		bool var_1974_bool; int var_1975_int;
		var_1955_int = var_1975_int;
		func_14938(var_1974_bool, var_1975_int);
		if(var_1974_bool != 1) {
			bool var_1983_bool; int var_1984_int;
			var_1955_int = var_1984_int;
			func_14928(var_1983_bool, var_1984_int);
			if(var_1983_bool != 1)
				var_1973_bool = false;
		}
		if(var_1973_bool != 0)
			var_1947_bool = false;
		var_1954_int += 1;
	}
	
	var_1947_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_10853(object var_2_object, string var_1914_string)
{
	bool var_1915_bool;
	func_12644(var_1915_bool);
	if(!var_1915_bool) //@nz
		return 0;
	if(var_1914_string == var_2_object)
		return 0;
	string var_1918_string; bool var_1919_bool;
	var_1914_string = var_1918_string;
	if(var_1914_string == "")
		var_1919_bool = false;
	else
		var_1919_bool = true;
	func_12348(var_1918_string, var_1919_bool);
	var_2_object = var_1914_string;
	
}


// @pe
void func_13926(bool var_990_bool)
{
	int var_992_int;
	func_12403(var_992_int, "oob3Danko3");
	if(var_992_int == 0) {
		var_990_bool = true;
		return 0;
	}
	var_990_bool = false;
}


void func_622(object var_0_object, int var_518_int, object var_519_object)
{
	var_0_object = var_519_object;
	bool var_529_bool; object var_530_object;
	object var_531_object;
	func_12376(var_531_object);
	var_531_object = var_530_object;
	func_12203(var_529_bool, var_530_object);
	bool var_532_bool; object var_533_object;
	var_519_object = var_533_object;
	func_12118(var_532_bool, var_533_object, 70.0);
	if(!var_532_bool) { //@nz
		var_518_int = -2;
		return 8;
	}
	object var_525_object;
	@CreateDialog(var_525_object);
	int var_536_int;
	func_12638(var_536_int);
	var_525_object->SetNPCName(var_536_int);
	int var_537_int;
	func_12636(var_537_int);
	var_525_object->SetNPCDescription(var_537_int);
	string var_538_string;
	func_12640(var_538_string);
	var_525_object->SetPhoto(var_538_string);
	string var_539_string;
	func_12642(var_539_string);
	var_525_object->SetPhoto2(var_539_string);
	int var_540_int;
	func_14875(var_540_int);
	var_525_object->SetPlayerName(var_540_int);
	bool var_526_bool;
	@IsOverrideActive(var_526_bool);
	if(var_526_bool != 0) {
		var_518_int = -2;
		return 8;
	}
	@DoDialog(var_525_object);
	object var_542_object; object var_543_object;
	var_519_object = var_542_object;
	var_525_object = var_543_object;
	TaskCall(8);
	func_703(var_544_object, var_545_object, var_546_string, var_547_bool, var_542_object, var_543_object);
	TaskReturn();
	bool var_528_bool;
	var_525_object->IsDialogEnd(var_528_bool);
	
	for(;;) {
		var_572_bool = !var_528_bool; //@nz
		if(var_572_bool == 0) goto Label_692;
		@sync();
		var_525_object->IsDialogEnd(var_528_bool);
	}
	
Label_692:
	object var_573_object;
	var_519_object = var_573_object;
	func_12186();
	@StopDialog(var_525_object);
	var_525_object->GetReturnValue(-1);
	int var_527_int = var_518_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_12913(void)
{
	@SetVariable("oob8Danko1", 1);
}


// @pe
void func_13938(bool var_1993_bool)
{
	int var_1995_int;
	func_12403(var_1995_int, "b12q01DankoInSobor");
	if(var_1995_int != 0) {
		var_1993_bool = true;
		return 0;
	}
	var_1993_bool = false;
}


// @pe
void func_12919(void)
{
	@SetVariable("oob8DankoStop", 1);
}


// @pe
void func_9848(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1783_object, object var_1784_object)
{
	var_0_object = var_1784_object;
	var_1_object = var_1783_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1790_bool;
		func_13666(var_1_object);
		if(var_1790_bool != 0) {
			object var_1796_object; object var_1797_object;
			var_1796_object = var_1_object;
			var_1797_object = var_0_object;
			func_12983();
			func_9966(var_1784_object, "Neutral");
			var_0_object->SetMessage(522061); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523529, 24763, 24762); //@t
		} else {
					func_9966(var_1784_object, "Neutral");
					var_0_object->SetMessage(522063); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1822_bool;
					func_13760(var_1_object);
					if(var_1822_bool != 0)
						var_0_object->AddReply(523535, 24769, 24768); //@t
					bool var_1831_bool;
					func_13760(var_1_object);
					if(var_1831_bool != 0)
						var_0_object->AddReply(523537, 24771, 24770); //@t
					bool var_1836_bool;
					func_13831(var_1_object);
					if(var_1836_bool != 0)
						var_0_object->AddReply(530525, 32707, 31884); //@t
					bool var_1845_bool;
					func_13914(var_1_object);
					if(var_1845_bool != 0)
						var_0_object->AddReply(531113, 32712, 32431); //@t
					var_0_object->AddReply(522064, -1, 23233); //@t
		}
	}
	for(;;) {
		bool var_1812_bool;
		func_12644(var_1812_bool);
		if(var_1812_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_9965;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_9965:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x267c";


// @pe
void func_12925(void)
{
	@SetVariable("oob8Danko2", 1);
}


// @pe
void func_13950(bool var_935_bool, object var_936_object)
{
	bool var_937_bool = true;
	bool var_938_bool = true;
	bool var_939_bool = true;
	bool var_940_bool = true;
	bool var_941_bool; object var_942_object;
	var_936_object = var_942_object;
	func_12492(var_941_bool, var_942_object, "diseased_blood");
	if(var_941_bool != 1) {
		bool var_944_bool; object var_945_object;
		var_936_object = var_945_object;
		func_12492(var_944_bool, var_945_object, "diseased_heart");
		if(var_944_bool != 1)
			var_940_bool = false;
	}
	if(var_940_bool != 1) {
		bool var_947_bool; object var_948_object;
		var_936_object = var_948_object;
		func_12492(var_947_bool, var_948_object, "diseased_kidney");
		if(var_947_bool != 1)
			var_939_bool = false;
	}
	if(var_939_bool != 1) {
		bool var_950_bool; object var_951_object;
		var_936_object = var_951_object;
		func_12492(var_950_bool, var_951_object, "diseased_liver");
		if(var_950_bool != 1)
			var_938_bool = false;
	}
	if(var_938_bool != 1) {
		bool var_953_bool; object var_954_object;
		var_936_object = var_954_object;
		func_12492(var_953_bool, var_954_object, "d3q01_blood");
		if(var_953_bool != 1)
			var_937_bool = false;
	}
	if(var_937_bool != 0) {
		var_935_bool = true;
		return 0;
	}
	var_935_bool = false;
}


// @pe
void func_12931(void)
{
	@SetVariable("b10q01", 1);
	func_14433();
	func_14472();
}


void func_14986(object var_109_object)
{
	int var_111_int;
	@GetVariable("mt_danko", var_111_int);
	if(!var_111_int) { //@nz
		int var_114_int; object var_115_object;
		var_109_object = var_115_object;
		TaskCall(23);
		func_7121(var_116_object, var_114_int, var_115_object);
		TaskReturn();
		@SetVariable("mt_danko", 1);
	}
	bool var_329_bool;
	func_12593(var_329_bool, 4);
	if(var_329_bool != 0) {
		int var_344_int; object var_345_object;
		var_109_object = var_345_object;
		TaskCall(1);
		func_13(var_346_object, var_344_int, var_345_object);
		TaskReturn();
		return 2;
	}
	bool var_400_bool;
	func_12593(var_400_bool, 5);
	if(var_400_bool != 0) {
		int var_402_int; object var_403_object;
		var_109_object = var_403_object;
		TaskCall(3);
		func_216(var_404_object, var_402_int, var_403_object);
		TaskReturn();
		return 2;
	}
	bool var_458_bool;
	func_12593(var_458_bool, 6);
	if(var_458_bool != 0) {
		int var_460_int; object var_461_object;
		var_109_object = var_461_object;
		TaskCall(5);
		func_419(var_462_object, var_460_int, var_461_object);
		TaskReturn();
		return 2;
	}
	bool var_516_bool;
	func_12593(var_516_bool, 7);
	if(var_516_bool != 0) {
		int var_518_int; object var_519_object;
		var_109_object = var_519_object;
		TaskCall(7);
		func_622(var_520_object, var_518_int, var_519_object);
		TaskReturn();
		return 2;
	}
	bool var_574_bool;
	func_12593(var_574_bool, 10);
	if(var_574_bool != 0) {
		int var_576_int; object var_577_object;
		var_109_object = var_577_object;
		TaskCall(9);
		func_825(var_578_object, var_576_int, var_577_object);
		TaskReturn();
		return 2;
	}
	bool var_632_bool;
	func_12587(var_632_bool, 1);
	if(var_632_bool != 0) {
		int var_635_int; object var_636_object;
		var_109_object = var_636_object;
		TaskCall(17);
		func_4837(var_637_object, var_635_int, var_636_object);
		TaskReturn();
		return 2;
	}
	bool var_713_bool;
	func_12587(var_713_bool, 2);
	if(var_713_bool != 0) {
		int var_715_int; object var_716_object;
		var_109_object = var_716_object;
		TaskCall(19);
		func_5224(var_717_object, var_715_int, var_716_object);
		TaskReturn();
		return 2;
	}
	bool var_873_bool;
	func_12587(var_873_bool, 3);
	if(var_873_bool != 0) {
		int var_875_int; object var_876_object;
		var_109_object = var_876_object;
		TaskCall(11);
		func_1028(var_877_object, var_875_int, var_876_object);
		TaskReturn();
		return 2;
	}
	bool var_1012_bool;
	func_12587(var_1012_bool, 4);
	if(var_1012_bool != 0) {
		int var_1014_int; object var_1015_object;
		var_109_object = var_1015_object;
		TaskCall(13);
		func_2238(var_1016_object, var_1014_int, var_1015_object);
		TaskReturn();
		return 2;
	}
	bool var_1140_bool;
	func_12587(var_1140_bool, 5);
	if(var_1140_bool != 0) {
		int var_1142_int; object var_1143_object;
		var_109_object = var_1143_object;
		TaskCall(15);
		func_3305(var_1144_object, var_1142_int, var_1143_object);
		TaskReturn();
		return 2;
	}
	bool var_1320_bool;
	func_12587(var_1320_bool, 6);
	if(var_1320_bool != 0) {
		int var_1322_int; object var_1323_object;
		var_109_object = var_1323_object;
		TaskCall(21);
		func_6419(var_1324_object, var_1322_int, var_1323_object);
		TaskReturn();
		return 2;
	}
	bool var_1429_bool;
	func_12587(var_1429_bool, 7);
	if(var_1429_bool != 0) {
		int var_1431_int; object var_1432_object;
		var_109_object = var_1432_object;
		TaskCall(25);
		func_7352(var_1433_object, var_1431_int, var_1432_object);
		TaskReturn();
		return 2;
	}
	bool var_1495_bool;
	func_12587(var_1495_bool, 8);
	if(var_1495_bool != 0) {
		int var_1497_int; object var_1498_object;
		var_109_object = var_1498_object;
		TaskCall(27);
		func_7839(var_1499_object, var_1497_int, var_1498_object);
		TaskReturn();
		return 2;
	}
	bool var_1615_bool;
	func_12587(var_1615_bool, 10);
	if(var_1615_bool != 0) {
		int var_1617_int; object var_1618_object;
		var_109_object = var_1618_object;
		TaskCall(29);
		func_8579(var_1619_object, var_1617_int, var_1618_object);
		TaskReturn();
		return 2;
	}
	bool var_1757_bool;
	func_12587(var_1757_bool, 11);
	if(var_1757_bool != 0) {
		int var_1759_int; object var_1760_object;
		var_109_object = var_1760_object;
		TaskCall(31);
		func_9767(var_1761_object, var_1759_int, var_1760_object);
		TaskReturn();
		return 2;
	}
	bool var_1859_bool;
	func_12587(var_1859_bool, 12);
	if(var_1859_bool != 0) {
		int var_1861_int; object var_1862_object;
		var_109_object = var_1862_object;
		TaskCall(33);
		func_10601(var_1863_object, var_1861_int, var_1862_object);
		TaskReturn();
		return 2;
	}
	int var_2043_int; object var_2044_object;
	var_109_object = var_2044_object;
	TaskCall(35);
	func_11587(var_2045_object, var_2043_int, var_2044_object);
	TaskReturn();
}


// @pe
void func_12943(void)
{
	func_14459();
	bool var_162_bool;
	func_12561(var_162_bool, "quest_b10_01", "completed");
}


// @pe
void func_8854(object var_2_object, string var_1662_string)
{
	bool var_1663_bool;
	func_12644(var_1663_bool);
	if(!var_1663_bool) //@nz
		return 0;
	if(var_1662_string == var_2_object)
		return 0;
	string var_1666_string; bool var_1667_bool;
	var_1662_string = var_1666_string;
	if(var_1662_string == "")
		var_1667_bool = false;
	else
		var_1667_bool = true;
	func_12348(var_1666_string, var_1667_bool);
	var_2_object = var_1662_string;
	
}


// @pe
void func_12953(void)
{
	@SetVariable("oob10Danko1", 1);
}


// @pe
void func_12959(void)
{
	@SetVariable("b10q01", 4);
	func_14446();
}


void func_7839(object var_0_object, int var_1497_int, object var_1498_object)
{
	var_0_object = var_1498_object;
	bool var_1508_bool; object var_1509_object;
	object var_1510_object;
	func_12376(var_1510_object);
	var_1510_object = var_1509_object;
	func_12203(var_1508_bool, var_1509_object);
	bool var_1511_bool; object var_1512_object;
	var_1498_object = var_1512_object;
	func_12118(var_1511_bool, var_1512_object, 70.0);
	if(!var_1511_bool) { //@nz
		var_1497_int = -2;
		return 8;
	}
	object var_1504_object;
	@CreateDialog(var_1504_object);
	int var_1515_int;
	func_12638(var_1515_int);
	var_1504_object->SetNPCName(var_1515_int);
	int var_1516_int;
	func_12636(var_1516_int);
	var_1504_object->SetNPCDescription(var_1516_int);
	string var_1517_string;
	func_12640(var_1517_string);
	var_1504_object->SetPhoto(var_1517_string);
	string var_1518_string;
	func_12642(var_1518_string);
	var_1504_object->SetPhoto2(var_1518_string);
	int var_1519_int;
	func_14875(var_1519_int);
	var_1504_object->SetPlayerName(var_1519_int);
	bool var_1505_bool;
	@IsOverrideActive(var_1505_bool);
	if(var_1505_bool != 0) {
		var_1497_int = -2;
		return 8;
	}
	@DoDialog(var_1504_object);
	object var_1521_object; object var_1522_object;
	var_1498_object = var_1521_object;
	var_1504_object = var_1522_object;
	TaskCall(28);
	func_7920(var_1523_object, var_1524_object, var_1525_string, var_1526_bool, var_1521_object, var_1522_object);
	TaskReturn();
	bool var_1507_bool;
	var_1504_object->IsDialogEnd(var_1507_bool);
	
	for(;;) {
		var_1613_bool = !var_1507_bool; //@nz
		if(var_1613_bool == 0) goto Label_7909;
		@sync();
		var_1504_object->IsDialogEnd(var_1507_bool);
	}
	
Label_7909:
	object var_1614_object;
	var_1498_object = var_1614_object;
	func_12186();
	@StopDialog(var_1504_object);
	var_1504_object->GetReturnValue(-1);
	int var_1506_int = var_1497_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_12968(void)
{
	@SetVariable("b10q01DankoTalk", 1);
}


// @pe
void func_12974(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_14485();
}


// @pe
void func_14001(bool var_919_bool)
{
	int var_921_int;
	func_12403(var_921_int, "b3q04");
	if(var_921_int == 0) {
		var_919_bool = true;
		return 0;
	}
	var_919_bool = false;
}


// @pe
void func_12983(void)
{
	@SetVariable("oob11Danko1", 1);
}


// @pe
void func_14013(bool var_929_bool)
{
	int var_931_int;
	func_12403(var_931_int, "b3q04");
	if(var_931_int == 1)
		var_929_bool = true;
	var_929_bool = false;
}


// @pe
void func_12989(void)
{
	@SetVariable("oob12Danko1", 1);
}


// @pe
void func_703(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_542_object, object var_543_object)
{
	var_0_object = var_543_object;
	var_1_object = var_542_object;
	var_3_string = false;
	if(1 != 0) {
		func_761(var_543_object, "Neutral");
		var_0_object->SetMessage(529918); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529919, -1, 31302); //@t
		var_0_object->AddReply(529920, -1, 31303); //@t
		goto Label_731;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c3";
	}
Label_731:
	bool var_564_bool;
	func_12644(var_564_bool);
	if(var_564_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_760;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_760:
		return 0;

	}
	
}


// @pe
void func_12995(void)
{
	@SetVariable("b12q01DankoInSobor", 1);
	func_14537();
}


void func_11976(void)
{
	bool var_117_bool; int var_118_int; int var_119_int; bool var_120_bool;
	@WaitForAnimEnd();
	bool var_121_bool;
	func_12113(var_121_bool);
	if(!var_121_bool) //@nz
		return 12;
	int var_123_int;
	func_12619(var_123_int);
	int var_115_int;
	var_123_int = var_115_int;
	int var_116_int = 0;
	
	for(;;) {
		bool var_136_bool = false;
		if(var_116_int < 5) {
			bool var_139_bool;
			func_12113(var_139_bool);
			if(var_139_bool != 0)
				var_136_bool = true;
		}
		if(var_136_bool != 0) {
			if(!var_115_int) { //@nz
				@Sleep(3, var_117_bool);
				if(!var_117_bool) { //@nz
				} else {
			} else {
			@irand(var_118_int, var_115_int);
			@irand(var_119_int, 5);
			if(var_119_int != 0)
				var_118_int = 0;
			string var_150_string; int var_151_int;
			var_118_int = var_151_int;
			func_12612(var_150_string, var_151_int);
			@PlayAnimation("all", var_150_string);
			@WaitForAnimEnd(var_120_bool);
			var_152_bool = !var_120_bool; //@nz
			if(var_152_bool == 0) goto Label_12031;
			goto Label_12042;
			}
				Label_12031:
					bool var_143_bool;
					func_12045(var_143_bool);
					var_144_bool = !var_143_bool; //@nz
					if(var_144_bool == 0) goto Label_12037;
			}
		}
	Label_12042:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_12037:
		@ResetAAS();
		var_116_int += 1;
	}
	
}


// @pe
void func_14025(bool var_1592_bool)
{
	int var_1594_int;
	func_12403(var_1594_int, "b8DankoLetter2");
	if(var_1594_int != 0) {
		var_1592_bool = true;
		return 0;
	}
	var_1592_bool = false;
}


// @pe
void func_13004(void)
{
	@SetVariable("b12q01DankoVisit", 1);
}


// @pe
void func_13010(void)
{
	@SetVariable("oob12Danko2", 1);
}


// @pe
void func_14037(bool var_1598_bool)
{
	int var_1600_int;
	func_12403(var_1600_int, "oob8Danko3");
	if(var_1600_int == 0) {
		var_1598_bool = true;
		return 0;
	}
	var_1598_bool = false;
}


// @pe
void func_13016(void)
{
	@SetVariable("oob12Danko3", 1);
}


// @pe
void func_13022(void)
{
	@SetVariable("oob11Danko2", 1);
}


// @pe
void func_14049(bool var_1385_bool, object var_1386_object)
{
	object var_1388_object;
	var_1386_object = var_1388_object;
	func_14430(var_1388_object);
	bool var_1387_bool;
	if(var_1387_bool != 0) {
		var_1385_bool = true;
		return 0;
	}
	var_1385_bool = false;
}


void func_13028(object var_208_object)
{
	int var_211_int;
	var_208_object->RemoveItemByType(var_211_int, "b5q01_heart_vera", 1);
}


void func_4837(object var_0_object, int var_635_int, object var_636_object)
{
	var_0_object = var_636_object;
	bool var_646_bool; object var_647_object;
	object var_648_object;
	func_12376(var_648_object);
	var_648_object = var_647_object;
	func_12203(var_646_bool, var_647_object);
	bool var_649_bool; object var_650_object;
	var_636_object = var_650_object;
	func_12118(var_649_bool, var_650_object, 70.0);
	if(!var_649_bool) { //@nz
		var_635_int = -2;
		return 8;
	}
	object var_642_object;
	@CreateDialog(var_642_object);
	int var_653_int;
	func_12638(var_653_int);
	var_642_object->SetNPCName(var_653_int);
	int var_654_int;
	func_12636(var_654_int);
	var_642_object->SetNPCDescription(var_654_int);
	string var_655_string;
	func_12640(var_655_string);
	var_642_object->SetPhoto(var_655_string);
	string var_656_string;
	func_12642(var_656_string);
	var_642_object->SetPhoto2(var_656_string);
	int var_657_int;
	func_14875(var_657_int);
	var_642_object->SetPlayerName(var_657_int);
	bool var_643_bool;
	@IsOverrideActive(var_643_bool);
	if(var_643_bool != 0) {
		var_635_int = -2;
		return 8;
	}
	@DoDialog(var_642_object);
	object var_659_object; object var_660_object;
	var_636_object = var_659_object;
	var_642_object = var_660_object;
	TaskCall(18);
	func_4918(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object);
	TaskReturn();
	bool var_645_bool;
	var_642_object->IsDialogEnd(var_645_bool);
	
	for(;;) {
		var_711_bool = !var_645_bool; //@nz
		if(var_711_bool == 0) goto Label_4907;
		@sync();
		var_642_object->IsDialogEnd(var_645_bool);
	}
	
Label_4907:
	object var_712_object;
	var_636_object = var_712_object;
	func_12186();
	@StopDialog(var_642_object);
	var_642_object->GetReturnValue(-1);
	int var_644_int = var_635_int;
}
EMIT "Stack[-4] = 0";


void func_13034(object var_227_object)
{
	int var_230_int;
	var_227_object->RemoveItemByType(var_230_int, "b5q01_heart_nude", 1);
}


// @pe
void func_14059(bool var_960_bool)
{
	int var_962_int;
	func_12403(var_962_int, "b3q02");
	if(var_962_int == 2)
		var_960_bool = true;
	var_960_bool = false;
}


// @pe
void func_9966(object var_2_object, string var_1800_string)
{
	bool var_1801_bool;
	func_12644(var_1801_bool);
	if(!var_1801_bool) //@nz
		return 0;
	if(var_1800_string == var_2_object)
		return 0;
	string var_1804_string; bool var_1805_bool;
	var_1800_string = var_1804_string;
	if(var_1800_string == "")
		var_1805_bool = false;
	else
		var_1805_bool = true;
	func_12348(var_1804_string, var_1805_bool);
	var_2_object = var_1800_string;
	
}


void func_13040(object var_237_object)
{
	int var_240_int;
	var_237_object->RemoveItemByType(var_240_int, "b5q01_heart_butcher", 1);
}


// @pe
void func_7920(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1521_object, object var_1522_object)
{
	var_0_object = var_1522_object;
	var_1_object = var_1521_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1528_bool;
		func_13500(var_1_object);
		if(var_1528_bool != 0) {
			object var_1534_object; object var_1535_object;
			var_1534_object = var_1_object;
			var_1535_object = var_0_object;
			func_12913();
			object var_1538_object; object var_1539_object;
			var_1538_object = var_1_object;
			var_1539_object = var_0_object;
			func_13279();
			func_8061(var_1522_object, "Neutral");
			var_0_object->SetMessage(521440); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531320, 32648, 32647); //@t
			var_0_object->AddReply(531327, 32650, 32654); //@t
		} else {
					func_8061(var_1522_object, "Neutral");
					var_0_object->SetMessage(521450); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1567_bool = false;
					bool var_1568_bool = false;
					bool var_1569_bool;
					func_13546(var_1_object);
					if(!var_1569_bool) { //@nz
						bool var_1576_bool;
						func_13558(var_1_object);
						if(var_1576_bool != 0)
							var_1568_bool = true;
					}
					if(var_1568_bool != 0) {
						bool var_1582_bool;
						func_13570(var_1_object);
						if(var_1582_bool != 0)
							var_1567_bool = true;
					}
					if(var_1567_bool != 0)
						var_0_object->AddReply(521451, 22630, 22629); //@t
					bool var_1591_bool = false;
					bool var_1592_bool;
					func_14025(var_1_object);
					if(var_1592_bool != 0) {
						bool var_1598_bool;
						func_14037(var_1_object);
						if(var_1598_bool != 0)
							var_1591_bool = true;
					}
					if(var_1591_bool != 0)
						var_0_object->AddReply(534566, 36201, 36200); //@t
					var_0_object->AddReply(521454, -1, 22632); //@t
					var_0_object->AddReply(531341, -1, 32672); //@t
		}
	}
	for(;;) {
		bool var_1557_bool;
		func_12644(var_1557_bool);
		if(var_1557_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_8060;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_8060:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1ef4";


// @pe
void func_13046(object var_170_object)
{
	@Trace("beta_pills 5 is given");
	object var_173_object;
	var_170_object = var_173_object;
	func_12479(var_173_object, "beta_pills", 5);
}


// @pe
void func_14071(bool var_1080_bool)
{
	int var_1082_int;
	func_12403(var_1082_int, "b4q01");
	if(var_1082_int == 0) {
		var_1080_bool = true;
		return 0;
	}
	var_1080_bool = false;
}


// @pe
void func_761(object var_2_object, string var_549_string)
{
	bool var_550_bool;
	func_12644(var_550_bool);
	if(!var_550_bool) //@nz
		return 0;
	if(var_549_string == var_2_object)
		return 0;
	string var_553_string; bool var_554_bool;
	var_549_string = var_553_string;
	if(var_549_string == "")
		var_554_bool = false;
	else
		var_554_bool = true;
	func_12348(var_553_string, var_554_bool);
	var_2_object = var_549_string;
	
}


// @pe
void func_13057(void)
{
	func_14732();
	bool var_171_bool;
	func_12561(var_171_bool, "quest_b6_01", "completed");
}


// @pe
void func_14083(bool var_1045_bool)
{
	int var_1047_int;
	func_12403(var_1047_int, "oob4Danko1");
	if(var_1047_int == 0) {
		var_1045_bool = true;
		return 0;
	}
	var_1045_bool = false;
}


// @pe
void func_13067(void)
{
	@SetVariable("oob6Danko2", 1);
}


void func_12045(bool var_143_bool)
{
	var_143_bool = true;
}


// @pe
void func_14095(bool var_1102_bool)
{
	int var_1104_int;
	func_12403(var_1104_int, "microscope_b4q01_sample");
	if(var_1104_int != 0) {
		var_1102_bool = true;
		return 0;
	}
	var_1102_bool = false;
}


void func_12047(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_13073(void)
{
	bool var_220_bool;
	func_12561(var_220_bool, "quest_b5_01", "cutscene");
}


void func_12052(float var_106_float, object var_107_object)
{
	cvector var_111_cvector;
	@GetPosition(var_111_cvector);
	cvector var_112_cvector;
	var_107_object->GetPosition(var_112_cvector);
	var_106_float = (var_112_cvector - var_111_cvector) | (var_112_cvector - var_111_cvector);
}


// @pe
void func_13080(void)
{
	func_14524();
	bool var_150_bool;
	func_12561(var_150_bool, "quest_b11_04", "completed");
}


// @pe
void func_14107(bool var_1091_bool, object var_1092_object)
{
	object var_1094_object;
	var_1092_object = var_1094_object;
	bool var_1093_bool;
	func_12492(var_1093_bool, var_1094_object, "b4q01_sample");
	if(var_1093_bool != 0) {
		var_1091_bool = true;
		return 0;
	}
	var_1091_bool = false;
}


void func_12060(bool var_145_bool, object var_146_object, string var_147_string)
{
	var_152_bool = IsFuncExist(var_146_object, "HasProperty", 2);
	if(!var_152_bool) { //@nz
		var_145_bool = false;
		return 2;
	}
	bool var_149_bool;
	var_146_object->HasProperty(var_147_string, var_149_bool);
	var_149_bool = var_145_bool;
}


// @pe
void func_13090(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_14118(bool var_1096_bool)
{
	int var_1098_int;
	func_12403(var_1098_int, "oob4Danko2");
	if(var_1098_int == 0) {
		var_1096_bool = true;
		return 0;
	}
	var_1096_bool = false;
}


// @pe
void func_13096(void)
{
	@SetVariable("b2q01", 4);
	func_14589();
}


void func_12072(bool var_137_bool, object var_138_object, string var_139_string, float var_140_float, float var_141_float, float var_142_float)
{
	object var_146_object;
	var_138_object = var_146_object;
	string var_147_string;
	var_139_string = var_147_string;
	bool var_145_bool;
	func_12060(var_145_bool, var_146_object, var_147_string);
	if(!var_145_bool) //@nz
		var_137_bool = false;
	float var_144_float;
	var_138_object->GetProperty(var_139_string, var_144_float);
	float var_155_float; float var_157_float; float var_158_float;
	var_141_float = var_157_float;
	var_142_float = var_158_float;
	func_12392(var_155_float, (var_144_float + var_140_float), var_157_float, var_158_float);
	var_138_object->SetProperty(var_139_string, var_155_float);
	var_137_bool = true;
}


// @pe
void func_13105(void)
{
	bool var_194_bool;
	func_12561(var_194_bool, "quest_b2_01", "cutscene");
}


// @pe
void func_14130(bool var_1126_bool)
{
	int var_1128_int;
	func_12403(var_1128_int, "oob4Danko3");
	if(var_1128_int == 0) {
		var_1126_bool = true;
		return 0;
	}
	var_1126_bool = false;
}


// @pe
void func_4918(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_659_object, object var_660_object)
{
	var_0_object = var_660_object;
	var_1_object = var_659_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_666_bool = false;
		bool var_667_bool;
		func_14283(var_1_object);
		if(!var_667_bool) { //@nz
			bool var_676_bool;
			func_14271(var_1_object);
			if(!var_676_bool) //@nz
				var_666_bool = true;
		}
		if(var_666_bool != 0) {
			func_5007(var_660_object, "Neutral");
			var_0_object->SetMessage(520217); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520218, 21411, 21410); //@t
			var_0_object->AddReply(520222, 21415, 21414); //@t
		} else {
					func_5007(var_660_object, "Neutral");
					var_0_object->SetMessage(520439); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520440, -1, 21653); //@t
		}
	}
	for(;;) {
		bool var_698_bool;
		func_12644(var_698_bool);
		if(var_698_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_12341(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_5006;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5006:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x133a";


void func_13112(object var_150_object)
{
	int var_153_int;
	var_150_object->RemoveItemByType(var_153_int, "b6q01_bull_blood", 1);
	bool var_156_bool;
	func_12561(var_156_bool, "quest_b6_01", "cutscene");
}


void func_825(object var_0_object, int var_576_int, object var_577_object)
{
	var_0_object = var_577_object;
	bool var_587_bool; object var_588_object;
	object var_589_object;
	func_12376(var_589_object);
	var_589_object = var_588_object;
	func_12203(var_587_bool, var_588_object);
	bool var_590_bool; object var_591_object;
	var_577_object = var_591_object;
	func_12118(var_590_bool, var_591_object, 70.0);
	if(!var_590_bool) { //@nz
		var_576_int = -2;
		return 8;
	}
	object var_583_object;
	@CreateDialog(var_583_object);
	int var_594_int;
	func_12638(var_594_int);
	var_583_object->SetNPCName(var_594_int);
	int var_595_int;
	func_12636(var_595_int);
	var_583_object->SetNPCDescription(var_595_int);
	string var_596_string;
	func_12640(var_596_string);
	var_583_object->SetPhoto(var_596_string);
	string var_597_string;
	func_12642(var_597_string);
	var_583_object->SetPhoto2(var_597_string);
	int var_598_int;
	func_14875(var_598_int);
	var_583_object->SetPlayerName(var_598_int);
	bool var_584_bool;
	@IsOverrideActive(var_584_bool);
	if(var_584_bool != 0) {
		var_576_int = -2;
		return 8;
	}
	@DoDialog(var_583_object);
	object var_600_object; object var_601_object;
	var_577_object = var_600_object;
	var_583_object = var_601_object;
	TaskCall(10);
	func_906(var_602_object, var_603_object, var_604_string, var_605_bool, var_600_object, var_601_object);
	TaskReturn();
	bool var_586_bool;
	var_583_object->IsDialogEnd(var_586_bool);
	
	for(;;) {
		var_630_bool = !var_586_bool; //@nz
		if(var_630_bool == 0) goto Label_895;
		@sync();
		var_583_object->IsDialogEnd(var_586_bool);
	}
	
Label_895:
	object var_631_object;
	var_577_object = var_631_object;
	func_12186();
	@StopDialog(var_583_object);
	var_583_object->GetReturnValue(-1);
	int var_585_int = var_576_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_14142(bool var_1173_bool)
{
	int var_1175_int;
	func_12403(var_1175_int, "oob5Danko1");
	if(var_1175_int == 0) {
		var_1173_bool = true;
		return 0;
	}
	var_1173_bool = false;
}


void func_12094(bool var_99_bool, cvector var_100_cvector)
{
	cvector var_104_cvector;
	@GetPosition(var_104_cvector);
	cvector var_105_cvector = var_100_cvector - var_104_cvector;
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_105_cvector, 2);
	bool var_106_bool;
	@Rotate(var_107_float, var_108_float, var_106_bool);
	var_106_bool = var_99_bool;
}


// @pe
void func_13123(void)
{
	@SetVariable("b11q02", 2);
	func_14511();
}


void func_12104(bool var_95_bool, object var_96_object)
{
	cvector var_98_cvector;
	var_96_object->GetPosition(var_98_cvector);
	bool var_99_bool; cvector var_100_cvector;
	var_98_cvector = var_100_cvector;
	func_12094(var_99_bool, var_100_cvector);
	var_99_bool = var_95_bool;
}


// @pe
void func_14154(bool var_1208_bool)
{
	int var_1210_int;
	func_12403(var_1210_int, "b5q01");
	if(var_1210_int == 0) {
		var_1208_bool = true;
		return 0;
	}
	var_1208_bool = false;
}


// @pe
void func_13132(void)
{
	func_14498();
	bool var_190_bool;
	func_12561(var_190_bool, "quest_b11_02", "fail");
}


void func_12113(bool var_91_bool)
{
	bool var_93_bool;
	@IsLoaded(var_93_bool);
	var_93_bool = var_91_bool;
}


void func_12118(bool var_220_bool, object var_221_object, float var_222_float)
{
	cvector var_233_cvector; bool var_240_bool;
	var_221_object->GetPosition(var_233_cvector);
	float var_232_float;
	var_221_object->GetEyesHeight(var_232_float);
	var_241_float = GetByIndex(var_233_cvector, 1);
	SetByIndex(var_233_cvector, 1) = (var_241_float + var_232_float);
	cvector var_234_cvector;
	@GetPosition(var_234_cvector);
	@GetEyesHeight(var_232_float);
	var_242_float = GetByIndex(var_234_cvector, 1);
	SetByIndex(var_234_cvector, 1) = (var_242_float + var_232_float);
	cvector var_235_cvector = var_233_cvector - var_234_cvector;
	var_243_float = GetByIndex(var_235_cvector, 1);
	SetByIndex(var_235_cvector, 1) = (float)0;
	var_245_float = sqrt(var_235_cvector | var_235_cvector);
	var_235_cvector /= var_245_float;
	cvector var_236_cvector = -var_235_cvector;
	cvector var_247_cvector;
	func_12382(var_247_cvector, (var_236_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_237_cvector = ((var_235_cvector * var_222_float) + (var_247_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_239_bool;
	@IsOverrideActive(var_239_bool);
	if(var_239_bool != 0)
		var_220_bool = false;
	@StopWorld();
	@CameraTransit((var_234_cvector + var_237_cvector), var_236_cvector);
	var_260_float = GetByIndex(var_237_cvector, 0);
	var_261_float = GetByIndex(var_237_cvector, 2);
	@Rotate(var_260_float, var_261_float);
	bool var_262_bool;
	func_12644(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		@HasAnimationTrack(var_240_bool, "head");
		if(var_240_bool == 0) goto Label_12180;
		@LookAsyncCamera("head");
	}
Label_12180:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_220_bool = true;
	
}


// @pe
void func_13142(void)
{
	@SetVariable("oob3Danko3", 1);
}


// @pe
void func_14166(bool var_1220_bool)
{
	int var_1222_int;
	func_12403(var_1222_int, "b5q01TalkToVera");
	if(var_1222_int == 1)
		var_1220_bool = true;
	var_1220_bool = false;
}


// @pe
void func_13148(void)
{
	@SetVariable("b3q04", 1);
	func_14615();
	func_14628();
	object var_287_object;
	func_12408(var_287_object, "quest_b3_04");
}


// @pe
void func_14178(bool var_1226_bool)
{
	int var_1228_int;
	func_12403(var_1228_int, "b5q01VeraDead");
	if(var_1228_int != 0) {
		var_1226_bool = true;
		return 0;
	}
	var_1226_bool = false;
}


// @pe
void func_13164(void)
{
	@SetVariable("b3q04", 1000);
	func_14667();
}


// @pe
void func_14190(bool var_1250_bool, object var_1251_object)
{
	object var_1253_object;
	var_1251_object = var_1253_object;
	bool var_1252_bool;
	func_12492(var_1252_bool, var_1253_object, "b5q01_heart_vera");
	if(var_1252_bool != 0) {
		var_1250_bool = true;
		return 0;
	}
	var_1250_bool = false;
}


// @pe
void func_13173(object var_97_object)
{
	object var_100_object;
	var_97_object = var_100_object;
	bool var_99_bool;
	func_12492(var_99_bool, var_100_object, "diseased_blood");
	if(var_99_bool != 0) {
		bool var_106_bool; object var_107_object;
		var_97_object = var_107_object;
		func_12499(var_106_bool, var_107_object, "diseased_blood");
	} else {
			bool var_122_bool; object var_123_object;
			var_97_object = var_123_object;
			func_12492(var_122_bool, var_123_object, "diseased_heart");
			if(var_122_bool == 0) goto Label_13198;
			bool var_125_bool; object var_126_object;
			var_97_object = var_126_object;
			func_12499(var_125_bool, var_126_object, "diseased_heart");
	}
Label_13233:
	for(;;) {
		return 0;

	}
	
Label_13198:
	bool var_128_bool; object var_129_object;
	var_97_object = var_129_object;
	func_12492(var_128_bool, var_129_object, "diseased_liver");
	if(var_128_bool != 0) {
		bool var_131_bool; object var_132_object;
		var_97_object = var_132_object;
		func_12499(var_131_bool, var_132_object, "diseased_liver");
		goto Label_13233;
	}
	bool var_134_bool; object var_135_object;
	var_97_object = var_135_object;
	func_12492(var_134_bool, var_135_object, "diseased_kidney");
	if(var_134_bool != 0) {
		bool var_137_bool; object var_138_object;
		var_97_object = var_138_object;
		func_12499(var_137_bool, var_138_object, "diseased_kidney");
		goto Label_13233;
	}
	bool var_140_bool; object var_141_object;
	var_97_object = var_141_object;
	func_12492(var_140_bool, var_141_object, "b3q01_blood");
	if(var_140_bool == 0) goto Label_13233;
	bool var_143_bool; object var_144_object;
	var_97_object = var_144_object;
	func_12499(var_143_bool, var_144_object, "b3q01_blood");
}


// @pe
void func_14201(bool var_1269_bool, object var_1270_object)
{
	object var_1272_object;
	var_1270_object = var_1272_object;
	bool var_1271_bool;
	func_12492(var_1271_bool, var_1272_object, "b5q01_heart_nude");
	if(var_1271_bool != 0) {
		var_1269_bool = true;
		return 0;
	}
	var_1269_bool = false;
}


// @pe
void func_8061(object var_2_object, string var_1542_string)
{
	bool var_1543_bool;
	func_12644(var_1543_bool);
	if(!var_1543_bool) //@nz
		return 0;
	if(var_1542_string == var_2_object)
		return 0;
	string var_1546_string; bool var_1547_bool;
	var_1542_string = var_1546_string;
	if(var_1542_string == "")
		var_1547_bool = false;
	else
		var_1547_bool = true;
	func_12348(var_1546_string, var_1547_bool);
	var_2_object = var_1542_string;
	
}


// @pe
void func_14212(bool var_1284_bool, object var_1285_object)
{
	object var_1287_object;
	var_1285_object = var_1287_object;
	bool var_1286_bool;
	func_12492(var_1286_bool, var_1287_object, "b5q01_heart_butcher");
	if(var_1286_bool != 0) {
		var_1284_bool = true;
		return 0;
	}
	var_1284_bool = false;
}


// @pe
void func_906(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_600_object, object var_601_object)
{
	var_0_object = var_601_object;
	var_1_object = var_600_object;
	var_3_string = false;
	if(1 != 0) {
		func_964(var_601_object, "Neutral");
		var_0_object->SetMessage(529930); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529931, -1, 31314); //@t
		var_0_object->AddReply(529932, -1, 31315); //@t
		goto Label_934;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x38e";
	}
Label_934:
	bool var_622_bool;
	func_12644(var_622_bool);
	if(var_622_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_12341(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_963;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_963:
		return 0;

	}
	
}


// @pe
void func_14223(bool var_1233_bool)
{
	int var_1235_int;
	func_12403(var_1235_int, "b5q01");
	if(var_1235_int == 1)
		var_1233_bool = true;
	var_1233_bool = false;
}


// @pe
void func_5007(object var_2_object, string var_683_string)
{
	bool var_684_bool;
	func_12644(var_684_bool);
	if(!var_684_bool) //@nz
		return 0;
	if(var_683_string == var_2_object)
		return 0;
	string var_687_string; bool var_688_bool;
	var_683_string = var_687_string;
	if(var_683_string == "")
		var_688_bool = false;
	else
		var_688_bool = true;
	func_12348(var_687_string, var_688_bool);
	var_2_object = var_683_string;
	
}


void func_12186(void)
{
	bool var_322_bool;
	@CameraSwitchToNormal();
	bool var_323_bool;
	func_12644(var_323_bool);
	if(var_323_bool != 0) {
	} else {
		@HasAnimationTrack(var_322_bool, "head");
		if(var_322_bool == 0) goto Label_12202;
		@UnlookAsync("head");
	}
Label_12202:
	
}


// @pe
void func_14235(bool var_1239_bool)
{
	int var_1241_int;
	func_12403(var_1241_int, "oob5Danko2");
	if(var_1241_int == 0) {
		var_1239_bool = true;
		return 0;
	}
	var_1239_bool = false;
}


// @pe
void func_14247(bool var_975_bool)
{
	int var_977_int;
	func_12403(var_977_int, "oob3Danko1");
	if(var_977_int == 0) {
		var_975_bool = true;
		return 0;
	}
	var_975_bool = false;
}


void func_12203(bool var_125_bool, object var_126_object)
{
	int var_132_int; int var_133_int;
	@GetVariable("voice_common", var_132_int);
	if(var_132_int != 0) {
		bool var_136_bool; object var_137_object;
		var_126_object = var_137_object;
		func_12261(var_136_bool, var_137_object);
		if(!var_136_bool) { //@nz
			bool var_167_bool; object var_168_object;
			var_126_object = var_168_object;
			func_12298(var_167_bool, var_168_object);
			if(!var_167_bool) { //@nz
				var_125_bool = false;
				return 4;
			}
		}
		@irand(var_133_int, 2);
		if(var_133_int != 0)
			@SetVariable("voice_common", ((var_132_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_212_bool; object var_213_object;
		var_126_object = var_213_object;
		func_12298(var_212_bool, var_213_object);
		if(!var_212_bool) { //@nz
			bool var_215_bool; object var_216_object;
			var_126_object = var_216_object;
			func_12261(var_215_bool, var_216_object);
			if(!var_215_bool) { //@nz
				var_125_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_12259;
	
Label_12259:
	var_125_bool = true;
	
}


// @pe
void func_13234(object var_240_object)
{
	@Trace("packet is given");
	object var_243_object;
	var_240_object = var_243_object;
	func_12479(var_243_object, "packet", 2);
}


// @pe
void func_14259(bool var_966_bool)
{
	int var_968_int;
	func_12403(var_968_int, "oob3Danko2");
	if(var_968_int == 0) {
		var_966_bool = true;
		return 0;
	}
	var_966_bool = false;
}


// @pe
void func_13245(void)
{
	@SetVariable("b3q04", 1000);
}


// @pe
void func_14271(bool var_676_bool)
{
	int var_678_int;
	func_12403(var_678_int, "b1q01");
	if(var_678_int == 0) {
		var_676_bool = true;
		return 0;
	}
	var_676_bool = false;
}


// @pe
void func_13251(void)
{
	@SetVariable("b3DankoVisit", 1);
}


// @pe
void func_964(object var_2_object, string var_607_string)
{
	bool var_608_bool;
	func_12644(var_608_bool);
	if(!var_608_bool) //@nz
		return 0;
	if(var_607_string == var_2_object)
		return 0;
	string var_611_string; bool var_612_bool;
	var_607_string = var_611_string;
	if(var_607_string == "")
		var_612_bool = false;
	else
		var_612_bool = true;
	func_12348(var_611_string, var_612_bool);
	var_2_object = var_607_string;
	
}


// @pe
void func_13257(void)
{
	int var_99_int;
	func_12403(var_99_int, "b12q01_Danko");
	if(var_99_int == 0) {
		@SetVariable("b12q01_Danko", 1);
		func_14550();
	}
}


// @pe
void func_14283(bool var_667_bool)
{
	int var_669_int;
	func_12403(var_669_int, "b1q01");
	if(var_669_int == 1000)
		var_667_bool = true;
	var_667_bool = false;
}


void func_7121(object var_0_object, int var_114_int, object var_115_object)
{
	var_0_object = var_115_object;
	bool var_125_bool; object var_126_object;
	object var_127_object;
	func_12376(var_127_object);
	var_127_object = var_126_object;
	func_12203(var_125_bool, var_126_object);
	bool var_220_bool; object var_221_object;
	var_115_object = var_221_object;
	func_12118(var_220_bool, var_221_object, 70.0);
	if(!var_220_bool) { //@nz
		var_114_int = -2;
		return 8;
	}
	object var_121_object;
	@CreateDialog(var_121_object);
	int var_267_int;
	func_12638(var_267_int);
	var_121_object->SetNPCName(var_267_int);
	int var_268_int;
	func_12636(var_268_int);
	var_121_object->SetNPCDescription(var_268_int);
	string var_269_string;
	func_12640(var_269_string);
	var_121_object->SetPhoto(var_269_string);
	string var_270_string;
	func_12642(var_270_string);
	var_121_object->SetPhoto2(var_270_string);
	int var_271_int;
	func_14875(var_271_int);
	var_121_object->SetPlayerName(var_271_int);
	bool var_122_bool;
	@IsOverrideActive(var_122_bool);
	if(var_122_bool != 0) {
		var_114_int = -2;
		return 8;
	}
	@DoDialog(var_121_object);
	object var_280_object; object var_281_object;
	var_115_object = var_280_object;
	var_121_object = var_281_object;
	TaskCall(24);
	func_7202(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_124_bool;
	var_121_object->IsDialogEnd(var_124_bool);
	
	for(;;) {
		var_319_bool = !var_124_bool; //@nz
		if(var_319_bool == 0) goto Label_7191;
		@sync();
		var_121_object->IsDialogEnd(var_124_bool);
	}
	
Label_7191:
	object var_320_object;
	var_115_object = var_320_object;
	func_12186();
	@StopDialog(var_121_object);
	var_121_object->GetReturnValue(-1);
	int var_123_int = var_114_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_14295(bool var_581_bool)
{
	int var_583_int;
	func_12403(var_583_int, "b2q01");
	if(var_583_int == 0) {
		var_581_bool = true;
		return 0;
	}
	var_581_bool = false;
}


// @pe
void func_13273(void)
{
	@SetVariable("oob8Danko3", 1);
}


// @pe
void func_13279(void)
{
	@SetVariable("b8DankoVisit", 1);
}


// @pe
void func_14307(bool var_418_bool)
{
	int var_420_int;
	func_12403(var_420_int, "b2MladVladBurahHomeTalk");
	if(var_420_int == 1)
		var_418_bool = true;
	var_418_bool = false;
}


// @pe
void func_13285(void)
{
	int var_170_int;
	func_12403(var_170_int, "map_chertez_state");
	if(var_170_int <= 5) {
		@SetVariable("map_chertez_state", 5);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_12261(bool var_136_bool, object var_137_object)
{
	string var_143_string; bool var_145_bool; int var_146_int; string var_147_string;
	var_143_string = "c";
	int var_144_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_137_object->HasProperty((var_143_string + (var_144_int + 1)), var_145_bool);
			if(!var_145_bool) { //@nz
			} else {
				var_144_int += 1;
			}
		}
		if(!var_144_int) { //@nz
			var_136_bool = false;
			return 10;
		}
		var_146_int = 0;
		if(var_144_int > 1)
			@irand(var_146_int, var_144_int);
		var_137_object->GetProperty((var_143_string + (var_146_int + 1)), var_147_string);
		bool var_159_bool; string var_160_string;
		var_147_string = var_160_string;
		func_12354(var_159_bool, var_160_string);
		var_159_bool = var_136_bool;
		return 10;

	}
}


// @pe
void func_14319(bool var_1353_bool)
{
	int var_1355_int;
	func_12403(var_1355_int, "oob6Danko1");
	if(var_1355_int == 0) {
		var_1353_bool = true;
		return 0;
	}
	var_1353_bool = false;
}


// @pe
void func_13302(object var_181_object)
{
	object var_185_object;
	func_14825(var_185_object);
	object var_182_object;
	var_185_object = var_182_object;
	func_14842(var_182_object, "pt_map_aglaja", (float)-1);
	object var_211_object;
	func_14825(var_211_object);
	var_181_object->ShowMap(var_211_object);
}


// @pe
void func_14331(bool var_849_bool)
{
	int var_851_int;
	func_12403(var_851_int, "b2q01");
	if(var_851_int == 1000)
		var_849_bool = true;
	var_849_bool = false;
}


