// @GLOBALS: 0:object:,1:bool:,2:bool:,3:int:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, cvector var_67_cvector)
	{
		@lshStopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_67_bool == 36971) {
				func_179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535294); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535295, 36973, 36972); //@t
				var_0_bool->AddReply(535302, -1, 36980); //@t
				var_0_bool->AddReply(535303, -1, 36981); //@t
				return 0;
			}
			if(var_67_bool == 36973) {
				func_179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535297, 36975, 36974); //@t
				var_0_bool->AddReply(535301, 36975, 36978); //@t
				return 0;
			}
			if(var_67_bool == 36975) {
				func_179(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(535298); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535299, -1, 36976); //@t
				var_0_bool->AddReply(535300, -1, 36977); //@t
				return 0;
			}
			var_3_object = true;
			bool var_115_bool;
			func_5850(var_115_bool);
			if(var_115_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xca";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 19085) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_6034();
				object var_143_object = var_1_object;
				func_6106(var_0_bool);
			}
			if(var_68_cvector == 19220) {
				object var_171_object = var_1_object;
				func_6122(var_0_bool);
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_bool;
				func_5996();
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_bool;
				func_6133();
			}
			if(var_68_cvector == 21631) {
				object var_213_object; object var_214_object;
				var_213_object = var_1_object;
				var_214_object = var_0_bool;
				func_6133();
			}
			if(var_68_cvector == 19227) {
				object var_217_object = var_1_object;
				func_6022(var_0_bool);
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_6133();
			}
			if(var_68_cvector == 28346) {
				object var_261_object; object var_262_object;
				var_261_object = var_1_object;
				var_262_object = var_0_bool;
				func_5974();
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_bool;
				func_5980();
				object var_275_object = var_1_object;
				func_5870(var_0_bool);
			}
			if(var_68_cvector == 19091) {
				object var_284_object; object var_285_object;
				var_284_object = var_1_object;
				var_285_object = var_0_bool;
				func_6034();
				object var_286_object = var_1_object;
				func_6106(var_0_bool);
			}
			if(var_68_cvector == 19094) {
				object var_290_object = var_1_object;
				func_6022(var_0_bool);
				object var_292_object; object var_293_object;
				var_292_object = var_1_object;
				var_293_object = var_0_bool;
				func_6085();
				object var_304_object; object var_305_object;
				var_304_object = var_1_object;
				var_305_object = var_0_bool;
				func_6133();
			}
			if(var_68_cvector == 19117) {
				object var_308_object; object var_309_object;
				var_308_object = var_1_object;
				var_309_object = var_0_bool;
				func_6076();
				object var_320_object = var_1_object;
				func_6122(var_0_bool);
				object var_322_object; object var_323_object;
				var_322_object = var_1_object;
				var_323_object = var_0_bool;
				func_5996();
				object var_324_object; object var_325_object;
				var_324_object = var_1_object;
				var_325_object = var_0_bool;
				func_6133();
			}
			if(var_68_cvector == 21634) {
				object var_328_object; object var_329_object;
				var_328_object = var_1_object;
				var_329_object = var_0_bool;
				func_6133();
				object var_330_object = var_1_object;
				func_6022(var_0_bool);
			}
			if(var_68_cvector == 19106) {
				object var_334_object; object var_335_object;
				var_334_object = var_1_object;
				var_335_object = var_0_bool;
				func_6100();
			}
			if(var_68_cvector == 19110) {
				object var_340_object; object var_341_object;
				var_340_object = var_1_object;
				var_341_object = var_0_bool;
				func_6016();
				object var_344_object; object var_345_object;
				var_344_object = var_1_object;
				var_345_object = var_0_bool;
				func_6151();
			}
			if(var_68_cvector == 19253) {
				object var_356_object; object var_357_object;
				var_356_object = var_1_object;
				var_357_object = var_0_bool;
				func_5886();
			}
			if(var_68_cvector == 21646) {
				object var_362_object; object var_363_object;
				var_362_object = var_1_object;
				var_363_object = var_0_bool;
				func_5892();
				object var_374_object = var_1_object;
				func_5912(var_0_bool);
			}
			if(var_68_cvector == 21647) {
				object var_383_object; object var_384_object;
				var_383_object = var_1_object;
				var_384_object = var_0_bool;
				func_5892();
				object var_385_object = var_1_object;
				func_5912(var_0_bool);
				object var_387_object = var_1_object;
				func_6002(var_0_bool);
			}
			if(var_68_cvector == 21879) {
				object var_394_object; object var_395_object;
				var_394_object = var_1_object;
				var_395_object = var_0_bool;
				func_5934();
			}
			if(var_68_cvector == 21881) {
				object var_400_object; object var_401_object;
				var_400_object = var_1_object;
				var_401_object = var_0_bool;
				func_5940();
				object var_404_object = var_1_object;
				func_6002(var_0_bool);
			}
			if(var_68_cvector == 28331) {
				object var_408_object; object var_409_object;
				var_408_object = var_1_object;
				var_409_object = var_0_bool;
				func_5940();
				object var_410_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_68_cvector == 21674) {
				object var_417_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 19076) {
				bool var_422_bool;
				func_6352(var_1_object);
				if(var_422_bool != 0) {
					object var_430_object; object var_431_object;
					var_430_object = var_1_object;
					var_431_object = var_0_bool;
					func_6094();
					func_609(var_68_cvector, "Neutral");
					var_0_bool->SetMessage(517945); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(527026, 28316, 28315); //@t
					var_0_bool->AddReply(527044, 28316, 28334); //@t
					return 0;
				}
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517955); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_455_bool;
				func_6280(var_1_object);
				if(var_455_bool != 0)
					var_0_bool->AddReply(527047, 28341, 28340); //@t
				bool var_464_bool = false;
				bool var_465_bool = false;
				bool var_466_bool;
				func_6328(var_1_object);
				if(var_466_bool != 0) {
					bool var_472_bool;
					func_6304(var_1_object);
					if(!var_472_bool) //@nz
						var_465_bool = true;
				}
				if(var_465_bool != 0) {
					bool var_479_bool;
					func_6316(var_1_object);
					if(!var_479_bool) //@nz
						var_464_bool = true;
				}
				if(var_464_bool != 0)
					var_0_bool->AddReply(517957, 19090, 19089); //@t
				bool var_489_bool = false;
				bool var_490_bool = false;
				bool var_491_bool;
				func_6340(var_1_object);
				if(var_491_bool != 0) {
					bool var_497_bool;
					func_6316(var_1_object);
					if(var_497_bool != 0)
						var_490_bool = true;
				}
				if(var_490_bool != 0) {
					bool var_499_bool;
					func_6304(var_1_object);
					if(!var_499_bool) //@nz
						var_489_bool = true;
				}
				if(var_489_bool != 0)
					var_0_bool->AddReply(517960, 28332, 19092); //@t
				bool var_505_bool = false;
				bool var_506_bool;
				func_6340(var_1_object);
				if(var_506_bool != 0) {
					bool var_508_bool;
					func_6304(var_1_object);
					if(var_508_bool != 0)
						var_505_bool = true;
				}
				if(var_505_bool != 0)
					var_0_bool->AddReply(517982, 19116, 19115); //@t
				bool var_513_bool = false;
				bool var_514_bool;
				func_6292(var_1_object);
				if(var_514_bool != 0) {
					bool var_520_bool;
					func_6364(var_1_object);
					if(var_520_bool != 0)
						var_513_bool = true;
				}
				if(var_513_bool != 0)
					var_0_bool->AddReply(517973, 28323, 19106); //@t
				bool var_529_bool = false;
				bool var_530_bool = false;
				bool var_531_bool;
				func_6460(var_1_object);
				if(var_531_bool != 0) {
					bool var_537_bool;
					func_6472(var_1_object);
					if(!var_537_bool) //@nz
						var_530_bool = true;
				}
				if(var_530_bool != 0) {
					bool var_544_bool;
					func_6268(var_1_object);
					if(var_544_bool != 0)
						var_529_bool = true;
				}
				if(var_529_bool != 0)
					var_0_bool->AddReply(518139, 21635, 19253); //@t
				bool var_553_bool;
				func_6496(var_1_object);
				if(var_553_bool != 0)
					var_0_bool->AddReply(520672, 28325, 21879); //@t
				var_0_bool->AddReply(520471, -1, 21674); //@t
				var_0_bool->AddReply(517956, -1, 19088); //@t
				return 0;
			}
			if(var_67_bool == 28325) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527036); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527037, 21880, 28326); //@t
				var_0_bool->AddReply(527038, 21880, 28327); //@t
				return 0;
			}
			if(var_67_bool == 21880) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527039, 28330, 28329); //@t
				return 0;
			}
			if(var_67_bool == 28330) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520674, -1, 21881); //@t
				var_0_bool->AddReply(527041, -1, 28331); //@t
				return 0;
			}
			if(var_67_bool == 21635) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520425); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520426, 21637, 21636); //@t
				return 0;
			}
			if(var_67_bool == 21637) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520427); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520428, 21639, 21638); //@t
				var_0_bool->AddReply(520432, 21643, 21642); //@t
				return 0;
			}
			if(var_67_bool == 21643) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520433); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520434, 21641, 21644); //@t
				return 0;
			}
			if(var_67_bool == 21639) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520429); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520430, 21641, 21640); //@t
				return 0;
			}
			if(var_67_bool == 21641) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520431); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520435, -1, 21646); //@t
				var_0_bool->AddReply(520436, -1, 21647); //@t
				return 0;
			}
			if(var_67_bool == 28323) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527034); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527035, 19107, 28324); //@t
				return 0;
			}
			if(var_67_bool == 19107) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517975, 19109, 19108); //@t
				return 0;
			}
			if(var_67_bool == 19109) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517976); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517977, -1, 19110); //@t
				return 0;
			}
			if(var_67_bool == 19116) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517983); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517984, -1, 19117); //@t
				var_0_bool->AddReply(520424, -1, 21634); //@t
				return 0;
			}
			if(var_67_bool == 28332) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527042); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527043, 19093, 28333); //@t
				return 0;
			}
			if(var_67_bool == 19093) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517961); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517962, -1, 19094); //@t
				return 0;
			}
			if(var_67_bool == 19090) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517958); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517959, -1, 19091); //@t
				return 0;
			}
			if(var_67_bool == 28341) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527048); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527049, 28344, 28342); //@t
				var_0_bool->AddReply(527050, 28344, 28343); //@t
				return 0;
			}
			if(var_67_bool == 28344) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527051); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527052, -1, 28346); //@t
				return 0;
			}
			if(var_67_bool == 28316) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527027); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527028, 28318, 28317); //@t
				return 0;
			}
			if(var_67_bool == 28318) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527029); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527030, 28320, 28319); //@t
				return 0;
			}
			if(var_67_bool == 28320) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527031); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527032, 28322, 28321); //@t
				return 0;
			}
			if(var_67_bool == 28322) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527033); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_730_bool = false;
				bool var_731_bool;
				func_6304(var_1_object);
				if(!var_731_bool) { //@nz
					bool var_734_bool;
					func_6316(var_1_object);
					if(!var_734_bool) //@nz
						var_730_bool = true;
				}
				if(var_730_bool != 0)
					var_0_bool->AddReply(517947, 19081, 19078); //@t
				bool var_740_bool = false;
				bool var_741_bool = false;
				bool var_742_bool;
				func_6328(var_1_object);
				if(!var_742_bool) { //@nz
					bool var_745_bool;
					func_6316(var_1_object);
					if(!var_745_bool) //@nz
						var_741_bool = true;
				}
				if(var_741_bool != 0) {
					bool var_748_bool;
					func_6304(var_1_object);
					if(!var_748_bool) //@nz
						var_740_bool = true;
				}
				if(var_740_bool != 0)
					var_0_bool->AddReply(517946, 19079, 19077); //@t
				bool var_754_bool;
				func_6304(var_1_object);
				if(var_754_bool != 0)
					var_0_bool->AddReply(518086, 19219, 19218); //@t
				bool var_759_bool = false;
				bool var_760_bool;
				func_6316(var_1_object);
				if(var_760_bool != 0) {
					bool var_762_bool;
					func_6304(var_1_object);
					if(!var_762_bool) //@nz
						var_759_bool = true;
				}
				if(var_759_bool != 0)
					var_0_bool->AddReply(518089, 19222, 19221); //@t
				return 0;
			}
			if(var_67_bool == 19222) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518090); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520422, 21633, 21632); //@t
				return 0;
			}
			if(var_67_bool == 21633) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520423); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518095, -1, 19227); //@t
				return 0;
			}
			if(var_67_bool == 19219) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518087); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518088, -1, 19220); //@t
				var_0_bool->AddReply(520421, -1, 21631); //@t
				return 0;
			}
			if(var_67_bool == 19079) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517948); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517949, 19081, 19080); //@t
				var_0_bool->AddReply(520420, 19081, 21630); //@t
				return 0;
			}
			if(var_67_bool == 19081) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517950); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517951, 19084, 19083); //@t
				var_0_bool->AddReply(517954, -1, 19086); //@t
				return 0;
			}
			if(var_67_bool == 19084) {
				func_609(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(517952); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517953, -1, 19085); //@t
				return 0;
			}
			var_3_object = true;
			bool var_819_bool;
			func_5850(var_819_bool);
			if(var_819_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x278";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 20634) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5928();
			}
			if(var_68_cvector == 21673) {
				object var_79_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 19381) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518272); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_97_bool;
				func_6484(var_1_object);
				if(var_97_bool != 0)
					var_0_bool->AddReply(519463, 20635, 20634); //@t
				var_0_bool->AddReply(520470, -1, 21673); //@t
				var_0_bool->AddReply(518273, -1, 19382); //@t
				return 0;
			}
			if(var_67_bool == 20635) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519464); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519465, 20637, 20636); //@t
				var_0_bool->AddReply(519479, 29100, 20651); //@t
				return 0;
			}
			if(var_67_bool == 20637) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519466); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519467, 20639, 20638); //@t
				var_0_bool->AddReply(519480, 29100, 20652); //@t
				return 0;
			}
			if(var_67_bool == 20639) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519468); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519469, 20641, 20640); //@t
				var_0_bool->AddReply(519481, 29100, 20653); //@t
				return 0;
			}
			if(var_67_bool == 29100) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(527746); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527747, 20641, 29103); //@t
				return 0;
			}
			if(var_67_bool == 20641) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519470); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519471, 20643, 20642); //@t
				var_0_bool->AddReply(519474, 20646, 20645); //@t
				return 0;
			}
			if(var_67_bool == 20646) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519475); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519476, 20648, 20647); //@t
				return 0;
			}
			if(var_67_bool == 20643) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519472); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519473, 20648, 20644); //@t
				return 0;
			}
			if(var_67_bool == 20648) {
				func_1845(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519477); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519478, -1, 20650); //@t
				return 0;
			}
			var_3_object = true;
			bool var_182_bool;
			func_5850(var_182_bool);
			if(var_182_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x74c";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 19500) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_bool;
				func_5852();
			}
			if(var_68_cvector == 19503) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_6167();
			}
			if(var_68_cvector == 20354) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_6167();
			}
			if(var_68_cvector == 19504) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_bool;
				func_5858();
			}
			if(var_68_cvector == 19506) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_bool;
				func_6190();
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_bool;
				func_6213();
			}
			if(var_68_cvector == 20346) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_bool;
				func_6190();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_bool;
				func_6213();
			}
			if(var_68_cvector == 20828) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_5864();
			}
			if(var_68_cvector == 19507) {
				object var_180_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 19499) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518386); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_198_bool = false;
				bool var_199_bool = false;
				bool var_200_bool = false;
				bool var_201_bool;
				func_6376(var_1_object);
				if(var_201_bool != 0) {
					bool var_209_bool;
					func_6412(var_1_object);
					if(var_209_bool != 0)
						var_200_bool = true;
				}
				if(var_200_bool != 0) {
					bool var_215_bool;
					func_6400(var_1_object);
					if(!var_215_bool) //@nz
						var_199_bool = true;
				}
				if(var_199_bool != 0) {
					bool var_222_bool;
					func_6448(var_1_object);
					if(var_222_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_bool->AddReply(518387, 20347, 19500); //@t
				bool var_231_bool = false;
				bool var_232_bool = false;
				bool var_233_bool;
				func_6388(var_1_object);
				if(var_233_bool != 0) {
					bool var_239_bool;
					func_6424(var_1_object);
					if(var_239_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 0) {
					bool var_245_bool;
					func_6400(var_1_object);
					if(!var_245_bool) //@nz
						var_231_bool = true;
				}
				if(var_231_bool != 0)
					var_0_bool->AddReply(518391, 20339, 19504); //@t
				bool var_251_bool = false;
				bool var_252_bool;
				func_6400(var_1_object);
				if(var_252_bool != 0) {
					bool var_254_bool;
					func_6436(var_1_object);
					if(var_254_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0)
					var_0_bool->AddReply(519664, 20829, 20828); //@t
				bool var_263_bool;
				func_6400(var_1_object);
				if(!var_263_bool) //@nz
					var_0_bool->AddReply(518394, -1, 19507); //@t
				var_0_bool->AddReply(518388, -1, 19501); //@t
				return 0;
			}
			if(var_67_bool == 20829) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519665); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519666, 20831, 20830); //@t
				var_0_bool->AddReply(519671, -1, 20835); //@t
				return 0;
			}
			if(var_67_bool == 20831) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519667); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519668, 20833, 20832); //@t
				return 0;
			}
			if(var_67_bool == 20833) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519670, -1, 20834); //@t
				return 0;
			}
			if(var_67_bool == 20339) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519197); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519198, 19505, 20340); //@t
				var_0_bool->AddReply(519199, 20342, 20341); //@t
				return 0;
			}
			if(var_67_bool == 20342) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519200); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519201, -1, 20343); //@t
				return 0;
			}
			if(var_67_bool == 19505) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518392); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518393, -1, 19506); //@t
				var_0_bool->AddReply(519202, 20345, 20344); //@t
				return 0;
			}
			if(var_67_bool == 20345) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519203); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519204, -1, 20346); //@t
				return 0;
			}
			if(var_67_bool == 20347) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519205); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519206, 20349, 20348); //@t
				return 0;
			}
			if(var_67_bool == 20349) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519207); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519208, 19502, 20350); //@t
				var_0_bool->AddReply(519209, -1, 20351); //@t
				return 0;
			}
			if(var_67_bool == 19502) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(518389); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518390, -1, 19503); //@t
				var_0_bool->AddReply(519210, 20353, 20352); //@t
				return 0;
			}
			if(var_67_bool == 20353) {
				func_2330(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(519211); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519212, -1, 20354); //@t
				var_0_bool->AddReply(519213, -1, 20355); //@t
				return 0;
			}
			var_3_object = true;
			bool var_367_bool;
			func_5850(var_367_bool);
			if(var_367_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x931";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21677) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21676) {
				func_2927(var_68_cvector, "Anger");
				var_0_bool->SetMessage(520473); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520474, -1, 21677); //@t
				var_0_bool->AddReply(520475, -1, 21678); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb86";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21681) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21680) {
				func_3138(var_68_cvector, "Smile");
				var_0_bool->SetMessage(520477); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520478, -1, 21681); //@t
				var_0_bool->AddReply(520479, -1, 21682); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc59";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21685) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21684) {
				func_3349(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520481); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520482, -1, 21685); //@t
				var_0_bool->AddReply(520483, -1, 21686); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2c";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21689) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21688) {
				func_3560(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520485); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520486, -1, 21689); //@t
				var_0_bool->AddReply(520487, -1, 21690); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdff";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21693) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_68_cvector == 22573) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_bool;
				func_5946();
			}
			if(var_68_cvector == 22575) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_5952();
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_bool;
				func_6016();
			}
			if(var_68_cvector == 22647) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_bool;
				func_5968();
			}
			if(var_67_bool == 21692) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520489); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520490, -1, 21693); //@t
				bool var_130_bool = false;
				bool var_131_bool;
				func_6220(var_1_object);
				if(var_131_bool != 0) {
					bool var_139_bool;
					func_6232(var_1_object);
					if(var_139_bool != 0)
						var_130_bool = true;
				}
				if(var_130_bool != 0)
					var_0_bool->AddReply(521395, 25305, 22573); //@t
				bool var_148_bool = false;
				bool var_149_bool;
				func_6256(var_1_object);
				if(var_149_bool != 0) {
					bool var_155_bool;
					func_6244(var_1_object);
					if(var_155_bool != 0)
						var_148_bool = true;
				}
				if(var_148_bool != 0)
					var_0_bool->AddReply(521482, 22648, 22647); //@t
				var_0_bool->AddReply(520491, -1, 21694); //@t
				return 0;
			}
			if(var_67_bool == 22648) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(521483); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521484, 25315, 22649); //@t
				return 0;
			}
			if(var_67_bool == 25315) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(524021); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524022, 25317, 25316); //@t
				return 0;
			}
			if(var_67_bool == 25317) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(524023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524024, -1, 25318); //@t
				var_0_bool->AddReply(524025, -1, 25319); //@t
				return 0;
			}
			if(var_67_bool == 25305) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(524012); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524013, 25309, 25306); //@t
				var_0_bool->AddReply(524014, 25311, 25307); //@t
				var_0_bool->AddReply(524015, 25311, 25308); //@t
				return 0;
			}
			if(var_67_bool == 25311) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(524018); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521397, -1, 22575); //@t
				return 0;
			}
			if(var_67_bool == 25309) {
				func_3809(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(524016); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(524017, -1, 25310); //@t
				return 0;
			}
			var_3_object = true;
			bool var_218_bool;
			func_5850(var_218_bool);
			if(var_218_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xef8";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21697) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21696) {
				func_4210(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520493); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520494, -1, 21697); //@t
				var_0_bool->AddReply(520495, -1, 21698); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1089";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21701) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21700) {
				func_4421(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520497); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520498, -1, 21701); //@t
				var_0_bool->AddReply(520499, -1, 21702); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x115c";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_68_cvector == 21705) {
				object var_73_object = var_1_object;
				func_6029(var_0_bool);
			}
			if(var_67_bool == 21704) {
				func_4632(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520501); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520502, -1, 21705); //@t
				var_0_bool->AddReply(520503, -1, 21706); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5850(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x122f";
	
	}

}


task task_26
{
}


task task_27
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, cvector var_68_cvector)
	{
		if(1 != 0) {
			func_5597();
			if(var_67_int == 21941) {
				func_4843(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520730); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520731, 21943, 21942); //@t
				var_0_bool->AddReply(520738, 21943, 21949); //@t
				return 0;
			}
			if(var_67_int == 21943) {
				func_4843(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520733, 21945, 21944); //@t
				var_0_bool->AddReply(520737, 21945, 21948); //@t
				return 0;
			}
			if(var_67_int == 21945) {
				func_4843(var_68_cvector, "Neutral");
				var_0_bool->SetMessage(520734); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520735, -1, 21946); //@t
				var_0_bool->AddReply(520736, -1, 21947); //@t
				return 0;
			}
			var_3_object = true;
			bool var_112_bool;
			func_5850(var_112_bool);
			if(var_112_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1302";
	
	}

}


maintask task_28
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		var_67_bool = GlobalVars[1];
		GlobalVars[1] = false;
		var_68_int = GlobalVars[3];
		GlobalVars[3] = -1;
		func_4963(var_66_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, int var_67_int)
	{
		if(var_67_int == 10) {
			func_5034();
			bool var_71_bool = false;
			bool var_72_bool;
			func_5282(var_72_bool);
			if(var_72_bool != 0) {
				bool var_75_bool;
				func_5003(var_75_bool);
				if(var_75_bool != 0)
					var_71_bool = true;
			}
			if(var_71_bool != 0) {
				bool var_92_bool;
				func_4983(var_92_bool);
				if(var_92_bool != 0) {
					bool var_111_bool; object var_112_object;
					object var_113_object;
					func_5632(var_113_object);
					var_113_object = var_112_object;
					func_5430(var_111_bool, var_112_object);
				}
			} else {
				func_4998(var_67_int);
				func_5025();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
	{
		func_5216();
		func_5034();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector)
		{
		@StopGroup0();
		func_5034();
		func_5569("Neutral");
		func_5025();
		}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, bool var_67_bool)
	{
		if(var_67_bool != 0)
			func_5025();
		else
			func_5569("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, cvector var_66_cvector, object var_67_object)
	{
		bool var_68_bool; bool var_69_bool;
		@IsOverrideActive(var_69_bool);
		if(!var_69_bool) { //@nz
			disable OnUse;
			func_5216();
			bool var_71_bool; object var_72_object;
			var_67_object = var_72_object;
			func_5273(var_71_bool, var_72_object);
			enable OnUse;
			object var_85_object;
			func_6880(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_85_object, var_68_bool, var_69_bool, var_85_object);
			func_5569("Neutral");
			func_5034();
			func_5025();
		}
	}

}


void func_5632(object var_220_object)
{
	object var_222_object;
	@self(var_222_object);
	var_222_object = var_220_object;
}
EMIT "Stack[-1] = 0";


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_73_bool;
	func_5282(var_73_bool);
	if(!var_73_bool) goto Label_0; //@nz
}


void func_5638(cvector var_335_cvector, cvector var_336_cvector)
{
	float var_339_float = sqrt(var_336_cvector | var_336_cvector);
	if(var_339_float < 0.000001)
		var_335_cvector = [0.0, 0.0, 0.0];
	var_335_cvector = var_336_cvector / var_339_float;
}


void func_6151(void)
{
	object var_348_object;
	func_6627(var_348_object);
	object var_347_object;
	var_348_object = var_347_object;
	float var_353_float;
	func_5798(var_353_float);
	var_347_object->AddMark("b1q02GrifGotoLaska", "pt_map_laska", 3, 518143, var_353_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3080(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_927_object, object var_928_object)
{
	var_0_bool = var_928_object;
	var_1_object = var_927_object;
	var_3_object = false;
	if(1 != 0) {
		func_3138(var_928_object, "Smile");
		var_0_bool->SetMessage(520477); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520478, -1, 21681); //@t
		var_0_bool->AddReply(520479, -1, 21682); //@t
		goto Label_3108;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc0c";
	}
Label_3108:
	bool var_949_bool;
	func_5850(var_949_bool);
	if(var_949_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3137;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3137:
		return 0;

	}
	
}


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		func_5569("Neutral");
		@lshWaitForAnimEnd();
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_5648(float var_248_float, float var_249_float, float var_250_float, float var_251_float)
{
	if(var_249_float < var_250_float) {
		var_250_float = var_248_float;
		return 0;
	}
	if(var_249_float > var_251_float) {
		var_251_float = var_248_float;
		return 0;
	}
	var_249_float = var_248_float;
}


void func_6677(void)
{
	@ClearSubContainer(0);
	int var_101_int;
	func_5803(var_101_int);
	int var_99_int;
	var_101_int = var_99_int;
	int var_102_int;
	func_6833(var_102_int, "Rifle");
	bool var_97_bool;
	@AddItem(var_97_bool, var_102_int, 0, 1);
	int var_108_int;
	func_6833(var_108_int, "Revolver");
	@AddItem(var_97_bool, var_108_int, 0, 1);
	int var_112_int;
	func_6833(var_112_int, "Knife");
	@AddItem(var_97_bool, var_112_int, 0, 1);
	if(var_99_int != 10) {
		int var_118_int;
		func_6833(var_118_int, "tvirin");
		@AddItem(var_97_bool, var_118_int, 0, 1);
	} else {
		int var_199_int;
		func_6833(var_199_int, "tvirin");
		@AddItem(var_97_bool, var_199_int, 0, 4);
	}
	int var_122_int;
	func_6833(var_122_int, "lockpick");
	@AddItem(var_97_bool, var_122_int, 0, 3);
	func_5604("Scalpel", 1, 2);
	func_5615("revolver_ammo", 1, 1, 5, 10);
	func_5615("rifle_ammo", 1, 1, 5, 20);
	int var_98_int;
	@irand(var_98_int, 100);
	if(var_98_int != 0) {
		int var_162_int;
		func_6833(var_162_int, "kerosene");
		@AddItem(var_97_bool, var_162_int, 0, var_98_int);
	}
	if(var_99_int >= 3) {
		int var_167_int;
		func_6833(var_167_int, "halfboot_repel");
		@AddItem(var_97_bool, var_167_int, 0, 1);
		int var_171_int;
		func_6833(var_171_int, "boot_repel");
		@AddItem(var_97_bool, var_171_int, 0, 1);
	}
	if(var_99_int >= 9) {
		int var_177_int;
		func_6833(var_177_int, "boot_army");
		@AddItem(var_97_bool, var_177_int, 0, 1);
		int var_181_int;
		func_6833(var_181_int, "balahon");
		@AddItem(var_97_bool, var_181_int, 0, 1);
		int var_185_int;
		func_6833(var_185_int, "glove_army");
		@AddItem(var_97_bool, var_185_int, 0, 1);
	}
	int var_189_int;
	func_6855(var_189_int);
	if(var_189_int == 0) {
		int var_195_int;
		func_6833(var_195_int, "Gun_danko");
		@AddItem(var_97_bool, var_195_int, 0, 1);
	}
	
}


void func_6167(void)
{
	@SetVariable("b3q02", 2);
	object var_85_object;
	func_6627(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	float var_96_float;
	func_5798(var_96_float);
	var_82_object->AddMark("b3q02GrifGotoDanko", "pt_map_eva", 0, 519653, var_96_float);
	func_6560();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4632(object var_2_object, string var_1332_string)
{
	bool var_1333_bool;
	func_5850(var_1333_bool);
	if(!var_1333_bool) //@nz
		return 0;
	if(var_1332_string == var_2_object)
		return 0;
	string var_1336_string; bool var_1337_bool;
	var_1332_string = var_1336_string;
	if(var_1332_string == "")
		var_1337_bool = false;
	else
		var_1337_bool = true;
	func_5576(var_1336_string, var_1337_bool);
	var_2_object = var_1332_string;
	
}


void func_5145(void)
{
	bool var_95_bool; int var_96_int; int var_97_int; bool var_98_bool;
	@WaitForAnimEnd();
	bool var_99_bool;
	func_5282(var_99_bool);
	if(!var_99_bool) //@nz
		return 12;
	int var_101_int;
	func_5825(var_101_int);
	int var_93_int;
	var_101_int = var_93_int;
	int var_94_int = 0;
	
	for(;;) {
		bool var_114_bool = false;
		if(var_94_int < 5) {
			bool var_117_bool;
			func_5282(var_117_bool);
			if(var_117_bool != 0)
				var_114_bool = true;
		}
		if(var_114_bool != 0) {
			if(!var_93_int) { //@nz
				@Sleep(3, var_95_bool);
				if(!var_95_bool) { //@nz
				} else {
			} else {
			@irand(var_96_int, var_93_int);
			@irand(var_97_int, 5);
			if(var_97_int != 0)
				var_96_int = 0;
			string var_128_string; int var_129_int;
			var_96_int = var_129_int;
			func_5818(var_128_string, var_129_int);
			@PlayAnimation("all", var_128_string);
			@WaitForAnimEnd(var_98_bool);
			var_130_bool = !var_98_bool; //@nz
			if(var_130_bool == 0) goto Label_5200;
			goto Label_5211;
			}
				Label_5200:
					bool var_121_bool;
					func_5214(var_121_bool);
					var_122_bool = !var_121_bool; //@nz
					if(var_122_bool == 0) goto Label_5206;
			}
		}
	Label_5211:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5206:
		@ResetAAS();
		var_94_int += 1;
	}
	
}


void func_5659(bool var_131_bool, int var_132_int, int var_133_int)
{
	int var_135_int;
	@irand(var_135_int, var_133_int);
	var_131_bool = var_135_int < var_132_int;
}


void func_5664(int var_453_int, string var_454_string)
{
	int var_456_int;
	@GetVariable(var_454_string, var_456_int);
	var_456_int = var_453_int;
}


void func_35(bool var_0_bool, int var_1364_int, object var_1365_object)
{
	var_0_bool = var_1365_object;
	bool var_1375_bool; object var_1376_object;
	object var_1377_object;
	func_5632(var_1377_object);
	var_1377_object = var_1376_object;
	func_5372(var_1375_bool, var_1376_object);
	bool var_1378_bool; object var_1379_object;
	var_1365_object = var_1379_object;
	func_5287(var_1378_bool, var_1379_object, 70.0);
	if(!var_1378_bool) { //@nz
		var_1364_int = -2;
		return 8;
	}
	object var_1371_object;
	@CreateDialog(var_1371_object);
	int var_1382_int;
	func_5844(var_1382_int);
	var_1371_object->SetNPCName(var_1382_int);
	int var_1383_int;
	func_5842(var_1383_int);
	var_1371_object->SetNPCDescription(var_1383_int);
	string var_1384_string;
	func_5846(var_1384_string);
	var_1371_object->SetPhoto(var_1384_string);
	string var_1385_string;
	func_5848(var_1385_string);
	var_1371_object->SetPhoto2(var_1385_string);
	int var_1386_int;
	func_6838(var_1386_int);
	var_1371_object->SetPlayerName(var_1386_int);
	bool var_1372_bool;
	@IsOverrideActive(var_1372_bool);
	if(var_1372_bool != 0) {
		var_1364_int = -2;
		return 8;
	}
	@DoDialog(var_1371_object);
	object var_1388_object; object var_1389_object;
	var_1365_object = var_1388_object;
	var_1371_object = var_1389_object;
	TaskCall(3);
	func_116(var_1390_object, var_1391_object, var_1392_string, var_1393_bool, var_1388_object, var_1389_object);
	TaskReturn();
	bool var_1374_bool;
	var_1371_object->IsDialogEnd(var_1374_bool);
	
	for(;;) {
		var_1421_bool = !var_1374_bool; //@nz
		if(var_1421_bool == 0) goto Label_105;
		@sync();
		var_1371_object->IsDialogEnd(var_1374_bool);
	}
	
Label_105:
	object var_1422_object;
	var_1365_object = var_1422_object;
	func_5355();
	@StopDialog(var_1371_object);
	var_1371_object->GetReturnValue(-1);
	int var_1373_int = var_1364_int;
}
EMIT "Stack[-4] = 0";


void func_5669(object var_129_object, string var_130_string)
{
	object var_133_object;
	@GetMainOutdoorScene(var_133_object);
	object var_134_object;
	@AddBlankActor(var_134_object, var_133_object, var_130_string, (var_130_string + ".bin"));
	var_134_object = var_129_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6190(void)
{
	@SetVariable("b3q02", 4);
	object var_140_object;
	func_6627(var_140_object);
	object var_137_object;
	var_140_object = var_137_object;
	float var_145_float;
	func_5798(var_145_float);
	var_137_object->AddMark("b3q02GrifGotoNotkin", "pt_map_notkin", 0, 519662, var_145_float);
	func_6573();
}
EMIT "Stack[-1] = 0";


void func_5680(string var_156_string, bool var_157_bool)
{
	object var_159_object;
	@FindActor(var_159_object, var_156_string);
	if(!var_159_object) //@nz
		@Trace(("Door " + var_156_string) + " not found");
	else
		var_159_object->SetProperty("locked", var_157_bool);
	
}
EMIT "Stack[-1] = 0";


void func_3632(bool var_0_bool, int var_1086_int, object var_1087_object)
{
	var_0_bool = var_1087_object;
	bool var_1097_bool; object var_1098_object;
	object var_1099_object;
	func_5632(var_1099_object);
	var_1099_object = var_1098_object;
	func_5372(var_1097_bool, var_1098_object);
	bool var_1100_bool; object var_1101_object;
	var_1087_object = var_1101_object;
	func_5287(var_1100_bool, var_1101_object, 70.0);
	if(!var_1100_bool) { //@nz
		var_1086_int = -2;
		return 8;
	}
	object var_1093_object;
	@CreateDialog(var_1093_object);
	int var_1104_int;
	func_5844(var_1104_int);
	var_1093_object->SetNPCName(var_1104_int);
	int var_1105_int;
	func_5842(var_1105_int);
	var_1093_object->SetNPCDescription(var_1105_int);
	string var_1106_string;
	func_5846(var_1106_string);
	var_1093_object->SetPhoto(var_1106_string);
	string var_1107_string;
	func_5848(var_1107_string);
	var_1093_object->SetPhoto2(var_1107_string);
	int var_1108_int;
	func_6838(var_1108_int);
	var_1093_object->SetPlayerName(var_1108_int);
	bool var_1094_bool;
	@IsOverrideActive(var_1094_bool);
	if(var_1094_bool != 0) {
		var_1086_int = -2;
		return 8;
	}
	@DoDialog(var_1093_object);
	object var_1110_object; object var_1111_object;
	var_1087_object = var_1110_object;
	var_1093_object = var_1111_object;
	TaskCall(19);
	func_3713(var_1112_object, var_1113_object, var_1114_string, var_1115_bool, var_1110_object, var_1111_object);
	TaskReturn();
	bool var_1096_bool;
	var_1093_object->IsDialogEnd(var_1096_bool);
	
	for(;;) {
		var_1172_bool = !var_1096_bool; //@nz
		if(var_1172_bool == 0) goto Label_3702;
		@sync();
		var_1093_object->IsDialogEnd(var_1096_bool);
	}
	
Label_3702:
	object var_1173_object;
	var_1087_object = var_1173_object;
	func_5355();
	@StopDialog(var_1093_object);
	var_1093_object->GetReturnValue(-1);
	int var_1095_int = var_1086_int;
}
EMIT "Stack[-4] = 0";


void func_2099(bool var_0_bool, int var_715_int, object var_716_object)
{
	var_0_bool = var_716_object;
	bool var_726_bool; object var_727_object;
	object var_728_object;
	func_5632(var_728_object);
	var_728_object = var_727_object;
	func_5372(var_726_bool, var_727_object);
	bool var_729_bool; object var_730_object;
	var_716_object = var_730_object;
	func_5287(var_729_bool, var_730_object, 70.0);
	if(!var_729_bool) { //@nz
		var_715_int = -2;
		return 8;
	}
	object var_722_object;
	@CreateDialog(var_722_object);
	int var_733_int;
	func_5844(var_733_int);
	var_722_object->SetNPCName(var_733_int);
	int var_734_int;
	func_5842(var_734_int);
	var_722_object->SetNPCDescription(var_734_int);
	string var_735_string;
	func_5846(var_735_string);
	var_722_object->SetPhoto(var_735_string);
	string var_736_string;
	func_5848(var_736_string);
	var_722_object->SetPhoto2(var_736_string);
	int var_737_int;
	func_6838(var_737_int);
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
	TaskCall(9);
	func_2180(var_741_object, var_742_object, var_743_string, var_744_bool, var_739_object, var_740_object);
	TaskReturn();
	bool var_725_bool;
	var_722_object->IsDialogEnd(var_725_bool);
	
	for(;;) {
		var_835_bool = !var_725_bool; //@nz
		if(var_835_bool == 0) goto Label_2169;
		@sync();
		var_722_object->IsDialogEnd(var_725_bool);
	}
	
Label_2169:
	object var_836_object;
	var_716_object = var_836_object;
	func_5355();
	@StopDialog(var_722_object);
	var_722_object->GetReturnValue(-1);
	int var_724_int = var_715_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4152(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1203_object, object var_1204_object)
{
	var_0_bool = var_1204_object;
	var_1_object = var_1203_object;
	var_3_object = false;
	if(1 != 0) {
		func_4210(var_1204_object, "Neutral");
		var_0_bool->SetMessage(520493); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520494, -1, 21697); //@t
		var_0_bool->AddReply(520495, -1, 21698); //@t
		goto Label_4180;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x103c";
	}
Label_4180:
	bool var_1225_bool;
	func_5850(var_1225_bool);
	if(var_1225_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4209;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4209:
		return 0;

	}
	
}


void func_5697(int var_190_int, int var_191_int)
{
	object var_193_object;
	@CreateIntVector(var_193_object);
	var_193_object->add(var_190_int);
	var_193_object->add(var_191_int);
	@SendWorldWndMessage(3, var_193_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3138(object var_2_object, string var_934_string)
{
	bool var_935_bool;
	func_5850(var_935_bool);
	if(!var_935_bool) //@nz
		return 0;
	if(var_934_string == var_2_object)
		return 0;
	string var_938_string; bool var_939_bool;
	var_934_string = var_938_string;
	if(var_934_string == "")
		var_939_bool = false;
	else
		var_939_bool = true;
	func_5576(var_938_string, var_939_bool);
	var_2_object = var_934_string;
	
}


// @pe
void func_6213(void)
{
	func_5680("warehouse_notkin@door1", false);
}


// @pe
void func_6220(bool var_1130_bool)
{
	int var_1132_int;
	func_5664(var_1132_int, "b8q01");
	if(var_1132_int == 2)
		var_1130_bool = true;
	var_1130_bool = false;
}


void func_5709(object var_179_object, object var_180_object, int var_181_int)
{
	int var_185_int;
	var_180_object->GetItemID(var_185_int);
	int var_186_int;
	@GetInvItemProperty(var_186_int, var_185_int, "Category");
	bool var_187_bool;
	var_179_object->AddItem(var_187_bool, var_180_object, var_186_int, var_181_int);
	if(!var_187_bool) { //@nz
		var_179_object->DropItems(var_180_object, var_181_int);
	} else {
		int var_190_int; int var_191_int;
		var_185_int = var_190_int;
		var_181_int = var_191_int;
		func_5697(var_190_int, var_191_int);
	}
	
}


// @pe
void func_6232(bool var_1136_bool)
{
	int var_1138_int;
	func_5664(var_1138_int, "oob8Grif1");
	if(var_1138_int == 0) {
		var_1136_bool = true;
		return 0;
	}
	var_1136_bool = false;
}


void func_5214(bool var_121_bool)
{
	var_121_bool = true;
}


void func_5216(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_609(object var_2_object, string var_463_string)
{
	bool var_464_bool;
	func_5850(var_464_bool);
	if(!var_464_bool) //@nz
		return 0;
	if(var_463_string == var_2_object)
		return 0;
	string var_467_string; bool var_468_bool;
	var_463_string = var_467_string;
	if(var_463_string == "")
		var_468_bool = false;
	else
		var_468_bool = true;
	func_5576(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	
}


void func_5728(object var_174_object, string var_175_string, int var_176_int)
{
	object var_178_object;
	@CreateInvItem(var_178_object);
	var_178_object->SetItemName(var_175_string);
	object var_179_object; object var_180_object; int var_181_int;
	var_174_object = var_179_object;
	var_178_object = var_180_object;
	var_176_int = var_181_int;
	func_5709(var_179_object, var_180_object, var_181_int);
}
EMIT "Stack[-1] = 0";


void func_4704(bool var_0_bool, int var_207_int, object var_208_object)
{
	var_0_bool = var_208_object;
	bool var_218_bool; object var_219_object;
	object var_220_object;
	func_5632(var_220_object);
	var_220_object = var_219_object;
	func_5372(var_218_bool, var_219_object);
	bool var_308_bool; object var_309_object;
	var_208_object = var_309_object;
	func_5287(var_308_bool, var_309_object, 70.0);
	if(!var_308_bool) { //@nz
		var_207_int = -2;
		return 8;
	}
	object var_214_object;
	@CreateDialog(var_214_object);
	int var_355_int;
	func_5844(var_355_int);
	var_214_object->SetNPCName(var_355_int);
	int var_356_int;
	func_5842(var_356_int);
	var_214_object->SetNPCDescription(var_356_int);
	string var_357_string;
	func_5846(var_357_string);
	var_214_object->SetPhoto(var_357_string);
	string var_358_string;
	func_5848(var_358_string);
	var_214_object->SetPhoto2(var_358_string);
	int var_359_int;
	func_6838(var_359_int);
	var_214_object->SetPlayerName(var_359_int);
	bool var_215_bool;
	@IsOverrideActive(var_215_bool);
	if(var_215_bool != 0) {
		var_207_int = -2;
		return 8;
	}
	@DoDialog(var_214_object);
	object var_368_object; object var_369_object;
	var_208_object = var_368_object;
	var_214_object = var_369_object;
	TaskCall(27);
	func_4785(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object);
	TaskReturn();
	bool var_217_bool;
	var_214_object->IsDialogEnd(var_217_bool);
	
	for(;;) {
		var_407_bool = !var_217_bool; //@nz
		if(var_407_bool == 0) goto Label_4774;
		@sync();
		var_214_object->IsDialogEnd(var_217_bool);
	}
	
Label_4774:
	object var_408_object;
	var_208_object = var_408_object;
	func_5355();
	@StopDialog(var_214_object);
	var_214_object->GetReturnValue(-1);
	int var_216_int = var_207_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6244(bool var_1152_bool)
{
	int var_1154_int;
	func_5664(var_1154_int, "b8q02");
	if(var_1154_int == 1)
		var_1152_bool = true;
	var_1152_bool = false;
}


void func_5221(float var_82_float, object var_83_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	var_82_float = (var_88_cvector - var_87_cvector) | (var_88_cvector - var_87_cvector);
}


void func_5229(bool var_238_bool, object var_239_object, string var_240_string)
{
	var_245_bool = IsFuncExist(var_239_object, "HasProperty", 2);
	if(!var_245_bool) { //@nz
		var_238_bool = false;
		return 2;
	}
	bool var_242_bool;
	var_239_object->HasProperty(var_240_string, var_242_bool);
	var_242_bool = var_238_bool;
}


// @pe
void func_5741(bool var_219_bool, object var_220_object, float var_221_float)
{
	if(!var_220_object) { //@nz
		var_219_bool = false;
		return 0;
	}
	if(var_221_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_221_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_226_float;
		var_221_float = var_226_float;
		func_5776(var_226_float);
		bool var_230_bool; object var_231_object; float var_233_float;
		var_220_object = var_231_object;
		var_221_float = var_233_float;
		func_5241(var_230_bool, var_231_object, "reputation", var_233_float, (float)0, (float)1);
		var_219_bool = true;
		return 0;

	}
	
	var_219_bool = false;
}


// @pe
void func_6256(bool var_1146_bool)
{
	int var_1148_int;
	func_5664(var_1148_int, "oob8Grif1");
	if(var_1148_int == 0) {
		var_1146_bool = true;
		return 0;
	}
	var_1146_bool = false;
}


// @pe
void func_4210(object var_2_object, string var_1210_string)
{
	bool var_1211_bool;
	func_5850(var_1211_bool);
	if(!var_1211_bool) //@nz
		return 0;
	if(var_1210_string == var_2_object)
		return 0;
	string var_1214_string; bool var_1215_bool;
	var_1210_string = var_1214_string;
	if(var_1210_string == "")
		var_1215_bool = false;
	else
		var_1215_bool = true;
	func_5576(var_1214_string, var_1215_bool);
	var_2_object = var_1210_string;
	
}


// @pe
void func_116(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1388_object, object var_1389_object)
{
	var_0_bool = var_1389_object;
	var_1_object = var_1388_object;
	var_3_object = false;
	if(1 != 0) {
		func_179(var_1389_object, "Neutral");
		var_0_bool->SetMessage(535294); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535295, 36973, 36972); //@t
		var_0_bool->AddReply(535302, -1, 36980); //@t
		var_0_bool->AddReply(535303, -1, 36981); //@t
		goto Label_149;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x78";
	}
Label_149:
	bool var_1413_bool;
	func_5850(var_1413_bool);
	if(var_1413_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_178;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_178:
		return 0;

	}
	
}


void func_5241(bool var_230_bool, object var_231_object, string var_232_string, float var_233_float, float var_234_float, float var_235_float)
{
	object var_239_object;
	var_231_object = var_239_object;
	string var_240_string;
	var_232_string = var_240_string;
	bool var_238_bool;
	func_5229(var_238_bool, var_239_object, var_240_string);
	if(!var_238_bool) //@nz
		var_230_bool = false;
	float var_237_float;
	var_231_object->GetProperty(var_232_string, var_237_float);
	float var_248_float; float var_250_float; float var_251_float;
	var_234_float = var_250_float;
	var_235_float = var_251_float;
	func_5648(var_248_float, (var_237_float + var_233_float), var_250_float, var_251_float);
	var_231_object->SetProperty(var_232_string, var_248_float);
	var_230_bool = true;
}


// @pe
void func_6268(bool var_577_bool)
{
	int var_579_int;
	func_5664(var_579_int, "b1q01NotkinGotoGrif");
	if(var_579_int != 0) {
		var_577_bool = true;
		return 0;
	}
	var_577_bool = false;
}


// @pe
void func_3713(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1110_object, object var_1111_object)
{
	var_0_bool = var_1111_object;
	var_1_object = var_1110_object;
	var_3_object = false;
	if(1 != 0) {
		func_3809(var_1111_object, "Neutral");
		var_0_bool->SetMessage(520489); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520490, -1, 21693); //@t
		bool var_1129_bool = false;
		bool var_1130_bool;
		func_6220(var_1_object);
		if(var_1130_bool != 0) {
			bool var_1136_bool;
			func_6232(var_1_object);
			if(var_1136_bool != 0)
				var_1129_bool = true;
		}
		if(var_1129_bool != 0)
			var_0_bool->AddReply(521395, 25305, 22573); //@t
		bool var_1145_bool = false;
		bool var_1146_bool;
		func_6256(var_1_object);
		if(var_1146_bool != 0) {
			bool var_1152_bool;
			func_6244(var_1_object);
			if(var_1152_bool != 0)
				var_1145_bool = true;
		}
		if(var_1145_bool != 0)
			var_0_bool->AddReply(521482, 22648, 22647); //@t
		var_0_bool->AddReply(520491, -1, 21694); //@t
		goto Label_3779;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe85";
	}
Label_3779:
	bool var_1164_bool;
	func_5850(var_1164_bool);
	if(var_1164_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3808;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3808:
		return 0;

	}
	
}


// @pe
void func_2180(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_739_object, object var_740_object)
{
	var_0_bool = var_740_object;
	var_1_object = var_739_object;
	var_3_object = false;
	if(1 != 0) {
		func_2330(var_740_object, "Neutral");
		var_0_bool->SetMessage(518386); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_755_bool = false;
		bool var_756_bool = false;
		bool var_757_bool = false;
		bool var_758_bool;
		func_6376(var_1_object);
		if(var_758_bool != 0) {
			bool var_764_bool;
			func_6412(var_1_object);
			if(var_764_bool != 0)
				var_757_bool = true;
		}
		if(var_757_bool != 0) {
			bool var_770_bool;
			func_6400(var_1_object);
			if(!var_770_bool) //@nz
				var_756_bool = true;
		}
		if(var_756_bool != 0) {
			bool var_777_bool;
			func_6448(var_1_object);
			if(var_777_bool != 0)
				var_755_bool = true;
		}
		if(var_755_bool != 0)
			var_0_bool->AddReply(518387, 20347, 19500); //@t
		bool var_786_bool = false;
		bool var_787_bool = false;
		bool var_788_bool;
		func_6388(var_1_object);
		if(var_788_bool != 0) {
			bool var_794_bool;
			func_6424(var_1_object);
			if(var_794_bool != 0)
				var_787_bool = true;
		}
		if(var_787_bool != 0) {
			bool var_800_bool;
			func_6400(var_1_object);
			if(!var_800_bool) //@nz
				var_786_bool = true;
		}
		if(var_786_bool != 0)
			var_0_bool->AddReply(518391, 20339, 19504); //@t
		bool var_806_bool = false;
		bool var_807_bool;
		func_6400(var_1_object);
		if(var_807_bool != 0) {
			bool var_809_bool;
			func_6436(var_1_object);
			if(var_809_bool != 0)
				var_806_bool = true;
		}
		if(var_806_bool != 0)
			var_0_bool->AddReply(519664, 20829, 20828); //@t
		bool var_818_bool;
		func_6400(var_1_object);
		if(!var_818_bool) //@nz
			var_0_bool->AddReply(518394, -1, 19507); //@t
		var_0_bool->AddReply(518388, -1, 19501); //@t
		goto Label_2300;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x888";
	}
Label_2300:
	bool var_827_bool;
	func_5850(var_827_bool);
	if(var_827_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2329;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2329:
		return 0;

	}
	
}


// @pe
void func_6280(bool var_488_bool)
{
	int var_490_int;
	func_5664(var_490_int, "oob1Grif5");
	if(var_490_int == 0) {
		var_488_bool = true;
		return 0;
	}
	var_488_bool = false;
}


void func_3210(bool var_0_bool, int var_964_int, object var_965_object)
{
	var_0_bool = var_965_object;
	bool var_975_bool; object var_976_object;
	object var_977_object;
	func_5632(var_977_object);
	var_977_object = var_976_object;
	func_5372(var_975_bool, var_976_object);
	bool var_978_bool; object var_979_object;
	var_965_object = var_979_object;
	func_5287(var_978_bool, var_979_object, 70.0);
	if(!var_978_bool) { //@nz
		var_964_int = -2;
		return 8;
	}
	object var_971_object;
	@CreateDialog(var_971_object);
	int var_982_int;
	func_5844(var_982_int);
	var_971_object->SetNPCName(var_982_int);
	int var_983_int;
	func_5842(var_983_int);
	var_971_object->SetNPCDescription(var_983_int);
	string var_984_string;
	func_5846(var_984_string);
	var_971_object->SetPhoto(var_984_string);
	string var_985_string;
	func_5848(var_985_string);
	var_971_object->SetPhoto2(var_985_string);
	int var_986_int;
	func_6838(var_986_int);
	var_971_object->SetPlayerName(var_986_int);
	bool var_972_bool;
	@IsOverrideActive(var_972_bool);
	if(var_972_bool != 0) {
		var_964_int = -2;
		return 8;
	}
	@DoDialog(var_971_object);
	object var_988_object; object var_989_object;
	var_965_object = var_988_object;
	var_971_object = var_989_object;
	TaskCall(15);
	func_3291(var_990_object, var_991_object, var_992_string, var_993_bool, var_988_object, var_989_object);
	TaskReturn();
	bool var_974_bool;
	var_971_object->IsDialogEnd(var_974_bool);
	
	for(;;) {
		var_1018_bool = !var_974_bool; //@nz
		if(var_1018_bool == 0) goto Label_3280;
		@sync();
		var_971_object->IsDialogEnd(var_974_bool);
	}
	
Label_3280:
	object var_1019_object;
	var_965_object = var_1019_object;
	func_5355();
	@StopDialog(var_971_object);
	var_971_object->GetReturnValue(-1);
	int var_973_int = var_964_int;
}
EMIT "Stack[-4] = 0";


void func_5263(bool var_75_bool, cvector var_76_cvector)
{
	cvector var_80_cvector;
	@GetPosition(var_80_cvector);
	cvector var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	bool var_82_bool;
	@Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
}


void func_5776(float var_226_float)
{
	object var_228_object;
	@CreateFloatVector(var_228_object);
	var_228_object->add(var_226_float);
	@SendWorldWndMessage(16, var_228_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6292(bool var_547_bool)
{
	int var_549_int;
	func_5664(var_549_int, "b1q02");
	if(var_549_int == 0) {
		var_547_bool = true;
		return 0;
	}
	var_547_bool = false;
}


void func_5273(bool var_71_bool, object var_72_object)
{
	cvector var_74_cvector;
	var_72_object->GetPosition(var_74_cvector);
	bool var_75_bool; cvector var_76_cvector;
	var_74_cvector = var_76_cvector;
	func_5263(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
}


void func_5786(bool var_137_bool, string var_138_string, string var_139_string)
{
	object var_141_object;
	@FindActor(var_141_object, var_138_string);
	if(var_141_object == null)
		var_137_bool = false;
	@Trigger(var_141_object, var_139_string);
	var_137_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6304(bool var_505_bool)
{
	int var_507_int;
	func_5664(var_507_int, "b1q03_dead");
	if(var_507_int != 0) {
		var_505_bool = true;
		return 0;
	}
	var_505_bool = false;
}


void func_1696(bool var_0_bool, int var_645_int, object var_646_object)
{
	var_0_bool = var_646_object;
	bool var_656_bool; object var_657_object;
	object var_658_object;
	func_5632(var_658_object);
	var_658_object = var_657_object;
	func_5372(var_656_bool, var_657_object);
	bool var_659_bool; object var_660_object;
	var_646_object = var_660_object;
	func_5287(var_659_bool, var_660_object, 70.0);
	if(!var_659_bool) { //@nz
		var_645_int = -2;
		return 8;
	}
	object var_652_object;
	@CreateDialog(var_652_object);
	int var_663_int;
	func_5844(var_663_int);
	var_652_object->SetNPCName(var_663_int);
	int var_664_int;
	func_5842(var_664_int);
	var_652_object->SetNPCDescription(var_664_int);
	string var_665_string;
	func_5846(var_665_string);
	var_652_object->SetPhoto(var_665_string);
	string var_666_string;
	func_5848(var_666_string);
	var_652_object->SetPhoto2(var_666_string);
	int var_667_int;
	func_6838(var_667_int);
	var_652_object->SetPlayerName(var_667_int);
	bool var_653_bool;
	@IsOverrideActive(var_653_bool);
	if(var_653_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	@DoDialog(var_652_object);
	object var_669_object; object var_670_object;
	var_646_object = var_669_object;
	var_652_object = var_670_object;
	TaskCall(7);
	func_1777(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object);
	TaskReturn();
	bool var_655_bool;
	var_652_object->IsDialogEnd(var_655_bool);
	
	for(;;) {
		var_708_bool = !var_655_bool; //@nz
		if(var_708_bool == 0) goto Label_1766;
		@sync();
		var_652_object->IsDialogEnd(var_655_bool);
	}
	
Label_1766:
	object var_709_object;
	var_646_object = var_709_object;
	func_5355();
	@StopDialog(var_652_object);
	var_652_object->GetReturnValue(-1);
	int var_654_int = var_645_int;
}
EMIT "Stack[-4] = 0";


void func_5282(bool var_69_bool)
{
	bool var_71_bool;
	@IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
}


void func_5798(float var_99_float)
{
	float var_101_float;
	@GetGameTime(var_101_float);
	var_101_float = var_99_float;
}


void func_5287(bool var_308_bool, object var_309_object, float var_310_float)
{
	cvector var_321_cvector; bool var_328_bool;
	var_309_object->GetPosition(var_321_cvector);
	float var_320_float;
	var_309_object->GetEyesHeight(var_320_float);
	var_329_float = GetByIndex(var_321_cvector, 1);
	SetByIndex(var_321_cvector, 1) = (var_329_float + var_320_float);
	cvector var_322_cvector;
	@GetPosition(var_322_cvector);
	@GetEyesHeight(var_320_float);
	var_330_float = GetByIndex(var_322_cvector, 1);
	SetByIndex(var_322_cvector, 1) = (var_330_float + var_320_float);
	cvector var_323_cvector = var_321_cvector - var_322_cvector;
	var_331_float = GetByIndex(var_323_cvector, 1);
	SetByIndex(var_323_cvector, 1) = (float)0;
	var_333_float = sqrt(var_323_cvector | var_323_cvector);
	var_323_cvector /= var_333_float;
	cvector var_324_cvector = -var_323_cvector;
	cvector var_335_cvector;
	func_5638(var_335_cvector, (var_324_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_325_cvector = ((var_323_cvector * var_310_float) + (var_335_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_327_bool;
	@IsOverrideActive(var_327_bool);
	if(var_327_bool != 0)
		var_308_bool = false;
	@StopWorld();
	@CameraTransit((var_322_cvector + var_325_cvector), var_324_cvector);
	var_348_float = GetByIndex(var_325_cvector, 0);
	var_349_float = GetByIndex(var_325_cvector, 2);
	@Rotate(var_348_float, var_349_float);
	bool var_350_bool;
	func_5850(var_350_bool);
	if(var_350_bool != 0) {
	} else {
		@HasAnimationTrack(var_328_bool, "head");
		if(var_328_bool == 0) goto Label_5349;
		@LookAsyncCamera("head");
	}
Label_5349:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_308_bool = true;
	
}


void func_5803(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	var_87_int = 1 + (var_89_float / 24);
}


// @pe
void func_6316(bool var_512_bool)
{
	int var_514_int;
	func_5664(var_514_int, "b1q03_retreat");
	if(var_514_int != 0) {
		var_512_bool = true;
		return 0;
	}
	var_512_bool = false;
}


// @pe
void func_4785(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_368_object, object var_369_object)
{
	var_0_bool = var_369_object;
	var_1_object = var_368_object;
	var_3_object = false;
	if(1 != 0) {
		func_4843(var_369_object, "Neutral");
		var_0_bool->SetMessage(520730); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520731, 21943, 21942); //@t
		var_0_bool->AddReply(520738, 21943, 21949); //@t
		goto Label_4813;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12b5";
	}
Label_4813:
	bool var_394_bool;
	func_5850(var_394_bool);
	if(var_394_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4842;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4842:
		return 0;

	}
	
}


void func_6833(int var_102_int, string var_103_string)
{
	int var_105_int;
	@GetInvItemByName(var_105_int, var_103_string);
	var_105_int = var_102_int;
}


// @pe
void func_179(object var_2_object, string var_1395_string)
{
	bool var_1396_bool;
	func_5850(var_1396_bool);
	if(!var_1396_bool) //@nz
		return 0;
	if(var_1395_string == var_2_object)
		return 0;
	string var_1399_string; bool var_1400_bool;
	var_1395_string = var_1399_string;
	if(var_1395_string == "")
		var_1400_bool = false;
	else
		var_1400_bool = true;
	func_5576(var_1399_string, var_1400_bool);
	var_2_object = var_1395_string;
	
}


// @pe
void func_5812(bool var_416_bool, int var_417_int)
{
	int var_418_int;
	func_5803(var_418_int);
	var_416_bool = var_418_int == var_417_int;
}


void func_6838(int var_359_int)
{
	int var_361_int;
	@GetVariable("branch", var_361_int);
	if(var_361_int == 0) {
		var_359_int = 1;
		return 2;
	EMIT "GOTO 0x1ac5";
	}
	if(var_361_int == 1) {
		var_359_int = 2;
		return 2;
	}
	var_359_int = 3;
}


// @pe
void func_6328(bool var_499_bool)
{
	int var_501_int;
	func_5664(var_501_int, "b1q03_2");
	if(var_501_int == 0) {
		var_499_bool = true;
		return 0;
	}
	var_499_bool = false;
}


void func_5818(string var_107_string, int var_108_int)
{
	string var_110_string = "idle";
	if(var_108_int != 0)
		var_110_string += var_108_int;
	var_110_string = var_107_string;
}


void func_4282(bool var_0_bool, int var_1240_int, object var_1241_object)
{
	var_0_bool = var_1241_object;
	bool var_1251_bool; object var_1252_object;
	object var_1253_object;
	func_5632(var_1253_object);
	var_1253_object = var_1252_object;
	func_5372(var_1251_bool, var_1252_object);
	bool var_1254_bool; object var_1255_object;
	var_1241_object = var_1255_object;
	func_5287(var_1254_bool, var_1255_object, 70.0);
	if(!var_1254_bool) { //@nz
		var_1240_int = -2;
		return 8;
	}
	object var_1247_object;
	@CreateDialog(var_1247_object);
	int var_1258_int;
	func_5844(var_1258_int);
	var_1247_object->SetNPCName(var_1258_int);
	int var_1259_int;
	func_5842(var_1259_int);
	var_1247_object->SetNPCDescription(var_1259_int);
	string var_1260_string;
	func_5846(var_1260_string);
	var_1247_object->SetPhoto(var_1260_string);
	string var_1261_string;
	func_5848(var_1261_string);
	var_1247_object->SetPhoto2(var_1261_string);
	int var_1262_int;
	func_6838(var_1262_int);
	var_1247_object->SetPlayerName(var_1262_int);
	bool var_1248_bool;
	@IsOverrideActive(var_1248_bool);
	if(var_1248_bool != 0) {
		var_1240_int = -2;
		return 8;
	}
	@DoDialog(var_1247_object);
	object var_1264_object; object var_1265_object;
	var_1241_object = var_1264_object;
	var_1247_object = var_1265_object;
	TaskCall(23);
	func_4363(var_1266_object, var_1267_object, var_1268_string, var_1269_bool, var_1264_object, var_1265_object);
	TaskReturn();
	bool var_1250_bool;
	var_1247_object->IsDialogEnd(var_1250_bool);
	
	for(;;) {
		var_1294_bool = !var_1250_bool; //@nz
		if(var_1294_bool == 0) goto Label_4352;
		@sync();
		var_1247_object->IsDialogEnd(var_1250_bool);
	}
	
Label_4352:
	object var_1295_object;
	var_1241_object = var_1295_object;
	func_5355();
	@StopDialog(var_1247_object);
	var_1247_object->GetReturnValue(-1);
	int var_1249_int = var_1240_int;
}
EMIT "Stack[-4] = 0";


void func_5825(int var_101_int)
{
	int var_104_int; bool var_105_bool;
	var_104_int = 0;
	
	for(;;) {
		string var_107_string; int var_108_int;
		var_104_int = var_108_int;
		func_5818(var_107_string, var_108_int);
		@HasAnimation(var_105_bool, "all", var_107_string);
		if(!var_105_bool) //@nz
			break;
		var_104_int += 1;
	}
	var_104_int = var_101_int;
}


// @pe
void func_6340(bool var_524_bool)
{
	int var_526_int;
	func_5664(var_526_int, "b1q03_2");
	if(var_526_int == 1)
		var_524_bool = true;
	var_524_bool = false;
}


void func_6855(int var_189_int)
{
	int var_191_int;
	@GetVariable("branch", var_191_int);
	var_191_int = var_189_int;
}


// @pe
void func_6861(object var_604_object)
{
	object var_606_object;
	var_604_object = var_606_object;
	bool var_605_bool;
	func_5510(var_605_bool, var_606_object);
	if(!var_605_bool) { //@nz
	}
	object var_637_object;
	var_604_object = var_637_object;
	TaskCall(1);
	func_13(var_637_object);
	TaskReturn();
	object var_641_object;
	var_604_object = var_641_object;
	func_5565();
}


// @pe
void func_6352(bool var_451_bool)
{
	int var_453_int;
	func_5664(var_453_int, "oob1Grif1");
	if(var_453_int == 0) {
		var_451_bool = true;
		return 0;
	}
	var_451_bool = false;
}


void func_5842(int var_356_int)
{
	var_356_int = 515535;
}


void func_5844(int var_355_int)
{
	var_355_int = 502860;
}


void func_5846(string var_357_string)
{
	var_357_string = "ui/NPC_Grif.png";
}


void func_5848(string var_358_string)
{
	var_358_string = "ui/NPC_Grif_b.png";
}


void func_5850(bool var_256_bool)
{
	var_256_bool = true;
}


// @pe
void func_3291(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_988_object, object var_989_object)
{
	var_0_bool = var_989_object;
	var_1_object = var_988_object;
	var_3_object = false;
	if(1 != 0) {
		func_3349(var_989_object, "Neutral");
		var_0_bool->SetMessage(520481); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520482, -1, 21685); //@t
		var_0_bool->AddReply(520483, -1, 21686); //@t
		goto Label_3319;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcdf";
	}
Label_3319:
	bool var_1010_bool;
	func_5850(var_1010_bool);
	if(var_1010_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3348;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3348:
		return 0;

	}
	
}


// @pe
void func_6364(bool var_553_bool)
{
	int var_555_int;
	func_5664(var_555_int, "oob1Grif2");
	if(var_555_int == 0) {
		var_553_bool = true;
		return 0;
	}
	var_553_bool = false;
}


// @pe
void func_5852(void)
{
	@SetVariable("oob3Grif1", 1);
}


// @pe
void func_6880(object var_85_object, object var_422_object, object var_647_object, object var_717_object, object var_844_object, object var_905_object, object var_966_object, object var_1027_object, object var_1088_object, object var_1181_object, object var_1242_object, object var_1303_object)
{
	var_86_int = GlobalVars[3];
	int var_87_int;
	func_5803(var_87_int);
	if(var_86_int != var_87_int) {
		func_6677();
		var_203_int = GlobalVars[3];
		int var_204_int;
		func_5803(var_204_int);
		var_204_int = var_203_int;
		GlobalVars[3] = var_203_int;
	}
	var_205_bool = GlobalVars[1];
	if(!var_205_bool) { //@nz
		int var_207_int; object var_208_object;
		var_85_object = var_208_object;
		TaskCall(26);
		func_4704(var_209_object, var_207_int, var_208_object);
		TaskReturn();
		var_415_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_416_bool;
	func_5812(var_416_bool, 1);
	if(var_416_bool != 0) {
		int var_420_int; object var_421_object;
		var_85_object = var_421_object;
		TaskCall(4);
		func_294(var_422_object, var_420_int, var_421_object);
		TaskReturn();
		if(1000 == var_422_object) {
			object var_604_object;
			var_85_object = var_604_object;
			func_6861(var_604_object);
		}
		return 0;
	}
	bool var_642_bool;
	func_5812(var_642_bool, 2);
	if(var_642_bool != 0) {
		int var_645_int; object var_646_object;
		var_85_object = var_646_object;
		TaskCall(6);
		func_1696(var_647_object, var_645_int, var_646_object);
		TaskReturn();
		if(1000 == var_647_object) {
			object var_711_object;
			var_85_object = var_711_object;
			func_6861(var_711_object);
		}
		return 0;
	}
	bool var_712_bool;
	func_5812(var_712_bool, 3);
	if(var_712_bool != 0) {
		int var_715_int; object var_716_object;
		var_85_object = var_716_object;
		TaskCall(8);
		func_2099(var_717_object, var_715_int, var_716_object);
		TaskReturn();
		if(1000 == var_717_object) {
			object var_838_object;
			var_85_object = var_838_object;
			func_6861(var_838_object);
		}
		return 0;
	}
	bool var_839_bool;
	func_5812(var_839_bool, 4);
	if(var_839_bool != 0) {
		int var_842_int; object var_843_object;
		var_85_object = var_843_object;
		TaskCall(10);
		func_2788(var_844_object, var_842_int, var_843_object);
		TaskReturn();
		if(1000 == var_844_object) {
			object var_899_object;
			var_85_object = var_899_object;
			func_6861(var_899_object);
		}
		return 0;
	}
	bool var_900_bool;
	func_5812(var_900_bool, 5);
	if(var_900_bool != 0) {
		int var_903_int; object var_904_object;
		var_85_object = var_904_object;
		TaskCall(12);
		func_2999(var_905_object, var_903_int, var_904_object);
		TaskReturn();
		if(1000 == var_905_object) {
			object var_960_object;
			var_85_object = var_960_object;
			func_6861(var_960_object);
		}
		return 0;
	}
	bool var_961_bool;
	func_5812(var_961_bool, 6);
	if(var_961_bool != 0) {
		int var_964_int; object var_965_object;
		var_85_object = var_965_object;
		TaskCall(14);
		func_3210(var_966_object, var_964_int, var_965_object);
		TaskReturn();
		if(1000 == var_966_object) {
			object var_1021_object;
			var_85_object = var_1021_object;
			func_6861(var_1021_object);
		}
		return 0;
	}
	bool var_1022_bool;
	func_5812(var_1022_bool, 7);
	if(var_1022_bool != 0) {
		int var_1025_int; object var_1026_object;
		var_85_object = var_1026_object;
		TaskCall(16);
		func_3421(var_1027_object, var_1025_int, var_1026_object);
		TaskReturn();
		if(1000 == var_1027_object) {
			object var_1082_object;
			var_85_object = var_1082_object;
			func_6861(var_1082_object);
		}
		return 0;
	}
	bool var_1083_bool;
	func_5812(var_1083_bool, 8);
	if(var_1083_bool != 0) {
		int var_1086_int; object var_1087_object;
		var_85_object = var_1087_object;
		TaskCall(18);
		func_3632(var_1088_object, var_1086_int, var_1087_object);
		TaskReturn();
		if(1000 == var_1088_object) {
			object var_1175_object;
			var_85_object = var_1175_object;
			func_6861(var_1175_object);
		}
		return 0;
	}
	bool var_1176_bool;
	func_5812(var_1176_bool, 9);
	if(var_1176_bool != 0) {
		int var_1179_int; object var_1180_object;
		var_85_object = var_1180_object;
		TaskCall(20);
		func_4071(var_1181_object, var_1179_int, var_1180_object);
		TaskReturn();
		if(1000 == var_1181_object) {
			object var_1236_object;
			var_85_object = var_1236_object;
			func_6861(var_1236_object);
		}
		return 0;
	}
	bool var_1237_bool;
	func_5812(var_1237_bool, 10);
	if(var_1237_bool != 0) {
		int var_1240_int; object var_1241_object;
		var_85_object = var_1241_object;
		TaskCall(22);
		func_4282(var_1242_object, var_1240_int, var_1241_object);
		TaskReturn();
		if(1000 == var_1242_object) {
			object var_1297_object;
			var_85_object = var_1297_object;
			func_6861(var_1297_object);
		}
		return 0;
	}
	bool var_1298_bool;
	func_5812(var_1298_bool, 11);
	if(var_1298_bool != 0) {
		int var_1301_int; object var_1302_object;
		var_85_object = var_1302_object;
		TaskCall(24);
		func_4493(var_1303_object, var_1301_int, var_1302_object);
		TaskReturn();
		if(1000 == var_1303_object) {
			object var_1358_object;
			var_85_object = var_1358_object;
			func_6861(var_1358_object);
		}
		return 0;
	}
	bool var_1359_bool = false;
	bool var_1360_bool;
	func_5812(var_1360_bool, 12);
	if(var_1360_bool != 0) {
		var_1362_bool = GlobalVars[2];
		if(!var_1362_bool) //@nz
			var_1359_bool = true;
	}
	if(var_1359_bool != 0) {
		int var_1364_int; object var_1365_object;
		var_85_object = var_1365_object;
		TaskCall(2);
		func_35(var_1366_object, var_1364_int, var_1365_object);
		TaskReturn();
		var_1423_bool = GlobalVars[2];
		GlobalVars[2] = true;
		return 0;
	}
}


// @pe
void func_3809(object var_2_object, string var_1117_string)
{
	bool var_1118_bool;
	func_5850(var_1118_bool);
	if(!var_1118_bool) //@nz
		return 0;
	if(var_1117_string == var_2_object)
		return 0;
	string var_1121_string; bool var_1122_bool;
	var_1117_string = var_1121_string;
	if(var_1117_string == "")
		var_1122_bool = false;
	else
		var_1122_bool = true;
	func_5576(var_1121_string, var_1122_bool);
	var_2_object = var_1117_string;
	
}


// @pe
void func_5858(void)
{
	@SetVariable("oob3Grif2", 1);
}


void func_2788(bool var_0_bool, int var_842_int, object var_843_object)
{
	var_0_bool = var_843_object;
	bool var_853_bool; object var_854_object;
	object var_855_object;
	func_5632(var_855_object);
	var_855_object = var_854_object;
	func_5372(var_853_bool, var_854_object);
	bool var_856_bool; object var_857_object;
	var_843_object = var_857_object;
	func_5287(var_856_bool, var_857_object, 70.0);
	if(!var_856_bool) { //@nz
		var_842_int = -2;
		return 8;
	}
	object var_849_object;
	@CreateDialog(var_849_object);
	int var_860_int;
	func_5844(var_860_int);
	var_849_object->SetNPCName(var_860_int);
	int var_861_int;
	func_5842(var_861_int);
	var_849_object->SetNPCDescription(var_861_int);
	string var_862_string;
	func_5846(var_862_string);
	var_849_object->SetPhoto(var_862_string);
	string var_863_string;
	func_5848(var_863_string);
	var_849_object->SetPhoto2(var_863_string);
	int var_864_int;
	func_6838(var_864_int);
	var_849_object->SetPlayerName(var_864_int);
	bool var_850_bool;
	@IsOverrideActive(var_850_bool);
	if(var_850_bool != 0) {
		var_842_int = -2;
		return 8;
	}
	@DoDialog(var_849_object);
	object var_866_object; object var_867_object;
	var_843_object = var_866_object;
	var_849_object = var_867_object;
	TaskCall(11);
	func_2869(var_868_object, var_869_object, var_870_string, var_871_bool, var_866_object, var_867_object);
	TaskReturn();
	bool var_852_bool;
	var_849_object->IsDialogEnd(var_852_bool);
	
	for(;;) {
		var_896_bool = !var_852_bool; //@nz
		if(var_896_bool == 0) goto Label_2858;
		@sync();
		var_849_object->IsDialogEnd(var_852_bool);
	}
	
Label_2858:
	object var_897_object;
	var_843_object = var_897_object;
	func_5355();
	@StopDialog(var_849_object);
	var_849_object->GetReturnValue(-1);
	int var_851_int = var_842_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6376(bool var_758_bool)
{
	int var_760_int;
	func_5664(var_760_int, "b3q02");
	if(var_760_int == 1)
		var_758_bool = true;
	var_758_bool = false;
}


// @pe
void func_5864(void)
{
	@SetVariable("oob3Grif3", 1);
}


void func_5355(void)
{
	bool var_410_bool;
	@CameraSwitchToNormal();
	bool var_411_bool;
	func_5850(var_411_bool);
	if(var_411_bool != 0) {
	} else {
		@HasAnimationTrack(var_410_bool, "head");
		if(var_410_bool == 0) goto Label_5371;
		@UnlookAsync("head");
	}
Label_5371:
	
}


// @pe
void func_4843(object var_2_object, string var_375_string)
{
	bool var_376_bool;
	func_5850(var_376_bool);
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
	func_5576(var_379_string, var_380_bool);
	var_2_object = var_375_string;
	
}


// @pe
void func_5870(object var_276_object)
{
	object var_280_object;
	func_6627(var_280_object);
	object var_277_object;
	var_280_object = var_277_object;
	func_6644(var_277_object, "pt_map_notkin", (float)2);
	object var_281_object;
	func_6627(var_281_object);
	var_276_object->ShowMap(var_281_object);
}


// @pe
void func_1777(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_669_object, object var_670_object)
{
	var_0_bool = var_670_object;
	var_3_object = false;
	if(1 != 0) {
		func_1845(var_670_object, "Neutral");
		var_0_bool->SetMessage(518272); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_685_bool;
		func_6484(var_669_object);
		if(var_685_bool != 0)
			var_0_bool->AddReply(519463, 20635, 20634); //@t
		var_0_bool->AddReply(520470, -1, 21673); //@t
		var_0_bool->AddReply(518273, -1, 19382); //@t
		goto Label_1815;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6f5";
	}
Label_1815:
	bool var_700_bool;
	func_5850(var_700_bool);
	if(var_700_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1844;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1844:
		return 0;

	}
	
}


// @pe
void func_6388(bool var_788_bool)
{
	int var_790_int;
	func_5664(var_790_int, "b3q02");
	if(var_790_int == 3)
		var_788_bool = true;
	var_788_bool = false;
}


void func_5372(bool var_218_bool, object var_219_object)
{
	int var_225_int; int var_226_int;
	@GetVariable("voice_common", var_225_int);
	if(var_225_int != 0) {
		bool var_229_bool; object var_230_object;
		var_219_object = var_230_object;
		func_5430(var_229_bool, var_230_object);
		if(!var_229_bool) { //@nz
			bool var_260_bool; object var_261_object;
			var_219_object = var_261_object;
			func_5467(var_260_bool, var_261_object);
			if(!var_260_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@irand(var_226_int, 2);
		if(var_226_int != 0)
			@SetVariable("voice_common", ((var_225_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_300_bool; object var_301_object;
		var_219_object = var_301_object;
		func_5467(var_300_bool, var_301_object);
		if(!var_300_bool) { //@nz
			bool var_303_bool; object var_304_object;
			var_219_object = var_304_object;
			func_5430(var_303_bool, var_304_object);
			if(!var_303_bool) { //@nz
				var_218_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5428;
	
Label_5428:
	var_218_bool = true;
	
}


// @pe
void func_5886(void)
{
	@SetVariable("oob1Grif3", 1);
}


// @pe
void func_6400(bool var_770_bool)
{
	int var_772_int;
	func_5664(var_772_int, "b3q02Dead");
	if(var_772_int != 0) {
		var_770_bool = true;
		return 0;
	}
	var_770_bool = false;
}


void func_5892(void)
{
	@SetVariable("b1q01GrifToldAboutDanko", 1);
	object var_368_object;
	func_6627(var_368_object);
	object var_365_object;
	var_368_object = var_365_object;
	float var_373_float;
	func_5798(var_373_float);
	var_365_object->AddMark("b1q01GrifGotoDanko", "pt_map_eva", 1, 520048, var_373_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1264_object, object var_1265_object)
{
	var_0_bool = var_1265_object;
	var_1_object = var_1264_object;
	var_3_object = false;
	if(1 != 0) {
		func_4421(var_1265_object, "Neutral");
		var_0_bool->SetMessage(520497); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520498, -1, 21701); //@t
		var_0_bool->AddReply(520499, -1, 21702); //@t
		goto Label_4391;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x110f";
	}
Label_4391:
	bool var_1286_bool;
	func_5850(var_1286_bool);
	if(var_1286_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4420;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4420:
		return 0;

	}
	
}


// @pe
void func_6412(bool var_764_bool)
{
	int var_766_int;
	func_5664(var_766_int, "oob3Grif1");
	if(var_766_int == 0) {
		var_764_bool = true;
		return 0;
	}
	var_764_bool = false;
}


// @pe
void func_3349(object var_2_object, string var_995_string)
{
	bool var_996_bool;
	func_5850(var_996_bool);
	if(!var_996_bool) //@nz
		return 0;
	if(var_995_string == var_2_object)
		return 0;
	string var_999_string; bool var_1000_bool;
	var_995_string = var_999_string;
	if(var_995_string == "")
		var_1000_bool = false;
	else
		var_1000_bool = true;
	func_5576(var_999_string, var_1000_bool);
	var_2_object = var_995_string;
	
}


// @pe
void func_5912(object var_375_object)
{
	object var_379_object;
	func_6627(var_379_object);
	object var_376_object;
	var_379_object = var_376_object;
	func_6644(var_376_object, "pt_map_eva", (float)2);
	object var_380_object;
	func_6627(var_380_object);
	var_375_object->ShowMap(var_380_object);
}


// @pe
void func_6424(bool var_794_bool)
{
	int var_796_int;
	func_5664(var_796_int, "oob3Grif2");
	if(var_796_int == 0) {
		var_794_bool = true;
		return 0;
	}
	var_794_bool = false;
}


// @pe
void func_2330(object var_2_object, string var_746_string)
{
	bool var_747_bool;
	func_5850(var_747_bool);
	if(!var_747_bool) //@nz
		return 0;
	if(var_746_string == var_2_object)
		return 0;
	string var_750_string; bool var_751_bool;
	var_746_string = var_750_string;
	if(var_746_string == "")
		var_751_bool = false;
	else
		var_751_bool = true;
	func_5576(var_750_string, var_751_bool);
	var_2_object = var_746_string;
	
}


// @pe
void func_6436(bool var_809_bool)
{
	int var_811_int;
	func_5664(var_811_int, "oob3Grif3");
	if(var_811_int == 0) {
		var_809_bool = true;
		return 0;
	}
	var_809_bool = false;
}


void func_294(bool var_0_bool, int var_420_int, object var_421_object)
{
	var_0_bool = var_421_object;
	bool var_431_bool; object var_432_object;
	object var_433_object;
	func_5632(var_433_object);
	var_433_object = var_432_object;
	func_5372(var_431_bool, var_432_object);
	bool var_434_bool; object var_435_object;
	var_421_object = var_435_object;
	func_5287(var_434_bool, var_435_object, 70.0);
	if(!var_434_bool) { //@nz
		var_420_int = -2;
		return 8;
	}
	object var_427_object;
	@CreateDialog(var_427_object);
	int var_438_int;
	func_5844(var_438_int);
	var_427_object->SetNPCName(var_438_int);
	int var_439_int;
	func_5842(var_439_int);
	var_427_object->SetNPCDescription(var_439_int);
	string var_440_string;
	func_5846(var_440_string);
	var_427_object->SetPhoto(var_440_string);
	string var_441_string;
	func_5848(var_441_string);
	var_427_object->SetPhoto2(var_441_string);
	int var_442_int;
	func_6838(var_442_int);
	var_427_object->SetPlayerName(var_442_int);
	bool var_428_bool;
	@IsOverrideActive(var_428_bool);
	if(var_428_bool != 0) {
		var_420_int = -2;
		return 8;
	}
	@DoDialog(var_427_object);
	object var_444_object; object var_445_object;
	var_421_object = var_444_object;
	var_427_object = var_445_object;
	TaskCall(5);
	func_375(var_446_object, var_447_object, var_448_string, var_449_bool, var_444_object, var_445_object);
	TaskReturn();
	bool var_430_bool;
	var_427_object->IsDialogEnd(var_430_bool);
	
	for(;;) {
		var_601_bool = !var_430_bool; //@nz
		if(var_601_bool == 0) goto Label_364;
		@sync();
		var_427_object->IsDialogEnd(var_430_bool);
	}
	
Label_364:
	object var_602_object;
	var_421_object = var_602_object;
	func_5355();
	@StopDialog(var_427_object);
	var_427_object->GetReturnValue(-1);
	int var_429_int = var_420_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5928(void)
{
	@SetVariable("oob2Grif1", 1);
}


// @pe
void func_5934(void)
{
	@SetVariable("oob1Grif4", 1);
}


// @pe
void func_6448(bool var_777_bool)
{
	int var_779_int;
	func_5664(var_779_int, "b3q02GrabitelTalk");
	if(var_779_int == 1)
		var_777_bool = true;
	var_777_bool = false;
}


// @pe
void func_5940(void)
{
	object var_402_object;
	func_5669(var_402_object, "quest_b1_04");
}


// @pe
void func_1845(object var_2_object, string var_676_string)
{
	bool var_677_bool;
	func_5850(var_677_bool);
	if(!var_677_bool) //@nz
		return 0;
	if(var_676_string == var_2_object)
		return 0;
	string var_680_string; bool var_681_bool;
	var_676_string = var_680_string;
	if(var_676_string == "")
		var_681_bool = false;
	else
		var_681_bool = true;
	func_5576(var_680_string, var_681_bool);
	var_2_object = var_676_string;
	
}


// @pe
void func_2869(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_866_object, object var_867_object)
{
	var_0_bool = var_867_object;
	var_1_object = var_866_object;
	var_3_object = false;
	if(1 != 0) {
		func_2927(var_867_object, "Anger");
		var_0_bool->SetMessage(520473); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520474, -1, 21677); //@t
		var_0_bool->AddReply(520475, -1, 21678); //@t
		goto Label_2897;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb39";
	}
Label_2897:
	bool var_888_bool;
	func_5850(var_888_bool);
	if(var_888_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2926;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2926:
		return 0;

	}
	
}


void func_5430(bool var_229_bool, object var_230_object)
{
	string var_236_string; bool var_238_bool; int var_239_int; string var_240_string;
	var_236_string = "c";
	int var_237_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_230_object->HasProperty((var_236_string + (var_237_int + 1)), var_238_bool);
			if(!var_238_bool) { //@nz
			} else {
				var_237_int += 1;
			}
		}
		if(!var_237_int) { //@nz
			var_229_bool = false;
			return 10;
		}
		var_239_int = 0;
		if(var_237_int > 1)
			@irand(var_239_int, var_237_int);
		var_230_object->GetProperty((var_236_string + (var_239_int + 1)), var_240_string);
		bool var_252_bool; string var_253_string;
		var_240_string = var_253_string;
		func_5582(var_252_bool, var_253_string);
		var_252_bool = var_229_bool;
		return 10;

	}
}


// @pe
void func_5946(void)
{
	@SetVariable("oob8Grif1", 1);
}


// @pe
void func_6460(bool var_564_bool)
{
	int var_566_int;
	func_5664(var_566_int, "oob1Grif3");
	if(var_566_int == 0) {
		var_564_bool = true;
		return 0;
	}
	var_564_bool = false;
}


void func_5952(void)
{
	object var_88_object;
	func_6627(var_88_object);
	object var_87_object;
	var_88_object = var_87_object;
	float var_99_float;
	func_5798(var_99_float);
	var_87_object->AddMark("b8q01GrifGotoKlara", "pt_map_mishka", 3, 521464, var_99_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4421(object var_2_object, string var_1271_string)
{
	bool var_1272_bool;
	func_5850(var_1272_bool);
	if(!var_1272_bool) //@nz
		return 0;
	if(var_1271_string == var_2_object)
		return 0;
	string var_1275_string; bool var_1276_bool;
	var_1271_string = var_1275_string;
	if(var_1271_string == "")
		var_1276_bool = false;
	else
		var_1276_bool = true;
	func_5576(var_1275_string, var_1276_bool);
	var_2_object = var_1271_string;
	
}


// @pe
void func_6472(bool var_570_bool)
{
	int var_572_int;
	func_5664(var_572_int, "b1q01");
	if(var_572_int == 1000)
		var_570_bool = true;
	var_570_bool = false;
}


// @pe
void func_5968(void)
{
	@SetVariable("oob8Grif2", 1);
}


// @pe
void func_6484(bool var_685_bool)
{
	int var_687_int;
	func_5664(var_687_int, "oob2Grif1");
	if(var_687_int == 0) {
		var_685_bool = true;
		return 0;
	}
	var_685_bool = false;
}


// @pe
void func_5974(void)
{
	@SetVariable("oob1Grif5", 1);
}


void func_5467(bool var_260_bool, object var_261_object)
{
	bool var_269_bool; int var_270_int; string var_271_string;
	int var_273_int;
	func_5803(var_273_int);
	string var_267_string = ("d" + var_273_int) + "m";
	int var_268_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_261_object->HasProperty((var_267_string + (var_268_int + 1)), var_269_bool);
			if(!var_269_bool) { //@nz
			} else {
				var_268_int += 1;
			}
		}
		if(!var_268_int) { //@nz
			var_260_bool = false;
			return 10;
		}
		var_270_int = 0;
		if(var_268_int > 1)
			@irand(var_270_int, var_268_int);
		var_261_object->GetProperty((var_267_string + (var_270_int + 1)), var_271_string);
		bool var_287_bool; string var_288_string;
		var_271_string = var_288_string;
		func_5582(var_287_bool, var_288_string);
		var_287_bool = var_260_bool;
		return 10;

	}
}


void func_5980(void)
{
	object var_269_object;
	func_6627(var_269_object);
	object var_268_object;
	var_269_object = var_268_object;
	float var_274_float;
	func_5798(var_274_float);
	var_268_object->AddMark("b1GrifGotoNotkin", "pt_map_notkin", 3, 530364, var_274_float);
}
EMIT "Stack[-1] = 0";


void func_3421(bool var_0_bool, int var_1025_int, object var_1026_object)
{
	var_0_bool = var_1026_object;
	bool var_1036_bool; object var_1037_object;
	object var_1038_object;
	func_5632(var_1038_object);
	var_1038_object = var_1037_object;
	func_5372(var_1036_bool, var_1037_object);
	bool var_1039_bool; object var_1040_object;
	var_1026_object = var_1040_object;
	func_5287(var_1039_bool, var_1040_object, 70.0);
	if(!var_1039_bool) { //@nz
		var_1025_int = -2;
		return 8;
	}
	object var_1032_object;
	@CreateDialog(var_1032_object);
	int var_1043_int;
	func_5844(var_1043_int);
	var_1032_object->SetNPCName(var_1043_int);
	int var_1044_int;
	func_5842(var_1044_int);
	var_1032_object->SetNPCDescription(var_1044_int);
	string var_1045_string;
	func_5846(var_1045_string);
	var_1032_object->SetPhoto(var_1045_string);
	string var_1046_string;
	func_5848(var_1046_string);
	var_1032_object->SetPhoto2(var_1046_string);
	int var_1047_int;
	func_6838(var_1047_int);
	var_1032_object->SetPlayerName(var_1047_int);
	bool var_1033_bool;
	@IsOverrideActive(var_1033_bool);
	if(var_1033_bool != 0) {
		var_1025_int = -2;
		return 8;
	}
	@DoDialog(var_1032_object);
	object var_1049_object; object var_1050_object;
	var_1026_object = var_1049_object;
	var_1032_object = var_1050_object;
	TaskCall(17);
	func_3502(var_1051_object, var_1052_object, var_1053_string, var_1054_bool, var_1049_object, var_1050_object);
	TaskReturn();
	bool var_1035_bool;
	var_1032_object->IsDialogEnd(var_1035_bool);
	
	for(;;) {
		var_1079_bool = !var_1035_bool; //@nz
		if(var_1079_bool == 0) goto Label_3491;
		@sync();
		var_1032_object->IsDialogEnd(var_1035_bool);
	}
	
Label_3491:
	object var_1080_object;
	var_1026_object = var_1080_object;
	func_5355();
	@StopDialog(var_1032_object);
	var_1032_object->GetReturnValue(-1);
	int var_1034_int = var_1025_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6496(bool var_586_bool)
{
	int var_588_int;
	func_5664(var_588_int, "oob1Grif4");
	if(var_588_int == 0) {
		var_586_bool = true;
		return 0;
	}
	var_586_bool = false;
}


void func_4963(bool var_0_bool)
{
	bool var_69_bool;
	func_5282(var_69_bool);
	if(!var_69_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_5091();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_5145();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_5996(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_6508(void)
{
	object var_313_object;
	@CreateDiaryEntry(var_313_object, 212, 2, 518107);
	bool var_317_bool; object var_318_object;
	var_313_object = var_318_object;
	func_6599(var_317_bool, var_318_object, 209);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2927(object var_2_object, string var_873_string)
{
	bool var_874_bool;
	func_5850(var_874_bool);
	if(!var_874_bool) //@nz
		return 0;
	if(var_873_string == var_2_object)
		return 0;
	string var_877_string; bool var_878_bool;
	var_873_string = var_877_string;
	if(var_873_string == "")
		var_878_bool = false;
	else
		var_878_bool = true;
	func_5576(var_877_string, var_878_bool);
	var_2_object = var_873_string;
	
}


// @pe
void func_6002(object var_387_object)
{
	object var_390_object;
	var_387_object = var_390_object;
	bool var_389_bool;
	func_5741(var_389_bool, var_390_object, -0.02);
}


// @pe
void func_375(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_444_object, object var_445_object)
{
	var_0_bool = var_445_object;
	var_1_object = var_444_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_451_bool;
		func_6352(var_1_object);
		if(var_451_bool != 0) {
			object var_459_object; object var_460_object;
			var_459_object = var_1_object;
			var_460_object = var_0_bool;
			func_6094();
			func_609(var_445_object, "Neutral");
			var_0_bool->SetMessage(517945); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(527026, 28316, 28315); //@t
			var_0_bool->AddReply(527044, 28316, 28334); //@t
		} else {
					func_609(var_445_object, "Neutral");
					var_0_bool->SetMessage(517955); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_488_bool;
					func_6280(var_1_object);
					if(var_488_bool != 0)
						var_0_bool->AddReply(527047, 28341, 28340); //@t
					bool var_497_bool = false;
					bool var_498_bool = false;
					bool var_499_bool;
					func_6328(var_1_object);
					if(var_499_bool != 0) {
						bool var_505_bool;
						func_6304(var_1_object);
						if(!var_505_bool) //@nz
							var_498_bool = true;
					}
					if(var_498_bool != 0) {
						bool var_512_bool;
						func_6316(var_1_object);
						if(!var_512_bool) //@nz
							var_497_bool = true;
					}
					if(var_497_bool != 0)
						var_0_bool->AddReply(517957, 19090, 19089); //@t
					bool var_522_bool = false;
					bool var_523_bool = false;
					bool var_524_bool;
					func_6340(var_1_object);
					if(var_524_bool != 0) {
						bool var_530_bool;
						func_6316(var_1_object);
						if(var_530_bool != 0)
							var_523_bool = true;
					}
					if(var_523_bool != 0) {
						bool var_532_bool;
						func_6304(var_1_object);
						if(!var_532_bool) //@nz
							var_522_bool = true;
					}
					if(var_522_bool != 0)
						var_0_bool->AddReply(517960, 28332, 19092); //@t
					bool var_538_bool = false;
					bool var_539_bool;
					func_6340(var_1_object);
					if(var_539_bool != 0) {
						bool var_541_bool;
						func_6304(var_1_object);
						if(var_541_bool != 0)
							var_538_bool = true;
					}
					if(var_538_bool != 0)
						var_0_bool->AddReply(517982, 19116, 19115); //@t
					bool var_546_bool = false;
					bool var_547_bool;
					func_6292(var_1_object);
					if(var_547_bool != 0) {
						bool var_553_bool;
						func_6364(var_1_object);
						if(var_553_bool != 0)
							var_546_bool = true;
					}
					if(var_546_bool != 0)
						var_0_bool->AddReply(517973, 28323, 19106); //@t
					bool var_562_bool = false;
					bool var_563_bool = false;
					bool var_564_bool;
					func_6460(var_1_object);
					if(var_564_bool != 0) {
						bool var_570_bool;
						func_6472(var_1_object);
						if(!var_570_bool) //@nz
							var_563_bool = true;
					}
					if(var_563_bool != 0) {
						bool var_577_bool;
						func_6268(var_1_object);
						if(var_577_bool != 0)
							var_562_bool = true;
					}
					if(var_562_bool != 0)
						var_0_bool->AddReply(518139, 21635, 19253); //@t
					bool var_586_bool;
					func_6496(var_1_object);
					if(var_586_bool != 0)
						var_0_bool->AddReply(520672, 28325, 21879); //@t
					var_0_bool->AddReply(520471, -1, 21674); //@t
					var_0_bool->AddReply(517956, -1, 19088); //@t
		}
	}
	for(;;) {
		bool var_478_bool;
		func_5850(var_478_bool);
		if(var_478_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5569(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_608;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_608:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x17b";


void func_4983(bool var_92_bool)
{
	object var_94_object;
	@FindActor(var_94_object, "player");
	if(!var_94_object) //@nz
		var_92_bool = false;
	bool var_97_bool; object var_98_object;
	var_94_object = var_98_object;
	func_5273(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6009(object var_410_object)
{
	object var_413_object;
	var_410_object = var_413_object;
	bool var_412_bool;
	func_5741(var_412_bool, var_413_object, 0.02);
}


void func_6521(void)
{
	object var_297_object;
	@CreateDiaryEntry(var_297_object, 211, 2, 518106);
	bool var_301_bool; object var_302_object;
	var_297_object = var_302_object;
	func_6599(var_301_bool, var_302_object, 209);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6016(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_6022(object var_217_object)
{
	object var_220_object;
	var_217_object = var_220_object;
	bool var_219_bool;
	func_5741(var_219_bool, var_220_object, 0.1);
}


void func_4998(bool var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_144_float, var_145_float);
}


void func_6534(void)
{
	object var_119_object;
	@CreateDiaryEntry(var_119_object, 210, 2, 518105);
	bool var_123_bool; object var_124_object;
	var_119_object = var_124_object;
	func_6599(var_123_bool, var_124_object, 209);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5510(bool var_605_bool, object var_606_object)
{
	object var_608_object;
	var_606_object = var_608_object;
	bool var_607_bool;
	func_5518(var_607_bool, var_608_object, (float)70);
	var_607_bool = var_605_bool;
}


void func_5003(bool var_75_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
		var_75_bool = false;
		return 4;
	}
	float var_82_float; object var_83_object;
	func_5221(var_82_float, var_83_object);
	if(var_82_float > 90000.0) {
		var_75_bool = false;
		return 4;
	}
	bool var_79_bool;
	@CanSee(var_79_bool, var_83_object);
	var_79_bool = var_75_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_6029(object var_74_object)
{
	var_74_object->SetReturnValue(1000);
}


void func_5518(bool var_607_bool, object var_608_object, float var_609_float)
{
	cvector var_619_cvector;
	var_608_object->GetPosition(var_619_cvector);
	float var_618_float;
	var_608_object->GetEyesHeight(var_618_float);
	var_626_float = GetByIndex(var_619_cvector, 1);
	SetByIndex(var_619_cvector, 1) = (var_626_float + var_618_float);
	cvector var_620_cvector;
	@GetPosition(var_620_cvector);
	@GetEyesHeight(var_618_float);
	var_627_float = GetByIndex(var_620_cvector, 1);
	SetByIndex(var_620_cvector, 1) = (var_627_float + var_618_float);
	cvector var_621_cvector = var_619_cvector - var_620_cvector;
	var_628_float = GetByIndex(var_621_cvector, 1);
	SetByIndex(var_621_cvector, 1) = (float)0;
	var_630_float = sqrt(var_621_cvector | var_621_cvector);
	var_621_cvector /= var_630_float;
	cvector var_622_cvector = -var_621_cvector;
	cvector var_623_cvector = (var_621_cvector * var_609_float) - [0.0, 10.0, 0.0];
	bool var_625_bool;
	@IsOverrideActive(var_625_bool);
	if(var_625_bool != 0)
		var_607_bool = false;
	@StopWorld();
	@CameraTransit((var_620_cvector + var_623_cvector), var_622_cvector);
	var_634_float = GetByIndex(var_623_cvector, 0);
	var_635_float = GetByIndex(var_623_cvector, 2);
	@Rotate(var_634_float, var_635_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_607_bool = true;
}


void func_4493(bool var_0_bool, int var_1301_int, object var_1302_object)
{
	var_0_bool = var_1302_object;
	bool var_1312_bool; object var_1313_object;
	object var_1314_object;
	func_5632(var_1314_object);
	var_1314_object = var_1313_object;
	func_5372(var_1312_bool, var_1313_object);
	bool var_1315_bool; object var_1316_object;
	var_1302_object = var_1316_object;
	func_5287(var_1315_bool, var_1316_object, 70.0);
	if(!var_1315_bool) { //@nz
		var_1301_int = -2;
		return 8;
	}
	object var_1308_object;
	@CreateDialog(var_1308_object);
	int var_1319_int;
	func_5844(var_1319_int);
	var_1308_object->SetNPCName(var_1319_int);
	int var_1320_int;
	func_5842(var_1320_int);
	var_1308_object->SetNPCDescription(var_1320_int);
	string var_1321_string;
	func_5846(var_1321_string);
	var_1308_object->SetPhoto(var_1321_string);
	string var_1322_string;
	func_5848(var_1322_string);
	var_1308_object->SetPhoto2(var_1322_string);
	int var_1323_int;
	func_6838(var_1323_int);
	var_1308_object->SetPlayerName(var_1323_int);
	bool var_1309_bool;
	@IsOverrideActive(var_1309_bool);
	if(var_1309_bool != 0) {
		var_1301_int = -2;
		return 8;
	}
	@DoDialog(var_1308_object);
	object var_1325_object; object var_1326_object;
	var_1302_object = var_1325_object;
	var_1308_object = var_1326_object;
	TaskCall(25);
	func_4574(var_1327_object, var_1328_object, var_1329_string, var_1330_bool, var_1325_object, var_1326_object);
	TaskReturn();
	bool var_1311_bool;
	var_1308_object->IsDialogEnd(var_1311_bool);
	
	for(;;) {
		var_1355_bool = !var_1311_bool; //@nz
		if(var_1355_bool == 0) goto Label_4563;
		@sync();
		var_1308_object->IsDialogEnd(var_1311_bool);
	}
	
Label_4563:
	object var_1356_object;
	var_1302_object = var_1356_object;
	func_5355();
	@StopDialog(var_1308_object);
	var_1308_object->GetReturnValue(-1);
	int var_1310_int = var_1301_int;
}
EMIT "Stack[-4] = 0";


void func_6034(void)
{
	@SetVariable("b1q03_2", 1);
	object var_81_object;
	func_6627(var_81_object);
	object var_77_object;
	var_81_object = var_77_object;
	float var_92_float;
	func_5798(var_92_float);
	var_77_object->AddMark("b1q03GrifGotoDoberman", "pt_b1q03_doberman", 0, 518099, var_92_float);
	func_6547();
	func_6534();
	int var_78_int;
	@GetVariable("b1q03", var_78_int);
	if(var_78_int != 0) {
	}
	object var_129_object;
	func_5669(var_129_object, "quest_b1_03");
	bool var_137_bool;
	func_5786(var_137_bool, "quest_b1_03", "place_doberman");
}
EMIT "Stack[-2] = 0";


void func_6547(void)
{
	object var_96_object;
	@CreateDiaryEntry(var_96_object, 209, 2, 518104);
	bool var_100_bool; object var_101_object;
	var_96_object = var_101_object;
	func_6599(var_100_bool, var_101_object, -1);
}
EMIT "Stack[-1] = 0";


void func_6560(void)
{
	object var_100_object;
	@CreateDiaryEntry(var_100_object, 229, 2, 519657);
	bool var_104_bool; object var_105_object;
	var_100_object = var_105_object;
	func_6599(var_104_bool, var_105_object, 227);
}
EMIT "Stack[-1] = 0";


void func_5025(void)
{
	float var_83_float;
	@rand(var_83_float, 8, 16);
	@SetTimer(10, var_83_float);
}


void func_5034(void)
{
	@KillTimer(10);
}


void func_6573(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 234, 2, 519663);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_6599(var_151_bool, var_152_object, 227);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3502(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1049_object, object var_1050_object)
{
	var_0_bool = var_1050_object;
	var_1_object = var_1049_object;
	var_3_object = false;
	if(1 != 0) {
		func_3560(var_1050_object, "Neutral");
		var_0_bool->SetMessage(520485); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520486, -1, 21689); //@t
		var_0_bool->AddReply(520487, -1, 21690); //@t
		goto Label_3530;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdb2";
	}
Label_3530:
	bool var_1071_bool;
	func_5850(var_1071_bool);
	if(var_1071_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3559;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3559:
		return 0;

	}
	
}


void func_2999(bool var_0_bool, int var_903_int, object var_904_object)
{
	var_0_bool = var_904_object;
	bool var_914_bool; object var_915_object;
	object var_916_object;
	func_5632(var_916_object);
	var_916_object = var_915_object;
	func_5372(var_914_bool, var_915_object);
	bool var_917_bool; object var_918_object;
	var_904_object = var_918_object;
	func_5287(var_917_bool, var_918_object, 70.0);
	if(!var_917_bool) { //@nz
		var_903_int = -2;
		return 8;
	}
	object var_910_object;
	@CreateDialog(var_910_object);
	int var_921_int;
	func_5844(var_921_int);
	var_910_object->SetNPCName(var_921_int);
	int var_922_int;
	func_5842(var_922_int);
	var_910_object->SetNPCDescription(var_922_int);
	string var_923_string;
	func_5846(var_923_string);
	var_910_object->SetPhoto(var_923_string);
	string var_924_string;
	func_5848(var_924_string);
	var_910_object->SetPhoto2(var_924_string);
	int var_925_int;
	func_6838(var_925_int);
	var_910_object->SetPlayerName(var_925_int);
	bool var_911_bool;
	@IsOverrideActive(var_911_bool);
	if(var_911_bool != 0) {
		var_903_int = -2;
		return 8;
	}
	@DoDialog(var_910_object);
	object var_927_object; object var_928_object;
	var_904_object = var_927_object;
	var_910_object = var_928_object;
	TaskCall(13);
	func_3080(var_929_object, var_930_object, var_931_string, var_932_bool, var_927_object, var_928_object);
	TaskReturn();
	bool var_913_bool;
	var_910_object->IsDialogEnd(var_913_bool);
	
	for(;;) {
		var_957_bool = !var_913_bool; //@nz
		if(var_957_bool == 0) goto Label_3069;
		@sync();
		var_910_object->IsDialogEnd(var_913_bool);
	}
	
Label_3069:
	object var_958_object;
	var_904_object = var_958_object;
	func_5355();
	@StopDialog(var_910_object);
	var_910_object->GetReturnValue(-1);
	int var_912_int = var_903_int;
}
EMIT "Stack[-4] = 0";


void func_6586(object var_113_object)
{
	object var_115_object;
	@GetDiaryRoot(var_115_object);
	if(!var_115_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_113_object = false;
	}
	var_115_object = var_113_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6076(void)
{
	@SetVariable("b1q03_2", 1000);
	func_6508();
}


// @pe
void func_5565(void)
{
	@CameraSwitchToNormal();
}


void func_5569(string var_76_string)
{
	float var_79_float; float var_80_float;
	@lshGetAnimTimes(var_76_string, var_79_float, var_80_float);
	@lshPlayAnimation(var_79_float, var_80_float, false);
}


// @pe
void func_6085(void)
{
	@SetVariable("b1q03_2", -1);
	func_6521();
}


void func_6599(bool var_104_bool, object var_105_object, int var_106_int)
{
	object var_113_object;
	func_6586(var_113_object);
	object var_110_object;
	var_113_object = var_110_object;
	object var_111_object;
	var_110_object->Find(var_106_int, var_111_object);
	if(!var_111_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_106_int);
		var_104_bool = false;
	}
	var_111_object->AddChild(var_105_object);
	@SendWorldWndMessage(7);
	int var_112_int;
	var_105_object->GetCategory(var_112_int);
	@SetDiarySection(var_112_int);
	var_104_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_5576(string var_379_string, bool var_380_bool)
{
	float var_385_float; float var_386_float;
	@lshGetAnimTimes(var_379_string, var_385_float, var_386_float);
	@lshPlayAnimation(var_385_float, var_386_float, var_380_bool);
}


// @pe
void func_6094(void)
{
	@SetVariable("oob1Grif1", 1);
}


void func_5582(bool var_252_bool, string var_253_string)
{
	bool var_255_bool;
	bool var_256_bool;
	func_5850(var_256_bool);
	if(var_256_bool != 0) {
		@lshHasSpeech(var_255_bool, var_253_string);
		if(var_255_bool != 0) {
			@lshPlaySpeech(var_253_string);
			var_252_bool = true;
		}
	}
	var_252_bool = false;
}


// @pe
void func_6100(void)
{
	@SetVariable("oob1Grif2", 1);
}


// @pe
void func_6106(object var_144_object)
{
	object var_148_object;
	func_6627(var_148_object);
	object var_145_object;
	var_148_object = var_145_object;
	func_6644(var_145_object, "pt_b1q03_doberman", (float)2);
	object var_168_object;
	func_6627(var_168_object);
	var_144_object->ShowMap(var_168_object);
}


void func_5597(void)
{
	bool var_70_bool;
	func_5850(var_70_bool);
	if(var_70_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4574(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1325_object, object var_1326_object)
{
	var_0_bool = var_1326_object;
	var_1_object = var_1325_object;
	var_3_object = false;
	if(1 != 0) {
		func_4632(var_1326_object, "Neutral");
		var_0_bool->SetMessage(520501); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520502, -1, 21705); //@t
		var_0_bool->AddReply(520503, -1, 21706); //@t
		goto Label_4602;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x11e2";
	}
Label_4602:
	bool var_1347_bool;
	func_5850(var_1347_bool);
	if(var_1347_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_5569(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4631;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4631:
		return 0;

	}
	
}


void func_6627(object var_88_object)
{
	object var_91_object; object var_92_object;
	@GetMainOutdoorScene(var_91_object);
	if(var_91_object == null) {
		@Trace("Can't find main outdoor scene");
		var_92_object = null;
		var_92_object = var_88_object;
	}
	var_91_object->GetMap(var_92_object);
	var_92_object = var_88_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5604(string var_126_string, int var_127_int, int var_128_int)
{
	bool var_130_bool;
	int var_132_int;
	var_127_int = var_132_int;
	int var_133_int;
	var_128_int = var_133_int;
	bool var_131_bool;
	func_5659(var_131_bool, var_132_int, var_133_int);
	if(var_131_bool != 0)
		@AddItem(var_130_bool, var_126_string, 0);
}


void func_4071(bool var_0_bool, int var_1179_int, object var_1180_object)
{
	var_0_bool = var_1180_object;
	bool var_1190_bool; object var_1191_object;
	object var_1192_object;
	func_5632(var_1192_object);
	var_1192_object = var_1191_object;
	func_5372(var_1190_bool, var_1191_object);
	bool var_1193_bool; object var_1194_object;
	var_1180_object = var_1194_object;
	func_5287(var_1193_bool, var_1194_object, 70.0);
	if(!var_1193_bool) { //@nz
		var_1179_int = -2;
		return 8;
	}
	object var_1186_object;
	@CreateDialog(var_1186_object);
	int var_1197_int;
	func_5844(var_1197_int);
	var_1186_object->SetNPCName(var_1197_int);
	int var_1198_int;
	func_5842(var_1198_int);
	var_1186_object->SetNPCDescription(var_1198_int);
	string var_1199_string;
	func_5846(var_1199_string);
	var_1186_object->SetPhoto(var_1199_string);
	string var_1200_string;
	func_5848(var_1200_string);
	var_1186_object->SetPhoto2(var_1200_string);
	int var_1201_int;
	func_6838(var_1201_int);
	var_1186_object->SetPlayerName(var_1201_int);
	bool var_1187_bool;
	@IsOverrideActive(var_1187_bool);
	if(var_1187_bool != 0) {
		var_1179_int = -2;
		return 8;
	}
	@DoDialog(var_1186_object);
	object var_1203_object; object var_1204_object;
	var_1180_object = var_1203_object;
	var_1186_object = var_1204_object;
	TaskCall(21);
	func_4152(var_1205_object, var_1206_object, var_1207_string, var_1208_bool, var_1203_object, var_1204_object);
	TaskReturn();
	bool var_1189_bool;
	var_1186_object->IsDialogEnd(var_1189_bool);
	
	for(;;) {
		var_1233_bool = !var_1189_bool; //@nz
		if(var_1233_bool == 0) goto Label_4141;
		@sync();
		var_1186_object->IsDialogEnd(var_1189_bool);
	}
	
Label_4141:
	object var_1234_object;
	var_1180_object = var_1234_object;
	func_5355();
	@StopDialog(var_1186_object);
	var_1186_object->GetReturnValue(-1);
	int var_1188_int = var_1179_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3560(object var_2_object, string var_1056_string)
{
	bool var_1057_bool;
	func_5850(var_1057_bool);
	if(!var_1057_bool) //@nz
		return 0;
	if(var_1056_string == var_2_object)
		return 0;
	string var_1060_string; bool var_1061_bool;
	var_1056_string = var_1060_string;
	if(var_1056_string == "")
		var_1061_bool = false;
	else
		var_1061_bool = true;
	func_5576(var_1060_string, var_1061_bool);
	var_2_object = var_1056_string;
	
}


// @pe
void func_6122(object var_171_object)
{
	@Trace("samopal ammo5 is given");
	object var_174_object;
	var_171_object = var_174_object;
	func_5728(var_174_object, "samopal_ammo", 5);
}


void func_5615(string var_137_string, int var_138_int, int var_139_int, int var_140_int, int var_141_int)
{
	int var_144_int; bool var_145_bool;
	int var_147_int;
	var_138_int = var_147_int;
	int var_148_int;
	var_139_int = var_148_int;
	bool var_146_bool;
	func_5659(var_146_bool, var_147_int, var_148_int);
	if(var_146_bool != 0) {
		@irand(var_144_int, ((var_141_int - var_140_int) + 1));
		@AddItem(var_145_bool, var_137_string, 0, (var_144_int + var_140_int));
	}
}


void func_6644(object var_145_object, string var_146_string, float var_147_float)
{
	object var_155_object;
	@GetMainOutdoorScene(var_155_object);
	if(var_155_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_153_cvector;
	cvector var_154_cvector;
	bool var_156_bool;
	var_155_object->GetLocator(var_146_string, var_156_bool, var_153_cvector, var_154_cvector);
	if(!var_156_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_146_string) + " doesnt exist");
	var_155_object->GetMap(var_145_object);
	if(var_145_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_166_float = GetByIndex(var_153_cvector, 0);
	var_167_float = GetByIndex(var_153_cvector, 2);
	var_145_object->SetMapParams(var_166_float, var_167_float, var_147_float);
}
EMIT "Stack[-2] = 0";


void func_6133(void)
{
	int var_202_int;
	@GetVariable("b1q03", var_202_int);
	if(var_202_int == 1000) {
	}
	bool var_206_bool;
	func_5786(var_206_bool, "quest_b1_03", "cleanup");
	@SetVariable("b1q03", 1000);
}


