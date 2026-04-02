// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2979();
			if(var_27_cvector == 28260) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3194();
			}
			if(var_27_cvector == 28272) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_3213();
			}
			if(var_26_bool == 28257) {
				bool var_87_bool;
				func_3329(var_1_object);
				if(var_87_bool != 0) {
					func_182(var_27_cvector, "Neutral");
					var_0_object->SetMessage(526965); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528076, 29419, 29418); //@t
					return 0;
				}
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(526969); //@t
				var_0_object->ClearReplies(); //@t
				bool var_113_bool;
				func_3341(var_1_object);
				if(var_113_bool != 0)
					var_0_object->AddReply(526978, 29424, 28270); //@t
				var_0_object->AddReply(526970, -1, 28262); //@t
				var_0_object->AddReply(528088, -1, 29431); //@t
				return 0;
			}
			if(var_26_bool == 29424) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528083, 29426, 29425); //@t
				return 0;
			}
			if(var_26_bool == 29426) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528085, 28271, 29427); //@t
				var_0_object->AddReply(528086, 28271, 29428); //@t
				return 0;
			}
			if(var_26_bool == 28271) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(526979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528089, 29433, 29432); //@t
				return 0;
			}
			if(var_26_bool == 29433) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526980, -1, 28272); //@t
				return 0;
			}
			if(var_26_bool == 29419) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528078, 29421, 29420); //@t
				var_0_object->AddReply(528109, 29456, 29454); //@t
				return 0;
			}
			if(var_26_bool == 29456) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528111, 29421, 29457); //@t
				return 0;
			}
			if(var_26_bool == 29421) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528080, 29423, 29422); //@t
				return 0;
			}
			if(var_26_bool == 29423) {
				func_182(var_27_cvector, "Neutral");
				var_0_object->SetMessage(528081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526968, -1, 28260); //@t
				return 0;
			}
			var_3_string = true;
			bool var_190_bool;
			func_3185(var_190_bool);
			if(var_190_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2979();
			if(var_27_cvector == 28503) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3227();
			}
			if(var_27_cvector == 28614) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_3227();
			}
			if(var_27_cvector == 28691) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_3246();
			}
			if(var_27_cvector == 28692) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_3246();
			}
			if(var_27_cvector == 28639) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_3259();
			}
			if(var_27_cvector == 41813) {
				object var_109_object; object var_110_object;
				var_109_object = var_1_object;
				var_110_object = var_0_object;
				func_3290();
			}
			if(var_27_cvector == 41816) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_3296();
			}
			if(var_27_cvector == 41818) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_3285();
				object var_131_object = var_1_object;
				func_3308(var_0_object);
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_3279();
				object var_156_object = var_1_object;
				func_3187(var_0_object);
				object var_196_object = var_1_object;
				func_3318(var_0_object);
			}
			if(var_27_cvector == 41819) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_3302();
			}
			if(var_26_bool == 28498) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527190); //@t
				var_0_object->ClearReplies(); //@t
				bool var_238_bool;
				func_3353(var_1_object);
				if(var_238_bool != 0)
					var_0_object->AddReply(527191, 28604, 28499); //@t
				bool var_249_bool;
				func_3365(var_1_object);
				if(var_249_bool != 0)
					var_0_object->AddReply(527234, 28615, 28542); //@t
				bool var_258_bool = false;
				bool var_259_bool;
				func_3389(var_259_bool, var_1_object);
				if(var_259_bool != 0) {
					bool var_267_bool;
					func_3377(var_1_object);
					if(var_267_bool != 0)
						var_258_bool = true;
				}
				if(var_258_bool != 0)
					var_0_object->AddReply(527310, 28628, 28627); //@t
				bool var_276_bool = false;
				bool var_277_bool = false;
				bool var_278_bool;
				func_3411(var_278_bool, var_1_object);
				if(var_278_bool != 0) {
					bool var_293_bool;
					func_3421(var_293_bool, var_1_object);
					if(var_293_bool != 0)
						var_277_bool = true;
				}
				if(var_277_bool != 0) {
					bool var_307_bool;
					func_3451(var_1_object);
					if(var_307_bool != 0)
						var_276_bool = true;
				}
				if(var_276_bool != 0)
					var_0_object->AddReply(539861, 41814, 41813); //@t
				bool var_316_bool = false;
				bool var_317_bool = false;
				bool var_318_bool;
				func_3411(var_318_bool, var_1_object);
				if(var_318_bool != 0) {
					bool var_320_bool;
					func_3431(var_320_bool, var_1_object);
					if(var_320_bool != 0)
						var_317_bool = true;
				}
				if(var_317_bool != 0) {
					bool var_327_bool;
					func_3463(var_1_object);
					if(var_327_bool != 0)
						var_316_bool = true;
				}
				if(var_316_bool != 0)
					var_0_object->AddReply(539864, 41817, 41816); //@t
				bool var_336_bool = false;
				bool var_337_bool = false;
				bool var_338_bool;
				func_3411(var_338_bool, var_1_object);
				if(var_338_bool != 0) {
					bool var_340_bool;
					func_3441(var_340_bool, var_1_object);
					if(var_340_bool != 0)
						var_337_bool = true;
				}
				if(var_337_bool != 0) {
					bool var_347_bool;
					func_3475(var_1_object);
					if(var_347_bool != 0)
						var_336_bool = true;
				}
				if(var_336_bool != 0)
					var_0_object->AddReply(539867, 41820, 41819); //@t
				var_0_object->AddReply(527196, -1, 28504); //@t
				return 0;
			}
			if(var_26_bool == 41820) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539868); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539869, -1, 41821); //@t
				return 0;
			}
			if(var_26_bool == 41817) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539866, -1, 41818); //@t
				return 0;
			}
			if(var_26_bool == 41814) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(539862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539863, -1, 41815); //@t
				return 0;
			}
			if(var_26_bool == 28628) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527312, 28632, 28629); //@t
				var_0_object->AddReply(527357, 28632, 28676); //@t
				return 0;
			}
			if(var_26_bool == 28632) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527316, 28634, 28633); //@t
				var_0_object->AddReply(527358, 28634, 28678); //@t
				return 0;
			}
			if(var_26_bool == 28634) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527318, 28636, 28635); //@t
				var_0_object->AddReply(527359, 28638, 28680); //@t
				return 0;
			}
			if(var_26_bool == 28636) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527320, 28638, 28637); //@t
				return 0;
			}
			if(var_26_bool == 28638) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527322, -1, 28639); //@t
				return 0;
			}
			if(var_26_bool == 28615) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527300, 28617, 28616); //@t
				return 0;
			}
			if(var_26_bool == 28617) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527302, 28619, 28618); //@t
				return 0;
			}
			if(var_26_bool == 28619) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527304, 28543, 28620); //@t
				return 0;
			}
			if(var_26_bool == 28543) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527236, 28621, 28544); //@t
				return 0;
			}
			if(var_26_bool == 28621) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527306, 28623, 28622); //@t
				return 0;
			}
			if(var_26_bool == 28623) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527308, 28545, 28624); //@t
				var_0_object->AddReply(527309, 28545, 28625); //@t
				return 0;
			}
			if(var_26_bool == 28545) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527360, 28683, 28682); //@t
				var_0_object->AddReply(527238, 28630, 28546); //@t
				return 0;
			}
			if(var_26_bool == 28630) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527314, 28685, 28631); //@t
				return 0;
			}
			if(var_26_bool == 28683) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527362, 28685, 28684); //@t
				return 0;
			}
			if(var_26_bool == 28685) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527364, 28687, 28686); //@t
				return 0;
			}
			if(var_26_bool == 28687) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527365); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527366, 28689, 28688); //@t
				return 0;
			}
			if(var_26_bool == 28689) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527368, -1, 28691); //@t
				var_0_object->AddReply(527369, -1, 28692); //@t
				return 0;
			}
			if(var_26_bool == 28604) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527291, 28500, 28605); //@t
				var_0_object->AddReply(527296, 28609, 28610); //@t
				return 0;
			}
			if(var_26_bool == 28500) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527294, 28609, 28608); //@t
				var_0_object->AddReply(527297, 28609, 28612); //@t
				return 0;
			}
			if(var_26_bool == 28609) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527292, 28607, 28606); //@t
				var_0_object->AddReply(527298, -1, 28614); //@t
				return 0;
			}
			if(var_26_bool == 28607) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527193, 28502, 28501); //@t
				return 0;
			}
			if(var_26_bool == 28502) {
				func_703(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527195, -1, 28503); //@t
				return 0;
			}
			var_3_string = true;
			bool var_561_bool;
			func_3185(var_561_bool);
			if(var_561_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2d6";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2979();
			if(var_27_cvector == 31266) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3269();
			}
			if(var_27_cvector == 31267) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_3269();
			}
			if(var_26_bool == 31174) {
				bool var_69_bool;
				func_3399(var_1_object);
				if(var_69_bool != 0) {
					func_1636(var_27_cvector, "Neutral");
					var_0_object->SetMessage(529720); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529743, 31200, 31198); //@t
					var_0_object->AddReply(529744, 31206, 31199); //@t
					return 0;
				}
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529758); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529756, 31213, 31212); //@t
				var_0_object->AddReply(529759, -1, 31215); //@t
				return 0;
			}
			if(var_26_bool == 31213) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529760, 31217, 31216); //@t
				return 0;
			}
			if(var_26_bool == 31217) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529762, 31219, 31218); //@t
				return 0;
			}
			if(var_26_bool == 31219) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529764, 31221, 31220); //@t
				return 0;
			}
			if(var_26_bool == 31221) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529766, -1, 31222); //@t
				var_0_object->AddReply(529767, -1, 31223); //@t
				return 0;
			}
			if(var_26_bool == 31200) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529749, 31205, 31204); //@t
				return 0;
			}
			if(var_26_bool == 31205) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529746, 31202, 31201); //@t
				return 0;
			}
			if(var_26_bool == 31202) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529747); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529748, 31206, 31203); //@t
				return 0;
			}
			if(var_26_bool == 31206) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529752, 31209, 31208); //@t
				return 0;
			}
			if(var_26_bool == 31209) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529754, 31211, 31210); //@t
				return 0;
			}
			if(var_26_bool == 31211) {
				func_1636(var_27_cvector, "Neutral");
				var_0_object->SetMessage(529755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529807, -1, 31266); //@t
				var_0_object->AddReply(529808, -1, 31267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_180_bool;
			func_3185(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x67b";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2979();
			if(var_26_bool == 36960) {
				func_2075(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_26_bool == 36962) {
				func_2075(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_26_bool == 36964) {
				func_2075(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_3185(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x832";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2979();
			if(var_26_int == 42554) {
				func_2329(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_3185(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x930";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2397(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_2468();
			bool var_30_bool = false;
			bool var_31_bool;
			func_2723(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_2437(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_2417(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2986(var_72_object);
					var_72_object = var_71_object;
					func_2871(var_70_bool, var_71_object);
				}
			} else {
				func_2432(var_26_int);
				func_2459();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2650();
		func_2468();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_2468();
		func_2951("Neutral");
		func_2459();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_2459();
		else
			func_2951("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_2650();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_2714(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_3710(var_44_object);
			func_2951("Neutral");
			func_2468();
			func_2459();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_2723(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_3329(bool var_221_bool)
{
	int var_223_int;
	func_3013(var_223_int, "k10q01");
	if(var_223_int == 2)
		var_221_bool = true;
	var_221_bool = false;
}


// @pe
void func_3081(bool var_158_bool, object var_159_object, float var_160_float)
{
	if(!var_159_object) { //@nz
		var_158_bool = false;
		return 0;
	}
	if(var_160_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_160_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_165_float;
		var_160_float = var_165_float;
		func_3116(var_165_float);
		bool var_169_bool; object var_170_object; float var_172_float;
		var_159_object = var_170_object;
		var_160_float = var_172_float;
		func_2675(var_169_bool, var_170_object, "reputation", var_172_float, (float)0, (float)1);
		var_158_bool = true;
		return 0;

	}
	
	var_158_bool = false;
}


void func_3596(void)
{
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 526, 1, 529818);
	bool var_39_bool; object var_40_object;
	var_35_object = var_40_object;
	func_3622(var_39_bool, var_40_object, 517);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_53_int, object var_54_object)
{
	var_0_object = var_54_object;
	bool var_64_bool; object var_65_object;
	object var_66_object;
	func_2986(var_66_object);
	var_66_object = var_65_object;
	func_2813(var_64_bool, var_65_object);
	bool var_154_bool; object var_155_object;
	var_54_object = var_155_object;
	func_2728(var_154_bool, var_155_object, 70.0);
	if(!var_154_bool) { //@nz
		var_53_int = -2;
		return 8;
	}
	object var_60_object;
	@CreateDialog(var_60_object);
	int var_201_int;
	func_3179(var_201_int);
	var_60_object->SetNPCName(var_201_int);
	int var_202_int;
	func_3177(var_202_int);
	var_60_object->SetNPCDescription(var_202_int);
	string var_203_string;
	func_3181(var_203_string);
	var_60_object->SetPhoto(var_203_string);
	string var_204_string;
	func_3183(var_204_string);
	var_60_object->SetPhoto2(var_204_string);
	int var_205_int;
	func_3650(var_205_int);
	var_60_object->SetPlayerName(var_205_int);
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	@DoDialog(var_60_object);
	object var_214_object; object var_215_object;
	var_54_object = var_214_object;
	var_60_object = var_215_object;
	TaskCall(2);
	func_94(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object);
	TaskReturn();
	bool var_63_bool;
	var_60_object->IsDialogEnd(var_63_bool);
	
	for(;;) {
		var_275_bool = !var_63_bool; //@nz
		if(var_275_bool == 0) goto Label_83;
		@sync();
		var_60_object->IsDialogEnd(var_63_bool);
	}
	
Label_83:
	object var_276_object;
	var_54_object = var_276_object;
	func_2796();
	@StopDialog(var_60_object);
	var_60_object->GetReturnValue(-1);
	int var_62_int = var_53_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3341(bool var_260_bool)
{
	int var_262_int;
	func_3013(var_262_int, "k10q01");
	if(var_262_int == 4)
		var_260_bool = true;
	var_260_bool = false;
}


// @pe
void func_527(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_381_object, object var_382_object)
{
	var_0_object = var_382_object;
	var_1_object = var_381_object;
	var_3_string = false;
	if(1 != 0) {
		func_703(var_382_object, "Neutral");
		var_0_object->SetMessage(527190); //@t
		var_0_object->ClearReplies(); //@t
		bool var_397_bool;
		func_3353(var_1_object);
		if(var_397_bool != 0)
			var_0_object->AddReply(527191, 28604, 28499); //@t
		bool var_406_bool;
		func_3365(var_1_object);
		if(var_406_bool != 0)
			var_0_object->AddReply(527234, 28615, 28542); //@t
		bool var_415_bool = false;
		bool var_416_bool;
		func_3389(var_416_bool, var_1_object);
		if(var_416_bool != 0) {
			bool var_424_bool;
			func_3377(var_1_object);
			if(var_424_bool != 0)
				var_415_bool = true;
		}
		if(var_415_bool != 0)
			var_0_object->AddReply(527310, 28628, 28627); //@t
		bool var_433_bool = false;
		bool var_434_bool = false;
		bool var_435_bool;
		func_3411(var_435_bool, var_1_object);
		if(var_435_bool != 0) {
			bool var_445_bool;
			func_3421(var_445_bool, var_1_object);
			if(var_445_bool != 0)
				var_434_bool = true;
		}
		if(var_434_bool != 0) {
			bool var_459_bool;
			func_3451(var_1_object);
			if(var_459_bool != 0)
				var_433_bool = true;
		}
		if(var_433_bool != 0)
			var_0_object->AddReply(539861, 41814, 41813); //@t
		bool var_468_bool = false;
		bool var_469_bool = false;
		bool var_470_bool;
		func_3411(var_470_bool, var_1_object);
		if(var_470_bool != 0) {
			bool var_472_bool;
			func_3431(var_472_bool, var_1_object);
			if(var_472_bool != 0)
				var_469_bool = true;
		}
		if(var_469_bool != 0) {
			bool var_479_bool;
			func_3463(var_1_object);
			if(var_479_bool != 0)
				var_468_bool = true;
		}
		if(var_468_bool != 0)
			var_0_object->AddReply(539864, 41817, 41816); //@t
		bool var_488_bool = false;
		bool var_489_bool = false;
		bool var_490_bool;
		func_3411(var_490_bool, var_1_object);
		if(var_490_bool != 0) {
			bool var_492_bool;
			func_3441(var_492_bool, var_1_object);
			if(var_492_bool != 0)
				var_489_bool = true;
		}
		if(var_489_bool != 0) {
			bool var_499_bool;
			func_3475(var_1_object);
			if(var_499_bool != 0)
				var_488_bool = true;
		}
		if(var_488_bool != 0)
			var_0_object->AddReply(539867, 41820, 41819); //@t
		var_0_object->AddReply(527196, -1, 28504); //@t
		goto Label_673;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x213";
	}
Label_673:
	bool var_511_bool;
	func_3185(var_511_bool);
	if(var_511_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2951(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_702;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_702:
		return 0;

	}
	
}


// @pe
void func_1553(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_309_object, object var_310_object)
{
	var_0_object = var_310_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_316_bool;
		func_3399(var_309_object);
		if(var_316_bool != 0) {
			func_1636(var_310_object, "Neutral");
			var_0_object->SetMessage(529720); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529743, 31200, 31198); //@t
			var_0_object->AddReply(529744, 31206, 31199); //@t
		} else {
					func_1636(var_310_object, "Neutral");
					var_0_object->SetMessage(529758); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529756, 31213, 31212); //@t
					var_0_object->AddReply(529759, -1, 31215); //@t
		}
	}
	for(;;) {
		bool var_337_bool;
		func_3185(var_337_bool);
		if(var_337_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2951(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1635;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1635:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x615";


void func_2579(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_2723(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_3160(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_2723(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_3153(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_2634;
			goto Label_2645;
			}
				Label_2634:
					bool var_78_bool;
					func_2648(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_2640;
			}
		}
	Label_2645:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2640:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


void func_3609(object var_48_object)
{
	object var_50_object;
	@GetDiaryRoot(var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_48_object = false;
	}
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3353(bool var_397_bool)
{
	int var_399_int;
	func_3013(var_399_int, "k11q01");
	if(var_399_int == 1)
		var_397_bool = true;
	var_397_bool = false;
}


// @pe
void func_2075(object var_2_object, string var_554_string)
{
	bool var_555_bool;
	func_3185(var_555_bool);
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
	func_2958(var_558_string, var_559_bool);
	var_2_object = var_554_string;
	
}


// @pe
void func_2329(object var_2_object, string var_613_string)
{
	bool var_614_bool;
	func_3185(var_614_bool);
	if(!var_614_bool) //@nz
		return 0;
	if(var_613_string == var_2_object)
		return 0;
	string var_617_string; bool var_618_bool;
	var_613_string = var_617_string;
	if(var_613_string == "")
		var_618_bool = false;
	else
		var_618_bool = true;
	func_2958(var_617_string, var_618_bool);
	var_2_object = var_613_string;
	
}


// @pe
void func_3365(bool var_406_bool)
{
	int var_408_int;
	func_3013(var_408_int, "k11q01");
	if(var_408_int == 8)
		var_406_bool = true;
	var_406_bool = false;
}


void func_3622(bool var_39_bool, object var_40_object, int var_41_int)
{
	object var_48_object;
	func_3609(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	object var_46_object;
	var_45_object->Find(var_41_int, var_46_object);
	if(!var_46_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_41_int);
		var_39_bool = false;
	}
	var_46_object->AddChild(var_40_object);
	@SendWorldWndMessage(7);
	int var_47_int;
	var_40_object->GetCategory(var_47_int);
	@SetDiarySection(var_47_int);
	var_39_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3116(float var_165_float)
{
	object var_167_object;
	@CreateFloatVector(var_167_object);
	var_167_object->add(var_165_float);
	@SendWorldWndMessage(16, var_167_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3377(bool var_424_bool)
{
	int var_426_int;
	func_3013(var_426_int, "k11q01");
	if(var_426_int == 9)
		var_424_bool = true;
	var_424_bool = false;
}


void func_3126(bool var_57_bool, string var_58_string, string var_59_string)
{
	object var_61_object;
	@FindActor(var_61_object, var_58_string);
	if(var_61_object == null)
		var_57_bool = false;
	@Trigger(var_61_object, var_59_string);
	var_57_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2871(bool var_75_bool, object var_76_object)
{
	string var_82_string; bool var_84_bool; int var_85_int; string var_86_string;
	var_82_string = "c";
	int var_83_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_76_object->HasProperty((var_82_string + (var_83_int + 1)), var_84_bool);
			if(!var_84_bool) { //@nz
			} else {
				var_83_int += 1;
			}
		}
		if(!var_83_int) { //@nz
			var_75_bool = false;
			return 10;
		}
		var_85_int = 0;
		if(var_83_int > 1)
			@irand(var_85_int, var_83_int);
		var_76_object->GetProperty((var_82_string + (var_85_int + 1)), var_86_string);
		bool var_98_bool; string var_99_string;
		var_86_string = var_99_string;
		func_2964(var_98_bool, var_99_string);
		var_98_bool = var_75_bool;
		return 10;

	}
}


// @pe
void func_3389(bool var_416_bool, object var_417_object)
{
	object var_419_object;
	var_417_object = var_419_object;
	func_3487(var_419_object);
	bool var_418_bool;
	if(var_418_bool != 0) {
		var_416_bool = true;
		return 0;
	}
	var_416_bool = false;
}


void func_3650(int var_205_int)
{
	int var_207_int;
	@GetVariable("branch", var_207_int);
	if(var_207_int == 0) {
		var_205_int = 1;
		return 2;
	EMIT "GOTO 0xe51";
	}
	if(var_207_int == 1) {
		var_205_int = 2;
		return 2;
	}
	var_205_int = 3;
}


void func_3138(int var_47_int)
{
	float var_49_float;
	@GetGameTime(var_49_float);
	var_47_int = 1 + (var_49_float / 24);
}


// @pe
void func_3399(bool var_316_bool)
{
	int var_318_int;
	func_3013(var_318_int, "k9q01");
	if(var_318_int == 8)
		var_316_bool = true;
	var_316_bool = false;
}


// @pe
void func_3147(bool var_45_bool, int var_46_int)
{
	int var_47_int;
	func_3138(var_47_int);
	var_45_bool = var_47_int == var_46_int;
}


void func_3153(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_3667(int var_441_int)
{
	int var_443_int;
	@GetVariable("k2system_danko_day", var_443_int);
	var_443_int = var_441_int;
}


// @pe
void func_3411(bool var_435_bool, object var_436_object)
{
	object var_438_object;
	var_436_object = var_438_object;
	func_3494(var_438_object);
	bool var_437_bool;
	if(var_437_bool != 0) {
		var_435_bool = true;
		return 0;
	}
	var_435_bool = false;
}


void func_2648(bool var_78_bool)
{
	var_78_bool = true;
}


void func_3160(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_3153(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_2650(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3673(int var_450_int)
{
	int var_455_int;
	func_3667(var_455_int);
	int var_453_int;
	var_455_int = var_453_int;
	int var_454_int;
	@GetVariable(("k2system_danko_state" + var_453_int), var_454_int);
	var_454_int = var_450_int;
}


void func_2908(bool var_106_bool, object var_107_object)
{
	bool var_115_bool; int var_116_int; string var_117_string;
	int var_119_int;
	func_3138(var_119_int);
	string var_113_string = ("d" + var_119_int) + "m";
	int var_114_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_107_object->HasProperty((var_113_string + (var_114_int + 1)), var_115_bool);
			if(!var_115_bool) { //@nz
			} else {
				var_114_int += 1;
			}
		}
		if(!var_114_int) { //@nz
			var_106_bool = false;
			return 10;
		}
		var_116_int = 0;
		if(var_114_int > 1)
			@irand(var_116_int, var_114_int);
		var_107_object->GetProperty((var_113_string + (var_116_int + 1)), var_117_string);
		bool var_133_bool; string var_134_string;
		var_117_string = var_134_string;
		func_2964(var_133_bool, var_134_string);
		var_133_bool = var_106_bool;
		return 10;

	}
}


// @pe
void func_3421(bool var_445_bool, object var_446_object)
{
	object var_448_object;
	var_446_object = var_448_object;
	func_3500(var_448_object);
	bool var_447_bool;
	if(var_447_bool != 0) {
		var_445_bool = true;
		return 0;
	}
	var_445_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_214_object, object var_215_object)
{
	var_0_object = var_215_object;
	var_1_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_221_bool;
		func_3329(var_1_object);
		if(var_221_bool != 0) {
			func_182(var_215_object, "Neutral");
			var_0_object->SetMessage(526965); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528076, 29419, 29418); //@t
		} else {
					func_182(var_215_object, "Neutral");
					var_0_object->SetMessage(526969); //@t
					var_0_object->ClearReplies(); //@t
					bool var_260_bool;
					func_3341(var_1_object);
					if(var_260_bool != 0)
						var_0_object->AddReply(526978, 29424, 28270); //@t
					var_0_object->AddReply(526970, -1, 28262); //@t
					var_0_object->AddReply(528088, -1, 29431); //@t
		}
	}
	for(;;) {
		bool var_245_bool;
		func_3185(var_245_bool);
		if(var_245_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2951(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_181;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_181:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_2655(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2397(object var_0_object)
{
	bool var_26_bool;
	func_2723(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2525();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2579();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1636(object var_2_object, string var_322_string)
{
	bool var_323_bool;
	func_3185(var_323_bool);
	if(!var_323_bool) //@nz
		return 0;
	if(var_322_string == var_2_object)
		return 0;
	string var_326_string; bool var_327_bool;
	var_322_string = var_326_string;
	if(var_322_string == "")
		var_327_bool = false;
	else
		var_327_bool = true;
	func_2958(var_326_string, var_327_bool);
	var_2_object = var_322_string;
	
}


void func_3684(bool var_439_bool)
{
	int var_440_int;
	func_3138(var_440_int);
	int var_441_int;
	func_3667(var_441_int);
	var_439_bool = var_440_int == var_441_int;
}


void func_2663(bool var_177_bool, object var_178_object, string var_179_string)
{
	var_184_bool = IsFuncExist(var_178_object, "HasProperty", 2);
	if(!var_184_bool) { //@nz
		var_177_bool = false;
		return 2;
	}
	bool var_181_bool;
	var_178_object->HasProperty(var_179_string, var_181_bool);
	var_181_bool = var_177_bool;
}


// @pe
void func_3431(bool var_472_bool, object var_473_object)
{
	object var_475_object;
	var_473_object = var_475_object;
	func_3506(var_475_object);
	bool var_474_bool;
	if(var_474_bool != 0) {
		var_472_bool = true;
		return 0;
	}
	var_472_bool = false;
}


void func_3177(int var_202_int)
{
	var_202_int = 515532;
}


void func_3179(int var_201_int)
{
	var_201_int = 514840;
}


void func_3692(bool var_476_bool)
{
	int var_477_int;
	func_3673(var_477_int);
	var_476_bool = var_477_int == 2;
}


void func_3181(string var_203_string)
{
	var_203_string = "ui/NPC_Block.png";
}


void func_3183(string var_204_string)
{
	var_204_string = "ui/NPC_Block_b.png";
}


void func_3185(bool var_102_bool)
{
	var_102_bool = true;
}


void func_3698(bool var_496_bool)
{
	int var_497_int;
	func_3673(var_497_int);
	var_496_bool = var_497_int == 3;
}


// @pe
void func_3187(object var_156_object)
{
	object var_159_object;
	var_156_object = var_159_object;
	bool var_158_bool;
	func_3081(var_158_bool, var_159_object, 0.05);
}


void func_2675(bool var_169_bool, object var_170_object, string var_171_string, float var_172_float, float var_173_float, float var_174_float)
{
	object var_178_object;
	var_170_object = var_178_object;
	string var_179_string;
	var_171_string = var_179_string;
	bool var_177_bool;
	func_2663(var_177_bool, var_178_object, var_179_string);
	if(!var_177_bool) //@nz
		var_169_bool = false;
	float var_176_float;
	var_170_object->GetProperty(var_171_string, var_176_float);
	float var_187_float; float var_189_float; float var_190_float;
	var_173_float = var_189_float;
	var_174_float = var_190_float;
	func_3002(var_187_float, (var_176_float + var_172_float), var_189_float, var_190_float);
	var_170_object->SetProperty(var_171_string, var_187_float);
	var_169_bool = true;
}


// @pe
void func_3441(bool var_492_bool, object var_493_object)
{
	object var_495_object;
	var_493_object = var_495_object;
	func_3512(var_495_object);
	bool var_494_bool;
	if(var_494_bool != 0) {
		var_492_bool = true;
		return 0;
	}
	var_492_bool = false;
}


void func_2417(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_2714(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_3704(bool var_449_bool)
{
	int var_450_int;
	func_3673(var_450_int);
	var_449_bool = var_450_int == 0;
}


// @pe
void func_3194(void)
{
	@SetVariable("k10q01", 3);
	func_3518();
	bool var_59_bool;
	func_3126(var_59_bool, "quest_k10_01", "remove_soldiers");
	bool var_65_bool;
	func_3126(var_65_bool, "quest_k10_01", "init_prison");
}


// @pe
void func_3451(bool var_459_bool)
{
	int var_461_int;
	func_3013(var_461_int, "ook11Block1");
	if(var_461_int == 0) {
		var_459_bool = true;
		return 0;
	}
	var_459_bool = false;
}


// @pe
void func_3710(object var_44_object)
{
	bool var_45_bool;
	func_3147(var_45_bool, 10);
	if(var_45_bool != 0) {
		int var_53_int; object var_54_object;
		var_44_object = var_54_object;
		TaskCall(1);
		func_13(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		return 0;
	}
	bool var_283_bool;
	func_3147(var_283_bool, 9);
	if(var_283_bool != 0) {
		int var_285_int; object var_286_object;
		var_44_object = var_286_object;
		TaskCall(5);
		func_1472(var_287_object, var_285_int, var_286_object);
		TaskReturn();
		return 0;
	}
	bool var_355_bool;
	func_3147(var_355_bool, 11);
	if(var_355_bool != 0) {
		int var_357_int; object var_358_object;
		var_44_object = var_358_object;
		TaskCall(3);
		func_446(var_359_object, var_357_int, var_358_object);
		TaskReturn();
		return 0;
	}
	bool var_521_bool;
	func_3147(var_521_bool, 12);
	if(var_521_bool != 0) {
		int var_523_int; object var_524_object;
		var_44_object = var_524_object;
		TaskCall(7);
		func_1931(var_525_object, var_523_int, var_524_object);
		TaskReturn();
		return 0;
	}
	int var_582_int; object var_583_object;
	var_44_object = var_583_object;
	TaskCall(9);
	func_2190(var_584_object, var_582_int, var_583_object);
	TaskReturn();
}


void func_2432(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2437(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_2655(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2951(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


// @pe
void func_3463(bool var_479_bool)
{
	int var_481_int;
	func_3013(var_481_int, "ook11Block2");
	if(var_481_int == 0) {
		var_479_bool = true;
		return 0;
	}
	var_479_bool = false;
}


void func_2697(object var_138_object, string var_139_string, int var_140_int)
{
	int var_142_int;
	var_138_object->GetProperty(var_139_string, var_142_int);
	var_138_object->SetProperty(var_139_string, (var_142_int + var_140_int));
}


void func_1931(object var_0_object, int var_523_int, object var_524_object)
{
	var_0_object = var_524_object;
	bool var_534_bool; object var_535_object;
	object var_536_object;
	func_2986(var_536_object);
	var_536_object = var_535_object;
	func_2813(var_534_bool, var_535_object);
	bool var_537_bool; object var_538_object;
	var_524_object = var_538_object;
	func_2728(var_537_bool, var_538_object, 70.0);
	if(!var_537_bool) { //@nz
		var_523_int = -2;
		return 8;
	}
	object var_530_object;
	@CreateDialog(var_530_object);
	int var_541_int;
	func_3179(var_541_int);
	var_530_object->SetNPCName(var_541_int);
	int var_542_int;
	func_3177(var_542_int);
	var_530_object->SetNPCDescription(var_542_int);
	string var_543_string;
	func_3181(var_543_string);
	var_530_object->SetPhoto(var_543_string);
	string var_544_string;
	func_3183(var_544_string);
	var_530_object->SetPhoto2(var_544_string);
	int var_545_int;
	func_3650(var_545_int);
	var_530_object->SetPlayerName(var_545_int);
	bool var_531_bool;
	@IsOverrideActive(var_531_bool);
	if(var_531_bool != 0) {
		var_523_int = -2;
		return 8;
	}
	@DoDialog(var_530_object);
	object var_547_object; object var_548_object;
	var_524_object = var_547_object;
	var_530_object = var_548_object;
	TaskCall(8);
	func_2012(var_549_object, var_550_object, var_551_string, var_552_bool, var_547_object, var_548_object);
	TaskReturn();
	bool var_533_bool;
	var_530_object->IsDialogEnd(var_533_bool);
	
	for(;;) {
		var_580_bool = !var_533_bool; //@nz
		if(var_580_bool == 0) goto Label_2001;
		@sync();
		var_530_object->IsDialogEnd(var_533_bool);
	}
	
Label_2001:
	object var_581_object;
	var_524_object = var_581_object;
	func_2796();
	@StopDialog(var_530_object);
	var_530_object->GetReturnValue(-1);
	int var_532_int = var_523_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3213(void)
{
	@SetVariable("k10q01", 5);
	func_3531();
	bool var_82_bool;
	func_3126(var_82_bool, "quest_k10_01", "free_prisoner");
}


void func_2190(object var_0_object, int var_582_int, object var_583_object)
{
	var_0_object = var_583_object;
	bool var_593_bool; object var_594_object;
	object var_595_object;
	func_2986(var_595_object);
	var_595_object = var_594_object;
	func_2813(var_593_bool, var_594_object);
	bool var_596_bool; object var_597_object;
	var_583_object = var_597_object;
	func_2728(var_596_bool, var_597_object, 70.0);
	if(!var_596_bool) { //@nz
		var_582_int = -2;
		return 8;
	}
	object var_589_object;
	@CreateDialog(var_589_object);
	int var_600_int;
	func_3179(var_600_int);
	var_589_object->SetNPCName(var_600_int);
	int var_601_int;
	func_3177(var_601_int);
	var_589_object->SetNPCDescription(var_601_int);
	string var_602_string;
	func_3181(var_602_string);
	var_589_object->SetPhoto(var_602_string);
	string var_603_string;
	func_3183(var_603_string);
	var_589_object->SetPhoto2(var_603_string);
	int var_604_int;
	func_3650(var_604_int);
	var_589_object->SetPlayerName(var_604_int);
	bool var_590_bool;
	@IsOverrideActive(var_590_bool);
	if(var_590_bool != 0) {
		var_582_int = -2;
		return 8;
	}
	@DoDialog(var_589_object);
	object var_606_object; object var_607_object;
	var_583_object = var_606_object;
	var_589_object = var_607_object;
	TaskCall(10);
	func_2271(var_608_object, var_609_object, var_610_string, var_611_bool, var_606_object, var_607_object);
	TaskReturn();
	bool var_592_bool;
	var_589_object->IsDialogEnd(var_592_bool);
	
	for(;;) {
		var_636_bool = !var_592_bool; //@nz
		if(var_636_bool == 0) goto Label_2260;
		@sync();
		var_589_object->IsDialogEnd(var_592_bool);
	}
	
Label_2260:
	object var_637_object;
	var_583_object = var_637_object;
	func_2796();
	@StopDialog(var_589_object);
	var_589_object->GetReturnValue(-1);
	int var_591_int = var_582_int;
}
EMIT "Stack[-4] = 0";


void func_2958(string var_233_string, bool var_234_bool)
{
	float var_239_float; float var_240_float;
	@lshGetAnimTimes(var_233_string, var_239_float, var_240_float);
	@lshPlayAnimation(var_239_float, var_240_float, var_234_bool);
}


void func_2704(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_3475(bool var_499_bool)
{
	int var_501_int;
	func_3013(var_501_int, "ook11Block3");
	if(var_501_int == 0) {
		var_499_bool = true;
		return 0;
	}
	var_499_bool = false;
}


void func_2964(bool var_98_bool, string var_99_string)
{
	bool var_101_bool;
	bool var_102_bool;
	func_3185(var_102_bool);
	if(var_102_bool != 0) {
		@lshHasSpeech(var_101_bool, var_99_string);
		if(var_101_bool != 0) {
			@lshPlaySpeech(var_99_string);
			var_98_bool = true;
		}
	}
	var_98_bool = false;
}


void func_2714(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_2704(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


// @pe
void func_3227(void)
{
	@SetVariable("k11q01", 2);
	func_3544();
	bool var_59_bool;
	func_3126(var_59_bool, "quest_k11_01", "init_kabak");
	bool var_65_bool;
	func_3126(var_65_bool, "quest_k11_01", "init_gun");
}


void func_2459(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_3487(bool var_418_bool)
{
	int var_421_int;
	@GetVariable("k11q01SoulsCount", var_421_int);
	var_418_bool = var_421_int >= 7;
}


void func_2723(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_2979(void)
{
	bool var_29_bool;
	func_3185(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2468(void)
{
	@KillTimer(10);
}


// @pe
void func_3494(bool var_437_bool)
{
	bool var_439_bool;
	func_3684(var_439_bool);
	var_439_bool = var_437_bool;
}


void func_2728(bool var_154_bool, object var_155_object, float var_156_float)
{
	cvector var_167_cvector; bool var_174_bool;
	var_155_object->GetPosition(var_167_cvector);
	float var_166_float;
	var_155_object->GetEyesHeight(var_166_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_166_float);
	cvector var_168_cvector;
	@GetPosition(var_168_cvector);
	@GetEyesHeight(var_166_float);
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (var_176_float + var_166_float);
	cvector var_169_cvector = var_167_cvector - var_168_cvector;
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (float)0;
	var_179_float = sqrt(var_169_cvector | var_169_cvector);
	var_169_cvector /= var_179_float;
	cvector var_170_cvector = -var_169_cvector;
	cvector var_181_cvector;
	func_2992(var_181_cvector, (var_170_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_171_cvector = ((var_169_cvector * var_156_float) + (var_181_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_173_bool;
	@IsOverrideActive(var_173_bool);
	if(var_173_bool != 0)
		var_154_bool = false;
	@StopWorld();
	@CameraTransit((var_168_cvector + var_171_cvector), var_170_cvector);
	var_194_float = GetByIndex(var_171_cvector, 0);
	var_195_float = GetByIndex(var_171_cvector, 2);
	@Rotate(var_194_float, var_195_float);
	bool var_196_bool;
	func_3185(var_196_bool);
	if(var_196_bool != 0) {
	} else {
		@HasAnimationTrack(var_174_bool, "head");
		if(var_174_bool == 0) goto Label_2790;
		@LookAsyncCamera("head");
	}
Label_2790:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_154_bool = true;
	
}


void func_2986(object var_66_object)
{
	object var_68_object;
	@self(var_68_object);
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3500(bool var_447_bool)
{
	bool var_449_bool;
	func_3704(var_449_bool);
	var_449_bool = var_447_bool;
}


// @pe
void func_3246(void)
{
	@SetVariable("k11q01", 9);
	@SetVariable("k11q01SoulCount", 1);
	func_3557();
}


void func_2992(cvector var_181_cvector, cvector var_182_cvector)
{
	float var_185_float = sqrt(var_182_cvector | var_182_cvector);
	if(var_185_float < 0.000001)
		var_181_cvector = [0.0, 0.0, 0.0];
	var_181_cvector = var_182_cvector / var_185_float;
}


// @pe
void func_3506(bool var_474_bool)
{
	bool var_476_bool;
	func_3692(var_476_bool);
	var_476_bool = var_474_bool;
}


// @pe
void func_182(object var_2_object, string var_229_string)
{
	bool var_230_bool;
	func_3185(var_230_bool);
	if(!var_230_bool) //@nz
		return 0;
	if(var_229_string == var_2_object)
		return 0;
	string var_233_string; bool var_234_bool;
	var_229_string = var_233_string;
	if(var_229_string == "")
		var_234_bool = false;
	else
		var_234_bool = true;
	func_2958(var_233_string, var_234_bool);
	var_2_object = var_229_string;
	
}


// @pe
void func_3512(bool var_494_bool)
{
	bool var_496_bool;
	func_3698(var_496_bool);
	var_496_bool = var_494_bool;
}


// @pe
void func_3002(float var_187_float, float var_188_float, float var_189_float, float var_190_float)
{
	if(var_188_float < var_189_float) {
		var_189_float = var_187_float;
		return 0;
	}
	if(var_188_float > var_190_float) {
		var_190_float = var_187_float;
		return 0;
	}
	var_188_float = var_187_float;
}


// @pe
void func_3259(void)
{
	func_3570();
	bool var_104_bool;
	func_3126(var_104_bool, "quest_k11_01", "completed");
}


void func_3518(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 450, 1, 527008);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_3622(var_41_bool, var_42_object, 447);
}
EMIT "Stack[-1] = 0";


// @pe
void func_703(object var_2_object, string var_388_string)
{
	bool var_389_bool;
	func_3185(var_389_bool);
	if(!var_389_bool) //@nz
		return 0;
	if(var_388_string == var_2_object)
		return 0;
	string var_392_string; bool var_393_bool;
	var_388_string = var_392_string;
	if(var_388_string == "")
		var_393_bool = false;
	else
		var_393_bool = true;
	func_2958(var_392_string, var_393_bool);
	var_2_object = var_388_string;
	
}


void func_446(object var_0_object, int var_357_int, object var_358_object)
{
	var_0_object = var_358_object;
	bool var_368_bool; object var_369_object;
	object var_370_object;
	func_2986(var_370_object);
	var_370_object = var_369_object;
	func_2813(var_368_bool, var_369_object);
	bool var_371_bool; object var_372_object;
	var_358_object = var_372_object;
	func_2728(var_371_bool, var_372_object, 70.0);
	if(!var_371_bool) { //@nz
		var_357_int = -2;
		return 8;
	}
	object var_364_object;
	@CreateDialog(var_364_object);
	int var_375_int;
	func_3179(var_375_int);
	var_364_object->SetNPCName(var_375_int);
	int var_376_int;
	func_3177(var_376_int);
	var_364_object->SetNPCDescription(var_376_int);
	string var_377_string;
	func_3181(var_377_string);
	var_364_object->SetPhoto(var_377_string);
	string var_378_string;
	func_3183(var_378_string);
	var_364_object->SetPhoto2(var_378_string);
	int var_379_int;
	func_3650(var_379_int);
	var_364_object->SetPlayerName(var_379_int);
	bool var_365_bool;
	@IsOverrideActive(var_365_bool);
	if(var_365_bool != 0) {
		var_357_int = -2;
		return 8;
	}
	@DoDialog(var_364_object);
	object var_381_object; object var_382_object;
	var_358_object = var_381_object;
	var_364_object = var_382_object;
	TaskCall(4);
	func_527(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object);
	TaskReturn();
	bool var_367_bool;
	var_364_object->IsDialogEnd(var_367_bool);
	
	for(;;) {
		var_519_bool = !var_367_bool; //@nz
		if(var_519_bool == 0) goto Label_516;
		@sync();
		var_364_object->IsDialogEnd(var_367_bool);
	}
	
Label_516:
	object var_520_object;
	var_358_object = var_520_object;
	func_2796();
	@StopDialog(var_364_object);
	var_364_object->GetReturnValue(-1);
	int var_366_int = var_357_int;
}
EMIT "Stack[-4] = 0";


void func_1472(object var_0_object, int var_285_int, object var_286_object)
{
	var_0_object = var_286_object;
	bool var_296_bool; object var_297_object;
	object var_298_object;
	func_2986(var_298_object);
	var_298_object = var_297_object;
	func_2813(var_296_bool, var_297_object);
	bool var_299_bool; object var_300_object;
	var_286_object = var_300_object;
	func_2728(var_299_bool, var_300_object, 70.0);
	if(!var_299_bool) { //@nz
		var_285_int = -2;
		return 8;
	}
	object var_292_object;
	@CreateDialog(var_292_object);
	int var_303_int;
	func_3179(var_303_int);
	var_292_object->SetNPCName(var_303_int);
	int var_304_int;
	func_3177(var_304_int);
	var_292_object->SetNPCDescription(var_304_int);
	string var_305_string;
	func_3181(var_305_string);
	var_292_object->SetPhoto(var_305_string);
	string var_306_string;
	func_3183(var_306_string);
	var_292_object->SetPhoto2(var_306_string);
	int var_307_int;
	func_3650(var_307_int);
	var_292_object->SetPlayerName(var_307_int);
	bool var_293_bool;
	@IsOverrideActive(var_293_bool);
	if(var_293_bool != 0) {
		var_285_int = -2;
		return 8;
	}
	@DoDialog(var_292_object);
	object var_309_object; object var_310_object;
	var_286_object = var_309_object;
	var_292_object = var_310_object;
	TaskCall(6);
	func_1553(var_311_object, var_312_object, var_313_string, var_314_bool, var_309_object, var_310_object);
	TaskReturn();
	bool var_295_bool;
	var_292_object->IsDialogEnd(var_295_bool);
	
	for(;;) {
		var_353_bool = !var_295_bool; //@nz
		if(var_353_bool == 0) goto Label_1542;
		@sync();
		var_292_object->IsDialogEnd(var_295_bool);
	}
	
Label_1542:
	object var_354_object;
	var_286_object = var_354_object;
	func_2796();
	@StopDialog(var_292_object);
	var_292_object->GetReturnValue(-1);
	int var_294_int = var_285_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3269(void)
{
	func_3596();
	bool var_57_bool;
	func_3126(var_57_bool, "quest_k9_01", "completed");
}


void func_3013(int var_223_int, string var_224_string)
{
	int var_226_int;
	@GetVariable(var_224_string, var_226_int);
	var_226_int = var_223_int;
}


void func_3018(int var_147_int, int var_148_int)
{
	object var_150_object;
	@CreateIntVector(var_150_object);
	var_150_object->add(var_147_int);
	var_150_object->add(var_148_int);
	@SendWorldWndMessage(3, var_150_object);
}
EMIT "Stack[-1] = 0";


void func_3531(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 452, 1, 527010);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_3622(var_79_bool, var_80_object, 447);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3279(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3285(void)
{
	func_3583();
}


void func_3030(object var_134_object, int var_135_int)
{
	int var_137_int;
	object var_138_object;
	var_134_object = var_138_object;
	int var_140_int;
	func_2697(var_138_object, "money", var_140_int);
	if(var_140_int > 0) {
		@GetInvItemByName(var_137_int, "Money");
		int var_147_int; int var_148_int;
		var_137_int = var_147_int;
		var_135_int = var_148_int;
		func_3018(var_147_int, var_148_int);
	}
}


void func_3544(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 483, 1, 528050);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_3622(var_41_bool, var_42_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3290(void)
{
	@SetVariable("ook11Block1", 1);
}


// @pe
void func_2012(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_547_object, object var_548_object)
{
	var_0_object = var_548_object;
	var_1_object = var_547_object;
	var_3_string = false;
	if(1 != 0) {
		func_2075(var_548_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_2045;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e0";
	}
Label_2045:
	bool var_572_bool;
	func_3185(var_572_bool);
	if(var_572_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2951(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2074;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2074:
		return 0;

	}
	
}


// @pe
void func_2271(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_606_object, object var_607_object)
{
	var_0_object = var_607_object;
	var_1_object = var_606_object;
	var_3_string = false;
	if(1 != 0) {
		func_2329(var_607_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_2299;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8e3";
	}
Label_2299:
	bool var_628_bool;
	func_3185(var_628_bool);
	if(var_628_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2951(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2328;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2328:
		return 0;

	}
	
}


// @pe
void func_3296(void)
{
	@SetVariable("ook11Block2", 1);
}


void func_3557(void)
{
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 492, 1, 528059);
	bool var_85_bool; object var_86_object;
	var_81_object = var_86_object;
	func_3622(var_85_bool, var_86_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3302(void)
{
	@SetVariable("ook11Block3", 1);
}


void func_3049(object var_204_object, object var_205_object, int var_206_int)
{
	int var_210_int;
	var_205_object->GetItemID(var_210_int);
	int var_211_int;
	@GetInvItemProperty(var_211_int, var_210_int, "Category");
	bool var_212_bool;
	var_204_object->AddItem(var_212_bool, var_205_object, var_211_int, var_206_int);
	if(!var_212_bool) { //@nz
		var_204_object->DropItems(var_205_object, var_206_int);
	} else {
		int var_215_int; int var_216_int;
		var_210_int = var_215_int;
		var_206_int = var_216_int;
		func_3018(var_215_int, var_216_int);
	}
	
}


void func_2796(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal();
	bool var_279_bool;
	func_3185(var_279_bool);
	if(var_279_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_2812;
		@UnlookAsync("head");
	}
Label_2812:
	
}


// @pe
void func_3308(object var_131_object)
{
	@Trace("money 5000 is given");
	object var_134_object;
	var_131_object = var_134_object;
	func_3030(var_134_object, 5000);
}


void func_3570(void)
{
	object var_97_object;
	@CreateDiaryEntry(var_97_object, 499, 1, 528066);
	bool var_101_bool; object var_102_object;
	var_97_object = var_102_object;
	func_3622(var_101_bool, var_102_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3318(object var_196_object)
{
	@Trace("delta_pills is given");
	object var_199_object;
	var_196_object = var_199_object;
	func_3068(var_199_object, "delta_pills", 1);
}


void func_3068(object var_199_object, string var_200_string, int var_201_int)
{
	object var_203_object;
	@CreateInvItem(var_203_object);
	var_203_object->SetItemName(var_200_string);
	object var_204_object; object var_205_object; int var_206_int;
	var_199_object = var_204_object;
	var_203_object = var_205_object;
	var_201_int = var_206_int;
	func_3049(var_204_object, var_205_object, var_206_int);
}
EMIT "Stack[-1] = 0";


void func_2813(bool var_64_bool, object var_65_object)
{
	int var_71_int; int var_72_int;
	@GetVariable("voice_common", var_71_int);
	if(var_71_int != 0) {
		bool var_75_bool; object var_76_object;
		var_65_object = var_76_object;
		func_2871(var_75_bool, var_76_object);
		if(!var_75_bool) { //@nz
			bool var_106_bool; object var_107_object;
			var_65_object = var_107_object;
			func_2908(var_106_bool, var_107_object);
			if(!var_106_bool) { //@nz
				var_64_bool = false;
				return 4;
			}
		}
		@irand(var_72_int, 2);
		if(var_72_int != 0)
			@SetVariable("voice_common", ((var_71_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_146_bool; object var_147_object;
		var_65_object = var_147_object;
		func_2908(var_146_bool, var_147_object);
		if(!var_146_bool) { //@nz
			bool var_149_bool; object var_150_object;
			var_65_object = var_150_object;
			func_2871(var_149_bool, var_150_object);
			if(!var_149_bool) { //@nz
				var_64_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2869;
	
Label_2869:
	var_64_bool = true;
	
}


void func_3583(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 762, 2, 539747);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_3622(var_128_bool, var_129_object, 757);
}
EMIT "Stack[-1] = 0";


