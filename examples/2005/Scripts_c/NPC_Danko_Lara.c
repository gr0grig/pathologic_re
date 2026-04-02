// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 34206) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7531();
			}
			if(var_67_cvector == 33349) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_7682();
			}
			if(var_67_cvector == 33351) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_7666();
				object var_139_object = var_1_object;
				func_7650(var_0_object);
			}
			if(var_67_cvector == 34210) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_7531();
			}
			if(var_67_cvector == 34213) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_7543();
				object var_198_object = var_1_object;
				func_7694(var_0_object);
				object var_216_object = var_1_object;
				func_7580(var_0_object);
				object var_237_object; object var_238_object;
				var_237_object = var_1_object;
				var_238_object = var_0_object;
				func_7601();
			}
			if(var_67_cvector == 34214) {
				object var_243_object; object var_244_object;
				var_243_object = var_1_object;
				var_244_object = var_0_object;
				func_7613();
			}
			if(var_66_bool == 34203) {
				bool var_269_bool;
				func_8348(var_1_object);
				if(var_269_bool != 0) {
					object var_277_object; object var_278_object;
					var_277_object = var_1_object;
					var_278_object = var_0_object;
					func_7688();
					func_234(var_67_cvector, "Neutral");
					var_0_object->SetMessage(532729); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533502, 35033, 35032); //@t
					var_0_object->AddReply(533511, 35033, 35041); //@t
					return 0;
				}
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(531944); //@t
				var_0_object->ClearReplies(); //@t
				bool var_302_bool = false;
				bool var_303_bool = false;
				bool var_304_bool;
				func_8336(var_1_object);
				if(var_304_bool != 0) {
					bool var_310_bool;
					func_8324(var_1_object);
					if(var_310_bool != 0)
						var_303_bool = true;
				}
				if(var_303_bool != 0) {
					bool var_316_bool;
					func_8300(var_1_object);
					if(var_316_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0)
					var_0_object->AddReply(531945, 33350, 33349); //@t
				bool var_325_bool;
				func_8288(var_1_object);
				if(var_325_bool != 0)
					var_0_object->AddReply(532734, 34209, 34208); //@t
				bool var_334_bool = false;
				bool var_335_bool;
				func_8360(var_335_bool, var_1_object);
				if(var_335_bool != 0) {
					bool var_344_bool;
					func_8312(var_1_object);
					if(var_344_bool != 0)
						var_334_bool = true;
				}
				if(var_334_bool != 0)
					var_0_object->AddReply(532737, 35052, 34211); //@t
				var_0_object->AddReply(531948, -1, 33352); //@t
				return 0;
			}
			if(var_66_bool == 35052) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533522, 34212, 35054); //@t
				var_0_object->AddReply(533521, -1, 35053); //@t
				return 0;
			}
			if(var_66_bool == 34212) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(532738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532739, -1, 34213); //@t
				var_0_object->AddReply(532740, -1, 34214); //@t
				return 0;
			}
			if(var_66_bool == 34209) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(532735); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532736, -1, 34210); //@t
				return 0;
			}
			if(var_66_bool == 33350) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(531946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531947, -1, 33351); //@t
				return 0;
			}
			if(var_66_bool == 35033) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533503); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533504, 35035, 35034); //@t
				return 0;
			}
			if(var_66_bool == 35035) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533506, 35042, 35036); //@t
				var_0_object->AddReply(533517, 35049, 35048); //@t
				return 0;
			}
			if(var_66_bool == 35049) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533519, 35042, 35050); //@t
				return 0;
			}
			if(var_66_bool == 35042) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533513, 35044, 35043); //@t
				var_0_object->AddReply(533516, -1, 35047); //@t
				return 0;
			}
			if(var_66_bool == 35044) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532730, 34205, 34204); //@t
				return 0;
			}
			if(var_66_bool == 34205) {
				func_234(var_67_cvector, "Neutral");
				var_0_object->SetMessage(532731); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532732, -1, 34206); //@t
				return 0;
			}
			var_3_string = true;
			bool var_438_bool;
			func_7529(var_438_bool);
			if(var_438_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x101";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_66_bool == 34236) {
				func_780(var_67_cvector, "Neutral");
				var_0_object->SetMessage(532765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532766, -1, 34237); //@t
				var_0_object->AddReply(533666, -1, 35198); //@t
				return 0;
			}
			var_3_string = true;
			bool var_91_bool;
			func_7529(var_91_bool);
			if(var_91_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x323";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 34852) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7701();
			}
			if(var_66_bool == 34851) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533347); //@t
				var_0_object->ClearReplies(); //@t
				bool var_91_bool = false;
				bool var_92_bool;
				func_8371(var_1_object);
				if(var_92_bool != 0) {
					bool var_100_bool;
					func_8383(var_1_object);
					if(var_100_bool != 0)
						var_91_bool = true;
				}
				if(var_91_bool != 0)
					var_0_object->AddReply(533348, 34853, 34852); //@t
				var_0_object->AddReply(533353, -1, 34857); //@t
				var_0_object->AddReply(536082, -1, 37830); //@t
				return 0;
			}
			if(var_66_bool == 34853) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533350, 34855, 34854); //@t
				var_0_object->AddReply(536083, 37832, 37831); //@t
				return 0;
			}
			if(var_66_bool == 37832) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536087, 37834, 37835); //@t
				var_0_object->AddReply(536088, 37834, 37837); //@t
				return 0;
			}
			if(var_66_bool == 34855) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533352, 37834, 34856); //@t
				var_0_object->AddReply(536085, 37834, 37833); //@t
				return 0;
			}
			if(var_66_bool == 37834) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536089, 37842, 37839); //@t
				var_0_object->AddReply(536090, 37842, 37840); //@t
				return 0;
			}
			if(var_66_bool == 37842) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536092, -1, 37844); //@t
				var_0_object->AddReply(536093, 37846, 37845); //@t
				return 0;
			}
			if(var_66_bool == 37846) {
				func_1002(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536095, -1, 37847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			func_7529(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x401";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 37996) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7724();
			}
			if(var_67_cvector == 38040) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_7745();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_7736();
				object var_139_object = var_1_object;
				func_7707(var_0_object);
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_7607();
			}
			if(var_67_cvector == 35084) {
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_7724();
			}
			if(var_67_cvector == 35087) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_object;
				func_7736();
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_7745();
				object var_177_object = var_1_object;
				func_7707(var_0_object);
				object var_179_object = var_1_object;
				func_7761(var_0_object);
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_7607();
			}
			if(var_67_cvector == 38050) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_7736();
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_7745();
				object var_193_object = var_1_object;
				func_7761(var_0_object);
			}
			if(var_66_bool == 35073) {
				bool var_197_bool;
				func_8407(var_1_object);
				if(var_197_bool != 0) {
					object var_203_object; object var_204_object;
					var_203_object = var_1_object;
					var_204_object = var_0_object;
					func_7718();
					object var_207_object; object var_208_object;
					var_207_object = var_1_object;
					var_208_object = var_0_object;
					func_7806();
					func_1439(var_67_cvector, "Neutral");
					var_0_object->SetMessage(533541); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533542, 37982, 35074); //@t
					var_0_object->AddReply(536217, 37982, 37990); //@t
					bool var_230_bool;
					func_8395(var_1_object);
					if(var_230_bool != 0)
						var_0_object->AddReply(536205, 37979, 37978); //@t
					return 0;
				}
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533549); //@t
				var_0_object->ClearReplies(); //@t
				bool var_241_bool;
				func_8442(var_1_object);
				if(var_241_bool != 0)
					var_0_object->AddReply(533550, 35083, 35082); //@t
				bool var_250_bool = false;
				bool var_251_bool;
				func_8419(var_251_bool, var_1_object);
				if(var_251_bool != 0) {
					bool var_260_bool;
					func_8430(var_1_object);
					if(var_260_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(533553, 35086, 35085); //@t
				var_0_object->AddReply(533556, -1, 35088); //@t
				var_0_object->AddReply(536204, -1, 37977); //@t
				return 0;
			}
			if(var_66_bool == 35086) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533555, -1, 35087); //@t
				var_0_object->AddReply(536266, -1, 38050); //@t
				return 0;
			}
			if(var_66_bool == 35083) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533552, -1, 35084); //@t
				return 0;
			}
			if(var_66_bool == 37979) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536259, 38042, 38041); //@t
				var_0_object->AddReply(536207, 37981, 37980); //@t
				return 0;
			}
			if(var_66_bool == 37981) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536263, 38042, 38045); //@t
				var_0_object->AddReply(536265, 37994, 38048); //@t
				return 0;
			}
			if(var_66_bool == 38042) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536261, -1, 38043); //@t
				var_0_object->AddReply(536262, -1, 38044); //@t
				var_0_object->AddReply(536264, -1, 38047); //@t
				return 0;
			}
			if(var_66_bool == 37982) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536210, 37984, 37983); //@t
				var_0_object->AddReply(536218, 37994, 37992); //@t
				return 0;
			}
			if(var_66_bool == 37984) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536212, 37994, 37985); //@t
				return 0;
			}
			if(var_66_bool == 37994) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536221, -1, 37996); //@t
				bool var_349_bool;
				func_8419(var_349_bool, var_1_object);
				if(var_349_bool != 0)
					var_0_object->AddReply(536255, 38039, 38037); //@t
				var_0_object->AddReply(536256, -1, 38038); //@t
				return 0;
			}
			if(var_66_bool == 38039) {
				func_1439(var_67_cvector, "Neutral");
				var_0_object->SetMessage(536257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536258, -1, 38040); //@t
				return 0;
			}
			var_3_string = true;
			bool var_364_bool;
			func_7529(var_364_bool);
			if(var_364_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5b6";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 35352) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7817();
			}
			if(var_66_bool == 35339) {
				func_2013(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533795); //@t
				var_0_object->ClearReplies(); //@t
				bool var_91_bool;
				func_8466(var_1_object);
				if(var_91_bool != 0)
					var_0_object->AddReply(533807, 35341, 35352); //@t
				var_0_object->AddReply(533796, -1, 35340); //@t
				return 0;
			}
			if(var_66_bool == 35341) {
				func_2013(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533798, 35343, 35342); //@t
				var_0_object->AddReply(533802, 35347, 35346); //@t
				return 0;
			}
			if(var_66_bool == 35347) {
				func_2013(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533803); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533804, -1, 35348); //@t
				var_0_object->AddReply(533805, -1, 35349); //@t
				return 0;
			}
			if(var_66_bool == 35343) {
				func_2013(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533800, -1, 35344); //@t
				var_0_object->AddReply(533801, -1, 35345); //@t
				return 0;
			}
			var_3_string = true;
			bool var_135_bool;
			func_7529(var_135_bool);
			if(var_135_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7f4";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_66_bool == 36971) {
				func_2303(var_67_cvector, "Neutral");
				var_0_object->SetMessage(535294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535295, 36973, 36972); //@t
				var_0_object->AddReply(535302, -1, 36980); //@t
				var_0_object->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_66_bool == 36973) {
				func_2303(var_67_cvector, "Neutral");
				var_0_object->SetMessage(535296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535297, 36975, 36974); //@t
				var_0_object->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_66_bool == 36975) {
				func_2303(var_67_cvector, "Neutral");
				var_0_object->SetMessage(535298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535299, -1, 36976); //@t
				var_0_object->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_114_bool;
			func_7529(var_114_bool);
			if(var_114_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x916";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_66_bool == 510) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_8233();
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(500441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(508443, 35012, 9266); //@t
				var_0_object->AddReply(533485, 35013, 35011); //@t
				return 0;
			}
			if(var_66_bool == 35013) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533488, 35012, 35014); //@t
				var_0_object->AddReply(533489, 35012, 35015); //@t
				return 0;
			}
			if(var_66_bool == 35012) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533491, 9267, 35019); //@t
				var_0_object->AddReply(533490, 35022, 35018); //@t
				return 0;
			}
			if(var_66_bool == 35022) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533494); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533495, 35024, 35023); //@t
				return 0;
			}
			if(var_66_bool == 35024) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533497, 35021, 35025); //@t
				return 0;
			}
			if(var_66_bool == 9267) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(508444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500443, 519, 512); //@t
				var_0_object->AddReply(533492, 35021, 35020); //@t
				return 0;
			}
			if(var_66_bool == 35021) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533498, 522, 35027); //@t
				var_0_object->AddReply(533499, 516, 35028); //@t
				return 0;
			}
			if(var_66_bool == 516) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(500447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500449, -1, 518); //@t
				var_0_object->AddReply(500446, -1, 515); //@t
				return 0;
			}
			if(var_66_bool == 519) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(500450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500451, 522, 520); //@t
				var_0_object->AddReply(500452, -1, 521); //@t
				return 0;
			}
			if(var_66_bool == 522) {
				func_2562(var_67_cvector, "Neutral");
				var_0_object->SetMessage(500453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500454, -1, 523); //@t
				var_0_object->AddReply(500455, -1, 524); //@t
				return 0;
			}
			var_3_string = true;
			bool var_179_bool;
			func_7529(var_179_bool);
			if(var_179_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa19";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 13929) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_8175();
			}
			if(var_67_cvector == 11890) {
				object var_78_object = var_1_object;
				func_8181(var_0_object);
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_8195();
			}
			if(var_67_cvector == 11891) {
				object var_131_object = var_1_object;
				func_8181(var_0_object);
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_object;
				func_8195();
			}
			if(var_67_cvector == 13930) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_8201();
			}
			if(var_67_cvector == 40680) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_7812();
			}
			if(var_67_cvector == 40681) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_7812();
			}
			if(var_67_cvector == 11915) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_8219();
			}
			if(var_67_cvector == 3969) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_8207();
			}
			if(var_67_cvector == 3968) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_8213();
			}
			if(var_66_bool == 3967) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503662); //@t
				var_0_object->ClearReplies(); //@t
				bool var_204_bool = false;
				bool var_205_bool;
				func_8714(var_1_object);
				if(var_205_bool != 0) {
					bool var_213_bool;
					func_8726(var_1_object);
					if(var_213_bool != 0)
						var_204_bool = true;
				}
				if(var_204_bool != 0)
					var_0_object->AddReply(512735, 11881, 13929); //@t
				bool var_222_bool = false;
				bool var_223_bool = false;
				bool var_224_bool = false;
				bool var_225_bool;
				func_8738(var_1_object);
				if(var_225_bool != 0) {
					bool var_231_bool;
					func_8750(var_1_object);
					if(var_231_bool != 0)
						var_224_bool = true;
				}
				if(var_224_bool != 0) {
					bool var_237_bool;
					func_8786(var_1_object);
					if(!var_237_bool) //@nz
						var_223_bool = true;
				}
				if(var_223_bool != 0) {
					bool var_244_bool;
					func_8798(var_1_object);
					if(!var_244_bool) //@nz
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_object->AddReply(512736, 11904, 13930); //@t
				bool var_254_bool = false;
				bool var_255_bool;
				func_8762(var_1_object);
				if(var_255_bool != 0) {
					bool var_261_bool;
					func_8582(var_1_object);
					if(var_261_bool != 0)
						var_254_bool = true;
				}
				if(var_254_bool != 0)
					var_0_object->AddReply(503664, 3970, 3969); //@t
				bool var_270_bool;
				func_8774(var_1_object);
				if(var_270_bool != 0)
					var_0_object->AddReply(503663, 3972, 3968); //@t
				var_0_object->AddReply(513019, -1, 14225); //@t
				return 0;
			}
			if(var_66_bool == 3972) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503667); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503668, 3975, 3973); //@t
				var_0_object->AddReply(503669, 3975, 3974); //@t
				var_0_object->AddReply(503672, 3981, 3978); //@t
				return 0;
			}
			if(var_66_bool == 3975) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503671, 3981, 3976); //@t
				var_0_object->AddReply(503673, -1, 3980); //@t
				return 0;
			}
			if(var_66_bool == 3981) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503675, 3984, 3982); //@t
				var_0_object->AddReply(503676, 3984, 3983); //@t
				return 0;
			}
			if(var_66_bool == 3984) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503677); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503678, 3988, 3986); //@t
				var_0_object->AddReply(503679, 3988, 3987); //@t
				return 0;
			}
			if(var_66_bool == 3988) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503681, -1, 3989); //@t
				var_0_object->AddReply(503682, -1, 3990); //@t
				var_0_object->AddReply(503685, -1, 3995); //@t
				return 0;
			}
			if(var_66_bool == 3970) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(503665); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503666, -1, 3971); //@t
				return 0;
			}
			if(var_66_bool == 11904) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510774, 11906, 11905); //@t
				var_0_object->AddReply(510789, 11906, 11923); //@t
				var_0_object->AddReply(510790, 11906, 11925); //@t
				return 0;
			}
			if(var_66_bool == 11906) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510776, 11908, 11907); //@t
				var_0_object->AddReply(510788, 11908, 11921); //@t
				return 0;
			}
			if(var_66_bool == 11908) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510778, 11910, 11909); //@t
				var_0_object->AddReply(510787, 11910, 11920); //@t
				return 0;
			}
			if(var_66_bool == 11910) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510780, 11912, 11911); //@t
				var_0_object->AddReply(510785, 11912, 11916); //@t
				var_0_object->AddReply(510786, 11912, 11918); //@t
				return 0;
			}
			if(var_66_bool == 11912) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510782, 40679, 11913); //@t
				var_0_object->AddReply(510784, -1, 11915); //@t
				return 0;
			}
			if(var_66_bool == 40679) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(538763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538764, -1, 40680); //@t
				var_0_object->AddReply(538765, -1, 40681); //@t
				return 0;
			}
			if(var_66_bool == 11881) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510754, 11883, 11882); //@t
				return 0;
			}
			if(var_66_bool == 11883) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510756, 11885, 11884); //@t
				var_0_object->AddReply(510766, -1, 11895); //@t
				return 0;
			}
			if(var_66_bool == 11885) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510758, 11887, 11886); //@t
				var_0_object->AddReply(510765, -1, 11894); //@t
				return 0;
			}
			if(var_66_bool == 11887) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510760, 11889, 11888); //@t
				var_0_object->AddReply(510764, 11889, 11892); //@t
				return 0;
			}
			if(var_66_bool == 11889) {
				func_3049(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510762, -1, 11890); //@t
				var_0_object->AddReply(510763, -1, 11891); //@t
				return 0;
			}
			var_3_string = true;
			bool var_458_bool;
			func_7529(var_458_bool);
			if(var_458_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc00";
	
	}

}


task task_17
{
}


task task_18
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 7604) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7858();
			}
			if(var_67_cvector == 8158) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_7858();
			}
			if(var_67_cvector == 7606) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_7840();
			}
			if(var_67_cvector == 8161) {
				object var_158_object = var_1_object;
				func_7938(var_0_object);
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_7960();
				object var_186_object = var_1_object;
				func_7590(var_0_object);
				object var_210_object = var_1_object;
				func_7767(var_0_object);
				object var_216_object = var_1_object;
				func_7778(var_0_object);
				object var_222_object = var_1_object;
				func_7823(var_0_object);
			}
			if(var_67_cvector == 35461) {
				object var_230_object = var_1_object;
				func_7938(var_0_object);
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_7960();
				object var_234_object = var_1_object;
				func_7590(var_0_object);
				object var_236_object = var_1_object;
				func_7778(var_0_object);
				object var_238_object = var_1_object;
				func_7767(var_0_object);
			}
			if(var_67_cvector == 8165) {
				object var_242_object; object var_243_object;
				var_242_object = var_1_object;
				var_243_object = var_0_object;
				func_7846();
				object var_246_object; object var_247_object;
				var_246_object = var_1_object;
				var_247_object = var_0_object;
				func_7966();
				object var_251_object; object var_252_object;
				var_251_object = var_1_object;
				var_252_object = var_0_object;
				func_7915();
				object var_271_object = var_1_object;
				func_8239(var_0_object);
			}
			if(var_67_cvector == 35455) {
				object var_299_object; object var_300_object;
				var_299_object = var_1_object;
				var_300_object = var_0_object;
				func_7852();
			}
			if(var_66_bool == 7599) {
				bool var_305_bool = false;
				bool var_306_bool;
				func_8478(var_1_object);
				if(var_306_bool != 0) {
					bool var_314_bool;
					func_8526(var_1_object);
					if(var_314_bool != 0)
						var_305_bool = true;
				}
				if(var_305_bool != 0) {
					object var_320_object; object var_321_object;
					var_320_object = var_1_object;
					var_321_object = var_0_object;
					func_7834();
					object var_324_object; object var_325_object;
					var_324_object = var_1_object;
					var_325_object = var_0_object;
					func_8169();
					func_3947(var_67_cvector, "Neutral");
					var_0_object->SetMessage(506893); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(507378, 8140, 8139); //@t
					var_0_object->AddReply(507384, 8140, 8145); //@t
					return 0;
				}
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507377); //@t
				var_0_object->ClearReplies(); //@t
				bool var_349_bool = false;
				bool var_350_bool = false;
				bool var_351_bool;
				func_8490(var_1_object);
				if(var_351_bool != 0) {
					bool var_357_bool;
					func_8570(var_1_object);
					if(var_357_bool != 0)
						var_350_bool = true;
				}
				if(var_350_bool != 0) {
					bool var_363_bool;
					func_8548(var_363_bool, var_1_object);
					if(var_363_bool != 0)
						var_349_bool = true;
				}
				if(var_349_bool != 0)
					var_0_object->AddReply(506900, 7607, 7606); //@t
				bool var_381_bool = false;
				bool var_382_bool;
				func_8502(var_1_object);
				if(var_382_bool != 0) {
					bool var_388_bool;
					func_8548(var_388_bool, var_1_object);
					if(var_388_bool != 0)
						var_381_bool = true;
				}
				if(var_381_bool != 0)
					var_0_object->AddReply(506902, 7609, 7608); //@t
				bool var_393_bool = false;
				bool var_394_bool;
				func_8538(var_394_bool, var_1_object);
				if(var_394_bool != 0) {
					bool var_418_bool;
					func_8558(var_1_object);
					if(var_418_bool != 0)
						var_393_bool = true;
				}
				if(var_393_bool != 0)
					var_0_object->AddReply(506905, 7612, 7611); //@t
				bool var_427_bool;
				func_8526(var_1_object);
				if(var_427_bool != 0)
					var_0_object->AddReply(507745, 7601, 8545); //@t
				bool var_432_bool;
				func_8514(var_1_object);
				if(var_432_bool != 0)
					var_0_object->AddReply(533897, 10389, 35455); //@t
				var_0_object->AddReply(507744, -1, 8544); //@t
				var_0_object->AddReply(533898, -1, 35456); //@t
				return 0;
			}
			if(var_66_bool == 10389) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509471, 10391, 10412); //@t
				var_0_object->AddReply(509452, 10391, 10390); //@t
				return 0;
			}
			if(var_66_bool == 10391) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509454, 10393, 10392); //@t
				var_0_object->AddReply(509467, 10408, 10407); //@t
				var_0_object->AddReply(509470, -1, 10411); //@t
				return 0;
			}
			if(var_66_bool == 10408) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509468); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509469, 10393, 10409); //@t
				return 0;
			}
			if(var_66_bool == 10393) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509456, 10395, 10394); //@t
				var_0_object->AddReply(509463, 10403, 10402); //@t
				var_0_object->AddReply(509466, -1, 10406); //@t
				return 0;
			}
			if(var_66_bool == 10403) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509464); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509465, 10395, 10404); //@t
				return 0;
			}
			if(var_66_bool == 10395) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509458, 10397, 10396); //@t
				var_0_object->AddReply(509462, 10397, 10400); //@t
				return 0;
			}
			if(var_66_bool == 10397) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509460, -1, 10398); //@t
				var_0_object->AddReply(509461, -1, 10399); //@t
				return 0;
			}
			if(var_66_bool == 7612) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(506906); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506907, -1, 7613); //@t
				return 0;
			}
			if(var_66_bool == 7609) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(506903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507397, 8163, 8162); //@t
				return 0;
			}
			if(var_66_bool == 8163) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507399, -1, 8165); //@t
				return 0;
			}
			if(var_66_bool == 7607) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(506901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533899, 35458, 35457); //@t
				return 0;
			}
			if(var_66_bool == 35458) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533901, 35460, 35459); //@t
				var_0_object->AddReply(533903, -1, 35461); //@t
				return 0;
			}
			if(var_66_bool == 35460) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533904, 35463, 35462); //@t
				var_0_object->AddReply(533909, 35466, 35467); //@t
				return 0;
			}
			if(var_66_bool == 35463) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533906, 35466, 35464); //@t
				var_0_object->AddReply(533907, 35466, 35465); //@t
				return 0;
			}
			if(var_66_bool == 35466) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(533908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507396, -1, 8161); //@t
				return 0;
			}
			if(var_66_bool == 8140) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507380, 8142, 8141); //@t
				return 0;
			}
			if(var_66_bool == 8142) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507382, 8144, 8143); //@t
				var_0_object->AddReply(507386, 8150, 8149); //@t
				return 0;
			}
			if(var_66_bool == 8150) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507388, 8144, 8151); //@t
				return 0;
			}
			if(var_66_bool == 8144) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506894, 8153, 7600); //@t
				return 0;
			}
			if(var_66_bool == 8153) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507390, 7601, 8154); //@t
				var_0_object->AddReply(507391, -1, 8155); //@t
				return 0;
			}
			if(var_66_bool == 7601) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(506895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506896, 7603, 7602); //@t
				var_0_object->AddReply(507392, 8157, 8156); //@t
				return 0;
			}
			if(var_66_bool == 8157) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(507393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507395, 7603, 8159); //@t
				return 0;
			}
			if(var_66_bool == 7603) {
				func_3947(var_67_cvector, "Neutral");
				var_0_object->SetMessage(506897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(506898, -1, 7604); //@t
				var_0_object->AddReply(507394, -1, 8158); //@t
				return 0;
			}
			var_3_string = true;
			bool var_650_bool;
			func_7529(var_650_bool);
			if(var_650_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf82";
	
	}

}


task task_19
{
}


task task_20
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 10923) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_7800();
			}
			if(var_67_cvector == 10931) {
				object var_78_object = var_1_object;
				func_8005(var_0_object);
				object var_102_object = var_1_object;
				func_7789(var_0_object);
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_7607();
			}
			if(var_66_bool == 10922) {
				func_4885(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509915); //@t
				var_0_object->ClearReplies(); //@t
				bool var_127_bool;
				func_8454(var_1_object);
				if(var_127_bool != 0)
					var_0_object->AddReply(509916, 10924, 10923); //@t
				var_0_object->AddReply(509924, -1, 10933); //@t
				return 0;
			}
			if(var_66_bool == 10924) {
				func_4885(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509918, 10926, 10925); //@t
				var_0_object->AddReply(509922, 10926, 10929); //@t
				var_0_object->AddReply(509923, -1, 10931); //@t
				return 0;
			}
			if(var_66_bool == 10926) {
				func_4885(var_67_cvector, "Neutral");
				var_0_object->SetMessage(509919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509920, -1, 10927); //@t
				var_0_object->AddReply(509921, -1, 10928); //@t
				return 0;
			}
			var_3_string = true;
			bool var_164_bool;
			func_7529(var_164_bool);
			if(var_164_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x132c";
	
	}

}


task task_21
{
}


task task_22
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, int var_55_int, int var_56_int, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 12160) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_8016();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_8022();
				object var_124_object = var_1_object;
				func_7989(var_0_object);
			}
			if(var_67_cvector == 12161) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_8016();
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_8022();
				object var_156_object = var_1_object;
				func_7989(var_0_object);
			}
			if(var_67_cvector == 12181) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_8054();
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_object;
				func_8060();
			}
			if(var_67_cvector == 12182) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_8054();
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_8060();
			}
			if(var_67_cvector == 12183) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_8054();
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_8060();
				object var_188_object = var_1_object;
				func_7973(var_0_object);
			}
			if(var_67_cvector == 12649) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_8080();
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_8086();
				object var_205_object = var_1_object;
				func_8092(var_0_object);
				object var_244_object = var_1_object;
				func_8277(var_0_object);
				object var_268_object = var_1_object;
				func_8255(var_0_object);
				object var_274_object = var_1_object;
				func_8266(var_0_object);
				object var_280_object; object var_281_object;
				var_280_object = var_1_object;
				var_281_object = var_0_object;
				func_7607();
			}
			if(var_67_cvector == 12650) {
				object var_286_object; object var_287_object;
				var_286_object = var_1_object;
				var_287_object = var_0_object;
				func_8080();
			}
			if(var_67_cvector == 12684) {
				object var_290_object; object var_291_object;
				var_290_object = var_1_object;
				var_291_object = var_0_object;
				func_8086();
				object var_292_object = var_1_object;
				func_8092(var_0_object);
				object var_294_object = var_1_object;
				func_8255(var_0_object);
				object var_296_object = var_1_object;
				func_8277(var_0_object);
				object var_298_object = var_1_object;
				func_8266(var_0_object);
				object var_300_object; object var_301_object;
				var_300_object = var_1_object;
				var_301_object = var_0_object;
				func_7607();
			}
			if(var_66_bool == 11193) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510151); //@t
				var_0_object->ClearReplies(); //@t
				bool var_317_bool = false;
				bool var_318_bool;
				func_8606(var_1_object);
				if(var_318_bool != 0) {
					bool var_324_bool;
					func_8594(var_1_object);
					if(var_324_bool != 0)
						var_317_bool = true;
				}
				if(var_317_bool != 0)
					var_0_object->AddReply(510152, 11195, 11194); //@t
				bool var_333_bool = false;
				bool var_334_bool;
				func_8618(var_1_object);
				if(var_334_bool != 0) {
					bool var_340_bool;
					func_8630(var_1_object);
					if(var_340_bool != 0)
						var_333_bool = true;
				}
				if(var_333_bool != 0)
					var_0_object->AddReply(510995, 12163, 12162); //@t
				bool var_349_bool = false;
				bool var_350_bool;
				func_8654(var_1_object);
				if(var_350_bool != 0) {
					bool var_356_bool;
					func_8642(var_1_object);
					if(var_356_bool != 0)
						var_349_bool = true;
				}
				if(var_349_bool != 0)
					var_0_object->AddReply(511435, 12638, 12637); //@t
				bool var_365_bool = false;
				bool var_366_bool = false;
				bool var_367_bool;
				func_8642(var_1_object);
				if(var_367_bool != 0) {
					bool var_369_bool;
					func_8666(var_1_object);
					if(!var_369_bool) //@nz
						var_366_bool = true;
				}
				if(var_366_bool != 0) {
					bool var_376_bool;
					func_8654(var_1_object);
					if(!var_376_bool) //@nz
						var_365_bool = true;
				}
				if(var_365_bool != 0)
					var_0_object->AddReply(511476, 12683, 12682); //@t
				var_0_object->AddReply(511479, -1, 12685); //@t
				return 0;
			}
			if(var_66_bool == 12683) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511478, -1, 12684); //@t
				return 0;
			}
			if(var_66_bool == 12638) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511437, 12640, 12639); //@t
				var_0_object->AddReply(511450, 12654, 12653); //@t
				return 0;
			}
			if(var_66_bool == 12654) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511452, 12656, 12655); //@t
				return 0;
			}
			if(var_66_bool == 12656) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511454, 12640, 12657); //@t
				return 0;
			}
			if(var_66_bool == 12640) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511438); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511439, 12642, 12641); //@t
				return 0;
			}
			if(var_66_bool == 12642) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511440); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511441, 12644, 12643); //@t
				var_0_object->AddReply(511449, 12644, 12651); //@t
				return 0;
			}
			if(var_66_bool == 12644) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511442); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511443, 12646, 12645); //@t
				return 0;
			}
			if(var_66_bool == 12646) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511444); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511445, 12648, 12647); //@t
				return 0;
			}
			if(var_66_bool == 12648) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511446); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511447, -1, 12649); //@t
				var_0_object->AddReply(511448, -1, 12650); //@t
				return 0;
			}
			if(var_66_bool == 12163) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510997, 12165, 12164); //@t
				return 0;
			}
			if(var_66_bool == 12165) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510999, 12167, 12166); //@t
				var_0_object->AddReply(511001, 12170, 12168); //@t
				return 0;
			}
			if(var_66_bool == 12170) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511003, 12167, 12171); //@t
				var_0_object->AddReply(511004, 12167, 12172); //@t
				return 0;
			}
			if(var_66_bool == 12167) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511000); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511005, 12176, 12175); //@t
				var_0_object->AddReply(511008, 12176, 12178); //@t
				return 0;
			}
			if(var_66_bool == 12176) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511007, 12180, 12177); //@t
				var_0_object->AddReply(511012, -1, 12183); //@t
				return 0;
			}
			if(var_66_bool == 12180) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511010, -1, 12181); //@t
				var_0_object->AddReply(511011, -1, 12182); //@t
				return 0;
			}
			if(var_66_bool == 11195) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510153); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510977, 12140, 12139); //@t
				var_0_object->AddReply(510154, 11197, 11196); //@t
				return 0;
			}
			if(var_66_bool == 11197) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510155); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510982, 12145, 12144); //@t
				var_0_object->AddReply(510986, 12149, 12148); //@t
				return 0;
			}
			if(var_66_bool == 12149) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510988, 12143, 12150); //@t
				return 0;
			}
			if(var_66_bool == 12145) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510983); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510984, 12143, 12146); //@t
				var_0_object->AddReply(510985, 12143, 12147); //@t
				return 0;
			}
			if(var_66_bool == 12140) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510980, 12143, 12142); //@t
				return 0;
			}
			if(var_66_bool == 12143) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510159, 12154, 11201); //@t
				var_0_object->AddReply(510990, 12154, 12155); //@t
				return 0;
			}
			if(var_66_bool == 12154) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510992, 12157, 12158); //@t
				return 0;
			}
			if(var_66_bool == 12157) {
				func_5252(var_67_cvector, "Neutral");
				var_0_object->SetMessage(510991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510993, -1, 12160); //@t
				var_0_object->AddReply(510994, -1, 12161); //@t
				return 0;
			}
			var_3_string = true;
			bool var_585_bool;
			func_7529(var_585_bool);
			if(var_585_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x149b";
	
	}

}


task task_23
{
}


task task_24
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, int var_60_int, int var_61_int, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_67_cvector == 37097) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_8160();
			}
			if(var_67_cvector == 12878) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_8160();
			}
			if(var_67_cvector == 37118) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_8160();
			}
			if(var_67_cvector == 37096) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_8160();
			}
			if(var_66_bool == 12861) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511662); //@t
				var_0_object->ClearReplies(); //@t
				bool var_126_bool = true;
				bool var_127_bool = true;
				bool var_128_bool;
				func_8702(var_1_object);
				if(var_128_bool != 1) {
					bool var_136_bool;
					func_8678(var_1_object);
					if(var_136_bool != 1)
						var_127_bool = false;
				}
				if(var_127_bool != 1) {
					bool var_142_bool;
					func_8690(var_1_object);
					if(var_142_bool != 1)
						var_126_bool = false;
				}
				if(var_126_bool != 0)
					var_0_object->AddReply(511663, 12863, 12862); //@t
				var_0_object->AddReply(511960, -1, 13174); //@t
				return 0;
			}
			if(var_66_bool == 12863) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511680, 12867, 12879); //@t
				var_0_object->AddReply(511665, 12865, 12864); //@t
				return 0;
			}
			if(var_66_bool == 12865) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511667, 12867, 12866); //@t
				return 0;
			}
			if(var_66_bool == 12867) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511669, 12869, 12868); //@t
				var_0_object->AddReply(511684, 12886, 12885); //@t
				var_0_object->AddReply(535434, 12875, 37115); //@t
				return 0;
			}
			if(var_66_bool == 12875) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511677, 12877, 12876); //@t
				var_0_object->AddReply(535416, -1, 37096); //@t
				return 0;
			}
			if(var_66_bool == 12886) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511685); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511686, 12888, 12887); //@t
				return 0;
			}
			if(var_66_bool == 12888) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511688, 12869, 12889); //@t
				return 0;
			}
			if(var_66_bool == 12869) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511670); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511673, 12873, 12872); //@t
				var_0_object->AddReply(511671, 12871, 12870); //@t
				return 0;
			}
			if(var_66_bool == 12871) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511681, 12882, 12881); //@t
				return 0;
			}
			if(var_66_bool == 12882) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511683, 12873, 12883); //@t
				return 0;
			}
			if(var_66_bool == 12873) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511675, 12877, 12874); //@t
				var_0_object->AddReply(535436, -1, 37118); //@t
				return 0;
			}
			if(var_66_bool == 12877) {
				func_6198(var_67_cvector, "Neutral");
				var_0_object->SetMessage(511678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535417, -1, 37097); //@t
				var_0_object->AddReply(511679, -1, 12878); //@t
				return 0;
			}
			var_3_string = true;
			bool var_252_bool;
			func_7529(var_252_bool);
			if(var_252_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x184d";
	
	}

}


task task_25
{
}


task task_26
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, int var_65_int, int var_66_int, cvector var_67_cvector)
	{
		if(1 != 0) {
			func_7308();
			if(var_66_int == 42557) {
				func_6689(var_67_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_91_bool;
			func_7529(var_91_bool);
			if(var_91_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a38";
	
	}

}


maintask task_27
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector)
	{
		var_66_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_6760(var_65_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector, int var_66_int)
	{
		if(var_66_int == 10) {
			func_6831();
			bool var_70_bool = false;
			bool var_71_bool;
			func_7052(var_71_bool);
			if(var_71_bool != 0) {
				bool var_74_bool;
				func_6800(var_74_bool);
				if(var_74_bool != 0)
					var_70_bool = true;
			}
			if(var_70_bool != 0) {
				bool var_91_bool;
				func_6780(var_91_bool);
				if(var_91_bool != 0) {
					bool var_110_bool; object var_111_object;
					object var_112_object;
					func_7315(var_112_object);
					var_112_object = var_111_object;
					func_7200(var_110_bool, var_111_object);
				}
			} else {
				func_6795(var_66_int);
				func_6822();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector)
	{
		func_7013();
		func_6831();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector)
		{
		@StopGroup0();
		func_6831();
		func_7280("Neutral");
		func_6822();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector, bool var_66_bool)
	{
		if(var_66_bool != 0)
			func_6822();
		else
			func_7280("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, object var_50_object, object var_51_object, object var_52_object, string var_53_string, bool var_54_bool, object var_55_object, object var_56_object, object var_57_object, string var_58_string, bool var_59_bool, object var_60_object, object var_61_object, object var_62_object, string var_63_string, bool var_64_bool, cvector var_65_cvector, object var_66_object)
	{
		bool var_68_bool;
		@IsOverrideActive(var_68_bool);
		if(!var_68_bool) { //@nz
			disable OnUse;
			func_7013();
			bool var_70_bool; object var_71_object;
			var_66_object = var_71_object;
			func_7043(var_70_bool, var_71_object);
			enable OnUse;
			object var_84_object;
			var_66_object = var_84_object;
			func_9214(var_84_object);
			func_7280("Neutral");
			func_6831();
			func_6822();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_71_bool;
	func_7052(var_71_bool);
	if(!var_71_bool) goto Label_0; //@nz
}


// @pe
void func_7682(void)
{
	@SetVariable("ood1Lara1", 1);
}


// @pe
void func_8195(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2562(object var_2_object, string var_264_string)
{
	bool var_265_bool;
	func_7529(var_265_bool);
	if(!var_265_bool) //@nz
		return 0;
	if(var_264_string == var_2_object)
		return 0;
	string var_268_string; bool var_269_bool;
	var_264_string = var_268_string;
	if(var_264_string == "")
		var_269_bool = false;
	else
		var_269_bool = true;
	func_7287(var_268_string, var_269_bool);
	var_2_object = var_264_string;
	
}


// @pe
void func_7688(void)
{
	@SetVariable("ood1Lara2", 1);
}


// @pe
void func_8201(void)
{
	@SetVariable("ood6Lara2", 1);
}


// @pe
void func_8714(bool var_984_bool)
{
	int var_986_int;
	func_7331(var_986_int, "d6q01");
	if(var_986_int == 1)
		var_984_bool = true;
	var_984_bool = false;
}


void func_13(object var_0_object, int var_376_int, object var_377_object)
{
	var_0_object = var_377_object;
	bool var_387_bool; object var_388_object;
	object var_389_object;
	func_7315(var_389_object);
	var_389_object = var_388_object;
	func_7142(var_387_bool, var_388_object);
	bool var_390_bool; object var_391_object;
	var_377_object = var_391_object;
	func_7057(var_390_bool, var_391_object, 70.0);
	if(!var_390_bool) { //@nz
		var_376_int = -2;
		return 8;
	}
	object var_383_object;
	@CreateDialog(var_383_object);
	int var_394_int;
	func_7523(var_394_int);
	var_383_object->SetNPCName(var_394_int);
	int var_395_int;
	func_7521(var_395_int);
	var_383_object->SetNPCDescription(var_395_int);
	string var_396_string;
	func_7525(var_396_string);
	var_383_object->SetPhoto(var_396_string);
	string var_397_string;
	func_7527(var_397_string);
	var_383_object->SetPhoto2(var_397_string);
	int var_398_int;
	func_9197(var_398_int);
	var_383_object->SetPlayerName(var_398_int);
	bool var_384_bool;
	@IsOverrideActive(var_384_bool);
	if(var_384_bool != 0) {
		var_376_int = -2;
		return 8;
	}
	@DoDialog(var_383_object);
	object var_400_object; object var_401_object;
	var_377_object = var_400_object;
	var_383_object = var_401_object;
	TaskCall(2);
	func_94(var_402_object, var_403_object, var_404_string, var_405_bool, var_400_object, var_401_object);
	TaskReturn();
	bool var_386_bool;
	var_383_object->IsDialogEnd(var_386_bool);
	
	for(;;) {
		var_498_bool = !var_386_bool; //@nz
		if(var_498_bool == 0) goto Label_83;
		@sync();
		var_383_object->IsDialogEnd(var_386_bool);
	}
	
Label_83:
	object var_499_object;
	var_377_object = var_499_object;
	func_7125();
	@StopDialog(var_383_object);
	var_383_object->GetReturnValue(-1);
	int var_385_int = var_376_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7694(object var_198_object)
{
	object var_201_object;
	var_198_object = var_201_object;
	bool var_200_bool;
	func_7429(var_200_bool, var_201_object, "powder");
}


// @pe
void func_8207(void)
{
	@SetVariable("ood6Lara3", 1);
}


// @pe
void func_7701(void)
{
	@SetVariable("ood8Lara1", 1);
}


// @pe
void func_8726(bool var_990_bool)
{
	int var_992_int;
	func_7331(var_992_int, "ood6Lara1");
	if(var_992_int == 0) {
		var_990_bool = true;
		return 0;
	}
	var_990_bool = false;
}


// @pe
void func_8213(void)
{
	@SetVariable("ood6Lara4", 1);
}


// @pe
void func_8219(void)
{
	@SetVariable("d6q01LaraVolonteer", 1);
	func_9028();
	bool var_171_bool;
	func_7446(var_171_bool, "quest_d6_01", "completed");
}


// @pe
void func_7707(object var_139_object)
{
	@Trace("burah_serum is given");
	object var_142_object;
	var_139_object = var_142_object;
	func_7409(var_142_object, "burah_serum", 1);
}


void func_7200(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_7293(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_6689(object var_2_object, string var_1412_string)
{
	bool var_1413_bool;
	func_7529(var_1413_bool);
	if(!var_1413_bool) //@nz
		return 0;
	if(var_1412_string == var_2_object)
		return 0;
	string var_1416_string; bool var_1417_bool;
	var_1412_string = var_1416_string;
	if(var_1412_string == "")
		var_1417_bool = false;
	else
		var_1417_bool = true;
	func_7287(var_1416_string, var_1417_bool);
	var_2_object = var_1412_string;
	
}


// @pe
void func_8738(bool var_1002_bool)
{
	int var_1004_int;
	func_7331(var_1004_int, "microscope_d6q01_lara_blood");
	if(var_1004_int != 0) {
		var_1002_bool = true;
		return 0;
	}
	var_1002_bool = false;
}


// @pe
void func_7718(void)
{
	@SetVariable("ood9Lara1", 1);
}


// @pe
void func_8233(void)
{
	@SetVariable("KnowLara", 1);
}


// @pe
void func_7724(void)
{
	@SetVariable("d9q03", 1);
	func_9054();
	func_9080();
}


// @pe
void func_8750(bool var_1008_bool)
{
	int var_1010_int;
	func_7331(var_1010_int, "ood6Lara2");
	if(var_1010_int == 0) {
		var_1008_bool = true;
		return 0;
	}
	var_1008_bool = false;
}


// @pe
void func_8239(object var_272_object)
{
	object var_276_object;
	func_9147(var_276_object);
	object var_273_object;
	var_276_object = var_273_object;
	func_9164(var_273_object, "pt_map_d2q03_shouse", (float)2);
	object var_296_object;
	func_9147(var_296_object);
	var_272_object->ShowMap(var_296_object);
}


// @pe
void func_6198(object var_2_object, string var_896_string)
{
	bool var_897_bool;
	func_7529(var_897_bool);
	if(!var_897_bool) //@nz
		return 0;
	if(var_896_string == var_2_object)
		return 0;
	string var_900_string; bool var_901_bool;
	var_896_string = var_900_string;
	if(var_896_string == "")
		var_901_bool = false;
	else
		var_901_bool = true;
	func_7287(var_900_string, var_901_bool);
	var_2_object = var_896_string;
	
}


// @pe
void func_7736(void)
{
	@SetVariable("d9q03", 1000);
	func_9067();
}


// @pe
void func_8762(bool var_1032_bool)
{
	int var_1034_int;
	func_7331(var_1034_int, "ood6Lara3");
	if(var_1034_int == 0) {
		var_1032_bool = true;
		return 0;
	}
	var_1032_bool = false;
}


// @pe
void func_8255(object var_268_object)
{
	@Trace("morfin is given");
	object var_271_object;
	var_268_object = var_271_object;
	func_7409(var_271_object, "morfin", 1);
}


// @pe
void func_7745(void)
{
	int var_111_int;
	func_7331(var_111_int, "d9q04");
	if(var_111_int == 1) {
		@SetVariable("d9q04", 2);
		func_9093();
	}
}


void func_7237(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_7463(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_7293(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_8774(bool var_1047_bool)
{
	int var_1049_int;
	func_7331(var_1049_int, "ood6Lara4");
	if(var_1049_int == 0) {
		var_1047_bool = true;
		return 0;
	}
	var_1047_bool = false;
}


// @pe
void func_8266(object var_274_object)
{
	@Trace("etorfin is given");
	object var_277_object;
	var_274_object = var_277_object;
	func_7409(var_277_object, "etorfin", 1);
}


void func_7761(object var_179_object)
{
	int var_182_int;
	var_179_object->RemoveItemByType(var_182_int, "Gun_danko", 15);
}


// @pe
void func_8786(bool var_1014_bool)
{
	int var_1016_int;
	func_7331(var_1016_int, "d6q01");
	if(var_1016_int == 1000)
		var_1014_bool = true;
	var_1014_bool = false;
}


// @pe
void func_8277(object var_244_object)
{
	@Trace("novocaine is given");
	object var_247_object;
	var_244_object = var_247_object;
	func_7409(var_247_object, "novocaine", 1);
}


// @pe
void func_7767(object var_210_object)
{
	@Trace("walnut2 is given");
	object var_213_object;
	var_210_object = var_213_object;
	func_7409(var_213_object, "walnut", 2);
}


// @pe
void func_8798(bool var_1021_bool)
{
	int var_1023_int;
	func_7331(var_1023_int, "d6q01");
	if(var_1023_int == -1)
		var_1021_bool = true;
	var_1021_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_400_object, object var_401_object)
{
	var_0_object = var_401_object;
	var_1_object = var_400_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_407_bool;
		func_8348(var_1_object);
		if(var_407_bool != 0) {
			object var_415_object; object var_416_object;
			var_415_object = var_1_object;
			var_416_object = var_0_object;
			func_7688();
			func_234(var_401_object, "Neutral");
			var_0_object->SetMessage(532729); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(533502, 35033, 35032); //@t
			var_0_object->AddReply(533511, 35033, 35041); //@t
		} else {
					func_234(var_401_object, "Neutral");
					var_0_object->SetMessage(531944); //@t
					var_0_object->ClearReplies(); //@t
					bool var_444_bool = false;
					bool var_445_bool = false;
					bool var_446_bool;
					func_8336(var_1_object);
					if(var_446_bool != 0) {
						bool var_452_bool;
						func_8324(var_1_object);
						if(var_452_bool != 0)
							var_445_bool = true;
					}
					if(var_445_bool != 0) {
						bool var_458_bool;
						func_8300(var_1_object);
						if(var_458_bool != 0)
							var_444_bool = true;
					}
					if(var_444_bool != 0)
						var_0_object->AddReply(531945, 33350, 33349); //@t
					bool var_467_bool;
					func_8288(var_1_object);
					if(var_467_bool != 0)
						var_0_object->AddReply(532734, 34209, 34208); //@t
					bool var_476_bool = false;
					bool var_477_bool;
					func_8360(var_477_bool, var_1_object);
					if(var_477_bool != 0) {
						bool var_486_bool;
						func_8312(var_1_object);
						if(var_486_bool != 0)
							var_476_bool = true;
					}
					if(var_476_bool != 0)
						var_0_object->AddReply(532737, 35052, 34211); //@t
					var_0_object->AddReply(531948, -1, 33352); //@t
		}
	}
	for(;;) {
		bool var_434_bool;
		func_7529(var_434_bool);
		if(var_434_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7280(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_233;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_233:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_8288(bool var_467_bool)
{
	int var_469_int;
	func_7331(var_469_int, "d1q04");
	if(var_469_int == 0) {
		var_467_bool = true;
		return 0;
	}
	var_467_bool = false;
}


void func_3678(object var_0_object, int var_502_int, object var_503_object)
{
	var_0_object = var_503_object;
	bool var_513_bool; object var_514_object;
	object var_515_object;
	func_7315(var_515_object);
	var_515_object = var_514_object;
	func_7142(var_513_bool, var_514_object);
	bool var_516_bool; object var_517_object;
	var_503_object = var_517_object;
	func_7057(var_516_bool, var_517_object, 70.0);
	if(!var_516_bool) { //@nz
		var_502_int = -2;
		return 8;
	}
	object var_509_object;
	@CreateDialog(var_509_object);
	int var_520_int;
	func_7523(var_520_int);
	var_509_object->SetNPCName(var_520_int);
	int var_521_int;
	func_7521(var_521_int);
	var_509_object->SetNPCDescription(var_521_int);
	string var_522_string;
	func_7525(var_522_string);
	var_509_object->SetPhoto(var_522_string);
	string var_523_string;
	func_7527(var_523_string);
	var_509_object->SetPhoto2(var_523_string);
	int var_524_int;
	func_9197(var_524_int);
	var_509_object->SetPlayerName(var_524_int);
	bool var_510_bool;
	@IsOverrideActive(var_510_bool);
	if(var_510_bool != 0) {
		var_502_int = -2;
		return 8;
	}
	@DoDialog(var_509_object);
	object var_526_object; object var_527_object;
	var_503_object = var_526_object;
	var_509_object = var_527_object;
	TaskCall(18);
	func_3759(var_528_object, var_529_object, var_530_string, var_531_bool, var_526_object, var_527_object);
	TaskReturn();
	bool var_512_bool;
	var_509_object->IsDialogEnd(var_512_bool);
	
	for(;;) {
		var_677_bool = !var_512_bool; //@nz
		if(var_677_bool == 0) goto Label_3748;
		@sync();
		var_509_object->IsDialogEnd(var_512_bool);
	}
	
Label_3748:
	object var_678_object;
	var_503_object = var_678_object;
	func_7125();
	@StopDialog(var_509_object);
	var_509_object->GetReturnValue(-1);
	int var_511_int = var_502_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7778(object var_216_object)
{
	@Trace("peanut3 is given");
	object var_219_object;
	var_216_object = var_219_object;
	func_7409(var_219_object, "peanut", 3);
}


void func_6760(object var_0_object)
{
	bool var_67_bool;
	func_7052(var_67_bool);
	if(!var_67_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_6888();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_6942();
	}
}
EMIT "Return(); Pop(0)";


void func_8810(bool var_626_bool, object var_627_object)
{
	int var_629_int;
	var_627_object->GetItemCountOfType(var_629_int, "smoked_meat");
	bool var_631_bool = false;
	if(var_629_int < 3) {
		if(var_629_int > 0)
			var_631_bool = true;
	}
	if(var_631_bool != 0) {
		var_626_bool = true;
		return 2;
	}
	var_627_object->GetItemCountOfType(var_629_int, "dried_fish");
	bool var_637_bool = false;
	if(var_629_int < 3) {
		if(var_629_int > 0)
			var_637_bool = true;
	}
	if(var_637_bool != 0) {
		var_626_bool = true;
		return 2;
	}
	var_627_object->GetItemCountOfType(var_629_int, "bread");
	bool var_643_bool = false;
	if(var_629_int < 3) {
		if(var_629_int > 0)
			var_643_bool = true;
	}
	if(var_643_bool != 0) {
		var_626_bool = true;
		return 2;
	}
	var_626_bool = false;
}


// @pe
void func_8300(bool var_458_bool)
{
	int var_460_int;
	func_7331(var_460_int, "d1q04");
	if(var_460_int == 1000)
		var_458_bool = true;
	var_458_bool = false;
}


// @pe
void func_7789(object var_102_object)
{
	@Trace("milk is given");
	object var_105_object;
	var_102_object = var_105_object;
	func_7409(var_105_object, "milk", 1);
}


void func_2159(object var_0_object, int var_1322_int, object var_1323_object)
{
	var_0_object = var_1323_object;
	bool var_1333_bool; object var_1334_object;
	object var_1335_object;
	func_7315(var_1335_object);
	var_1335_object = var_1334_object;
	func_7142(var_1333_bool, var_1334_object);
	bool var_1336_bool; object var_1337_object;
	var_1323_object = var_1337_object;
	func_7057(var_1336_bool, var_1337_object, 70.0);
	if(!var_1336_bool) { //@nz
		var_1322_int = -2;
		return 8;
	}
	object var_1329_object;
	@CreateDialog(var_1329_object);
	int var_1340_int;
	func_7523(var_1340_int);
	var_1329_object->SetNPCName(var_1340_int);
	int var_1341_int;
	func_7521(var_1341_int);
	var_1329_object->SetNPCDescription(var_1341_int);
	string var_1342_string;
	func_7525(var_1342_string);
	var_1329_object->SetPhoto(var_1342_string);
	string var_1343_string;
	func_7527(var_1343_string);
	var_1329_object->SetPhoto2(var_1343_string);
	int var_1344_int;
	func_9197(var_1344_int);
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
	TaskCall(12);
	func_2240(var_1348_object, var_1349_object, var_1350_string, var_1351_bool, var_1346_object, var_1347_object);
	TaskReturn();
	bool var_1332_bool;
	var_1329_object->IsDialogEnd(var_1332_bool);
	
	for(;;) {
		var_1379_bool = !var_1332_bool; //@nz
		if(var_1379_bool == 0) goto Label_2229;
		@sync();
		var_1329_object->IsDialogEnd(var_1332_bool);
	}
	
Label_2229:
	object var_1380_object;
	var_1323_object = var_1380_object;
	func_7125();
	@StopDialog(var_1329_object);
	var_1329_object->GetReturnValue(-1);
	int var_1331_int = var_1322_int;
}
EMIT "Stack[-4] = 0";


void func_7280(string var_74_string)
{
	float var_77_float; float var_78_float;
	@lshGetAnimTimes(var_74_string, var_77_float, var_78_float);
	@lshPlayAnimation(var_77_float, var_78_float, false);
}


void func_7287(string var_268_string, bool var_269_bool)
{
	float var_274_float; float var_275_float;
	@lshGetAnimTimes(var_268_string, var_274_float, var_275_float);
	@lshPlayAnimation(var_274_float, var_275_float, var_269_bool);
}


// @pe
void func_7800(void)
{
	@SetVariable("ood3Lara1", 1);
}


// @pe
void func_8312(bool var_486_bool)
{
	int var_488_int;
	func_7331(var_488_int, "d1q04");
	if(var_488_int == 1)
		var_486_bool = true;
	var_486_bool = false;
}


void func_6780(bool var_91_bool)
{
	object var_93_object;
	@FindActor(var_93_object, "player");
	if(!var_93_object) //@nz
		var_91_bool = false;
	bool var_96_bool; object var_97_object;
	var_93_object = var_97_object;
	func_7043(var_96_bool, var_97_object);
	var_96_bool = var_91_bool;
}
EMIT "Stack[-1] = 0";


void func_7293(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_7529(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


// @pe
void func_7806(void)
{
	@SetVariable("d9LaraVisit", 1);
}


// @pe
void func_8324(bool var_452_bool)
{
	int var_454_int;
	func_7331(var_454_int, "d1q01");
	if(var_454_int == 6)
		var_452_bool = true;
	var_452_bool = false;
}


// @pe
void func_7812(void)
{
	func_9041();
}


// @pe
void func_5252(object var_2_object, string var_776_string)
{
	bool var_777_bool;
	func_7529(var_777_bool);
	if(!var_777_bool) //@nz
		return 0;
	if(var_776_string == var_2_object)
		return 0;
	string var_780_string; bool var_781_bool;
	var_776_string = var_780_string;
	if(var_776_string == "")
		var_781_bool = false;
	else
		var_781_bool = true;
	func_7287(var_780_string, var_781_bool);
	var_2_object = var_776_string;
	
}


void func_4741(object var_0_object, int var_681_int, object var_682_object)
{
	var_0_object = var_682_object;
	bool var_692_bool; object var_693_object;
	object var_694_object;
	func_7315(var_694_object);
	var_694_object = var_693_object;
	func_7142(var_692_bool, var_693_object);
	bool var_695_bool; object var_696_object;
	var_682_object = var_696_object;
	func_7057(var_695_bool, var_696_object, 70.0);
	if(!var_695_bool) { //@nz
		var_681_int = -2;
		return 8;
	}
	object var_688_object;
	@CreateDialog(var_688_object);
	int var_699_int;
	func_7523(var_699_int);
	var_688_object->SetNPCName(var_699_int);
	int var_700_int;
	func_7521(var_700_int);
	var_688_object->SetNPCDescription(var_700_int);
	string var_701_string;
	func_7525(var_701_string);
	var_688_object->SetPhoto(var_701_string);
	string var_702_string;
	func_7527(var_702_string);
	var_688_object->SetPhoto2(var_702_string);
	int var_703_int;
	func_9197(var_703_int);
	var_688_object->SetPlayerName(var_703_int);
	bool var_689_bool;
	@IsOverrideActive(var_689_bool);
	if(var_689_bool != 0) {
		var_681_int = -2;
		return 8;
	}
	@DoDialog(var_688_object);
	object var_705_object; object var_706_object;
	var_682_object = var_705_object;
	var_688_object = var_706_object;
	TaskCall(20);
	func_4822(var_707_object, var_708_object, var_709_string, var_710_bool, var_705_object, var_706_object);
	TaskReturn();
	bool var_691_bool;
	var_688_object->IsDialogEnd(var_691_bool);
	
	for(;;) {
		var_741_bool = !var_691_bool; //@nz
		if(var_741_bool == 0) goto Label_4811;
		@sync();
		var_688_object->IsDialogEnd(var_691_bool);
	}
	
Label_4811:
	object var_742_object;
	var_682_object = var_742_object;
	func_7125();
	@StopDialog(var_688_object);
	var_688_object->GetReturnValue(-1);
	int var_690_int = var_681_int;
}
EMIT "Stack[-4] = 0";


void func_648(object var_0_object, int var_320_int, object var_321_object)
{
	var_0_object = var_321_object;
	bool var_331_bool; object var_332_object;
	var_321_object = var_332_object;
	func_7057(var_331_bool, var_332_object, 70.0);
	if(!var_331_bool) { //@nz
		var_320_int = -2;
		return 8;
	}
	object var_327_object;
	@CreateDialog(var_327_object);
	int var_335_int;
	func_7523(var_335_int);
	var_327_object->SetNPCName(var_335_int);
	int var_336_int;
	func_7521(var_336_int);
	var_327_object->SetNPCDescription(var_336_int);
	string var_337_string;
	func_7525(var_337_string);
	var_327_object->SetPhoto(var_337_string);
	string var_338_string;
	func_7527(var_338_string);
	var_327_object->SetPhoto2(var_338_string);
	int var_339_int;
	func_9197(var_339_int);
	var_327_object->SetPlayerName(var_339_int);
	bool var_328_bool;
	@IsOverrideActive(var_328_bool);
	if(var_328_bool != 0) {
		var_320_int = -2;
		return 8;
	}
	@DoDialog(var_327_object);
	object var_341_object; object var_342_object;
	var_321_object = var_341_object;
	var_327_object = var_342_object;
	TaskCall(4);
	func_722(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object);
	TaskReturn();
	bool var_330_bool;
	var_327_object->IsDialogEnd(var_330_bool);
	
	for(;;) {
		var_371_bool = !var_330_bool; //@nz
		if(var_371_bool == 0) goto Label_711;
		@sync();
		var_327_object->IsDialogEnd(var_330_bool);
	}
	
Label_711:
	object var_372_object;
	var_321_object = var_372_object;
	func_7125();
	@StopDialog(var_327_object);
	var_327_object->GetReturnValue(-1);
	int var_329_int = var_320_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7817(void)
{
	@SetVariable("ood10Lara1", 1);
}


void func_6795(object var_0_object)
{
	var_143_float = GetByIndex(var_0_object, 0);
	var_144_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_143_float, var_144_float);
}


void func_7308(void)
{
	bool var_69_bool;
	func_7529(var_69_bool);
	if(var_69_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_7823(object var_222_object)
{
	@Trace("lens is given");
	object var_225_object;
	var_222_object = var_225_object;
	func_7409(var_225_object, "lens", 1);
}


// @pe
void func_8336(bool var_446_bool)
{
	int var_448_int;
	func_7331(var_448_int, "ood1Lara1");
	if(var_448_int == 0) {
		var_446_bool = true;
		return 0;
	}
	var_446_bool = false;
}


void func_6800(bool var_74_bool)
{
	object var_77_object;
	@FindActor(var_77_object, "player");
	if(!var_77_object) { //@nz
		var_74_bool = false;
		return 4;
	}
	float var_81_float; object var_82_object;
	func_7018(var_81_float, var_82_object);
	if(var_81_float > 90000.0) {
		var_74_bool = false;
		return 4;
	}
	bool var_78_bool;
	@CanSee(var_78_bool, var_82_object);
	var_78_bool = var_74_bool;
}
EMIT "Stack[-2] = 0";


void func_7315(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_7321(cvector var_220_cvector, cvector var_221_cvector)
{
	float var_224_float = sqrt(var_221_cvector | var_221_cvector);
	if(var_224_float < 0.000001)
		var_220_cvector = [0.0, 0.0, 0.0];
	var_220_cvector = var_221_cvector / var_224_float;
}


// @pe
void func_7834(void)
{
	@SetVariable("ood2Lara1", 1);
}


void func_8858(bool var_595_bool, object var_596_object)
{
	int var_598_int;
	var_596_object->GetItemCountOfType(var_598_int, "smoked_meat");
	if(var_598_int < 3) {
		var_595_bool = false;
		return 2;
	}
	var_596_object->GetItemCountOfType(var_598_int, "dried_fish");
	if(var_598_int < 3) {
		var_595_bool = false;
		return 2;
	}
	var_596_object->GetItemCountOfType(var_598_int, "bread");
	if(var_598_int < 3) {
		var_595_bool = false;
		return 2;
	}
	var_595_bool = true;
}


// @pe
void func_8348(bool var_407_bool)
{
	int var_409_int;
	func_7331(var_409_int, "ood1Lara2");
	if(var_409_int == 0) {
		var_407_bool = true;
		return 0;
	}
	var_407_bool = false;
}


// @pe
void func_7840(void)
{
	@SetVariable("ood2Lara2", 1);
}


void func_7331(int var_409_int, string var_410_string)
{
	int var_412_int;
	@GetVariable(var_410_string, var_412_int);
	var_412_int = var_409_int;
}


// @pe
void func_7846(void)
{
	@SetVariable("ood2Lara3", 1);
}


void func_6822(void)
{
	float var_81_float;
	@rand(var_81_float, 8, 16);
	@SetTimer(10, var_81_float);
}


// @pe
void func_8360(bool var_477_bool, object var_478_object)
{
	object var_480_object;
	var_478_object = var_480_object;
	bool var_479_bool;
	func_7422(var_479_bool, var_480_object, "powder");
	if(var_479_bool != 0) {
		var_477_bool = true;
		return 0;
	}
	var_477_bool = false;
}


void func_7336(object var_138_object, string var_139_string)
{
	object var_142_object;
	@GetMainOutdoorScene(var_142_object);
	object var_143_object;
	@AddBlankActor(var_143_object, var_142_object, var_139_string, (var_139_string + ".bin"));
	var_143_object = var_138_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_7852(void)
{
	@SetVariable("ood2Lara4", 1);
}


// @pe
void func_3759(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_526_object, object var_527_object)
{
	var_0_object = var_527_object;
	var_1_object = var_526_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_533_bool = false;
		bool var_534_bool;
		func_8478(var_1_object);
		if(var_534_bool != 0) {
			bool var_540_bool;
			func_8526(var_1_object);
			if(var_540_bool != 0)
				var_533_bool = true;
		}
		if(var_533_bool != 0) {
			object var_546_object; object var_547_object;
			var_546_object = var_1_object;
			var_547_object = var_0_object;
			func_7834();
			object var_550_object; object var_551_object;
			var_550_object = var_1_object;
			var_551_object = var_0_object;
			func_8169();
			func_3947(var_527_object, "Neutral");
			var_0_object->SetMessage(506893); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(507378, 8140, 8139); //@t
			var_0_object->AddReply(507384, 8140, 8145); //@t
		} else {
					func_3947(var_527_object, "Neutral");
					var_0_object->SetMessage(507377); //@t
					var_0_object->ClearReplies(); //@t
					bool var_579_bool = false;
					bool var_580_bool = false;
					bool var_581_bool;
					func_8490(var_1_object);
					if(var_581_bool != 0) {
						bool var_587_bool;
						func_8570(var_1_object);
						if(var_587_bool != 0)
							var_580_bool = true;
					}
					if(var_580_bool != 0) {
						bool var_593_bool;
						func_8548(var_593_bool, var_1_object);
						if(var_593_bool != 0)
							var_579_bool = true;
					}
					if(var_579_bool != 0)
						var_0_object->AddReply(506900, 7607, 7606); //@t
					bool var_611_bool = false;
					bool var_612_bool;
					func_8502(var_1_object);
					if(var_612_bool != 0) {
						bool var_618_bool;
						func_8548(var_618_bool, var_1_object);
						if(var_618_bool != 0)
							var_611_bool = true;
					}
					if(var_611_bool != 0)
						var_0_object->AddReply(506902, 7609, 7608); //@t
					bool var_623_bool = false;
					bool var_624_bool;
					func_8538(var_624_bool, var_1_object);
					if(var_624_bool != 0) {
						bool var_648_bool;
						func_8558(var_1_object);
						if(var_648_bool != 0)
							var_623_bool = true;
					}
					if(var_623_bool != 0)
						var_0_object->AddReply(506905, 7612, 7611); //@t
					bool var_657_bool;
					func_8526(var_1_object);
					if(var_657_bool != 0)
						var_0_object->AddReply(507745, 7601, 8545); //@t
					bool var_662_bool;
					func_8514(var_1_object);
					if(var_662_bool != 0)
						var_0_object->AddReply(533897, 10389, 35455); //@t
					var_0_object->AddReply(507744, -1, 8544); //@t
					var_0_object->AddReply(533898, -1, 35456); //@t
		}
	}
	for(;;) {
		bool var_569_bool;
		func_7529(var_569_bool);
		if(var_569_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7280(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3946;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3946:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xeb3";


void func_6831(void)
{
	@KillTimer(10);
}


void func_7858(void)
{
	@SetVariable("d2q03", 1);
	object var_78_object;
	func_9147(var_78_object);
	object var_75_object;
	var_78_object = var_75_object;
	float var_89_float;
	func_7458(var_89_float);
	var_75_object->AddMark("d2q03LaraGotoMoneyFoodSelf", "pt_map_lara", 0, 515286, var_89_float);
	float var_96_float;
	func_7458(var_96_float);
	var_75_object->AddMark("d2q03LaraGotoJulia", "pt_map_julia", 0, 515288, var_96_float);
	float var_101_float;
	func_7458(var_101_float);
	var_75_object->AddMark("d2q03LaraGotoMaria", "pt_map_maria", 0, 515289, var_101_float);
	float var_106_float;
	func_7458(var_106_float);
	var_75_object->AddMark("d2q03LaraGotoMladVlad", "pt_map_mladvlad", 0, 515287, var_106_float);
	func_8937();
	func_8950();
	object var_138_object;
	func_7336(var_138_object, "quest_d2_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_8371(bool var_1112_bool)
{
	int var_1114_int;
	func_7331(var_1114_int, "d8q04");
	if(var_1114_int == 1000)
		var_1112_bool = true;
	var_1112_bool = false;
}


void func_7347(int var_263_int, int var_264_int)
{
	object var_266_object;
	@CreateIntVector(var_266_object);
	var_266_object->add(var_263_int);
	var_266_object->add(var_264_int);
	@SendWorldWndMessage(3, var_266_object);
}
EMIT "Stack[-1] = 0";


void func_8885(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 43, 2, 512125);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_9119(var_79_bool, var_80_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8383(bool var_1118_bool)
{
	int var_1120_int;
	func_7331(var_1120_int, "ood8Lara1");
	if(var_1120_int == 0) {
		var_1118_bool = true;
		return 0;
	}
	var_1118_bool = false;
}


// @pe
void func_2240(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1346_object, object var_1347_object)
{
	var_0_object = var_1347_object;
	var_1_object = var_1346_object;
	var_3_string = false;
	if(1 != 0) {
		func_2303(var_1347_object, "Neutral");
		var_0_object->SetMessage(535294); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535295, 36973, 36972); //@t
		var_0_object->AddReply(535302, -1, 36980); //@t
		var_0_object->AddReply(535303, -1, 36981); //@t
		goto Label_2273;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8c4";
	}
Label_2273:
	bool var_1371_bool;
	func_7529(var_1371_bool);
	if(var_1371_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2302;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2302:
		return 0;

	}
	
}


void func_7359(int var_211_int, int var_212_int)
{
	object var_214_object;
	@CreateIntVector(var_214_object);
	var_214_object->add(var_211_int);
	var_214_object->add(var_212_int);
	@SendWorldWndMessage(4, var_214_object);
}
EMIT "Stack[-1] = 0";


void func_8898(void)
{
	object var_185_object;
	@CreateDiaryEntry(var_185_object, 47, 2, 512129);
	bool var_189_bool; object var_190_object;
	var_185_object = var_190_object;
	func_9119(var_189_bool, var_190_object, 43);
}
EMIT "Stack[-1] = 0";


void func_1226(object var_0_object, int var_1145_int, object var_1146_object)
{
	var_0_object = var_1146_object;
	bool var_1156_bool; object var_1157_object;
	object var_1158_object;
	func_7315(var_1158_object);
	var_1158_object = var_1157_object;
	func_7142(var_1156_bool, var_1157_object);
	bool var_1159_bool; object var_1160_object;
	var_1146_object = var_1160_object;
	func_7057(var_1159_bool, var_1160_object, 70.0);
	if(!var_1159_bool) { //@nz
		var_1145_int = -2;
		return 8;
	}
	object var_1152_object;
	@CreateDialog(var_1152_object);
	int var_1163_int;
	func_7523(var_1163_int);
	var_1152_object->SetNPCName(var_1163_int);
	int var_1164_int;
	func_7521(var_1164_int);
	var_1152_object->SetNPCDescription(var_1164_int);
	string var_1165_string;
	func_7525(var_1165_string);
	var_1152_object->SetPhoto(var_1165_string);
	string var_1166_string;
	func_7527(var_1166_string);
	var_1152_object->SetPhoto2(var_1166_string);
	int var_1167_int;
	func_9197(var_1167_int);
	var_1152_object->SetPlayerName(var_1167_int);
	bool var_1153_bool;
	@IsOverrideActive(var_1153_bool);
	if(var_1153_bool != 0) {
		var_1145_int = -2;
		return 8;
	}
	@DoDialog(var_1152_object);
	object var_1169_object; object var_1170_object;
	var_1146_object = var_1169_object;
	var_1152_object = var_1170_object;
	TaskCall(8);
	func_1307(var_1171_object, var_1172_object, var_1173_string, var_1174_bool, var_1169_object, var_1170_object);
	TaskReturn();
	bool var_1155_bool;
	var_1152_object->IsDialogEnd(var_1155_bool);
	
	for(;;) {
		var_1254_bool = !var_1155_bool; //@nz
		if(var_1254_bool == 0) goto Label_1296;
		@sync();
		var_1152_object->IsDialogEnd(var_1155_bool);
	}
	
Label_1296:
	object var_1255_object;
	var_1146_object = var_1255_object;
	func_7125();
	@StopDialog(var_1152_object);
	var_1152_object->GetReturnValue(-1);
	int var_1154_int = var_1145_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8395(bool var_1205_bool)
{
	int var_1207_int;
	func_7331(var_1207_int, "d9q02");
	if(var_1207_int == 1)
		var_1205_bool = true;
	var_1205_bool = false;
}


void func_7371(object var_219_object, int var_220_int)
{
	int var_222_int;
	object var_223_object;
	var_219_object = var_223_object;
	int var_225_int;
	func_7026(var_223_object, "money", var_225_int);
	if(var_225_int > 0) {
		@GetInvItemByName(var_222_int, "Money");
		int var_232_int; int var_233_int;
		var_222_int = var_232_int;
		var_220_int = var_233_int;
		func_7347(var_232_int, var_233_int);
	}
}


void func_8911(void)
{
	object var_257_object;
	@CreateDiaryEntry(var_257_object, 48, 2, 512130);
	bool var_261_bool; object var_262_object;
	var_257_object = var_262_object;
	func_9119(var_261_bool, var_262_object, 43);
}
EMIT "Stack[-1] = 0";


// @pe
void func_722(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_341_object, object var_342_object)
{
	var_0_object = var_342_object;
	var_1_object = var_341_object;
	var_3_string = false;
	if(1 != 0) {
		func_780(var_342_object, "Neutral");
		var_0_object->SetMessage(532765); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(532766, -1, 34237); //@t
		var_0_object->AddReply(533666, -1, 35198); //@t
		goto Label_750;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2d6";
	}
Label_750:
	bool var_363_bool;
	func_7529(var_363_bool);
	if(var_363_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_779;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_779:
		return 0;

	}
	
}


// @pe
void func_4822(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_705_object, object var_706_object)
{
	var_0_object = var_706_object;
	var_3_string = false;
	if(1 != 0) {
		func_4885(var_706_object, "Neutral");
		var_0_object->SetMessage(509915); //@t
		var_0_object->ClearReplies(); //@t
		bool var_721_bool;
		func_8454(var_705_object);
		if(var_721_bool != 0)
			var_0_object->AddReply(509916, 10924, 10923); //@t
		var_0_object->AddReply(509924, -1, 10933); //@t
		goto Label_4855;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12da";
	}
Label_4855:
	bool var_733_bool;
	func_7529(var_733_bool);
	if(var_733_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_4884;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4884:
		return 0;

	}
	
}


// @pe
void func_8407(bool var_1176_bool)
{
	int var_1178_int;
	func_7331(var_1178_int, "ood9Lara1");
	if(var_1178_int == 0) {
		var_1176_bool = true;
		return 0;
	}
	var_1176_bool = false;
}


void func_8924(void)
{
	object var_98_object;
	@CreateDiaryEntry(var_98_object, 44, 2, 512126);
	bool var_102_bool; object var_103_object;
	var_98_object = var_103_object;
	func_9119(var_102_bool, var_103_object, 43);
}
EMIT "Stack[-1] = 0";


void func_7390(object var_252_object, object var_253_object, int var_254_int)
{
	int var_258_int;
	var_253_object->GetItemID(var_258_int);
	int var_259_int;
	@GetInvItemProperty(var_259_int, var_258_int, "Category");
	bool var_260_bool;
	var_252_object->AddItem(var_260_bool, var_253_object, var_259_int, var_254_int);
	if(!var_260_bool) { //@nz
		var_252_object->DropItems(var_253_object, var_254_int);
	} else {
		int var_263_int; int var_264_int;
		var_258_int = var_263_int;
		var_254_int = var_264_int;
		func_7347(var_263_int, var_264_int);
	}
	
}


// @pe
void func_8419(bool var_1234_bool, object var_1235_object)
{
	object var_1237_object;
	var_1235_object = var_1237_object;
	bool var_1236_bool;
	func_7422(var_1236_bool, var_1237_object, "Gun_danko");
	if(var_1236_bool != 0) {
		var_1234_bool = true;
		return 0;
	}
	var_1234_bool = false;
}


void func_8937(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 12, 2, 503096);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_9119(var_112_bool, var_113_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_234(object var_2_object, string var_419_string)
{
	bool var_420_bool;
	func_7529(var_420_bool);
	if(!var_420_bool) //@nz
		return 0;
	if(var_419_string == var_2_object)
		return 0;
	string var_423_string; bool var_424_bool;
	var_419_string = var_423_string;
	if(var_419_string == "")
		var_424_bool = false;
	else
		var_424_bool = true;
	func_7287(var_423_string, var_424_bool);
	var_2_object = var_419_string;
	
}


void func_7915(void)
{
	@SetVariable("d2q03", 2);
	object var_257_object;
	func_9147(var_257_object);
	object var_254_object;
	var_257_object = var_254_object;
	float var_262_float;
	func_7458(var_262_float);
	var_254_object->AddMark("d2q03LaraGotoSklad", "pt_map_d2q03_shouse", 0, 515290, var_262_float);
	func_8963();
}
EMIT "Stack[-1] = 0";


// @pe
void func_8430(bool var_1239_bool)
{
	int var_1241_int;
	func_7331(var_1241_int, "d9q03");
	if(var_1241_int == 1)
		var_1239_bool = true;
	var_1239_bool = false;
}


void func_7409(object var_247_object, string var_248_string, int var_249_int)
{
	object var_251_object;
	@CreateInvItem(var_251_object);
	var_251_object->SetItemName(var_248_string);
	object var_252_object; object var_253_object; int var_254_int;
	var_247_object = var_252_object;
	var_251_object = var_253_object;
	var_249_int = var_254_int;
	func_7390(var_252_object, var_253_object, var_254_int);
}
EMIT "Stack[-1] = 0";


void func_8950(void)
{
	object var_131_object;
	@CreateDiaryEntry(var_131_object, 63, 2, 512145);
	bool var_135_bool; object var_136_object;
	var_131_object = var_136_object;
	func_9119(var_135_bool, var_136_object, 12);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8442(bool var_1224_bool)
{
	int var_1226_int;
	func_7331(var_1226_int, "d9q03");
	if(var_1226_int == 0) {
		var_1224_bool = true;
		return 0;
	}
	var_1224_bool = false;
}


void func_7422(bool var_479_bool, object var_480_object, string var_481_string)
{
	int var_484_int;
	@GetInvItemByName(var_484_int, var_481_string);
	bool var_485_bool;
	var_480_object->HasItem(var_484_int, var_485_bool);
	var_485_bool = var_479_bool;
}


// @pe
void func_2303(object var_2_object, string var_1353_string)
{
	bool var_1354_bool;
	func_7529(var_1354_bool);
	if(!var_1354_bool) //@nz
		return 0;
	if(var_1353_string == var_2_object)
		return 0;
	string var_1357_string; bool var_1358_bool;
	var_1353_string = var_1357_string;
	if(var_1353_string == "")
		var_1358_bool = false;
	else
		var_1358_bool = true;
	func_7287(var_1357_string, var_1358_bool);
	var_2_object = var_1353_string;
	
}


void func_7938(object var_158_object)
{
	func_8976();
	int var_161_int;
	var_158_object->RemoveItemByType(var_161_int, "smoked_meat", 3);
	var_158_object->RemoveItemByType(var_161_int, "dried_fish", 3);
	var_158_object->RemoveItemByType(var_161_int, "bread", 3);
	bool var_176_bool;
	func_7446(var_176_bool, "quest_d2_03", "completed");
}


void func_8963(void)
{
	object var_264_object;
	@CreateDiaryEntry(var_264_object, 65, 2, 512147);
	bool var_268_bool; object var_269_object;
	var_264_object = var_269_object;
	func_9119(var_268_bool, var_269_object, 12);
}
EMIT "Stack[-1] = 0";


void func_7429(bool var_200_bool, object var_201_object, string var_202_string)
{
	int var_206_int;
	@GetInvItemByName(var_206_int, var_202_string);
	int var_207_int;
	@GetInvItemProperty(var_207_int, var_206_int, "Category");
	bool var_208_bool;
	var_201_object->RemoveItemByType(var_208_bool, var_206_int, var_207_int);
	if(var_208_bool != 0) {
		int var_211_int;
		var_206_int = var_211_int;
		func_7359(var_211_int, 1);
	}
	var_208_bool = var_200_bool;
}


// @pe
void func_8454(bool var_721_bool)
{
	int var_723_int;
	func_7331(var_723_int, "ood3Lara1");
	if(var_723_int == 0) {
		var_721_bool = true;
		return 0;
	}
	var_721_bool = false;
}


// @pe
void func_8702(bool var_907_bool)
{
	int var_909_int;
	func_7331(var_909_int, "d5q01");
	if(var_909_int == 4)
		var_907_bool = true;
	var_907_bool = false;
}


// @pe
void func_780(object var_2_object, string var_348_string)
{
	bool var_349_bool;
	func_7529(var_349_bool);
	if(!var_349_bool) //@nz
		return 0;
	if(var_348_string == var_2_object)
		return 0;
	string var_352_string; bool var_353_bool;
	var_348_string = var_352_string;
	if(var_348_string == "")
		var_353_bool = false;
	else
		var_353_bool = true;
	func_7287(var_352_string, var_353_bool);
	var_2_object = var_348_string;
	
}


void func_2828(object var_0_object, int var_943_int, object var_944_object)
{
	var_0_object = var_944_object;
	bool var_954_bool; object var_955_object;
	object var_956_object;
	func_7315(var_956_object);
	var_956_object = var_955_object;
	func_7142(var_954_bool, var_955_object);
	bool var_957_bool; object var_958_object;
	var_944_object = var_958_object;
	func_7057(var_957_bool, var_958_object, 70.0);
	if(!var_957_bool) { //@nz
		var_943_int = -2;
		return 8;
	}
	object var_950_object;
	@CreateDialog(var_950_object);
	int var_961_int;
	func_7523(var_961_int);
	var_950_object->SetNPCName(var_961_int);
	int var_962_int;
	func_7521(var_962_int);
	var_950_object->SetNPCDescription(var_962_int);
	string var_963_string;
	func_7525(var_963_string);
	var_950_object->SetPhoto(var_963_string);
	string var_964_string;
	func_7527(var_964_string);
	var_950_object->SetPhoto2(var_964_string);
	int var_965_int;
	func_9197(var_965_int);
	var_950_object->SetPlayerName(var_965_int);
	bool var_951_bool;
	@IsOverrideActive(var_951_bool);
	if(var_951_bool != 0) {
		var_943_int = -2;
		return 8;
	}
	@DoDialog(var_950_object);
	object var_967_object; object var_968_object;
	var_944_object = var_967_object;
	var_950_object = var_968_object;
	TaskCall(16);
	func_2909(var_969_object, var_970_object, var_971_string, var_972_bool, var_967_object, var_968_object);
	TaskReturn();
	bool var_953_bool;
	var_950_object->IsDialogEnd(var_953_bool);
	
	for(;;) {
		var_1067_bool = !var_953_bool; //@nz
		if(var_1067_bool == 0) goto Label_2898;
		@sync();
		var_950_object->IsDialogEnd(var_953_bool);
	}
	
Label_2898:
	object var_1068_object;
	var_944_object = var_1068_object;
	func_7125();
	@StopDialog(var_950_object);
	var_950_object->GetReturnValue(-1);
	int var_952_int = var_943_int;
}
EMIT "Stack[-4] = 0";


void func_8976(void)
{
	object var_163_object;
	@CreateDiaryEntry(var_163_object, 66, 2, 512148);
	bool var_167_bool; object var_168_object;
	var_163_object = var_168_object;
	func_9119(var_167_bool, var_168_object, 12);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8466(bool var_1298_bool)
{
	int var_1300_int;
	func_7331(var_1300_int, "ood10Lara1");
	if(var_1300_int == 0) {
		var_1298_bool = true;
		return 0;
	}
	var_1298_bool = false;
}


// @pe
void func_4885(object var_2_object, string var_712_string)
{
	bool var_713_bool;
	func_7529(var_713_bool);
	if(!var_713_bool) //@nz
		return 0;
	if(var_712_string == var_2_object)
		return 0;
	string var_716_string; bool var_717_bool;
	var_712_string = var_716_string;
	if(var_712_string == "")
		var_717_bool = false;
	else
		var_717_bool = true;
	func_7287(var_716_string, var_717_bool);
	var_2_object = var_712_string;
	
}


void func_7446(bool var_233_bool, string var_234_string, string var_235_string)
{
	object var_237_object;
	@FindActor(var_237_object, var_234_string);
	if(var_237_object == null)
		var_233_bool = false;
	@Trigger(var_237_object, var_235_string);
	var_233_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_7960(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1169_object, object var_1170_object)
{
	var_0_object = var_1170_object;
	var_1_object = var_1169_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_1176_bool;
		func_8407(var_1_object);
		if(var_1176_bool != 0) {
			object var_1182_object; object var_1183_object;
			var_1182_object = var_1_object;
			var_1183_object = var_0_object;
			func_7718();
			object var_1186_object; object var_1187_object;
			var_1186_object = var_1_object;
			var_1187_object = var_0_object;
			func_7806();
			func_1439(var_1170_object, "Neutral");
			var_0_object->SetMessage(533541); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(533542, 37982, 35074); //@t
			var_0_object->AddReply(536217, 37982, 37990); //@t
			bool var_1205_bool;
			func_8395(var_1_object);
			if(var_1205_bool != 0)
				var_0_object->AddReply(536205, 37979, 37978); //@t
		} else {
					func_1439(var_1170_object, "Neutral");
					var_0_object->SetMessage(533549); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1224_bool;
					func_8442(var_1_object);
					if(var_1224_bool != 0)
						var_0_object->AddReply(533550, 35083, 35082); //@t
					bool var_1233_bool = false;
					bool var_1234_bool;
					func_8419(var_1234_bool, var_1_object);
					if(var_1234_bool != 0) {
						bool var_1239_bool;
						func_8430(var_1_object);
						if(var_1239_bool != 0)
							var_1233_bool = true;
					}
					if(var_1233_bool != 0)
						var_0_object->AddReply(533553, 35086, 35085); //@t
					var_0_object->AddReply(533556, -1, 35088); //@t
					var_0_object->AddReply(536204, -1, 37977); //@t
		}
	}
	for(;;) {
		bool var_1214_bool;
		func_7529(var_1214_bool);
		if(var_1214_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_7280(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1438;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1438:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x51f";


void func_8989(void)
{
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 88, 1, 512170);
	bool var_106_bool; object var_107_object;
	var_102_object = var_107_object;
	func_9119(var_106_bool, var_107_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8478(bool var_534_bool)
{
	int var_536_int;
	func_7331(var_536_int, "ood2Lara1");
	if(var_536_int == 0) {
		var_534_bool = true;
		return 0;
	}
	var_534_bool = false;
}


// @pe
void func_7966(void)
{
	bool var_248_bool;
	func_7446(var_248_bool, "quest_d2_03", "birdmask");
}


void func_6942(void)
{
	bool var_93_bool; int var_94_int; int var_95_int; bool var_96_bool;
	@WaitForAnimEnd();
	bool var_97_bool;
	func_7052(var_97_bool);
	if(!var_97_bool) //@nz
		return 12;
	int var_99_int;
	func_7504(var_99_int);
	int var_91_int;
	var_99_int = var_91_int;
	int var_92_int = 0;
	
	for(;;) {
		bool var_112_bool = false;
		if(var_92_int < 5) {
			bool var_115_bool;
			func_7052(var_115_bool);
			if(var_115_bool != 0)
				var_112_bool = true;
		}
		if(var_112_bool != 0) {
			if(!var_91_int) { //@nz
				@Sleep(3, var_93_bool);
				if(!var_93_bool) { //@nz
				} else {
			} else {
			@irand(var_94_int, var_91_int);
			@irand(var_95_int, 5);
			if(var_95_int != 0)
				var_94_int = 0;
			string var_126_string; int var_127_int;
			var_94_int = var_127_int;
			func_7497(var_126_string, var_127_int);
			@PlayAnimation("all", var_126_string);
			@WaitForAnimEnd(var_96_bool);
			var_128_bool = !var_96_bool; //@nz
			if(var_128_bool == 0) goto Label_6997;
			goto Label_7008;
			}
				Label_6997:
					bool var_119_bool;
					func_7011(var_119_bool);
					var_120_bool = !var_119_bool; //@nz
					if(var_120_bool == 0) goto Label_7003;
			}
		}
	Label_7008:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_7003:
		@ResetAAS();
		var_92_int += 1;
	}
	
}


void func_7458(float var_93_float)
{
	float var_95_float;
	@GetGameTime(var_95_float);
	var_95_float = var_93_float;
}


// @pe
void func_7973(object var_189_object)
{
	object var_193_object;
	func_9147(var_193_object);
	object var_190_object;
	var_193_object = var_190_object;
	func_9164(var_190_object, "pt_map_ospina", (float)2);
	object var_194_object;
	func_9147(var_194_object);
	var_189_object->ShowMap(var_194_object);
}


void func_7463(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_8490(bool var_581_bool)
{
	int var_583_int;
	func_7331(var_583_int, "ood2Lara2");
	if(var_583_int == 0) {
		var_581_bool = true;
		return 0;
	}
	var_581_bool = false;
}


void func_9002(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 143, 1, 515343);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_9119(var_81_bool, var_82_object, 139);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7472(bool var_373_bool, int var_374_int)
{
	int var_375_int;
	func_7463(var_375_int);
	var_373_bool = var_375_int == var_374_int;
}


// @pe
void func_7989(object var_125_object)
{
	object var_129_object;
	func_9147(var_129_object);
	object var_126_object;
	var_129_object = var_126_object;
	func_9164(var_126_object, "pt_map_mladvlad", (float)2);
	object var_149_object;
	func_9147(var_149_object);
	var_125_object->ShowMap(var_149_object);
}


// @pe
void func_8502(bool var_612_bool)
{
	int var_614_int;
	func_7331(var_614_int, "ood2Lara3");
	if(var_614_int == 0) {
		var_612_bool = true;
		return 0;
	}
	var_612_bool = false;
}


void func_9015(void)
{
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 160, 1, 515393);
	bool var_85_bool; object var_86_object;
	var_81_object = var_86_object;
	func_9119(var_85_bool, var_86_object, 111);
}
EMIT "Stack[-1] = 0";


void func_7478(bool var_305_bool, int var_306_int)
{
	float var_310_float;
	@GetGameTime(var_310_float);
	if((1 + (var_310_float / 24)) != var_306_int)
		var_305_bool = false;
	int var_317_int;
	var_310_float = var_317_int;
	int var_312_int = var_317_int % 24;
	var_305_bool = var_312_int < 7;
}


// @pe
void func_8514(bool var_662_bool)
{
	int var_664_int;
	func_7331(var_664_int, "ood2Lara4");
	if(var_664_int == 0) {
		var_662_bool = true;
		return 0;
	}
	var_662_bool = false;
}


void func_9028(void)
{
	object var_164_object;
	@CreateDiaryEntry(var_164_object, 118, 1, 513741);
	bool var_168_bool; object var_169_object;
	var_164_object = var_169_object;
	func_9119(var_168_bool, var_169_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8005(object var_78_object)
{
	@Trace("bread is given");
	object var_81_object;
	var_78_object = var_81_object;
	func_7409(var_81_object, "bread", 1);
}


void func_7497(string var_105_string, int var_106_int)
{
	string var_108_string = "idle";
	if(var_106_int != 0)
		var_108_string += var_106_int;
	var_108_string = var_105_string;
}


void func_844(object var_0_object, int var_1071_int, object var_1072_object)
{
	var_0_object = var_1072_object;
	bool var_1082_bool; object var_1083_object;
	object var_1084_object;
	func_7315(var_1084_object);
	var_1084_object = var_1083_object;
	func_7142(var_1082_bool, var_1083_object);
	bool var_1085_bool; object var_1086_object;
	var_1072_object = var_1086_object;
	func_7057(var_1085_bool, var_1086_object, 70.0);
	if(!var_1085_bool) { //@nz
		var_1071_int = -2;
		return 8;
	}
	object var_1078_object;
	@CreateDialog(var_1078_object);
	int var_1089_int;
	func_7523(var_1089_int);
	var_1078_object->SetNPCName(var_1089_int);
	int var_1090_int;
	func_7521(var_1090_int);
	var_1078_object->SetNPCDescription(var_1090_int);
	string var_1091_string;
	func_7525(var_1091_string);
	var_1078_object->SetPhoto(var_1091_string);
	string var_1092_string;
	func_7527(var_1092_string);
	var_1078_object->SetPhoto2(var_1092_string);
	int var_1093_int;
	func_9197(var_1093_int);
	var_1078_object->SetPlayerName(var_1093_int);
	bool var_1079_bool;
	@IsOverrideActive(var_1079_bool);
	if(var_1079_bool != 0) {
		var_1071_int = -2;
		return 8;
	}
	@DoDialog(var_1078_object);
	object var_1095_object; object var_1096_object;
	var_1072_object = var_1095_object;
	var_1078_object = var_1096_object;
	TaskCall(6);
	func_925(var_1097_object, var_1098_object, var_1099_string, var_1100_bool, var_1095_object, var_1096_object);
	TaskReturn();
	bool var_1081_bool;
	var_1078_object->IsDialogEnd(var_1081_bool);
	
	for(;;) {
		var_1141_bool = !var_1081_bool; //@nz
		if(var_1141_bool == 0) goto Label_914;
		@sync();
		var_1078_object->IsDialogEnd(var_1081_bool);
	}
	
Label_914:
	object var_1142_object;
	var_1072_object = var_1142_object;
	func_7125();
	@StopDialog(var_1078_object);
	var_1078_object->GetReturnValue(-1);
	int var_1080_int = var_1071_int;
}
EMIT "Stack[-4] = 0";


void func_1869(object var_0_object, int var_1258_int, object var_1259_object)
{
	var_0_object = var_1259_object;
	bool var_1269_bool; object var_1270_object;
	object var_1271_object;
	func_7315(var_1271_object);
	var_1271_object = var_1270_object;
	func_7142(var_1269_bool, var_1270_object);
	bool var_1272_bool; object var_1273_object;
	var_1259_object = var_1273_object;
	func_7057(var_1272_bool, var_1273_object, 70.0);
	if(!var_1272_bool) { //@nz
		var_1258_int = -2;
		return 8;
	}
	object var_1265_object;
	@CreateDialog(var_1265_object);
	int var_1276_int;
	func_7523(var_1276_int);
	var_1265_object->SetNPCName(var_1276_int);
	int var_1277_int;
	func_7521(var_1277_int);
	var_1265_object->SetNPCDescription(var_1277_int);
	string var_1278_string;
	func_7525(var_1278_string);
	var_1265_object->SetPhoto(var_1278_string);
	string var_1279_string;
	func_7527(var_1279_string);
	var_1265_object->SetPhoto2(var_1279_string);
	int var_1280_int;
	func_9197(var_1280_int);
	var_1265_object->SetPlayerName(var_1280_int);
	bool var_1266_bool;
	@IsOverrideActive(var_1266_bool);
	if(var_1266_bool != 0) {
		var_1258_int = -2;
		return 8;
	}
	@DoDialog(var_1265_object);
	object var_1282_object; object var_1283_object;
	var_1259_object = var_1282_object;
	var_1265_object = var_1283_object;
	TaskCall(10);
	func_1950(var_1284_object, var_1285_object, var_1286_string, var_1287_bool, var_1282_object, var_1283_object);
	TaskReturn();
	bool var_1268_bool;
	var_1265_object->IsDialogEnd(var_1268_bool);
	
	for(;;) {
		var_1318_bool = !var_1268_bool; //@nz
		if(var_1318_bool == 0) goto Label_1939;
		@sync();
		var_1265_object->IsDialogEnd(var_1268_bool);
	}
	
Label_1939:
	object var_1319_object;
	var_1259_object = var_1319_object;
	func_7125();
	@StopDialog(var_1265_object);
	var_1265_object->GetReturnValue(-1);
	int var_1267_int = var_1258_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8526(bool var_540_bool)
{
	int var_542_int;
	func_7331(var_542_int, "d2q03");
	if(var_542_int == 0) {
		var_540_bool = true;
		return 0;
	}
	var_540_bool = false;
}


// @pe
void func_8016(void)
{
	@SetVariable("ood4Lara1", 1);
}


void func_7504(int var_99_int)
{
	int var_102_int; bool var_103_bool;
	var_102_int = 0;
	
	for(;;) {
		string var_105_string; int var_106_int;
		var_102_int = var_106_int;
		func_7497(var_105_string, var_106_int);
		@HasAnimation(var_103_bool, "all", var_105_string);
		if(!var_103_bool) //@nz
			break;
		var_102_int += 1;
	}
	var_102_int = var_99_int;
}


void func_9041(void)
{
	object var_146_object;
	@CreateDiaryEntry(var_146_object, 719, 1, 538783);
	bool var_150_bool; object var_151_object;
	var_146_object = var_151_object;
	func_9119(var_150_bool, var_151_object, 111);
}
EMIT "Stack[-1] = 0";


void func_8022(void)
{
	@SetVariable("d4q01", 2);
	object var_82_object;
	func_9147(var_82_object);
	object var_79_object;
	var_82_object = var_79_object;
	float var_93_float;
	func_7458(var_93_float);
	var_79_object->AddMark("d4q01LaraGotoMladVlad", "pt_map_mladvlad", 1, 511483, var_93_float);
	float var_100_float;
	func_7458(var_100_float);
	var_79_object->AddMark("d4q01LaraGotoMladVladSelf", "pt_map_lara", 1, 515321, var_100_float);
	func_8989();
}
EMIT "Stack[-1] = 0";


// @pe
void func_8538(bool var_624_bool, object var_625_object)
{
	object var_627_object;
	var_625_object = var_627_object;
	bool var_626_bool;
	func_8810(var_626_bool, var_627_object);
	if(var_626_bool != 0) {
		var_624_bool = true;
		return 0;
	}
	var_624_bool = false;
}


// @pe
void func_2909(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_967_object, object var_968_object)
{
	var_0_object = var_968_object;
	var_1_object = var_967_object;
	var_3_string = false;
	if(1 != 0) {
		func_3049(var_968_object, "Neutral");
		var_0_object->SetMessage(503662); //@t
		var_0_object->ClearReplies(); //@t
		bool var_983_bool = false;
		bool var_984_bool;
		func_8714(var_1_object);
		if(var_984_bool != 0) {
			bool var_990_bool;
			func_8726(var_1_object);
			if(var_990_bool != 0)
				var_983_bool = true;
		}
		if(var_983_bool != 0)
			var_0_object->AddReply(512735, 11881, 13929); //@t
		bool var_999_bool = false;
		bool var_1000_bool = false;
		bool var_1001_bool = false;
		bool var_1002_bool;
		func_8738(var_1_object);
		if(var_1002_bool != 0) {
			bool var_1008_bool;
			func_8750(var_1_object);
			if(var_1008_bool != 0)
				var_1001_bool = true;
		}
		if(var_1001_bool != 0) {
			bool var_1014_bool;
			func_8786(var_1_object);
			if(!var_1014_bool) //@nz
				var_1000_bool = true;
		}
		if(var_1000_bool != 0) {
			bool var_1021_bool;
			func_8798(var_1_object);
			if(!var_1021_bool) //@nz
				var_999_bool = true;
		}
		if(var_999_bool != 0)
			var_0_object->AddReply(512736, 11904, 13930); //@t
		bool var_1031_bool = false;
		bool var_1032_bool;
		func_8762(var_1_object);
		if(var_1032_bool != 0) {
			bool var_1038_bool;
			func_8582(var_1_object);
			if(var_1038_bool != 0)
				var_1031_bool = true;
		}
		if(var_1031_bool != 0)
			var_0_object->AddReply(503664, 3970, 3969); //@t
		bool var_1047_bool;
		func_8774(var_1_object);
		if(var_1047_bool != 0)
			var_0_object->AddReply(503663, 3972, 3968); //@t
		var_0_object->AddReply(513019, -1, 14225); //@t
		goto Label_3019;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb61";
	}
Label_3019:
	bool var_1059_bool;
	func_7529(var_1059_bool);
	if(var_1059_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3048;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3048:
		return 0;

	}
	
}


void func_9054(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 659, 2, 533577);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_9119(var_81_bool, var_82_object, -1);
}
EMIT "Stack[-1] = 0";


void func_7521(int var_241_int)
{
	var_241_int = 515541;
}


void func_7523(int var_240_int)
{
	var_240_int = 502866;
}


// @pe
void func_8548(bool var_593_bool, object var_594_object)
{
	object var_596_object;
	var_594_object = var_596_object;
	bool var_595_bool;
	func_8858(var_595_bool, var_596_object);
	if(var_595_bool != 0) {
		var_593_bool = true;
		return 0;
	}
	var_593_bool = false;
}


void func_7525(string var_242_string)
{
	var_242_string = "ui/NPC_Lara.png";
}


void func_7013(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_7527(string var_243_string)
{
	var_243_string = "ui/NPC_Lara_b.png";
}


void func_7011(bool var_119_bool)
{
	var_119_bool = true;
}


void func_7529(bool var_136_bool)
{
	var_136_bool = true;
}


void func_7018(float var_81_float, object var_82_object)
{
	cvector var_86_cvector;
	@GetPosition(var_86_cvector);
	cvector var_87_cvector;
	var_82_object->GetPosition(var_87_cvector);
	var_81_float = (var_87_cvector - var_86_cvector) | (var_87_cvector - var_86_cvector);
}


// @pe
void func_7531(void)
{
	func_8885();
	func_8924();
	object var_105_object;
	func_7336(var_105_object, "quest_d1_04");
}


// @pe
void func_3947(object var_2_object, string var_554_string)
{
	bool var_555_bool;
	func_7529(var_555_bool);
	if(!var_555_bool) //@nz
		return 0;
	if(var_554_string == var_2_object)
		return 0;
	string var_558_string; bool var_559_bool;
	var_554_string = var_558_string;
	if(var_554_string == "")
		var_559_bool = false;
	else
		var_559_bool = true;
	func_7287(var_558_string, var_559_bool);
	var_2_object = var_554_string;
	
}


void func_9067(void)
{
	object var_132_object;
	@CreateDiaryEntry(var_132_object, 661, 2, 533579);
	bool var_136_bool; object var_137_object;
	var_132_object = var_137_object;
	func_9119(var_136_bool, var_137_object, 659);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8558(bool var_648_bool)
{
	int var_650_int;
	func_7331(var_650_int, "d2q03");
	if(var_650_int == 1)
		var_648_bool = true;
	var_648_bool = false;
}


void func_7026(object var_223_object, string var_224_string, int var_225_int)
{
	int var_227_int;
	var_223_object->GetProperty(var_224_string, var_227_int);
	var_223_object->SetProperty(var_224_string, (var_227_int + var_225_int));
}


void func_2418(object var_0_object, int var_87_int, object var_88_object)
{
	var_0_object = var_88_object;
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_7315(var_100_object);
	var_100_object = var_99_object;
	func_7142(var_98_bool, var_99_object);
	bool var_193_bool; object var_194_object;
	var_88_object = var_194_object;
	func_7057(var_193_bool, var_194_object, 70.0);
	if(!var_193_bool) { //@nz
		var_87_int = -2;
		return 8;
	}
	object var_94_object;
	@CreateDialog(var_94_object);
	int var_240_int;
	func_7523(var_240_int);
	var_94_object->SetNPCName(var_240_int);
	int var_241_int;
	func_7521(var_241_int);
	var_94_object->SetNPCDescription(var_241_int);
	string var_242_string;
	func_7525(var_242_string);
	var_94_object->SetPhoto(var_242_string);
	string var_243_string;
	func_7527(var_243_string);
	var_94_object->SetPhoto2(var_243_string);
	int var_244_int;
	func_9197(var_244_int);
	var_94_object->SetPlayerName(var_244_int);
	bool var_95_bool;
	@IsOverrideActive(var_95_bool);
	if(var_95_bool != 0) {
		var_87_int = -2;
		return 8;
	}
	@DoDialog(var_94_object);
	object var_253_object; object var_254_object;
	var_88_object = var_253_object;
	var_94_object = var_254_object;
	TaskCall(14);
	func_2499(var_255_object, var_256_object, var_257_string, var_258_bool, var_253_object, var_254_object);
	TaskReturn();
	bool var_97_bool;
	var_94_object->IsDialogEnd(var_97_bool);
	
	for(;;) {
		var_296_bool = !var_97_bool; //@nz
		if(var_296_bool == 0) goto Label_2488;
		@sync();
		var_94_object->IsDialogEnd(var_97_bool);
	}
	
Label_2488:
	object var_297_object;
	var_88_object = var_297_object;
	func_7125();
	@StopDialog(var_94_object);
	var_94_object->GetReturnValue(-1);
	int var_96_int = var_87_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8054(void)
{
	@SetVariable("ood4Lara2", 1);
}


void func_7543(void)
{
	object var_177_object;
	func_9147(var_177_object);
	object var_175_object;
	var_177_object = var_175_object;
	object var_176_object;
	var_175_object->FindMark(var_176_object, "k2q04AnnaGotoGatherer1");
	if(var_176_object != 0)
		var_176_object->Remove();
	var_175_object->FindMark(var_176_object, "k2q04MladVladGotoAnna");
	if(var_176_object != 0)
		var_176_object->Remove();
	var_175_object->FindMark(var_176_object, "k2q04AnnaGotoGatherer3");
	if(var_176_object != 0)
		var_176_object->Remove();
	func_8898();
	bool var_192_bool;
	func_7446(var_192_bool, "quest_d1_04", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_9080(void)
{
	object var_100_object;
	@CreateDiaryEntry(var_100_object, 660, 2, 533578);
	bool var_104_bool; object var_105_object;
	var_100_object = var_105_object;
	func_9119(var_104_bool, var_105_object, 659);
}
EMIT "Stack[-1] = 0";


void func_7033(bool var_74_bool, cvector var_75_cvector)
{
	cvector var_79_cvector;
	@GetPosition(var_79_cvector);
	cvector var_80_cvector = var_75_cvector - var_79_cvector;
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = GetByIndex(var_80_cvector, 2);
	bool var_81_bool;
	@Rotate(var_82_float, var_83_float, var_81_bool);
	var_81_bool = var_74_bool;
}


// @pe
void func_8570(bool var_587_bool)
{
	int var_589_int;
	func_7331(var_589_int, "d2q03");
	if(var_589_int == 3)
		var_587_bool = true;
	var_587_bool = false;
}


void func_8060(void)
{
	@SetVariable("d4q01_subquest", 3);
	object var_170_object;
	func_9147(var_170_object);
	object var_167_object;
	var_170_object = var_167_object;
	float var_175_float;
	func_7458(var_175_float);
	var_167_object->AddMark("d4q01LaraGotoOspina", "pt_map_ospina", 0, 511506, var_175_float);
}
EMIT "Stack[-1] = 0";


void func_7043(bool var_70_bool, object var_71_object)
{
	cvector var_73_cvector;
	var_71_object->GetPosition(var_73_cvector);
	bool var_74_bool; cvector var_75_cvector;
	var_73_cvector = var_75_cvector;
	func_7033(var_74_bool, var_75_cvector);
	var_74_bool = var_70_bool;
}


void func_9093(void)
{
	object var_120_object;
	@CreateDiaryEntry(var_120_object, 664, 2, 533582);
	bool var_124_bool; object var_125_object;
	var_120_object = var_125_object;
	func_9119(var_124_bool, var_125_object, 662);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8582(bool var_1038_bool)
{
	int var_1040_int;
	func_7331(var_1040_int, "d2q03");
	if(var_1040_int == 1000)
		var_1038_bool = true;
	var_1038_bool = false;
}


void func_7052(bool var_67_bool)
{
	bool var_69_bool;
	@IsLoaded(var_69_bool);
	var_69_bool = var_67_bool;
}


// @pe
void func_8080(void)
{
	@SetVariable("ood4Lara3", 1);
}


void func_7057(bool var_193_bool, object var_194_object, float var_195_float)
{
	cvector var_206_cvector; bool var_213_bool;
	var_194_object->GetPosition(var_206_cvector);
	float var_205_float;
	var_194_object->GetEyesHeight(var_205_float);
	var_214_float = GetByIndex(var_206_cvector, 1);
	SetByIndex(var_206_cvector, 1) = (var_214_float + var_205_float);
	cvector var_207_cvector;
	@GetPosition(var_207_cvector);
	@GetEyesHeight(var_205_float);
	var_215_float = GetByIndex(var_207_cvector, 1);
	SetByIndex(var_207_cvector, 1) = (var_215_float + var_205_float);
	cvector var_208_cvector = var_206_cvector - var_207_cvector;
	var_216_float = GetByIndex(var_208_cvector, 1);
	SetByIndex(var_208_cvector, 1) = (float)0;
	var_218_float = sqrt(var_208_cvector | var_208_cvector);
	var_208_cvector /= var_218_float;
	cvector var_209_cvector = -var_208_cvector;
	cvector var_220_cvector;
	func_7321(var_220_cvector, (var_209_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_210_cvector = ((var_208_cvector * var_195_float) + (var_220_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_212_bool;
	@IsOverrideActive(var_212_bool);
	if(var_212_bool != 0)
		var_193_bool = false;
	@StopWorld();
	@CameraTransit((var_207_cvector + var_210_cvector), var_209_cvector);
	var_233_float = GetByIndex(var_210_cvector, 0);
	var_234_float = GetByIndex(var_210_cvector, 2);
	@Rotate(var_233_float, var_234_float);
	bool var_235_bool;
	func_7529(var_235_bool);
	if(var_235_bool != 0) {
	} else {
		@HasAnimationTrack(var_213_bool, "head");
		if(var_213_bool == 0) goto Label_7119;
		@LookAsyncCamera("head");
	}
Label_7119:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_193_bool = true;
	
}


// @pe
void func_8594(bool var_792_bool)
{
	int var_794_int;
	func_7331(var_794_int, "d4q01");
	if(var_794_int == 1)
		var_792_bool = true;
	var_792_bool = false;
}


void func_9106(object var_90_object)
{
	object var_92_object;
	@GetDiaryRoot(var_92_object);
	if(!var_92_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_90_object = false;
	}
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


void func_6036(object var_0_object, int var_865_int, object var_866_object)
{
	var_0_object = var_866_object;
	bool var_876_bool; object var_877_object;
	object var_878_object;
	func_7315(var_878_object);
	var_878_object = var_877_object;
	func_7142(var_876_bool, var_877_object);
	bool var_879_bool; object var_880_object;
	var_866_object = var_880_object;
	func_7057(var_879_bool, var_880_object, 70.0);
	if(!var_879_bool) { //@nz
		var_865_int = -2;
		return 8;
	}
	object var_872_object;
	@CreateDialog(var_872_object);
	int var_883_int;
	func_7523(var_883_int);
	var_872_object->SetNPCName(var_883_int);
	int var_884_int;
	func_7521(var_884_int);
	var_872_object->SetNPCDescription(var_884_int);
	string var_885_string;
	func_7525(var_885_string);
	var_872_object->SetPhoto(var_885_string);
	string var_886_string;
	func_7527(var_886_string);
	var_872_object->SetPhoto2(var_886_string);
	int var_887_int;
	func_9197(var_887_int);
	var_872_object->SetPlayerName(var_887_int);
	bool var_873_bool;
	@IsOverrideActive(var_873_bool);
	if(var_873_bool != 0) {
		var_865_int = -2;
		return 8;
	}
	@DoDialog(var_872_object);
	object var_889_object; object var_890_object;
	var_866_object = var_889_object;
	var_872_object = var_890_object;
	TaskCall(24);
	func_6117(var_891_object, var_892_object, var_893_string, var_894_bool, var_889_object, var_890_object);
	TaskReturn();
	bool var_875_bool;
	var_872_object->IsDialogEnd(var_875_bool);
	
	for(;;) {
		var_939_bool = !var_875_bool; //@nz
		if(var_939_bool == 0) goto Label_6106;
		@sync();
		var_872_object->IsDialogEnd(var_875_bool);
	}
	
Label_6106:
	object var_940_object;
	var_866_object = var_940_object;
	func_7125();
	@StopDialog(var_872_object);
	var_872_object->GetReturnValue(-1);
	int var_874_int = var_865_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8086(void)
{
	@SetVariable("d4q02LaraGivesMedcine", 1);
}


void func_6550(object var_0_object, int var_1381_int, object var_1382_object)
{
	var_0_object = var_1382_object;
	bool var_1392_bool; object var_1393_object;
	object var_1394_object;
	func_7315(var_1394_object);
	var_1394_object = var_1393_object;
	func_7142(var_1392_bool, var_1393_object);
	bool var_1395_bool; object var_1396_object;
	var_1382_object = var_1396_object;
	func_7057(var_1395_bool, var_1396_object, 70.0);
	if(!var_1395_bool) { //@nz
		var_1381_int = -2;
		return 8;
	}
	object var_1388_object;
	@CreateDialog(var_1388_object);
	int var_1399_int;
	func_7523(var_1399_int);
	var_1388_object->SetNPCName(var_1399_int);
	int var_1400_int;
	func_7521(var_1400_int);
	var_1388_object->SetNPCDescription(var_1400_int);
	string var_1401_string;
	func_7525(var_1401_string);
	var_1388_object->SetPhoto(var_1401_string);
	string var_1402_string;
	func_7527(var_1402_string);
	var_1388_object->SetPhoto2(var_1402_string);
	int var_1403_int;
	func_9197(var_1403_int);
	var_1388_object->SetPlayerName(var_1403_int);
	bool var_1389_bool;
	@IsOverrideActive(var_1389_bool);
	if(var_1389_bool != 0) {
		var_1381_int = -2;
		return 8;
	}
	@DoDialog(var_1388_object);
	object var_1405_object; object var_1406_object;
	var_1382_object = var_1405_object;
	var_1388_object = var_1406_object;
	TaskCall(26);
	func_6631(var_1407_object, var_1408_object, var_1409_string, var_1410_bool, var_1405_object, var_1406_object);
	TaskReturn();
	bool var_1391_bool;
	var_1388_object->IsDialogEnd(var_1391_bool);
	
	for(;;) {
		var_1435_bool = !var_1391_bool; //@nz
		if(var_1435_bool == 0) goto Label_6620;
		@sync();
		var_1388_object->IsDialogEnd(var_1391_bool);
	}
	
Label_6620:
	object var_1436_object;
	var_1382_object = var_1436_object;
	func_7125();
	@StopDialog(var_1388_object);
	var_1388_object->GetReturnValue(-1);
	int var_1390_int = var_1381_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7580(object var_216_object)
{
	@Trace("money1000 is given");
	object var_219_object;
	var_216_object = var_219_object;
	func_7371(var_219_object, 1000);
}


// @pe
void func_925(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1095_object, object var_1096_object)
{
	var_0_object = var_1096_object;
	var_1_object = var_1095_object;
	var_3_string = false;
	if(1 != 0) {
		func_1002(var_1096_object, "Neutral");
		var_0_object->SetMessage(533347); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1111_bool = false;
		bool var_1112_bool;
		func_8371(var_1_object);
		if(var_1112_bool != 0) {
			bool var_1118_bool;
			func_8383(var_1_object);
			if(var_1118_bool != 0)
				var_1111_bool = true;
		}
		if(var_1111_bool != 0)
			var_0_object->AddReply(533348, 34853, 34852); //@t
		var_0_object->AddReply(533353, -1, 34857); //@t
		var_0_object->AddReply(536082, -1, 37830); //@t
		goto Label_972;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3a1";
	}
Label_972:
	bool var_1133_bool;
	func_7529(var_1133_bool);
	if(var_1133_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1001;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1001:
		return 0;

	}
	
}


// @pe
void func_1950(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1282_object, object var_1283_object)
{
	var_0_object = var_1283_object;
	var_3_string = false;
	if(1 != 0) {
		func_2013(var_1283_object, "Neutral");
		var_0_object->SetMessage(533795); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1298_bool;
		func_8466(var_1282_object);
		if(var_1298_bool != 0)
			var_0_object->AddReply(533807, 35341, 35352); //@t
		var_0_object->AddReply(533796, -1, 35340); //@t
		goto Label_1983;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7a2";
	}
Label_1983:
	bool var_1310_bool;
	func_7529(var_1310_bool);
	if(var_1310_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2012;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2012:
		return 0;

	}
	
}


// @pe
void func_1439(object var_2_object, string var_1190_string)
{
	bool var_1191_bool;
	func_7529(var_1191_bool);
	if(!var_1191_bool) //@nz
		return 0;
	if(var_1190_string == var_2_object)
		return 0;
	string var_1194_string; bool var_1195_bool;
	var_1190_string = var_1194_string;
	if(var_1190_string == "")
		var_1195_bool = false;
	else
		var_1195_bool = true;
	func_7287(var_1194_string, var_1195_bool);
	var_2_object = var_1190_string;
	
}


// @pe
void func_8606(bool var_786_bool)
{
	int var_788_int;
	func_7331(var_788_int, "ood4Lara1");
	if(var_788_int == 0) {
		var_786_bool = true;
		return 0;
	}
	var_786_bool = false;
}


void func_8092(object var_206_object)
{
	object var_208_object;
	bool var_209_bool = false;
	bool var_210_bool = false;
	int var_211_int;
	func_7331(var_211_int, "d4q02AnnaGivesMedcine");
	if(var_211_int == 1) {
		int var_217_int;
		func_7331(var_217_int, "d4q02JuliaGivesMedcine");
		if(var_217_int == 1)
			var_210_bool = true;
	}
	if(var_210_bool != 0) {
		int var_221_int;
		func_7331(var_221_int, "d4q02LaraGivesMedcine");
		if(var_221_int == 1)
			var_209_bool = true;
	}
	if(var_209_bool != 0) {
		@SetVariable("d4q02", 2);
		object var_227_object;
		func_9147(var_227_object);
		var_227_object = var_208_object;
		float var_232_float;
		func_7458(var_232_float);
		var_208_object->AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", 0, 511842, var_232_float);
		bool var_233_bool;
		func_7446(var_233_bool, "quest_d4_02", "birdmask");
		object var_239_object;
		object var_242_object;
		func_9147(var_242_object);
		var_242_object = var_239_object;
		func_9164(var_239_object, "pt_d4q02_birdmask", (float)2);
		object var_243_object;
		func_9147(var_243_object);
		var_206_object->ShowMap(var_243_object);
		var_208_object = null;
	}
}


void func_9119(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_9106(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	object var_88_object;
	var_87_object->Find(var_83_int, var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_83_int);
		var_81_bool = false;
	}
	var_88_object->AddChild(var_82_object);
	@SendWorldWndMessage(7);
	int var_89_int;
	var_82_object->GetCategory(var_89_int);
	@SetDiarySection(var_89_int);
	var_81_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_7590(object var_186_object)
{
	@Trace("funduk3 is given");
	object var_189_object;
	var_186_object = var_189_object;
	func_7409(var_189_object, "funduk", 3);
}


void func_5031(object var_0_object, int var_745_int, object var_746_object)
{
	var_0_object = var_746_object;
	bool var_756_bool; object var_757_object;
	object var_758_object;
	func_7315(var_758_object);
	var_758_object = var_757_object;
	func_7142(var_756_bool, var_757_object);
	bool var_759_bool; object var_760_object;
	var_746_object = var_760_object;
	func_7057(var_759_bool, var_760_object, 70.0);
	if(!var_759_bool) { //@nz
		var_745_int = -2;
		return 8;
	}
	object var_752_object;
	@CreateDialog(var_752_object);
	int var_763_int;
	func_7523(var_763_int);
	var_752_object->SetNPCName(var_763_int);
	int var_764_int;
	func_7521(var_764_int);
	var_752_object->SetNPCDescription(var_764_int);
	string var_765_string;
	func_7525(var_765_string);
	var_752_object->SetPhoto(var_765_string);
	string var_766_string;
	func_7527(var_766_string);
	var_752_object->SetPhoto2(var_766_string);
	int var_767_int;
	func_9197(var_767_int);
	var_752_object->SetPlayerName(var_767_int);
	bool var_753_bool;
	@IsOverrideActive(var_753_bool);
	if(var_753_bool != 0) {
		var_745_int = -2;
		return 8;
	}
	@DoDialog(var_752_object);
	object var_769_object; object var_770_object;
	var_746_object = var_769_object;
	var_752_object = var_770_object;
	TaskCall(22);
	func_5112(var_771_object, var_772_object, var_773_string, var_774_bool, var_769_object, var_770_object);
	TaskReturn();
	bool var_755_bool;
	var_752_object->IsDialogEnd(var_755_bool);
	
	for(;;) {
		var_861_bool = !var_755_bool; //@nz
		if(var_861_bool == 0) goto Label_5101;
		@sync();
		var_752_object->IsDialogEnd(var_755_bool);
	}
	
Label_5101:
	object var_862_object;
	var_746_object = var_862_object;
	func_7125();
	@StopDialog(var_752_object);
	var_752_object->GetReturnValue(-1);
	int var_754_int = var_745_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_8618(bool var_802_bool)
{
	int var_804_int;
	func_7331(var_804_int, "ood4Lara2");
	if(var_804_int == 0) {
		var_802_bool = true;
		return 0;
	}
	var_802_bool = false;
}


// @pe
void func_7601(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_8630(bool var_808_bool)
{
	int var_810_int;
	func_7331(var_810_int, "d4q01_subquest");
	if(var_810_int == 2)
		var_808_bool = true;
	var_808_bool = false;
}


// @pe
void func_7607(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_9147(object var_82_object)
{
	object var_85_object; object var_86_object;
	@GetMainOutdoorScene(var_85_object);
	if(var_85_object == null) {
		@Trace("Can't find main outdoor scene");
		var_86_object = null;
		var_86_object = var_82_object;
	}
	var_85_object->GetMap(var_86_object);
	var_86_object = var_82_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7613(void)
{
	object var_249_object;
	func_9147(var_249_object);
	object var_247_object;
	var_249_object = var_247_object;
	object var_248_object;
	var_247_object->FindMark(var_248_object, "k2q04AnnaGotoGatherer1");
	if(var_248_object != 0)
		var_248_object->Remove();
	var_247_object->FindMark(var_248_object, "k2q04AnnaGotoGatherer3");
	if(var_248_object != 0)
		var_248_object->Remove();
	var_247_object->FindMark(var_248_object, "k2q04MladVladGotoAnna");
	if(var_248_object != 0)
		var_248_object->Remove();
	func_8911();
	bool var_264_bool;
	func_7446(var_264_bool, "quest_d1_04", "fail");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_8642(bool var_824_bool)
{
	int var_826_int;
	func_7331(var_826_int, "d4q02");
	if(var_826_int == 1)
		var_824_bool = true;
	var_824_bool = false;
}


// @pe
void func_2499(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_253_object, object var_254_object)
{
	var_0_object = var_254_object;
	var_3_string = false;
	if(1 != 0) {
		object var_260_object; object var_261_object;
		var_260_object = var_253_object;
		var_261_object = var_0_object;
		func_8233();
		func_2562(var_254_object, "Neutral");
		var_0_object->SetMessage(500441); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(508443, 35012, 9266); //@t
		var_0_object->AddReply(533485, 35013, 35011); //@t
		goto Label_2532;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9c7";
	}
Label_2532:
	bool var_283_bool;
	func_7529(var_283_bool);
	if(var_283_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2561;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2561:
		return 0;

	}
	
}


void func_9164(object var_126_object, string var_127_string, float var_128_float)
{
	object var_136_object;
	@GetMainOutdoorScene(var_136_object);
	if(var_136_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_134_cvector;
	cvector var_135_cvector;
	bool var_137_bool;
	var_136_object->GetLocator(var_127_string, var_137_bool, var_134_cvector, var_135_cvector);
	if(!var_137_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_127_string) + " doesnt exist");
	var_136_object->GetMap(var_126_object);
	if(var_126_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_147_float = GetByIndex(var_134_cvector, 0);
	var_148_float = GetByIndex(var_134_cvector, 2);
	var_126_object->SetMapParams(var_147_float, var_148_float, var_128_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_8654(bool var_818_bool)
{
	int var_820_int;
	func_7331(var_820_int, "ood4Lara3");
	if(var_820_int == 0) {
		var_818_bool = true;
		return 0;
	}
	var_818_bool = false;
}


void func_7125(void)
{
	bool var_299_bool;
	@CameraSwitchToNormal();
	bool var_300_bool;
	func_7529(var_300_bool);
	if(var_300_bool != 0) {
	} else {
		@HasAnimationTrack(var_299_bool, "head");
		if(var_299_bool == 0) goto Label_7141;
		@UnlookAsync("head");
	}
Label_7141:
	
}


// @pe
void func_8666(bool var_837_bool)
{
	int var_839_int;
	func_7331(var_839_int, "d4q02LaraGivesMedcine");
	if(var_839_int == 1)
		var_837_bool = true;
	var_837_bool = false;
}


// @pe
void func_2013(object var_2_object, string var_1289_string)
{
	bool var_1290_bool;
	func_7529(var_1290_bool);
	if(!var_1290_bool) //@nz
		return 0;
	if(var_1289_string == var_2_object)
		return 0;
	string var_1293_string; bool var_1294_bool;
	var_1289_string = var_1293_string;
	if(var_1289_string == "")
		var_1294_bool = false;
	else
		var_1294_bool = true;
	func_7287(var_1293_string, var_1294_bool);
	var_2_object = var_1289_string;
	
}


// @pe
void func_8160(void)
{
	@SetVariable("d5q01", 5);
	func_9002();
}


// @pe
void func_7650(object var_140_object)
{
	object var_144_object;
	func_9147(var_144_object);
	object var_141_object;
	var_144_object = var_141_object;
	func_9164(var_141_object, "pt_map_station", (float)2);
	object var_164_object;
	func_9147(var_164_object);
	var_140_object->ShowMap(var_164_object);
}


// @pe
void func_6117(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_889_object, object var_890_object)
{
	var_0_object = var_890_object;
	var_1_object = var_889_object;
	var_3_string = false;
	if(1 != 0) {
		func_6198(var_890_object, "Neutral");
		var_0_object->SetMessage(511662); //@t
		var_0_object->ClearReplies(); //@t
		bool var_905_bool = true;
		bool var_906_bool = true;
		bool var_907_bool;
		func_8702(var_1_object);
		if(var_907_bool != 1) {
			bool var_913_bool;
			func_8678(var_1_object);
			if(var_913_bool != 1)
				var_906_bool = false;
		}
		if(var_906_bool != 1) {
			bool var_919_bool;
			func_8690(var_1_object);
			if(var_919_bool != 1)
				var_905_bool = false;
		}
		if(var_905_bool != 0)
			var_0_object->AddReply(511663, 12863, 12862); //@t
		var_0_object->AddReply(511960, -1, 13174); //@t
		goto Label_6168;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17e9";
	}
Label_6168:
	bool var_931_bool;
	func_7529(var_931_bool);
	if(var_931_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6197;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6197:
		return 0;

	}
	
}


void func_7142(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_7200(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_7237(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_7237(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_7200(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_7198;
	
Label_7198:
	var_98_bool = true;
	
}


// @pe
void func_8678(bool var_913_bool)
{
	int var_915_int;
	func_7331(var_915_int, "d5q01");
	if(var_915_int == 2)
		var_913_bool = true;
	var_913_bool = false;
}


// @pe
void func_6631(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1405_object, object var_1406_object)
{
	var_0_object = var_1406_object;
	var_1_object = var_1405_object;
	var_3_string = false;
	if(1 != 0) {
		func_6689(var_1406_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_6659;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x19eb";
	}
Label_6659:
	bool var_1427_bool;
	func_7529(var_1427_bool);
	if(var_1427_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_6688;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_6688:
		return 0;

	}
	
}


// @pe
void func_3049(object var_2_object, string var_974_string)
{
	bool var_975_bool;
	func_7529(var_975_bool);
	if(!var_975_bool) //@nz
		return 0;
	if(var_974_string == var_2_object)
		return 0;
	string var_978_string; bool var_979_bool;
	var_974_string = var_978_string;
	if(var_974_string == "")
		var_979_bool = false;
	else
		var_979_bool = true;
	func_7287(var_978_string, var_979_bool);
	var_2_object = var_974_string;
	
}


// @pe
void func_1002(object var_2_object, string var_1102_string)
{
	bool var_1103_bool;
	func_7529(var_1103_bool);
	if(!var_1103_bool) //@nz
		return 0;
	if(var_1102_string == var_2_object)
		return 0;
	string var_1106_string; bool var_1107_bool;
	var_1102_string = var_1106_string;
	if(var_1102_string == "")
		var_1107_bool = false;
	else
		var_1107_bool = true;
	func_7287(var_1106_string, var_1107_bool);
	var_2_object = var_1102_string;
	
}


// @pe
void func_8169(void)
{
	@SetVariable("d2LaraVisit", 1);
}


void func_9197(int var_244_int)
{
	int var_246_int;
	@GetVariable("branch", var_246_int);
	if(var_246_int == 0) {
		var_244_int = 1;
		return 2;
	EMIT "GOTO 0x23fc";
	}
	if(var_246_int == 1) {
		var_244_int = 2;
		return 2;
	}
	var_244_int = 3;
}


// @pe
void func_8175(void)
{
	@SetVariable("ood6Lara1", 1);
}


void func_7666(void)
{
	object var_125_object;
	func_9147(var_125_object);
	object var_124_object;
	var_125_object = var_124_object;
	float var_136_float;
	func_7458(var_136_float);
	var_124_object->AddMark("d1q01LaraMarkMladVlad", "pt_map_station", 3, 508647, var_136_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_8690(bool var_919_bool)
{
	int var_921_int;
	func_7331(var_921_int, "d5q01");
	if(var_921_int == 3)
		var_919_bool = true;
	var_919_bool = false;
}


// @pe
void func_8181(object var_78_object)
{
	func_9015();
	@Trace("lara blood is given");
	object var_104_object;
	var_78_object = var_104_object;
	func_7409(var_104_object, "d6q01_lara_blood", 1);
}


// @pe
void func_5112(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_769_object, object var_770_object)
{
	var_0_object = var_770_object;
	var_1_object = var_769_object;
	var_3_string = false;
	if(1 != 0) {
		func_5252(var_770_object, "Neutral");
		var_0_object->SetMessage(510151); //@t
		var_0_object->ClearReplies(); //@t
		bool var_785_bool = false;
		bool var_786_bool;
		func_8606(var_1_object);
		if(var_786_bool != 0) {
			bool var_792_bool;
			func_8594(var_1_object);
			if(var_792_bool != 0)
				var_785_bool = true;
		}
		if(var_785_bool != 0)
			var_0_object->AddReply(510152, 11195, 11194); //@t
		bool var_801_bool = false;
		bool var_802_bool;
		func_8618(var_1_object);
		if(var_802_bool != 0) {
			bool var_808_bool;
			func_8630(var_1_object);
			if(var_808_bool != 0)
				var_801_bool = true;
		}
		if(var_801_bool != 0)
			var_0_object->AddReply(510995, 12163, 12162); //@t
		bool var_817_bool = false;
		bool var_818_bool;
		func_8654(var_1_object);
		if(var_818_bool != 0) {
			bool var_824_bool;
			func_8642(var_1_object);
			if(var_824_bool != 0)
				var_817_bool = true;
		}
		if(var_817_bool != 0)
			var_0_object->AddReply(511435, 12638, 12637); //@t
		bool var_833_bool = false;
		bool var_834_bool = false;
		bool var_835_bool;
		func_8642(var_1_object);
		if(var_835_bool != 0) {
			bool var_837_bool;
			func_8666(var_1_object);
			if(!var_837_bool) //@nz
				var_834_bool = true;
		}
		if(var_834_bool != 0) {
			bool var_844_bool;
			func_8654(var_1_object);
			if(!var_844_bool) //@nz
				var_833_bool = true;
		}
		if(var_833_bool != 0)
			var_0_object->AddReply(511476, 12683, 12682); //@t
		var_0_object->AddReply(511479, -1, 12685); //@t
		goto Label_5222;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13fc";
	}
Label_5222:
	bool var_853_bool;
	func_7529(var_853_bool);
	if(var_853_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_7280(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5251;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5251:
		return 0;

	}
	
}


// @pe
void func_9214(object var_84_object)
{
	var_85_bool = GlobalVars[1];
	if(!var_85_bool) { //@nz
		int var_87_int; object var_88_object;
		var_84_object = var_88_object;
		TaskCall(13);
		func_2418(var_89_object, var_87_int, var_88_object);
		TaskReturn();
		var_304_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_305_bool;
	func_7478(var_305_bool, 2);
	if(var_305_bool != 0) {
		int var_320_int; object var_321_object;
		var_84_object = var_321_object;
		TaskCall(3);
		func_648(var_322_object, var_320_int, var_321_object);
		TaskReturn();
		return 0;
	}
	bool var_373_bool;
	func_7472(var_373_bool, 1);
	if(var_373_bool != 0) {
		int var_376_int; object var_377_object;
		var_84_object = var_377_object;
		TaskCall(1);
		func_13(var_378_object, var_376_int, var_377_object);
		TaskReturn();
		return 0;
	}
	bool var_500_bool;
	func_7472(var_500_bool, 2);
	if(var_500_bool != 0) {
		int var_502_int; object var_503_object;
		var_84_object = var_503_object;
		TaskCall(17);
		func_3678(var_504_object, var_502_int, var_503_object);
		TaskReturn();
		return 0;
	}
	bool var_679_bool;
	func_7472(var_679_bool, 3);
	if(var_679_bool != 0) {
		int var_681_int; object var_682_object;
		var_84_object = var_682_object;
		TaskCall(19);
		func_4741(var_683_object, var_681_int, var_682_object);
		TaskReturn();
		return 0;
	}
	bool var_743_bool;
	func_7472(var_743_bool, 4);
	if(var_743_bool != 0) {
		int var_745_int; object var_746_object;
		var_84_object = var_746_object;
		TaskCall(21);
		func_5031(var_747_object, var_745_int, var_746_object);
		TaskReturn();
		return 0;
	}
	bool var_863_bool;
	func_7472(var_863_bool, 5);
	if(var_863_bool != 0) {
		int var_865_int; object var_866_object;
		var_84_object = var_866_object;
		TaskCall(23);
		func_6036(var_867_object, var_865_int, var_866_object);
		TaskReturn();
		return 0;
	}
	bool var_941_bool;
	func_7472(var_941_bool, 6);
	if(var_941_bool != 0) {
		int var_943_int; object var_944_object;
		var_84_object = var_944_object;
		TaskCall(15);
		func_2828(var_945_object, var_943_int, var_944_object);
		TaskReturn();
		return 0;
	}
	bool var_1069_bool;
	func_7472(var_1069_bool, 8);
	if(var_1069_bool != 0) {
		int var_1071_int; object var_1072_object;
		var_84_object = var_1072_object;
		TaskCall(5);
		func_844(var_1073_object, var_1071_int, var_1072_object);
		TaskReturn();
		return 0;
	}
	bool var_1143_bool;
	func_7472(var_1143_bool, 9);
	if(var_1143_bool != 0) {
		int var_1145_int; object var_1146_object;
		var_84_object = var_1146_object;
		TaskCall(7);
		func_1226(var_1147_object, var_1145_int, var_1146_object);
		TaskReturn();
		return 0;
	}
	bool var_1256_bool;
	func_7472(var_1256_bool, 10);
	if(var_1256_bool != 0) {
		int var_1258_int; object var_1259_object;
		var_84_object = var_1259_object;
		TaskCall(9);
		func_1869(var_1260_object, var_1258_int, var_1259_object);
		TaskReturn();
		return 0;
	}
	bool var_1320_bool;
	func_7472(var_1320_bool, 12);
	if(var_1320_bool != 0) {
		int var_1322_int; object var_1323_object;
		var_84_object = var_1323_object;
		TaskCall(11);
		func_2159(var_1324_object, var_1322_int, var_1323_object);
		TaskReturn();
		return 0;
	}
	int var_1381_int; object var_1382_object;
	var_84_object = var_1382_object;
	TaskCall(25);
	func_6550(var_1383_object, var_1381_int, var_1382_object);
	TaskReturn();
}


