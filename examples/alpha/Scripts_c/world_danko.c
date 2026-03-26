// @IMPORTS: SetVariable/2,Hold/0,FindActor/2,GetSceneByName/2,Trace/1,Teleport/4,CreateObjectVector/1,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,Trigger/2,Trigger/3,RemoveActor/1,GetGameTime/1,ReplaceScene/2,irand/2,AddActor/6,PlaySound/1,_strtoi/2,AddActorByType/6,CreateStringVector/1,AddScriptedActor/5,SetTimeEvent/2,AddMessage/3,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:branch|W:player|W:cot_eva|W:Starting scene not found|W:pt_Danko|A:GetLocator|W:HasProperty|A:HasProperty|W:.bin|W:.xml|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W:locked|A:SetProperty|A:size|A:get|A:Remove|A:clear|W:Region|W:State|W:s_|W:n_|W:.isc|W:City manager: can't replace indoor scene "|W:" because it doesn't exist|W:Diseased Region: |W:City manager: main outdoor scene not found|A:RemoveAllRegionActors|W:City manager: Can't find main outdoor scene|A:SetRegionActorCount|A:SetRegionActorCountByType|A:GetGroupActors|A:Next|W:Actor "|W:" can't be locked|A:add|W:fog_stat.xml|W:fog|A:AddStationaryActorByType|W:pt_blockpost|W:_1_|W:pers_patrool|W:patrol_stat.xml|W:pt_fog|W:pers_soldat|W:soldier.xml|W:_2_|W:pers_sanitar|W:sanitar_stat.xml|A:EnableSubsets|W:street_rags|W:do_invis.xml|A:RemoveOnUnload|W:pers_wasted_girl|W:wasted_girl.xml|W:pers_wasted_male|W:wasted_male.xml|W:pers_woman|W:woman.xml|W:pers_unosha|W:unosha.xml|W:unosha2.xml|W:pers_boy|W:boy.xml|W:pers_girl|W:girl2.xml|W:pers_dog|W:dog.xml|W:wasted_girl_killme.xml|W:soldier_marauder.xml|W:pers_littleboy|W:littleboy.xml|W:pers_littlegirl|W:littlegirl.xml|W:pers_alkash|W:alkash.xml|W:pers_worker|W:worker.xml|W:worker2.xml|W:pers_butcher|W:butcher.xml|W:woman_killme.xml|W:wasted_girl_d.xml|W:wasted_male_d.xml|W:woman_d.xml|W:unosha_d.xml|W:unosha2_d.xml|W:boy_d.xml|W:girl2_d.xml|W:pers_vaxxabit|W:vaxxabit.xml|W:vaxxabit_d.xml|W:pers_vaxxabitka|W:vaxxabitka.xml|W:vaxxabitka_d.xml|W:fog.xml|W:pers_bomber|W:bomber.xml|W:agony1.xml|W:alkash_d.xml|W:worker_d.xml|W:worker2_d.xml|W:butcher_d.xml|W:patrol.xml|W:pers_rat|W:rat.xml|W:pers_grabitel|W:grabitel.xml|W:dt_house3_05_i2|W:dt_house3_05|W:dt_house_1_10|W:house5_10|W:house5_07|W:dt_house_1_03|W:dt_house1_union2_04l|W:dt_house1_union2_04r|W:house5_22|W:house5_08|W:dt_house1_union2_05l|W:dt_house1_union2_05r|W:dt_house2_04|W:dt_house2_05|W:dt_house2_02|W:dt_house2_01|W:dt_house3_10_i2|W:dt_house3_10|W:dt_house3_11_i2|W:dt_house3_11|W:dt_house3_12_i2|W:dt_house3_12|W:dt_house_1_06|W:dt_house3_07_i2|W:dt_house3_07|W:house5_21|W:house1_se_02l|W:house1_se_02r|W:dt_house3_01_i2|W:dt_house3_02_i2|W:dt_house3_02|W:dt_house3_03_i2|W:dt_house3_03|W:house5_02|W:dt_house1_union2_03l|W:dt_house1_union2_03r|W:dt_house1_union2_01l|W:dt_house1_union2_01r|W:house5_unoinl|W:house5_unoinr|W:dt_house_1_01|W:house5_05|W:house5_06|W:dt_house1_union2_02l|W:dt_house1_union2_02r|W:dt_house_1_02|W:house5_unoin_solid01l|W:house5_unoin_solid01r|W:house5_03|W:house5_04|W:dt_house3_09_i2|W:dt_house3_09|W:house1_se_03l|W:house1_se_03r|W:house1_se_01l|W:house1_se_01r|W:house1_se_04l|W:house1_se_04r|W:house5_11|W:house5_09|W:dt_house_1_04|W:house5_13|W:house5_12|W:house5_14|W:house5_unoin03l|W:house5_unoin03r|W:house5_unoin02l|W:house5_unoin02r|W:house5_unoin01l|W:house5_unoin01r|W:dt_house3_14_i2|W:dt_house3_14|W:house1_arc_01l|W:house1_arc_01r|W:dt_House6_01|W:dt_house_1_09|W:house5_24|W:dt_House6_03|W:dt_House6_04|W:dt_house_1_08|W:house5_unoin_solidl|W:house5_unoin_solidr|W:dt_house2_12|W:dt_house2_11|W:dt_house2_13|W:dt_house2_09|W:dt_house2_08|W:dt_house2_07|W:dt_house2_06|W:house5_01|W:house5_15|W:house5_16|W:house5_17|W:house5_unoin04l|W:house5_unoin04r|W:house5_23|W:House6_02|W:house_2_01|W:house7_03|W:house7_02|W:house3_01|W:house_2_03|W:house_2_02|W:house4_01_i2|W:house4_01|W:House6_05|W:r2_house_2_02|W:r2_house_2_03|W:r2_house7_02|W:r2_house01_01|W:r2_house7_01|W:r2_house3_01_i2|W:r2_house3_01|W:r2_house3_02_i2|W:r2_house3_02|W:r2_house3_03_i2|W:r2_house3_03|W:r3_house_2_02|W:r3_house7_01|W:r3_house3_02_i2|W:r3_house3_02|W:r3_house7_02|W:r3_house4_05_i2|W:r3_house4_05|W:r3_house4_03_i2|W:r3_house4_04_i2|W:r3_house4_04|W:r3_house4_01_i2|W:r3_house4_01|W:r3_house_2_01|W:r3_house4_02_i2|W:r3_house4_02|W:r3_house3_01_i2|W:r3_house3_01|W:r4_house_2_02|W:r4_house3_03_i2|W:r4_house3_03|W:r4_house4_02_i2|W:r4_house4_02|W:r4_house4_01_i2|W:r4_house4_01|W:r4_house3_02_i2|W:r4_house3_02|W:r4_house_2_01|W:r4_house3_01_i2|W:r4_house3_01|W:r4_house7_01|W:r4_House6_01|W:r4_house_2_03|W:r4_House6_03|W:r4_house_2_04|W:r5_house2_01|W:r5_house2_02|W:r5_house2_03|W:r5_house3_01_i2|W:r5_house3_01|W:r5_house3_02_i2|W:r5_house3_02|W:r5_house3_03_i2|W:r5_house3_03|W:r5_house3_04_i2|W:r5_house3_04|W:r5_house3_05_i2|W:r5_house3_05|W:r5_house3_06_i2|W:r5_house3_06|W:r5_house3_07_i2|W:r5_house3_07|W:r5_House6_01|W:r6_house2_03|W:r6_house4_01_i2|W:r6_house4_02_i2|W:r6_house4_02|W:r6_house3_02_i2|W:r6_house3_02|W:r6_house3_01_i2|W:r6_house3_01|W:r6_house2_01|W:r6_house7_01|W:r6_House6_01|W:r6_house2_02|W:r7_house2_01|W:r7_house2_02|W:r7_house2_03|W:r7_house2_04|W:r7_house3_03_i2|W:r7_house3_03|W:r7_house3_04_i2|W:r7_house3_04|W:r7_house3_05_i2|W:r7_house3_05|W:r7_house3_06_i2|W:r7_house3_01_i2|W:r7_house3_01|W:r7_house3_02_i2|W:r7_house3_02|W:lc_house7_03|W:lc_house7_05|W:lc_House6_05|W:lc_house7_06|W:lc_House6_02|W:lc_house7_01|W:lc_house_2_02|W:lc_House6_01|W:lc_house3_03_i2|W:lc_house3_03|W:lc_house7_04|W:lc_house7_07|W:lc_House6_03|W:lc_House6_04|W:lc_house3_05_i2|W:lc_house3_05|W:lc_house3_06_i2|W:lc_house3_06|W:lc_House6_06|W:lc_house3_04_i2|W:lc_house3_04|W:playsound|W:horror|W:Replaced|W:Invalid region index|W:nail|W:fogme|A:GetScene|A:GetPosition|W:pt_guard_|W:Locator doesn't exist for guard |W:sklad|W:key_guard_sklad|W:term|W:guard_term.xml|W:warehouse4_guard1@door1|W:warehouse4_guard2@door1|W:warehouse4_guard3@door1|W:warehouse4_guard4@door1|W:warehouse4_guard5@door1|W:warehouse4_guard6@door1|W:Setting arena...|W:pt_arena_manager|W:Locator doesn't exist for arena manager|W:pt_arena_torch|W:Locator doesn't exist for arena torch |W:scripted|W:torch.xml|W:arena_light|A:Switch|W:Cleaning arena...|W:remove|W:pt_bull|W:pers_bull|W:bull.xml|W:big_gun|W:big_gun.bin|W:d9q01_trigger_wagon|W:quest_d9_01_wagon.bin|A:SwitchLights|W:City update|W:day time|W:night time|W:player_mail|W:warehouse_rubin@door1|W:theater@door1|W:termitnik@door1|W:resque_list|W:factory@door1|W:icot_eva@door1|W:d1AlexandrAboutKaterina|A:FindMark|W:d1q01EvaAboutMark|W:d1EvaGotoMaria|W:d1q01EvaGotoSimon|W:d1EvaInfo|W:d1GeorgAboutAlexandr|W:d1GeorgAboutBigVlad|W:d1GeorgGotoViktor|W:d1GeorgInfo|W:d1q01GrifAboutRubin|W:d1q01MarkAboutJulia|W:d1q01MarkAboutLara|W:d1q01NotkinAboutRubin|W:d1q02AnnaGotoLaska|W:d1q02ViktorGotoAnna|W:d1BigVladAboutKapella|W:d1BigVladAboutMladVlad|W:d1EvaAboutKapella|W:d1q03KapellaGotoOspina|W:d1q03MladVladGotoOspina|W:d1EvaAboutKaterina|W:d1q04KaterinaGotoMishka|W:d1q04MishkaGotoSpi4ka|W:d1q04Spi4kaGotoPowderHouse|W:Day1 cleanup|W:d2q01AlexandrGotoAnna|W:d2q01AlexandrGotoBigVlad|W:d2q01AlexandrGotoGeorg|W:d2q01AnnaGotoKapella|W:d2q01KapellaGotoSpi4ka|W:d2q01WomanDGotoAlexandr|W:d2q02AndreiGotoGrif|W:d2q02AndreiGotoGrifSelf|W:d2q02AndreiGotoPetr|W:d2q02AndreiGotoPetrSelf|W:d2q02EvaGotoAndrei|W:d2q02EvaGotoAndreiSelf|W:d2q02EvaGotoMaria|W:d2q02MariaGotoPetr|W:d2q02PetrGotoAndrei|W:d2q02PetrGotoAndreiSelf|W:d2q02PetrRefusedSelf|W:d2q02ReadyAndrei|W:d2q03BirdmaskGotoLara|W:d2q03BirdmaskGotoLaraSelf|W:d2q03LaraGotoJulia|W:d2q03LaraGotoMaria|W:d2q03LaraGotoMladVlad|W:d2q03LaraGotoMoneyFoodSelf|W:d2q03LaraGotoSklad|W:d2q03LaraGotoSkladSelf|W:d3q01AlexandrGotoOspina|W:d3q01AlexandrGotoOspinaSelf|W:d3q01BigVladAgreed|W:d3q01BigVladAgreedSelf|W:d3q01BigVladGotoGeorg|W:d3q01BigVladGotoGeorgSelf|W:d3q01GeorgAgreed|W:d3q01GeorgAgreedSelf|W:d3q01OspinaButchersWillHelpSelf|W:d3q01OspinaGotoBigVlad|W:d3q01OspinaGotoBigVladSelf|W:d3q01RubinGotoAlexandr|W:d3q01RubinGotoAlexandrSelf|W:d3q02BigVladGotoHan|W:d3q02GeorgGotoMishka|W:d3q02GeorgGotoViktor|W:d3q02GeorgSelf|W:d3q02HanGotoViktor|W:d3q02MishkaGotoMladVlad|W:d3q02MladVladGotoBigVlad|W:d3q02ViktorGotoMladVlad|W:d3q02ViktorGotoMladVladSelf|W:d3q03KapellaBoyLocation|W:d3q03KapellaBoyLocationSelf|W:d4q01BigVladGotoLara|W:d4q01BigVladGotoLaraSelf|W:d4q01BigVladGotoSklad|W:d4q01BigVladGotoSobor|W:d4q01BigVladGotoSoborAndTheaterSelf|W:d4q01BigVladGotoTheater|W:d4q01LaraGotoMladVlad|W:d4q01LaraGotoMladVladSelf|W:d4q01LaraGotoOspina|W:d4q01LaraGotoOspinaSelf|W:d4q01MladVladGotoBigVlad|W:d4q01MladVladGotoBigVladSelf|W:d4q01MladVladGotoOspina|W:d4q01OspinaGotoLara|W:d4q01WastedMale|W:d4q01Whitemask|W:d4q02BirdmaskNearHome|W:d4q02MladVladGotoAJLSelf|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:d4q02MladVladGotoLara|W:d4q03AlexandrAboutVolnica|W:d4q03AlexandrGotoGrif|W:d4q03AlexandrGotoGrifSelf|W:d4q03GrifGotoAlexandr|W:d4q03GrifGotoAlexandrSelf|W:d5q01AlexandrGotoKaterina|W:d5q01BigVladGotoAlexandr|W:d5q01BurahMeeting1|W:d5q01BurahMeeting2|W:d5q01GrifWantsMoney|W:d5q01GrifWillHelp|W:d5q01KaterinaGotoLara|W:d5q01PatrolGotoGrif|W:d5q01RubinGotoBigVlad|W:d5q01RubinGotoBigVladSelf|W:d5q02AnnaGotoGorbun|W:d5q02AnnaGotoGorbunSelf|W:d5q02AnnaGotoKabak|W:d5q02GorbunFindTheDaughter|W:d5q02NudeMeeting|W:d5q03BirdmaskBringMoneySelf|W:d5q03BirdmaskGotoMladVlad|W:d5q03BirdmaskGotoViktor|W:d5q03MladVladSavePrisonersSelf|W:d5q03SavePrisoners|W:d5q03ViktorSavePrisonersSelf|W:d6q01AlexandrGotoJulia|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:d6q02BigVlad|W:d6q02KapellaGotoMladVlad|W:d6q02MladVladGotoBigVlad|W:d6q02MladVladGotoBigVladSelf|W:d7q01AglajaFindLierSelf|W:d7q01AglajaGotoBirdmaskSelf|W:d7q01BirdmaskD|W:d7q01BirdmaskM|W:d7q01BirdmaskU|W:d7q02AlexandrGotoPetr|W:d7q02MarkGotoAlexandr|W:d7q02MarkGotoCemetery|W:mnogogrannik@door1|W:d8q01MatGotoToyHouse|W:d10q01AglajaGotoPetr|W:d10q01SoldierGotoPetr|W:quest_d12_01|W:init_mnogogrannik|W:init_theater|W:sobor@door1|W:place_birdmask|W:d1q01|W:d1q01KaterinaUHave1day|W:d6q03|W:d11q03BurahVisit|W:d11q04KlaraVisit|W:d3RubinVisit|W:d3GeorgVisit|W:d4BigVladVisit|W:d5RubinVisit|W:d6KapellaVisit|W:d6MariaVisit|W:d6BigVladVisit|W:d6ViktorVisit|W:d7AglajaVisit|W:d11AglajaVisit|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|A:GetMap|W:Adding diary entry|W:quest_d2_01|W:volonteers_danko|W:quest_d6_01|W:quest_d7_01|W:d6q01|W:rescue_locked|W:quest_d5_01|W:d5q01|W:quest_d8_01|W:d7q01|W:quest_d10_01|W:quest_d11_01|W:d10q01|W:quest_d11_02|W:quest_d4_01|W:d4q01|W:quest_d9_01|W:d8q01|W:quest_d3_01|W:d3q01|W:d11q01|W:d9q01|W:d2q01|W:vol_|W:Updating game |W:Disease update|W:Diseased regions : |W:Special diseased house: r4_house_2_02|W:s_r4_house_2_02.isc|W:Special diseased house: house7_03|W:s_house7_03.isc|W:Special house: sobor (with corpses)|W:sobor|W:sobor_trup.isc|W:Special house: sobor (normal)|W:sobor.isc|W:Danko_arena_manager.xml
// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:,17:object:,18:object:
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_9: op=0x0 vars=int,float
// @STANDALONE_EVENT_26: op=0x1931 vars=string,string
// @STANDALONE_EVENT_1000: op=0x1938 vars=string,string
// @PE: 0x0,0xd9,0xdf,0x22d,0x240,0x28f,0x325,0x34a,0x368,0x38d,0x3a4,0x3fe,0x458,0x462,0x4f6,0x583,0x647,0x6a1,0xf0c,0xf0e,0xf36,0xf5e,0xf86,0xfa6,0xfce,0xff6,0x101e,0x1065,0x108d,0x10b5,0x10dd,0x1112,0x113a,0x1162,0x118a,0x11c8,0x11f0,0x1218,0x1240,0x1290,0x12b8,0x12e0,0x1308,0x130a,0x132c,0x134e,0x1370,0x139c,0x13c4,0x13ec,0x1414,0x1437,0x145f,0x1487,0x14af,0x14e4,0x150c,0x1534,0x155c,0x1591,0x15b9,0x15e1,0x1609,0x1641,0x1669,0x1691,0x16b9,0x16df,0x1707,0x172f,0x1757,0x1786,0x17ae,0x17d6,0x17fe,0x182a,0x1852,0x187a,0x18a2,0x18b9,0x18e1,0x1909,0x1931,0x19a2,0x19b0,0x1bcb,0x2105,0x210c,0x2113,0x211a,0x2121,0x2126,0x212d,0x2134,0x213d,0x2144,0x25df,0x25e6,0x261a,0x2624,0x262b,0x2632,0x2639,0x2640,0x264c,0x2658,0x2664,0x2670,0x267c,0x2688,0x268d,0x2699,0x26a5,0x26b1,0x26bd,0x26c9,0x26d5,0x26e1,0x26ed,0x26f9,0x2c88,0x2cb5

task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0;
	var_0_int = var_3_int;
	var_1_float = var_4_float;
	func_7162(var_3_int, var_4_float);
	if(var_2_bool != 0) {
		return 0;
	}
	var_3588_bool = 0; var_3589_int = 0; var_3590_float = 0;
	var_0_int = var_3589_int;
	var_1_float = var_3590_float;
	func_10065(var_3589_int, var_3590_float);
	if(var_3588_bool != 0) {
		return 0;
	}
	var_3783_int = 0; var_3784_float = 0;
	var_0_int = var_3783_int;
	var_1_float = var_3784_float;
	func_10142(var_3784_float);
	return 0;
}


event_26(var_0_string, var_1_string)
{
	var_3_bool = var_0_string == "playsound";
	if(var_3_bool != 0) {
		PlaySound(var_1_string);
	}
	return 0;
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	var_23_bool = var_0_string == "horror";
	if(var_23_bool != 0) {
		_strtoi(var_12_int, var_1_string);
		var_24_object = GlobalVars[17];
		@@var_24_object:size(var_13_int);
		var_25_bool = 0;
		var_25_bool = 0;
		var_27_bool = var_12_int >= (int)0;
		if(var_27_bool != 0) {
			var_28_bool = var_12_int < var_13_int;
			if(var_28_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_29_object = GlobalVars[17];
			@@var_29_object:get(var_14_object, var_12_int);
			var_30_object = Obj(); var_31_int = 0;
			var_14_object = var_30_object;
			func_229(var_30_object, (int)1);
			Trace("Replaced");
			var_14_object = 0;
		} else {
			Trace("Invalid region index");
	}
		var_60_bool = var_0_string == "nail";
		if(var_60_bool != 0) {
			_strtoi(var_15_int, var_1_string);
			var_61_object = GlobalVars[17];
			@@var_61_object:size(var_16_int);
			var_62_bool = 0;
			var_62_bool = 0;
			var_64_bool = var_15_int >= (int)0;
			if(var_64_bool != 0) {
				var_65_bool = var_15_int < var_16_int;
				if(var_65_bool != 0) {
					var_62_bool = 1;
				}
			}
			if(var_62_bool != 0) {
				var_66_object = GlobalVars[17];
				@@var_66_object:get(var_17_object, var_15_int);
				var_67_object = Obj(); var_68_int = 0;
				var_17_object = var_67_object;
				func_229(var_67_object, (int)2);
				Trace("Replaced");
				var_17_object = 0;
			} else {
				Trace("Invalid region index");
		}
			var_72_bool = var_0_string == "fogme";
			if(var_72_bool == 0) goto Label_6544;
			func_67(Obj());
			var_73_object = var_18_object;
			@@var_18_object:GetScene(var_19_object);
			@@var_18_object:GetPosition(var_20_cvector);
			AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, CVector(0.0, 0.0, 1.0), "fog_stat.xml");
			var_21_object = 0;
			var_19_object = 0;
			var_18_object = 0;
		}
		goto Label_6544;
	}
	goto Label_6544;
	
Label_6544:
	return 20;
	
}


main()
{
	SetVariable("branch", (int)0);
	func_44();
	func_6791();
	func_7208();
	func_10100();
	func_11007();
	
Label_40:
	Hold();
	goto Label_40;
}
EMIT "Return(); Pop(0)";


func_9728()
{
	var_4187_object = Obj(); var_4188_object = Obj(); var_4189_object = Obj(); var_4190_object = Obj();
	func_10048(Obj());
	var_4191_object = var_4189_object;
	@@var_4189_object:FindMark(var_4190_object, "d10q01AglajaGotoPetr");
	var_4193_object = var_4190_object;
	if(var_4193_object != 0) {
		@@var_4190_object:Remove();
	}
	@@var_4189_object:FindMark(var_4190_object, "d10q01SoldierGotoPetr");
	var_4195_object = var_4190_object;
	if(var_4195_object != 0) {
		@@var_4190_object:Remove();
	}
	var_4196_bool = 0; var_4197_int = 0;
	func_10031(var_4196_bool, (int)186);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2052(var_2151_int, var_2152_int, var_2153_int)
{
	var_2154_int = 0; var_2155_int = 0; var_2156_int = 0; var_2157_int = 0;
	var_2158_bool = 0;
	var_2158_bool = 0;
	var_2160_bool = var_2153_int > (int)8;
	if(var_2160_bool != 0) {
		var_2162_bool = var_2153_int < (int)21;
		if(var_2162_bool != 0) {
			var_2158_bool = 1;
		}
	}
	if(var_2158_bool != 0) {
		var_2163_int = 0; var_2164_string = ""; var_2165_string = ""; var_2166_int = 0;
		var_2151_int = var_2163_int;
		func_438(var_2163_int, "pers_woman", "woman_d.xml", (int)1);
		var_2167_int = 0; var_2168_string = ""; var_2169_string = ""; var_2170_int = 0;
		var_2151_int = var_2167_int;
		func_438(var_2167_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_2171_int = 0; var_2172_string = ""; var_2173_string = ""; var_2174_int = 0;
		var_2151_int = var_2171_int;
		func_438(var_2171_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_2175_int = 0; var_2176_string = ""; var_2177_string = ""; var_2178_int = 0;
		var_2151_int = var_2175_int;
		func_438(var_2175_int, "pers_boy", "boy_d.xml", (int)1);
		var_2179_int = 0; var_2180_string = ""; var_2181_string = ""; var_2182_int = 0;
		var_2151_int = var_2179_int;
		func_438(var_2179_int, "pers_girl", "girl_d.xml", (int)1);
		var_2183_int = 0; var_2184_string = ""; var_2185_string = ""; var_2186_int = 0;
		var_2151_int = var_2183_int;
		func_438(var_2183_int, "pers_girl", "girl2_d.xml", (int)1);
		var_2187_int = 0; var_2188_string = ""; var_2189_string = ""; var_2190_int = 0;
		var_2151_int = var_2187_int;
		func_438(var_2187_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_2191_int = 0; var_2192_string = ""; var_2193_string = ""; var_2194_int = 0;
		var_2151_int = var_2191_int;
		func_438(var_2191_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_2195_int = 0; var_2196_string = ""; var_2197_string = ""; var_2198_int = 0;
		var_2151_int = var_2195_int;
		func_438(var_2195_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_2199_int = 0; var_2200_string = ""; var_2201_string = ""; var_2202_int = 0;
		var_2151_int = var_2199_int;
		func_438(var_2199_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_2203_int = 0; var_2204_string = ""; var_2205_string = ""; var_2206_int = 0;
		var_2151_int = var_2203_int;
		func_438(var_2203_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_2208_int = var_2152_int + (int)1;
		var_2210_bool = var_2208_int >= (int)3;
		if(var_2210_bool != 0) {
		}
		var_2211_int = 0; var_2212_string = ""; var_2213_string = ""; var_2214_int = 0;
		var_2151_int = var_2211_int;
		func_464(var_2211_int, "fog", "fog.xml", (int)4);
		var_2216_float = 0; var_2217_int = 0;
		var_2152_int = var_2217_int;
		func_1022(var_2216_float, var_2217_int);
		var_2156_int = (int)1 * var_2216_float;
		var_2218_int = var_2156_int;
		if(var_2218_int != 0) {
			var_2219_int = 0; var_2220_string = ""; var_2221_string = ""; var_2222_int = 0;
			var_2151_int = var_2219_int;
			var_2156_int = var_2222_int;
			func_438(var_2219_int, "pers_bomber", "bomber.xml", var_2222_int);
		}
	} else {
		var_2260_int = 0; var_2261_string = ""; var_2262_string = ""; var_2263_int = 0;
		var_2151_int = var_2260_int;
		func_438(var_2260_int, "pers_woman", "woman_d.xml", (int)1);
		var_2264_int = 0; var_2265_string = ""; var_2266_string = ""; var_2267_int = 0;
		var_2151_int = var_2264_int;
		func_438(var_2264_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_2268_int = 0; var_2269_string = ""; var_2270_string = ""; var_2271_int = 0;
		var_2151_int = var_2268_int;
		func_438(var_2268_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_2272_int = 0; var_2273_string = ""; var_2274_string = ""; var_2275_int = 0;
		var_2151_int = var_2272_int;
		func_438(var_2272_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_2276_int = 0; var_2277_string = ""; var_2278_string = ""; var_2279_int = 0;
		var_2151_int = var_2276_int;
		func_438(var_2276_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_2280_int = 0; var_2281_string = ""; var_2282_string = ""; var_2283_int = 0;
		var_2151_int = var_2280_int;
		func_438(var_2280_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_2284_int = 0; var_2285_string = ""; var_2286_string = ""; var_2287_int = 0;
		var_2151_int = var_2284_int;
		func_438(var_2284_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_2288_int = 0; var_2289_string = ""; var_2290_string = ""; var_2291_int = 0;
		var_2151_int = var_2288_int;
		func_438(var_2288_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_2293_int = var_2152_int + (int)1;
		var_2295_bool = var_2293_int >= (int)3;
		if(var_2295_bool != 0) {
		}
		var_2296_int = 0; var_2297_string = ""; var_2298_string = ""; var_2299_int = 0;
		var_2151_int = var_2296_int;
		func_464(var_2296_int, "fog", "fog.xml", (int)4);
		var_2301_float = 0; var_2302_int = 0;
		var_2152_int = var_2302_int;
		func_1022(var_2301_float, var_2302_int);
		var_2157_int = (int)1 * var_2301_float;
		var_2303_int = var_2157_int;
		if(var_2303_int == 0) goto Label_2251;
		var_2304_int = 0; var_2305_string = ""; var_2306_string = ""; var_2307_int = 0;
		var_2151_int = var_2304_int;
		var_2157_int = var_2307_int;
		func_438(var_2304_int, "pers_bomber", "bomber.xml", var_2307_int);
	}
Label_2251:
	var_2223_int = 0; var_2224_string = ""; var_2225_string = ""; var_2226_int = 0; var_2227_int = 0; var_2228_int = 0;
	var_2151_int = var_2223_int;
	func_451(var_2223_int, "pers_worker", "agony1.xml", (int)2, (int)4, (int)4);
	var_2229_int = 0; var_2230_string = ""; var_2231_string = ""; var_2232_int = 0; var_2233_int = 0; var_2234_int = 0;
	var_2151_int = var_2229_int;
	func_451(var_2229_int, "pers_unosha", "agony1.xml", (int)2, (int)4, (int)4);
	var_2235_int = 0; var_2236_string = ""; var_2237_string = ""; var_2238_int = 0; var_2239_int = 0; var_2240_int = 0;
	var_2151_int = var_2235_int;
	func_451(var_2235_int, "pers_woman", "agony1.xml", (int)2, (int)4, (int)4);
	var_2241_int = 0; var_2242_string = ""; var_2243_string = ""; var_2244_int = 0; var_2245_int = 0; var_2246_int = 0;
	var_2151_int = var_2241_int;
	func_451(var_2241_int, "pers_vaxxabitka", "agony1.xml", (int)2, (int)4, (int)4);
	var_2247_int = 0; var_2248_string = ""; var_2249_string = ""; var_2250_int = 0; var_2251_int = 0; var_2252_int = 0;
	var_2151_int = var_2247_int;
	func_451(var_2247_int, "pers_wasted_girl", "agony1.xml", (int)2, (int)4, (int)4);
	var_2253_bool = 0; var_2254_int = 0; var_2255_int = 0;
	var_2152_int = var_2254_int;
	var_2153_int = var_2255_int;
	func_1112(var_2253_bool, var_2254_int, var_2255_int);
	if(var_2253_bool != 0) {
		var_2256_int = 0; var_2257_string = ""; var_2258_string = ""; var_2259_int = 0;
		var_2151_int = var_2256_int;
		func_438(var_2256_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 4;
	
}


func_11268(var_4710_int)
{
	var_4711_int = 0; var_4712_int = 0;
	var_4714_int = "vol_" + var_4710_int;
	GetVariable(var_4714_int, var_4712_int);
	var_4716_int = "vol_" + var_4710_int;
	var_4718_int = var_4712_int | (int)8;
	SetVariable(var_4716_int, var_4718_int);
	return 2;
}


func_8200(var_4558_int)
{
	var_4559_int = 0; var_4560_int = 0;
	AddMessage((int)15489, (int)15488, var_4560_int);
	SetVariable("player_mail", (int)1);
	var_4560_int = var_4558_int;
	return 2;
}


func_5641(var_223_object)
{
	@@var_223_object:add("r5_house2_01");
	@@var_223_object:add("r5_house2_02");
	@@var_223_object:add("r5_house2_03");
	@@var_223_object:add("r5_house3_01_i2");
	@@var_223_object:add("r5_house3_01");
	@@var_223_object:add("r5_house3_02_i2");
	@@var_223_object:add("r5_house3_02");
	@@var_223_object:add("r5_house3_03_i2");
	@@var_223_object:add("r5_house3_03");
	@@var_223_object:add("r5_house3_04_i2");
	@@var_223_object:add("r5_house3_04");
	@@var_223_object:add("r5_house3_05_i2");
	@@var_223_object:add("r5_house3_05");
	@@var_223_object:add("r5_house3_06_i2");
	@@var_223_object:add("r5_house3_06");
	@@var_223_object:add("r5_house3_07_i2");
	@@var_223_object:add("r5_house3_07");
	@@var_223_object:add("r5_House6_01");
	return 0;
}


func_8718()
{
	var_4973_object = Obj(); var_4974_object = Obj(); var_4975_object = Obj(); var_4976_object = Obj();
	func_10048(Obj());
	var_4977_object = var_4975_object;
	@@var_4975_object:FindMark(var_4976_object, "d2q01AlexandrGotoAnna");
	var_4979_object = var_4976_object;
	if(var_4979_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q01AlexandrGotoBigVlad");
	var_4981_object = var_4976_object;
	if(var_4981_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q01AlexandrGotoGeorg");
	var_4983_object = var_4976_object;
	if(var_4983_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q01AnnaGotoKapella");
	var_4985_object = var_4976_object;
	if(var_4985_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q01KapellaGotoSpi4ka");
	var_4987_object = var_4976_object;
	if(var_4987_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q01WomanDGotoAlexandr");
	var_4989_object = var_4976_object;
	if(var_4989_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02AndreiGotoGrif");
	var_4991_object = var_4976_object;
	if(var_4991_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02AndreiGotoGrifSelf");
	var_4993_object = var_4976_object;
	if(var_4993_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02AndreiGotoPetr");
	var_4995_object = var_4976_object;
	if(var_4995_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02AndreiGotoPetrSelf");
	var_4997_object = var_4976_object;
	if(var_4997_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02EvaGotoAndrei");
	var_4999_object = var_4976_object;
	if(var_4999_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02EvaGotoAndreiSelf");
	var_5001_object = var_4976_object;
	if(var_5001_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02EvaGotoMaria");
	var_5003_object = var_4976_object;
	if(var_5003_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02MariaGotoPetr");
	var_5005_object = var_4976_object;
	if(var_5005_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02PetrGotoAndrei");
	var_5007_object = var_4976_object;
	if(var_5007_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02PetrGotoAndreiSelf");
	var_5009_object = var_4976_object;
	if(var_5009_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02PetrRefusedSelf");
	var_5011_object = var_4976_object;
	if(var_5011_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q02ReadyAndrei");
	var_5013_object = var_4976_object;
	if(var_5013_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03BirdmaskGotoLara");
	var_5015_object = var_4976_object;
	if(var_5015_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03BirdmaskGotoLaraSelf");
	var_5017_object = var_4976_object;
	if(var_5017_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoJulia");
	var_5019_object = var_4976_object;
	if(var_5019_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoMaria");
	var_5021_object = var_4976_object;
	if(var_5021_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoMladVlad");
	var_5023_object = var_4976_object;
	if(var_5023_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoMoneyFoodSelf");
	var_5025_object = var_4976_object;
	if(var_5025_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoSklad");
	var_5027_object = var_4976_object;
	if(var_5027_object != 0) {
		@@var_4976_object:Remove();
	}
	@@var_4975_object:FindMark(var_4976_object, "d2q03LaraGotoSkladSelf");
	var_5029_object = var_4976_object;
	if(var_5029_object != 0) {
		@@var_4976_object:Remove();
	}
	var_5030_bool = 0; var_5031_int = 0;
	func_10031(var_5030_bool, (int)10);
	var_5032_bool = 0; var_5033_int = 0;
	func_10031(var_5032_bool, (int)11);
	var_5034_bool = 0; var_5035_int = 0;
	func_10031(var_5034_bool, (int)12);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_11280()
{
	var_4701_int = 0; var_4702_int = 0; var_4703_int = 0; var_4704_int = 0;
	var_4703_int = 0;
	
Label_11282:
	var_4706_bool = var_4703_int < (int)3;
	if(var_4706_bool != 0) {
		irand(var_4704_int, (int)13);
		var_4709_bool = var_4704_int == (int)0;
		if(var_4709_bool != 0) {
			var_4710_int = 0;
			func_11268((int)11);
		} else {
			var_4721_bool = var_4704_int == (int)1;
			if(var_4721_bool != 0) {
				var_4722_int = 0;
				func_11268((int)18);
				goto Label_11391;
			}
			var_4724_bool = var_4704_int == (int)2;
			if(var_4724_bool != 0) {
				var_4725_int = 0;
				func_11268((int)21);
				goto Label_11391;
			}
			var_4727_bool = var_4704_int == (int)3;
			if(var_4727_bool != 0) {
				var_4728_int = 0;
				func_11268((int)2);
				goto Label_11391;
			}
			var_4730_bool = var_4704_int == (int)4;
			if(var_4730_bool != 0) {
				var_4731_int = 0;
				func_11268((int)9);
				goto Label_11391;
			}
			var_4733_bool = var_4704_int == (int)5;
			if(var_4733_bool != 0) {
				var_4734_int = 0;
				func_11268((int)13);
				goto Label_11391;
			}
			var_4736_bool = var_4704_int == (int)6;
			if(var_4736_bool != 0) {
				var_4737_int = 0;
				func_11268((int)24);
				goto Label_11391;
			}
			var_4739_bool = var_4704_int == (int)7;
			if(var_4739_bool != 0) {
				var_4740_int = 0;
				func_11268((int)10);
				goto Label_11391;
			}
			var_4742_bool = var_4704_int == (int)8;
			if(var_4742_bool != 0) {
				var_4743_int = 0;
				func_11268((int)20);
				goto Label_11391;
			}
			var_4745_bool = var_4704_int == (int)9;
			if(var_4745_bool != 0) {
				var_4746_int = 0;
				func_11268((int)21);
				goto Label_11391;
			}
			var_4748_bool = var_4704_int == (int)10;
			if(var_4748_bool != 0) {
				var_4749_int = 0;
				func_11268((int)3);
				goto Label_11391;
			}
			var_4751_bool = var_4704_int == (int)11;
			if(var_4751_bool != 0) {
				var_4752_int = 0;
				func_11268((int)19);
				goto Label_11391;
			}
			var_4754_bool = var_4704_int == (int)12;
			if(var_4754_bool == 0) goto Label_11391;
			var_4755_int = 0;
			func_11268((int)26);
	}
		var_4703_int = var_4703_int + (int)1;
		goto Label_11282;
	}
	return 4;
	
}


func_8211(var_4578_int)
{
	var_4579_int = 0; var_4580_int = 0;
	AddMessage((int)15491, (int)15490, var_4580_int);
	SetVariable("player_mail", (int)1);
	var_4580_int = var_4578_int;
	return 2;
}


func_5140(var_172_object)
{
	@@var_172_object:add("r2_house_2_02");
	@@var_172_object:add("r2_house_2_03");
	@@var_172_object:add("r2_house7_02");
	@@var_172_object:add("r2_house01_01");
	@@var_172_object:add("r2_house7_01");
	@@var_172_object:add("r2_house3_01_i2");
	@@var_172_object:add("r2_house3_01");
	@@var_172_object:add("r2_house3_02_i2");
	@@var_172_object:add("r2_house3_02");
	@@var_172_object:add("r2_house3_03_i2");
	@@var_172_object:add("r2_house3_03");
	return 0;
}


func_533(var_1457_string, var_1458_object)
{
	var_1464_object = Obj(); var_1465_int = 0; var_1466_bool = 0; var_1467_cvector = CVector(0,0,0); var_1468_cvector = CVector(0,0,0); var_1469_object = Obj(); var_1470_string = ""; var_1471_object = Obj(); var_1472_int = 0; var_1473_bool = 0; var_1474_cvector = CVector(0,0,0); var_1475_cvector = CVector(0,0,0); var_1476_object = Obj(); var_1477_string = "";
	GetMainOutdoorScene(var_1471_object);
	var_1472_int = 0;
	
Label_537:
	var_1479_int = var_1472_int + (int)1;
	var_1480_int = var_1457_string + var_1479_int;
	@@var_1471_object:GetLocator(var_1480_int, var_1473_bool, var_1474_cvector, var_1475_cvector);
	var_1481_bool = var_1473_bool == 0; //@nz
	if(var_1481_bool != 0) {
	} else {
		@@var_1471_object:AddStationaryActorByType(var_1476_object, var_1474_cvector, var_1475_cvector, "fog", "fog_stat.xml");
		@@var_1458_object:add(var_1476_object);
		var_1476_object = 0;
		var_1472_int = var_1472_int + (int)1;
		goto Label_537;
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_4632(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object)
{
	var_3194_bool = var_3188_int == (int)0;
	if(var_3194_bool != 0) {
		var_3195_int = 0; var_3196_bool = 0;
		func_731((int)4, (bool)1);
		var_3197_int = 0; var_3198_bool = 0; var_3199_int = 0;
		func_748((int)4, (bool)1, (int)1);
		var_3200_int = 0; var_3201_int = 0; var_3202_object = Obj(); var_3203_object = Obj(); var_3204_object = Obj();
		var_3187_int = var_3201_int;
		var_3189_object = var_3202_object;
		var_3190_object = var_3203_object;
		var_3191_object = var_3204_object;
		func_655((int)4, var_3201_int, var_3202_object, var_3203_object, var_3204_object);
		var_3205_object = Obj(); var_3206_int = 0;
		var_3192_object = var_3205_object;
		func_229(var_3205_object, (int)2);
	}
	var_3207_int = 0; var_3208_bool = 0;
	func_714((int)4, (bool)0);
	var_3209_int = 0; var_3210_int = 0; var_3211_int = 0;
	var_3187_int = var_3210_int;
	var_3188_int = var_3211_int;
	func_3338((int)4, var_3210_int, var_3211_int);
	return 0;
}


func_9754()
{
	var_4815_bool = 0; var_4816_int = 0;
	func_10031(var_4815_bool, (int)192);
	var_4817_bool = 0; var_4818_int = 0;
	func_10031(var_4817_bool, (int)197);
	return 0;
}


func_4126(var_60_object)
{
	@@var_60_object:add("dt_house1_union2_05l");
	@@var_60_object:add("dt_house1_union2_05r");
	@@var_60_object:add("dt_house2_04");
	@@var_60_object:add("dt_house2_05");
	@@var_60_object:add("dt_house2_02");
	@@var_60_object:add("dt_house2_01");
	@@var_60_object:add("dt_house3_10_i2");
	@@var_60_object:add("dt_house3_10");
	@@var_60_object:add("dt_house3_11_i2");
	@@var_60_object:add("dt_house3_11");
	@@var_60_object:add("dt_house3_12_i2");
	@@var_60_object:add("dt_house3_12");
	@@var_60_object:add("dt_house_1_06");
	@@var_60_object:add("dt_house3_07_i2");
	@@var_60_object:add("dt_house3_07");
	@@var_60_object:add("house5_21");
	@@var_60_object:add("house1_se_02l");
	@@var_60_object:add("house1_se_02r");
	@@var_60_object:add("dt_house3_01_i2");
	@@var_60_object:add("dt_house3_02_i2");
	@@var_60_object:add("dt_house3_02");
	@@var_60_object:add("dt_house3_03_i2");
	@@var_60_object:add("dt_house3_03");
	return 0;
}


func_8222(var_3889_int)
{
	var_3890_int = 0; var_3891_int = 0;
	AddMessage((int)1160, (int)1159, var_3891_int);
	SetVariable("player_mail", (int)1);
	var_3891_int = var_3889_int;
	return 2;
}


func_2592(var_1513_int, var_1514_int, var_1515_int)
{
	var_1516_int = 0; var_1517_int = 0; var_1518_int = 0; var_1519_int = 0;
	var_1520_bool = 0;
	var_1520_bool = 0;
	var_1522_bool = var_1515_int > (int)8;
	if(var_1522_bool != 0) {
		var_1524_bool = var_1515_int < (int)21;
		if(var_1524_bool != 0) {
			var_1520_bool = 1;
		}
	}
	if(var_1520_bool != 0) {
		var_1525_int = 0; var_1526_string = ""; var_1527_string = ""; var_1528_int = 0;
		var_1513_int = var_1525_int;
		func_438(var_1525_int, "pers_boy", "boy_d.xml", (int)1);
		var_1529_int = 0; var_1530_string = ""; var_1531_string = ""; var_1532_int = 0;
		var_1513_int = var_1529_int;
		func_438(var_1529_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1533_int = 0; var_1534_string = ""; var_1535_string = ""; var_1536_int = 0;
		var_1513_int = var_1533_int;
		func_438(var_1533_int, "pers_girl", "girl_d.xml", (int)1);
		var_1537_int = 0; var_1538_string = ""; var_1539_string = ""; var_1540_int = 0;
		var_1513_int = var_1537_int;
		func_438(var_1537_int, "pers_worker", "worker_d.xml", (int)1);
		var_1541_int = 0; var_1542_string = ""; var_1543_string = ""; var_1544_int = 0;
		var_1513_int = var_1541_int;
		func_438(var_1541_int, "pers_worker", "worker2_d.xml", (int)1);
		var_1545_int = 0; var_1546_string = ""; var_1547_string = ""; var_1548_int = 0;
		var_1513_int = var_1545_int;
		func_438(var_1545_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1549_int = 0; var_1550_string = ""; var_1551_string = ""; var_1552_int = 0;
		var_1513_int = var_1549_int;
		func_438(var_1549_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1553_int = 0; var_1554_string = ""; var_1555_string = ""; var_1556_int = 0;
		var_1513_int = var_1553_int;
		func_464(var_1553_int, "fog", "fog.xml", (int)6);
		var_1562_float = 0; var_1563_int = 0;
		var_1514_int = var_1563_int;
		func_1022(var_1562_float, var_1563_int);
		var_1518_int = (int)1 * var_1562_float;
		var_1608_int = var_1518_int;
		if(var_1608_int != 0) {
			var_1609_int = 0; var_1610_string = ""; var_1611_string = ""; var_1612_int = 0;
			var_1513_int = var_1609_int;
			var_1518_int = var_1612_int;
			func_438(var_1609_int, "pers_bomber", "bomber.xml", var_1612_int);
		}
	} else {
		var_1647_int = 0; var_1648_string = ""; var_1649_string = ""; var_1650_int = 0;
		var_1513_int = var_1647_int;
		func_438(var_1647_int, "pers_boy", "boy_d.xml", (int)1);
		var_1651_int = 0; var_1652_string = ""; var_1653_string = ""; var_1654_int = 0;
		var_1513_int = var_1651_int;
		func_438(var_1651_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1655_int = 0; var_1656_string = ""; var_1657_string = ""; var_1658_int = 0;
		var_1513_int = var_1655_int;
		func_438(var_1655_int, "pers_girl", "girl_d.xml", (int)1);
		var_1659_int = 0; var_1660_string = ""; var_1661_string = ""; var_1662_int = 0;
		var_1513_int = var_1659_int;
		func_438(var_1659_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1663_int = 0; var_1664_string = ""; var_1665_string = ""; var_1666_int = 0;
		var_1513_int = var_1663_int;
		func_438(var_1663_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1667_int = 0; var_1668_string = ""; var_1669_string = ""; var_1670_int = 0;
		var_1513_int = var_1667_int;
		func_464(var_1667_int, "fog", "fog.xml", (int)6);
		var_1672_float = 0; var_1673_int = 0;
		var_1514_int = var_1673_int;
		func_1022(var_1672_float, var_1673_int);
		var_1519_int = (int)2 * var_1672_float;
		var_1674_int = var_1519_int;
		if(var_1674_int == 0) goto Label_2732;
		var_1675_int = 0; var_1676_string = ""; var_1677_string = ""; var_1678_int = 0;
		var_1513_int = var_1675_int;
		var_1519_int = var_1678_int;
		func_438(var_1675_int, "pers_bomber", "bomber.xml", var_1678_int);
	}
Label_2732:
	var_1613_int = 0; var_1614_string = ""; var_1615_string = ""; var_1616_int = 0; var_1617_int = 0; var_1618_int = 0;
	var_1513_int = var_1613_int;
	func_451(var_1613_int, "pers_worker", "agony1.xml", (int)2, (int)4, (int)4);
	var_1623_int = 0; var_1624_string = ""; var_1625_string = ""; var_1626_int = 0; var_1627_int = 0; var_1628_int = 0;
	var_1513_int = var_1623_int;
	func_451(var_1623_int, "pers_unosha", "agony1.xml", (int)2, (int)4, (int)4);
	var_1629_int = 0; var_1630_string = ""; var_1631_string = ""; var_1632_int = 0; var_1633_int = 0; var_1634_int = 0;
	var_1513_int = var_1629_int;
	func_451(var_1629_int, "pers_woman", "agony1.xml", (int)2, (int)4, (int)4);
	var_1635_int = 0; var_1636_string = ""; var_1637_string = ""; var_1638_int = 0; var_1639_int = 0; var_1640_int = 0;
	var_1513_int = var_1635_int;
	func_451(var_1635_int, "pers_vaxxabitka", "agony1.xml", (int)2, (int)4, (int)4);
	var_1641_int = 0; var_1642_string = ""; var_1643_string = ""; var_1644_int = 0; var_1645_int = 0; var_1646_int = 0;
	var_1513_int = var_1641_int;
	func_451(var_1641_int, "pers_wasted_girl", "agony1.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_6688()
{
	var_3869_object = Obj(); var_3870_bool = 0; var_3871_cvector = CVector(0,0,0); var_3872_cvector = CVector(0,0,0); var_3873_int = 0; var_3874_object = Obj(); var_3875_object = Obj(); var_3876_object = Obj(); var_3877_bool = 0; var_3878_cvector = CVector(0,0,0); var_3879_cvector = CVector(0,0,0); var_3880_int = 0; var_3881_object = Obj(); var_3882_object = Obj();
	Trace("Setting arena...");
	var_3884_object = GlobalVars[15];
	var_3885_bool = var_3884_object == 0; //@ne
	if(var_3885_bool != 0) {
		GetMainOutdoorScene(var_3876_object);
		@@var_3876_object:GetLocator("pt_arena_manager", var_3877_bool, var_3878_cvector, var_3879_cvector);
		var_3887_bool = var_3877_bool == 0; //@nz
		if(var_3887_bool != 0) {
			Trace("Locator doesn't exist for arena manager");
		} else {
				var_3906_object = GlobalVars[15];
				var_3907_object = Obj(); var_3908_object = Obj(); var_3909_cvector = CVector(0,0,0); var_3910_cvector = CVector(0,0,0);
				var_3876_object = var_3908_object;
				var_3878_cvector = var_3909_cvector;
				var_3879_cvector = var_3910_cvector;
				func_11636(var_3907_object, var_3908_object, var_3909_cvector, var_3910_cvector);
				var_3907_object = var_3906_object;
				GlobalVars[15] = var_3906_object;
		}
		var_3880_int = 0;

	Label_6716:
		var_3890_bool = var_3880_int < (int)6;
		if(var_3890_bool != 0) {
			var_3893_int = var_3880_int + (int)1;
			var_3894_int = "pt_arena_torch" + var_3893_int;
			@@var_3876_object:GetLocator(var_3894_int, var_3877_bool, var_3878_cvector, var_3879_cvector);
			var_3895_bool = var_3877_bool == 0; //@nz
			if(var_3895_bool != 0) {
				var_3898_int = var_3880_int + (int)1;
				var_3899_int = "Locator doesn't exist for arena torch " + var_3898_int;
				Trace(var_3899_int);
			} else {
				AddActorByType(var_3881_object, "scripted", var_3876_object, var_3878_cvector, var_3879_cvector, "torch.xml");
				var_3903_object = GlobalVars[16];
				@@var_3903_object:add(var_3881_object);
				var_3881_object = 0;
		}
			FindActor(var_3882_object, "arena_light");
			@@var_3882_object:Switch((bool)1);
			var_3882_object = 0;
			var_3876_object = 0;
	}
		return 14;

	}
	var_3880_int = var_3880_int + (int)1;
	goto Label_6716;
	
}


func_9764()
{
	var_4555_bool = 0; var_4556_string = ""; var_4557_string = "";
	func_153(var_4555_bool, "quest_d12_01", "init_mnogogrannik");
	return 0;
}


func_7208()
{
	var_320_float = 0; var_321_int = 0; var_322_int = 0; var_323_float = 0; var_324_int = 0; var_325_object = Obj(); var_326_float = 0; var_327_int = 0; var_328_int = 0; var_329_float = 0; var_330_int = 0; var_331_object = Obj();
	GetGameTime(var_326_float);
	var_327_int = 1;
	
Label_7212:
	var_333_bool = var_327_int < (int)12;
	if(var_333_bool != 0) {
		var_335_int = (int)16384 + var_327_int;
		var_337_float = (int)24 * var_327_int;
		SetTimeEvent(var_335_int, var_337_float);
		var_327_int = var_327_int + (int)1;
		goto Label_7212;
	}
	
Label_7225:
	var_340_bool = (int)0 < (int)288;
	if(var_340_bool != 0) {
		var_328_int = var_329_float;
		var_341_bool = var_329_float < var_326_float;
		if(var_341_bool != 0) {
		} else {
			var_344_int = (int)32768 + var_328_int;
			SetTimeEvent(var_344_int, var_329_float);
	}

	Label_7240:
		var_346_bool = (int)0 < (int)16;
		if(var_346_bool != 0) {
			var_347_string = ""; var_348_int = 0;
			var_330_int = var_348_int;
			func_223(var_347_string, var_348_int);
			SetVariable(var_347_string, (int)0);
			var_353_int = 0; var_354_bool = 0;
			var_330_int = var_353_int;
			func_731(var_353_int, (bool)0);
			var_330_int = var_330_int + (int)1;
			goto Label_7240;
		}
		var_365_int = 0; var_366_int = 0;
		var_366_int = var_326_float % (int)24;
		func_7280((int)0, var_366_int);
		GetMainOutdoorScene(var_331_object);
		var_3771_bool = 0;
		var_3771_bool = 1;
		var_3773_bool = var_326_float < (int)10;
		if(var_3773_bool != 1) {
			var_3775_bool = var_326_float >= (int)18;
			if(var_3775_bool != 1) {
				var_3771_bool = 0;
			}
		}
		@@var_331_object:SwitchLights((int)0, var_3771_bool);
		var_328_int = var_328_int + (int)1;
		goto Label_7225;
	}
	return 12;
	
}
EMIT "Stack[-1] = 0";


func_8233(var_4836_int)
{
	var_4837_int = 0; var_4838_int = 0;
	AddMessage((int)1158, (int)1157, var_4838_int);
	SetVariable("player_mail", (int)1);
	var_4838_int = var_4836_int;
	return 2;
}


func_6186(var_1237_int, var_1238_int, var_1239_object, var_1240_object, var_1241_object, var_1242_object)
{
	var_1244_bool = var_1238_int == (int)0;
	if(var_1244_bool != 0) {
		var_1245_int = 0; var_1246_bool = 0;
		func_731((int)14, (bool)0);
		var_1247_int = 0; var_1248_bool = 0; var_1249_int = 0;
		func_748((int)14, (bool)0, (int)1);
		var_1250_int = 0; var_1251_int = 0; var_1252_object = Obj(); var_1253_object = Obj(); var_1254_object = Obj();
		var_1250_int = 14;
		var_1237_int = var_1251_int;
		var_1239_object = var_1252_object;
		var_1240_object = var_1253_object;
		var_1241_object = var_1254_object;
		func_557(var_1251_int, var_1252_object, var_1253_object, var_1254_object);
		var_1255_object = Obj(); var_1256_int = 0;
		var_1242_object = var_1255_object;
		func_229(var_1255_object, (int)0);
	}
	var_1257_int = 0; var_1258_int = 0;
	var_1238_int = var_1258_int;
	func_909((int)14, var_1258_int);
	var_1268_int = 0; var_1269_int = 0; var_1270_int = 0;
	var_1237_int = var_1269_int;
	var_1238_int = var_1270_int;
	func_1122((int)14, var_1269_int, var_1270_int);
	return 0;
}


func_9771()
{
	var_4575_bool = 0; var_4576_string = ""; var_4577_string = "";
	func_153(var_4575_bool, "quest_d12_01", "init_theater");
	return 0;
}


func_44()
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	FindActor(var_7_object, "player");
	GetSceneByName(var_8_object, "cot_eva");
	var_14_bool = var_8_object == 0; //@nz
	if(var_14_bool != 0) {
		Trace("Starting scene not found");
		return 10;
	}
	@@var_8_object:GetLocator("pt_Danko", var_9_bool, var_10_cvector, var_11_cvector);
	var_17_bool = var_9_bool;
	if(var_17_bool != 0) {
		Teleport(var_7_object, var_8_object, var_10_cvector, var_11_cvector);
	}
	return 10;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


func_557(var_457_int, var_459_object, var_460_object, var_461_object)
{
	var_462_int = 0; var_463_bool = 0;
	var_457_int = var_462_int;
	func_477(var_462_int, (bool)1);
	var_490_object = Obj();
	var_459_object = var_490_object;
	func_189(var_490_object);
	var_500_object = Obj();
	var_460_object = var_500_object;
	func_189(var_500_object);
	var_501_object = Obj();
	var_461_object = var_501_object;
	func_189(var_501_object);
	return 0;
}


func_9778()
{
	var_4374_string = ""; var_4375_bool = 0;
	func_137("sobor@door1", (bool)1);
	return 0;
}


func_8244(var_4352_int)
{
	var_4353_int = 0; var_4354_int = 0;
	AddMessage((int)1154, (int)1153, var_4354_int);
	SetVariable("player_mail", (int)1);
	var_4354_int = var_4352_int;
	return 2;
}


func_5175(var_1075_int, var_1076_int, var_1077_object, var_1078_object, var_1079_object, var_1080_object)
{
	var_1082_bool = var_1076_int == (int)0;
	if(var_1082_bool != 0) {
		var_1083_int = 0; var_1084_bool = 0;
		func_731((int)8, (bool)0);
		var_1085_int = 0; var_1086_bool = 0; var_1087_int = 0;
		func_748((int)8, (bool)0, (int)1);
		var_1088_int = 0; var_1089_int = 0; var_1090_object = Obj(); var_1091_object = Obj(); var_1092_object = Obj();
		var_1088_int = 8;
		var_1075_int = var_1089_int;
		var_1077_object = var_1090_object;
		var_1078_object = var_1091_object;
		var_1079_object = var_1092_object;
		func_557(var_1089_int, var_1090_object, var_1091_object, var_1092_object);
		var_1093_object = Obj(); var_1094_int = 0;
		var_1080_object = var_1093_object;
		func_229(var_1093_object, (int)0);
	}
	var_1095_int = 0; var_1096_int = 0;
	var_1076_int = var_1096_int;
	func_805((int)8, var_1096_int);
	var_1097_int = 0; var_1098_int = 0; var_1099_int = 0;
	var_1075_int = var_1098_int;
	var_1076_int = var_1099_int;
	func_1270((int)8, var_1098_int, var_1099_int);
	return 0;
}


func_9785()
{
	var_4380_bool = 0; var_4381_string = ""; var_4382_string = "";
	func_153(var_4380_bool, "quest_d12_01", "place_birdmask");
	return 0;
}


func_8255(var_3985_int)
{
	var_3986_int = 0; var_3987_int = 0;
	AddMessage((int)1152, (int)1151, var_3987_int);
	SetVariable("player_mail", (int)1);
	var_3987_int = var_3985_int;
	return 2;
}


func_576(var_1419_int, var_1420_int, var_1421_object, var_1422_object, var_1423_object)
{
	var_1424_int = 0; var_1425_bool = 0;
	var_1419_int = var_1424_int;
	func_477(var_1424_int, (bool)0);
	var_1426_object = Obj();
	var_1421_object = var_1426_object;
	func_189(var_1426_object);
	var_1427_object = Obj();
	var_1422_object = var_1427_object;
	func_189(var_1427_object);
	var_1428_object = Obj();
	var_1423_object = var_1428_object;
	func_189(var_1428_object);
	var_1430_bool = var_1420_int <= (int)8;
	if(var_1430_bool != 0) {
		var_1431_string = ""; var_1432_object = Obj(); var_1433_string = ""; var_1434_string = "";
		var_1437_int = var_1419_int + (int)1;
		var_1438_int = "pt_blockpost" + var_1437_int;
		var_1431_string = var_1438_int + "_1_";
		var_1421_object = var_1432_object;
		func_511(var_1431_string, var_1432_object, "pers_patrool", "patrol_stat.xml");
		var_1457_string = ""; var_1458_object = Obj();
		var_1461_int = var_1419_int + (int)1;
		var_1462_int = "pt_fog" + var_1461_int;
		var_1457_string = var_1462_int + "_";
		var_1423_object = var_1458_object;
		func_533(var_1457_string, var_1458_object);
	} else {
		var_1484_string = ""; var_1485_object = Obj(); var_1486_string = ""; var_1487_string = "";
		var_1490_int = var_1419_int + (int)1;
		var_1491_int = "pt_blockpost" + var_1490_int;
		var_1484_string = var_1491_int + "_1_";
		var_1421_object = var_1485_object;
		func_511(var_1484_string, var_1485_object, "pers_soldat", "soldier.xml");
		var_1493_string = ""; var_1494_object = Obj(); var_1495_string = ""; var_1496_string = "";
		var_1499_int = var_1419_int + (int)1;
		var_1500_int = "pt_blockpost" + var_1499_int;
		var_1493_string = var_1500_int + "_2_";
		var_1422_object = var_1494_object;
		func_511(var_1493_string, var_1494_object, "pers_sanitar", "sanitar_stat.xml");
		var_1502_string = ""; var_1503_object = Obj();
		var_1506_int = var_1419_int + (int)1;
		var_1507_int = "pt_fog" + var_1506_int;
		var_1502_string = var_1507_int + "_";
		var_1423_object = var_1503_object;
		func_533(var_1502_string, var_1503_object);
	}
	return 0;
	
}


func_4672(var_126_object)
{
	@@var_126_object:add("dt_house3_14_i2");
	@@var_126_object:add("dt_house3_14");
	@@var_126_object:add("house1_arc_01l");
	@@var_126_object:add("house1_arc_01r");
	@@var_126_object:add("dt_House6_01");
	@@var_126_object:add("dt_house_1_09");
	@@var_126_object:add("house5_24");
	@@var_126_object:add("dt_House6_03");
	@@var_126_object:add("dt_House6_04");
	@@var_126_object:add("dt_house_1_08");
	@@var_126_object:add("house5_unoin_solidl");
	@@var_126_object:add("house5_unoin_solidr");
	@@var_126_object:add("dt_house2_12");
	@@var_126_object:add("dt_house2_11");
	@@var_126_object:add("dt_house2_13");
	@@var_126_object:add("dt_house2_09");
	@@var_126_object:add("dt_house2_08");
	@@var_126_object:add("dt_house2_07");
	@@var_126_object:add("dt_house2_06");
	@@var_126_object:add("house5_01");
	@@var_126_object:add("house5_15");
	@@var_126_object:add("house5_16");
	@@var_126_object:add("house5_17");
	@@var_126_object:add("house5_unoin04l");
	@@var_126_object:add("house5_unoin04r");
	@@var_126_object:add("house5_23");
	return 0;
}


func_5697(var_1156_int, var_1157_int, var_1158_object, var_1159_object, var_1160_object, var_1161_object)
{
	var_1163_bool = var_1157_int == (int)0;
	if(var_1163_bool != 0) {
		var_1164_int = 0; var_1165_bool = 0;
		func_731((int)11, (bool)0);
		var_1166_int = 0; var_1167_bool = 0; var_1168_int = 0;
		func_748((int)11, (bool)0, (int)1);
		var_1169_int = 0; var_1170_int = 0; var_1171_object = Obj(); var_1172_object = Obj(); var_1173_object = Obj();
		var_1169_int = 11;
		var_1156_int = var_1170_int;
		var_1158_object = var_1171_object;
		var_1159_object = var_1172_object;
		var_1160_object = var_1173_object;
		func_557(var_1170_int, var_1171_object, var_1172_object, var_1173_object);
		var_1174_object = Obj(); var_1175_int = 0;
		var_1161_object = var_1174_object;
		func_229(var_1174_object, (int)0);
	}
	var_1176_int = 0; var_1177_int = 0;
	var_1157_int = var_1177_int;
	func_805((int)11, var_1177_int);
	var_1178_int = 0; var_1179_int = 0; var_1180_int = 0;
	var_1156_int = var_1179_int;
	var_1157_int = var_1180_int;
	func_1270((int)11, var_1179_int, var_1180_int);
	return 0;
}


func_67(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj();
	FindActor(var_75_object, "player");
	var_75_object = var_73_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9792(var_4345_bool)
{
	var_4348_int = 0; var_4349_string = "";
	func_92(var_4348_int, "d1q01");
	var_4351_bool = var_4348_int == (int)0;
	if(var_4351_bool != 0) {
		var_4345_bool = 1;
		return 0;
	}
	var_4345_bool = 0;
	return 0;
}


func_1607(var_555_int, var_557_int)
{
	var_558_bool = 0;
	var_558_bool = 0;
	var_560_bool = var_557_int > (int)8;
	if(var_560_bool != 0) {
		var_562_bool = var_557_int < (int)21;
		if(var_562_bool != 0) {
			var_558_bool = 1;
		}
	}
	if(var_558_bool != 0) {
		var_563_int = 0; var_564_string = ""; var_565_string = ""; var_566_int = 0;
		var_555_int = var_563_int;
		func_438(var_563_int, "pers_boy", "boy.xml", (int)1);
		var_571_int = 0; var_572_string = ""; var_573_string = ""; var_574_int = 0;
		var_555_int = var_571_int;
		func_438(var_571_int, "pers_alkash", "alkash.xml", (int)1);
		var_575_int = 0; var_576_string = ""; var_577_string = ""; var_578_int = 0;
		var_555_int = var_575_int;
		func_438(var_575_int, "pers_girl", "girl.xml", (int)1);
		var_579_int = 0; var_580_string = ""; var_581_string = ""; var_582_int = 0;
		var_555_int = var_579_int;
		func_438(var_579_int, "pers_girl", "girl2.xml", (int)1);
		var_583_int = 0; var_584_string = ""; var_585_string = ""; var_586_int = 0;
		var_555_int = var_583_int;
		func_438(var_583_int, "pers_worker", "worker.xml", (int)2);
		var_587_int = 0; var_588_string = ""; var_589_string = ""; var_590_int = 0;
		var_555_int = var_587_int;
		func_438(var_587_int, "pers_worker", "worker2.xml", (int)2);
		var_591_int = 0; var_592_string = ""; var_593_string = ""; var_594_int = 0;
		var_555_int = var_591_int;
		func_438(var_591_int, "pers_dog", "dog.xml", (int)1);
	} else {
		var_595_int = 0; var_596_string = ""; var_597_string = ""; var_598_int = 0;
		var_555_int = var_595_int;
		func_438(var_595_int, "pers_alkash", "alkash.xml", (int)2);
		var_599_int = 0; var_600_string = ""; var_601_string = ""; var_602_int = 0;
		var_555_int = var_599_int;
		func_438(var_599_int, "pers_worker", "worker.xml", (int)1);
		var_603_int = 0; var_604_string = ""; var_605_string = ""; var_606_int = 0;
		var_555_int = var_603_int;
		func_438(var_603_int, "pers_worker", "worker2.xml", (int)1);
		var_607_int = 0; var_608_string = ""; var_609_string = ""; var_610_int = 0;
		var_555_int = var_607_int;
		func_438(var_607_int, "pers_dog", "dog.xml", (int)1);
	}
	return 0;
	
}


func_74(var_476_bool, var_477_object, var_478_string)
{
	var_479_bool = 0; var_480_bool = 0;
	var_483_bool = IsFuncExist(var_477_object, "HasProperty", (int)2);
	var_484_bool = var_483_bool == 0; //@nz
	if(var_484_bool != 0) {
		var_476_bool = 0;
		return 2;
	}
	@@var_477_object:HasProperty(var_478_string, var_480_bool);
	var_480_bool = var_476_bool;
	return 2;
}


func_8266(var_4665_int)
{
	var_4666_int = 0; var_4667_int = 0;
	AddMessage((int)1156, (int)1155, var_4667_int);
	SetVariable("player_mail", (int)1);
	var_4667_int = var_4665_int;
	return 2;
}


func_9804(var_4657_bool)
{
	var_4660_int = 0; var_4661_string = "";
	func_92(var_4660_int, "d1q01KaterinaUHave1day");
	var_4663_bool = var_4660_int == (int)1;
	if(var_4663_bool != 0) {
		var_4657_bool = 1;
		return 0;
	}
	var_4657_bool = 0;
	return 0;
}


func_6226(var_2472_int, var_2473_int, var_2474_object, var_2475_object, var_2476_object, var_2477_object)
{
	var_2479_bool = var_2473_int == (int)0;
	if(var_2479_bool != 0) {
		var_2480_int = 0; var_2481_bool = 0;
		func_731((int)14, (bool)1);
		var_2482_int = 0; var_2483_bool = 0; var_2484_int = 0;
		func_748((int)14, (bool)1, (int)1);
		var_2485_int = 0; var_2486_int = 0; var_2487_object = Obj(); var_2488_object = Obj(); var_2489_object = Obj();
		var_2472_int = var_2486_int;
		var_2474_object = var_2487_object;
		var_2475_object = var_2488_object;
		var_2476_object = var_2489_object;
		func_576((int)14, var_2486_int, var_2487_object, var_2488_object, var_2489_object);
		var_2490_object = Obj(); var_2491_int = 0;
		var_2477_object = var_2490_object;
		func_229(var_2490_object, (int)1);
	}
	var_2492_int = 0; var_2493_bool = 0;
	func_714((int)14, (bool)0);
	var_2494_int = 0; var_2495_int = 0; var_2496_int = 0;
	var_2472_int = var_2495_int;
	var_2473_int = var_2496_int;
	func_1797((int)14, var_2495_int, var_2496_int);
	return 0;
}


func_8277(var_4591_int)
{
	var_4592_int = 0; var_4593_int = 0;
	AddMessage((int)1175, (int)1174, var_4593_int);
	SetVariable("player_mail", (int)1);
	var_4593_int = var_4591_int;
	return 2;
}


func_3158(var_3287_int, var_3288_int, var_3289_int)
{
	var_3290_int = 0; var_3291_int = 0; var_3292_int = 0; var_3293_int = 0; var_3294_int = 0; var_3295_int = 0; var_3296_int = 0; var_3297_int = 0;
	var_3298_bool = 0;
	var_3298_bool = 0;
	var_3300_bool = var_3289_int > (int)8;
	if(var_3300_bool != 0) {
		var_3302_bool = var_3289_int < (int)21;
		if(var_3302_bool != 0) {
			var_3298_bool = 1;
		}
	}
	if(var_3298_bool != 0) {
		var_3303_int = 0; var_3304_string = ""; var_3305_string = ""; var_3306_int = 0;
		var_3287_int = var_3303_int;
		func_438(var_3303_int, "pers_woman", "woman.xml", (int)1);
		var_3307_int = 0; var_3308_string = ""; var_3309_string = ""; var_3310_int = 0;
		var_3287_int = var_3307_int;
		func_438(var_3307_int, "pers_unosha", "unosha.xml", (int)1);
		var_3311_int = 0; var_3312_string = ""; var_3313_string = ""; var_3314_int = 0;
		var_3287_int = var_3311_int;
		func_438(var_3311_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3315_int = 0; var_3316_string = ""; var_3317_string = ""; var_3318_int = 0;
		var_3287_int = var_3315_int;
		func_438(var_3315_int, "pers_boy", "boy.xml", (int)1);
		var_3320_int = var_3288_int + (int)1;
		var_3322_bool = var_3320_int >= (int)2;
		if(var_3322_bool != 0) {
			var_3323_int = 0; var_3324_string = ""; var_3325_string = ""; var_3326_int = 0;
			var_3287_int = var_3323_int;
			func_438(var_3323_int, "pers_patrool", "patrol.xml", (int)2);
		}
		var_3327_int = 0; var_3328_string = ""; var_3329_string = ""; var_3330_int = 0;
		var_3287_int = var_3327_int;
		func_438(var_3327_int, "pers_rat", "rat.xml", (int)2);
		var_3332_float = 0; var_3333_int = 0;
		var_3288_int = var_3333_int;
		func_932(var_3332_float, var_3333_int);
		var_3294_int = (int)1 * var_3332_float;
		var_3334_int = var_3294_int;
		if(var_3334_int != 0) {
			var_3335_int = 0; var_3336_string = ""; var_3337_string = ""; var_3338_int = 0;
			var_3287_int = var_3335_int;
			var_3294_int = var_3338_int;
			func_438(var_3335_int, "pers_grabitel", "grabitel.xml", var_3338_int);
		}
		var_3340_float = 0; var_3341_int = 0;
		var_3288_int = var_3341_int;
		func_1022(var_3340_float, var_3341_int);
		var_3295_int = (int)1 * var_3340_float;
		var_3342_int = var_3295_int;
		if(var_3342_int != 0) {
			var_3343_int = 0; var_3344_string = ""; var_3345_string = ""; var_3346_int = 0;
			var_3287_int = var_3343_int;
			var_3295_int = var_3346_int;
			func_438(var_3343_int, "pers_bomber", "bomber.xml", var_3346_int);
		}
	} else {
		var_3354_int = 0; var_3355_string = ""; var_3356_string = ""; var_3357_int = 0;
		var_3287_int = var_3354_int;
		func_438(var_3354_int, "pers_woman", "woman.xml", (int)1);
		var_3358_int = 0; var_3359_string = ""; var_3360_string = ""; var_3361_int = 0;
		var_3287_int = var_3358_int;
		func_438(var_3358_int, "pers_unosha", "unosha.xml", (int)1);
		var_3362_int = 0; var_3363_string = ""; var_3364_string = ""; var_3365_int = 0;
		var_3287_int = var_3362_int;
		func_438(var_3362_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3366_int = 0; var_3367_string = ""; var_3368_string = ""; var_3369_int = 0;
		var_3287_int = var_3366_int;
		func_438(var_3366_int, "pers_boy", "boy.xml", (int)1);
		var_3371_int = var_3288_int + (int)1;
		var_3373_bool = var_3371_int >= (int)2;
		if(var_3373_bool != 0) {
			var_3374_int = 0; var_3375_string = ""; var_3376_string = ""; var_3377_int = 0;
			var_3287_int = var_3374_int;
			func_438(var_3374_int, "pers_patrool", "patrol.xml", (int)2);
		}
		var_3378_int = 0; var_3379_string = ""; var_3380_string = ""; var_3381_int = 0;
		var_3287_int = var_3378_int;
		func_438(var_3378_int, "pers_rat", "rat.xml", (int)2);
		var_3383_float = 0; var_3384_int = 0;
		var_3288_int = var_3384_int;
		func_932(var_3383_float, var_3384_int);
		var_3296_int = (int)2 * var_3383_float;
		var_3385_int = var_3296_int;
		if(var_3385_int != 0) {
			var_3386_int = 0; var_3387_string = ""; var_3388_string = ""; var_3389_int = 0;
			var_3287_int = var_3386_int;
			var_3296_int = var_3389_int;
			func_438(var_3386_int, "pers_grabitel", "grabitel.xml", var_3389_int);
		}
		var_3391_float = 0; var_3392_int = 0;
		var_3288_int = var_3392_int;
		func_1022(var_3391_float, var_3392_int);
		var_3297_int = (int)1 * var_3391_float;
		var_3393_int = var_3297_int;
		if(var_3393_int == 0) goto Label_3324;
		var_3394_int = 0; var_3395_string = ""; var_3396_string = ""; var_3397_int = 0;
		var_3287_int = var_3394_int;
		var_3297_int = var_3397_int;
		func_438(var_3394_int, "pers_bomber", "bomber.xml", var_3397_int);
	}
Label_3324:
	var_3347_bool = 0; var_3348_int = 0; var_3349_int = 0;
	var_3288_int = var_3348_int;
	var_3289_int = var_3349_int;
	func_1112(var_3347_bool, var_3348_int, var_3349_int);
	if(var_3347_bool != 0) {
		var_3350_int = 0; var_3351_string = ""; var_3352_string = ""; var_3353_int = 0;
		var_3287_int = var_3350_int;
		func_438(var_3350_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 8;
	
}


func_86(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateObjectVector(var_29_object);
	var_29_object = var_27_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1112(var_783_bool, var_784_int, var_785_int)
{
	var_783_bool = 0;
	var_787_bool = var_784_int == (int)10;
	if(var_787_bool != 0) {
		var_789_bool = var_785_int < (int)6;
		if(var_789_bool != 0) {
			var_783_bool = 1;
		}
	}
	return 0;
}


func_9816(var_3913_bool)
{
	var_3916_int = 0; var_3917_string = "";
	func_92(var_3916_int, "d6q03");
	var_3921_bool = var_3916_int == (int)0;
	if(var_3921_bool != 0) {
		var_3913_bool = 1;
		return 0;
	}
	var_3913_bool = 0;
	return 0;
}


func_92(var_3916_int, var_3917_string)
{
	var_3918_int = 0; var_3919_int = 0;
	GetVariable(var_3917_string, var_3919_int);
	var_3919_int = var_3916_int;
	return 2;
}


func_9310()
{
	var_4042_object = Obj(); var_4043_object = Obj(); var_4044_object = Obj(); var_4045_object = Obj();
	func_10048(Obj());
	var_4046_object = var_4044_object;
	@@var_4044_object:FindMark(var_4045_object, "d5q01AlexandrGotoKaterina");
	var_4048_object = var_4045_object;
	if(var_4048_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01BigVladGotoAlexandr");
	var_4050_object = var_4045_object;
	if(var_4050_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01BurahMeeting1");
	var_4052_object = var_4045_object;
	if(var_4052_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01BurahMeeting2");
	var_4054_object = var_4045_object;
	if(var_4054_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01GrifWantsMoney");
	var_4056_object = var_4045_object;
	if(var_4056_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01GrifWillHelp");
	var_4058_object = var_4045_object;
	if(var_4058_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01KaterinaGotoLara");
	var_4060_object = var_4045_object;
	if(var_4060_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01PatrolGotoGrif");
	var_4062_object = var_4045_object;
	if(var_4062_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01RubinGotoBigVlad");
	var_4064_object = var_4045_object;
	if(var_4064_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q01RubinGotoBigVladSelf");
	var_4066_object = var_4045_object;
	if(var_4066_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q02AnnaGotoGorbun");
	var_4068_object = var_4045_object;
	if(var_4068_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q02AnnaGotoGorbunSelf");
	var_4070_object = var_4045_object;
	if(var_4070_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q02AnnaGotoKabak");
	var_4072_object = var_4045_object;
	if(var_4072_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q02GorbunFindTheDaughter");
	var_4074_object = var_4045_object;
	if(var_4074_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q02NudeMeeting");
	var_4076_object = var_4045_object;
	if(var_4076_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03BirdmaskBringMoneySelf");
	var_4078_object = var_4045_object;
	if(var_4078_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03BirdmaskGotoMladVlad");
	var_4080_object = var_4045_object;
	if(var_4080_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03BirdmaskGotoViktor");
	var_4082_object = var_4045_object;
	if(var_4082_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03MladVladSavePrisonersSelf");
	var_4084_object = var_4045_object;
	if(var_4084_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03SavePrisoners");
	var_4086_object = var_4045_object;
	if(var_4086_object != 0) {
		@@var_4045_object:Remove();
	}
	@@var_4044_object:FindMark(var_4045_object, "d5q03ViktorSavePrisonersSelf");
	var_4088_object = var_4045_object;
	if(var_4088_object != 0) {
		@@var_4045_object:Remove();
	}
	var_4089_bool = 0; var_4090_int = 0;
	func_10031(var_4089_bool, (int)139);
	var_4091_bool = 0; var_4092_int = 0;
	func_10031(var_4091_bool, (int)148);
	var_4093_bool = 0; var_4094_int = 0;
	func_10031(var_4093_bool, (int)154);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5215(var_2310_int, var_2311_int, var_2312_object, var_2313_object, var_2314_object, var_2315_object)
{
	var_2317_bool = var_2311_int == (int)0;
	if(var_2317_bool != 0) {
		var_2318_int = 0; var_2319_bool = 0;
		func_731((int)8, (bool)1);
		var_2320_int = 0; var_2321_bool = 0; var_2322_int = 0;
		func_748((int)8, (bool)1, (int)1);
		var_2323_int = 0; var_2324_int = 0; var_2325_object = Obj(); var_2326_object = Obj(); var_2327_object = Obj();
		var_2310_int = var_2324_int;
		var_2312_object = var_2325_object;
		var_2313_object = var_2326_object;
		var_2314_object = var_2327_object;
		func_576((int)8, var_2324_int, var_2325_object, var_2326_object, var_2327_object);
		var_2328_object = Obj(); var_2329_int = 0;
		var_2315_object = var_2328_object;
		func_229(var_2328_object, (int)1);
	}
	var_2330_int = 0; var_2331_bool = 0;
	func_714((int)8, (bool)0);
	var_2332_int = 0; var_2333_int = 0; var_2334_int = 0;
	var_2310_int = var_2333_int;
	var_2311_int = var_2334_int;
	func_2052((int)8, var_2333_int, var_2334_int);
	return 0;
}


func_8288(var_4682_int)
{
	var_4683_int = 0; var_4684_int = 0;
	AddMessage((int)14525, (int)14524, var_4684_int);
	SetVariable("player_mail", (int)1);
	var_4684_int = var_4682_int;
	return 2;
}


func_97(var_3992_object, var_3993_string)
{
	var_3994_object = Obj(); var_3995_object = Obj(); var_3996_object = Obj(); var_3997_object = Obj();
	GetMainOutdoorScene(var_3996_object);
	var_3999_int = var_3993_string + ".bin";
	AddBlankActor(var_3997_object, var_3996_object, var_3993_string, var_3999_int);
	var_3997_object = var_3992_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1122(var_1268_int, var_1269_int, var_1270_int)
{
	var_1271_bool = 0;
	var_1271_bool = 0;
	var_1273_bool = var_1270_int > (int)8;
	if(var_1273_bool != 0) {
		var_1275_bool = var_1270_int < (int)21;
		if(var_1275_bool != 0) {
			var_1271_bool = 1;
		}
	}
	if(var_1271_bool != 0) {
		var_1276_int = 0; var_1277_string = ""; var_1278_string = ""; var_1279_int = 0;
		var_1268_int = var_1276_int;
		func_438(var_1276_int, "pers_wasted_girl", "wasted_girl.xml", (int)2);
		var_1280_int = 0; var_1281_string = ""; var_1282_string = ""; var_1283_int = 0;
		var_1268_int = var_1280_int;
		func_438(var_1280_int, "pers_wasted_male", "wasted_male.xml", (int)3);
		var_1284_int = 0; var_1285_string = ""; var_1286_string = ""; var_1287_int = 0;
		var_1268_int = var_1284_int;
		func_438(var_1284_int, "pers_woman", "woman.xml", (int)3);
		var_1288_int = 0; var_1289_string = ""; var_1290_string = ""; var_1291_int = 0;
		var_1268_int = var_1288_int;
		func_438(var_1288_int, "pers_unosha", "unosha.xml", (int)2);
		var_1292_int = 0; var_1293_string = ""; var_1294_string = ""; var_1295_int = 0;
		var_1268_int = var_1292_int;
		func_438(var_1292_int, "pers_unosha", "unosha2.xml", (int)2);
		var_1296_int = 0; var_1297_string = ""; var_1298_string = ""; var_1299_int = 0;
		var_1268_int = var_1296_int;
		func_438(var_1296_int, "pers_boy", "boy.xml", (int)2);
		var_1300_int = 0; var_1301_string = ""; var_1302_string = ""; var_1303_int = 0;
		var_1268_int = var_1300_int;
		func_438(var_1300_int, "pers_girl", "girl.xml", (int)1);
		var_1304_int = 0; var_1305_string = ""; var_1306_string = ""; var_1307_int = 0;
		var_1268_int = var_1304_int;
		func_438(var_1304_int, "pers_girl", "girl2.xml", (int)1);
		var_1308_int = 0; var_1309_string = ""; var_1310_string = ""; var_1311_int = 0;
		var_1268_int = var_1308_int;
		func_438(var_1308_int, "pers_dog", "dog.xml", (int)1);
	} else {
		var_1331_int = 0; var_1332_string = ""; var_1333_string = ""; var_1334_int = 0;
		var_1268_int = var_1331_int;
		func_438(var_1331_int, "pers_wasted_girl", "wasted_girl.xml", (int)1);
		var_1335_int = 0; var_1336_string = ""; var_1337_string = ""; var_1338_int = 0;
		var_1268_int = var_1335_int;
		func_438(var_1335_int, "pers_wasted_male", "wasted_male.xml", (int)2);
		var_1339_int = 0; var_1340_string = ""; var_1341_string = ""; var_1342_int = 0;
		var_1268_int = var_1339_int;
		func_438(var_1339_int, "pers_unosha", "unosha.xml", (int)1);
		var_1343_int = 0; var_1344_string = ""; var_1345_string = ""; var_1346_int = 0;
		var_1268_int = var_1343_int;
		func_438(var_1343_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1347_int = 0; var_1348_string = ""; var_1349_string = ""; var_1350_int = 0;
		var_1268_int = var_1347_int;
		func_438(var_1347_int, "pers_dog", "dog.xml", (int)1);
	}
	var_1312_bool = 0;
	var_1312_bool = 0;
	var_1313_bool = 0;
	var_1313_bool = 0;
	var_1315_bool = var_1269_int == (int)0;
	if(var_1315_bool != 0) {
		var_1317_bool = var_1270_int > (int)12;
		if(var_1317_bool != 0) {
			var_1313_bool = 1;
		}
	}
	if(var_1313_bool != 0) {
		var_1319_bool = var_1270_int < (int)22;
		if(var_1319_bool != 0) {
			var_1312_bool = 1;
		}
	}
	if(var_1312_bool != 0) {
		var_1320_int = 0; var_1321_string = ""; var_1322_string = ""; var_1323_int = 0;
		var_1268_int = var_1320_int;
		func_438(var_1320_int, "pers_wasted_girl", "wasted_girl_killme.xml", (int)1);
	}
	var_1324_bool = 0; var_1325_int = 0; var_1326_int = 0;
	var_1269_int = var_1325_int;
	var_1270_int = var_1326_int;
	func_1112(var_1324_bool, var_1325_int, var_1326_int);
	if(var_1324_bool != 0) {
		var_1327_int = 0; var_1328_string = ""; var_1329_string = ""; var_1330_int = 0;
		var_1268_int = var_1327_int;
		func_438(var_1327_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 0;
	
}


func_6754()
{
	var_3755_int = 0; var_3756_int = 0; var_3757_object = Obj(); var_3758_object = Obj(); var_3759_int = 0; var_3760_int = 0; var_3761_object = Obj(); var_3762_object = Obj();
	Trace("Cleaning arena...");
	var_3764_object = GlobalVars[15];
	var_3765_bool = var_3764_object != 0; //@nn
	if(var_3765_bool != 0) {
		var_3766_object = GlobalVars[15];
		@@var_3766_object:Remove();
		var_3767_object = GlobalVars[16];
		@@var_3767_object:size(var_3759_int);
		var_3760_int = 0;

	Label_6768:
		var_3768_bool = var_3760_int < var_3759_int;
		if(var_3768_bool != 0) {
			var_3769_object = GlobalVars[16];
			@@var_3769_object:get(var_3761_object, var_3760_int);
			Trigger(var_3761_object, "remove");
			var_3761_object = 0;
			var_3760_int = var_3760_int + (int)1;
			goto Label_6768;
		}
		var_3772_object = GlobalVars[16];
		@@var_3772_object:clear();
		FindActor(var_3762_object, "arena_light");
		@@var_3762_object:Switch((bool)0);
		var_3762_object = 0;
	}
	return 8;
}


func_9828(var_4674_bool)
{
	var_4677_int = 0; var_4678_string = "";
	func_92(var_4677_int, "resque_list");
	var_4680_bool = var_4677_int != (int)0;
	if(var_4680_bool != 0) {
		var_4674_bool = 1;
		return 0;
	}
	var_4674_bool = 0;
	return 0;
}


func_3685(var_2919_int, var_2920_int, var_2921_int)
{
	var_2922_int = 0; var_2923_int = 0; var_2924_int = 0; var_2925_int = 0; var_2926_int = 0; var_2927_int = 0; var_2928_int = 0; var_2929_int = 0;
	var_2930_bool = 0;
	var_2930_bool = 0;
	var_2932_bool = var_2921_int > (int)8;
	if(var_2932_bool != 0) {
		var_2934_bool = var_2921_int < (int)21;
		if(var_2934_bool != 0) {
			var_2930_bool = 1;
		}
	}
	if(var_2930_bool != 0) {
		var_2935_int = 0; var_2936_string = ""; var_2937_string = ""; var_2938_int = 0;
		var_2919_int = var_2935_int;
		func_438(var_2935_int, "pers_woman", "woman.xml", (int)1);
		var_2939_int = 0; var_2940_string = ""; var_2941_string = ""; var_2942_int = 0;
		var_2919_int = var_2939_int;
		func_438(var_2939_int, "pers_unosha", "unosha.xml", (int)1);
		var_2943_int = 0; var_2944_string = ""; var_2945_string = ""; var_2946_int = 0;
		var_2919_int = var_2943_int;
		func_438(var_2943_int, "pers_unosha", "unosha2.xml", (int)1);
		var_2947_int = 0; var_2948_string = ""; var_2949_string = ""; var_2950_int = 0;
		var_2919_int = var_2947_int;
		func_438(var_2947_int, "pers_boy", "boy.xml", (int)1);
		var_2952_int = var_2920_int + (int)1;
		var_2954_bool = var_2952_int >= (int)2;
		if(var_2954_bool != 0) {
			var_2955_int = 0; var_2956_string = ""; var_2957_string = ""; var_2958_int = 0;
			var_2919_int = var_2955_int;
			func_438(var_2955_int, "pers_patrool", "patrol.xml", (int)3);
		}
		var_2959_int = 0; var_2960_string = ""; var_2961_string = ""; var_2962_int = 0;
		var_2919_int = var_2959_int;
		func_438(var_2959_int, "pers_rat", "rat.xml", (int)4);
		var_2964_float = 0; var_2965_int = 0;
		var_2920_int = var_2965_int;
		func_932(var_2964_float, var_2965_int);
		var_2926_int = (int)3 * var_2964_float;
		var_2966_int = var_2926_int;
		if(var_2966_int != 0) {
			var_2967_int = 0; var_2968_string = ""; var_2969_string = ""; var_2970_int = 0;
			var_2919_int = var_2967_int;
			var_2926_int = var_2970_int;
			func_438(var_2967_int, "pers_grabitel", "grabitel.xml", var_2970_int);
		}
		var_2972_float = 0; var_2973_int = 0;
		var_2920_int = var_2973_int;
		func_1022(var_2972_float, var_2973_int);
		var_2927_int = (int)2 * var_2972_float;
		var_2974_int = var_2927_int;
		if(var_2974_int != 0) {
			var_2975_int = 0; var_2976_string = ""; var_2977_string = ""; var_2978_int = 0;
			var_2919_int = var_2975_int;
			var_2927_int = var_2978_int;
			func_438(var_2975_int, "pers_bomber", "bomber.xml", var_2978_int);
		}
	} else {
		var_2979_int = 0; var_2980_string = ""; var_2981_string = ""; var_2982_int = 0;
		var_2919_int = var_2979_int;
		func_438(var_2979_int, "pers_woman", "woman.xml", (int)1);
		var_2983_int = 0; var_2984_string = ""; var_2985_string = ""; var_2986_int = 0;
		var_2919_int = var_2983_int;
		func_438(var_2983_int, "pers_unosha", "unosha.xml", (int)1);
		var_2987_int = 0; var_2988_string = ""; var_2989_string = ""; var_2990_int = 0;
		var_2919_int = var_2987_int;
		func_438(var_2987_int, "pers_unosha", "unosha2.xml", (int)1);
		var_2991_int = 0; var_2992_string = ""; var_2993_string = ""; var_2994_int = 0;
		var_2919_int = var_2991_int;
		func_438(var_2991_int, "pers_boy", "boy.xml", (int)1);
		var_2996_int = var_2920_int + (int)1;
		var_2998_bool = var_2996_int >= (int)2;
		if(var_2998_bool != 0) {
			var_2999_int = 0; var_3000_string = ""; var_3001_string = ""; var_3002_int = 0;
			var_2919_int = var_2999_int;
			func_438(var_2999_int, "pers_patrool", "patrol.xml", (int)3);
		}
		var_3003_int = 0; var_3004_string = ""; var_3005_string = ""; var_3006_int = 0;
		var_2919_int = var_3003_int;
		func_438(var_3003_int, "pers_rat", "rat.xml", (int)4);
		var_3008_float = 0; var_3009_int = 0;
		var_2920_int = var_3009_int;
		func_932(var_3008_float, var_3009_int);
		var_2928_int = (int)4 * var_3008_float;
		var_3010_int = var_2928_int;
		if(var_3010_int != 0) {
			var_3011_int = 0; var_3012_string = ""; var_3013_string = ""; var_3014_int = 0;
			var_2919_int = var_3011_int;
			var_2928_int = var_3014_int;
			func_438(var_3011_int, "pers_grabitel", "grabitel.xml", var_3014_int);
		}
		var_3016_float = 0; var_3017_int = 0;
		var_2920_int = var_3017_int;
		func_1022(var_3016_float, var_3017_int);
		var_2929_int = (int)3 * var_3016_float;
		var_3018_int = var_2929_int;
		if(var_3018_int == 0) goto Label_3851;
		var_3019_int = 0; var_3020_string = ""; var_3021_string = ""; var_3022_int = 0;
		var_2919_int = var_3019_int;
		var_2929_int = var_3022_int;
		func_438(var_3019_int, "pers_bomber", "bomber.xml", var_3022_int);
	}
Label_3851:
	return 8;
	
}


func_4197(var_693_int, var_694_int, var_695_object, var_696_object, var_697_object, var_698_object)
{
	var_700_bool = var_694_int == (int)0;
	if(var_700_bool != 0) {
		var_701_int = 0; var_702_bool = 0;
		func_731((int)2, (bool)0);
		var_703_int = 0; var_704_bool = 0; var_705_int = 0;
		func_748((int)2, (bool)0, (int)1);
		var_706_int = 0; var_707_int = 0; var_708_object = Obj(); var_709_object = Obj(); var_710_object = Obj();
		var_706_int = 2;
		var_693_int = var_707_int;
		var_695_object = var_708_object;
		var_696_object = var_709_object;
		var_697_object = var_710_object;
		func_557(var_707_int, var_708_object, var_709_object, var_710_object);
		var_711_object = Obj(); var_712_int = 0;
		var_698_object = var_711_object;
		func_229(var_711_object, (int)0);
	}
	var_713_int = 0; var_714_int = 0;
	var_694_int = var_714_int;
	func_872((int)2, var_714_int);
	var_715_int = 0; var_716_int = 0; var_717_int = 0;
	var_693_int = var_716_int;
	var_694_int = var_717_int;
	func_1411((int)2, var_716_int, var_717_int);
	return 0;
}


func_5737(var_2391_int, var_2392_int, var_2393_object, var_2394_object, var_2395_object, var_2396_object)
{
	var_2398_bool = var_2392_int == (int)0;
	if(var_2398_bool != 0) {
		var_2399_int = 0; var_2400_bool = 0;
		func_731((int)11, (bool)1);
		var_2401_int = 0; var_2402_bool = 0; var_2403_int = 0;
		func_748((int)11, (bool)1, (int)1);
		var_2404_int = 0; var_2405_int = 0; var_2406_object = Obj(); var_2407_object = Obj(); var_2408_object = Obj();
		var_2391_int = var_2405_int;
		var_2393_object = var_2406_object;
		var_2394_object = var_2407_object;
		var_2395_object = var_2408_object;
		func_576((int)11, var_2405_int, var_2406_object, var_2407_object, var_2408_object);
		var_2409_object = Obj(); var_2410_int = 0;
		var_2396_object = var_2409_object;
		func_229(var_2409_object, (int)1);
	}
	var_2411_int = 0; var_2412_bool = 0;
	func_714((int)11, (bool)0);
	var_2413_int = 0; var_2414_int = 0; var_2415_int = 0;
	var_2391_int = var_2414_int;
	var_2392_int = var_2415_int;
	func_2052((int)11, var_2414_int, var_2415_int);
	return 0;
}


func_8299(var_4756_int)
{
	var_4757_int = 0; var_4758_int = 0;
	AddMessage((int)14527, (int)14526, var_4758_int);
	SetVariable("player_mail", (int)1);
	var_4758_int = var_4756_int;
	return 2;
}


func_108(var_4288_object, var_4289_string)
{
	var_4290_object = Obj(); var_4291_object = Obj(); var_4292_object = Obj(); var_4293_object = Obj();
	GetMainOutdoorScene(var_4292_object);
	var_4295_int = var_4289_string + ".xml";
	AddBlankActorFromXml(var_4293_object, var_4292_object, var_4289_string, var_4295_int);
	var_4293_object = var_4288_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7280(var_365_int, var_366_int)
{
	var_368_int = 0; var_369_object = Obj(); var_370_object = Obj(); var_371_int = 0; var_372_object = Obj(); var_373_object = Obj();
	Trace("City update");
	
Label_7285:
	var_376_bool = (int)0 < (int)16;
	if(var_376_bool != 0) {
		var_377_int = 0;
		var_371_int = var_377_int;
		func_425(var_377_int);
		var_382_bool = 0; var_383_int = 0;
		var_371_int = var_383_int;
		func_323(var_382_bool, var_383_int);
		if(var_382_bool != 0) {
			var_392_int = 0; var_393_int = 0; var_394_int = 0;
			var_371_int = var_392_int;
			var_365_int = var_393_int;
			var_366_int = var_394_int;
			func_7360(var_392_int, var_393_int, var_394_int);
		} else {
			var_1379_bool = 0; var_1380_int = 0;
			var_371_int = var_1380_int;
			func_357(var_1379_bool, var_1380_int);
			if(var_1379_bool != 0) {
				var_1389_int = 0; var_1390_int = 0; var_1391_int = 0;
				var_371_int = var_1389_int;
				var_365_int = var_1390_int;
				var_366_int = var_1391_int;
				func_7585(var_1389_int, var_1390_int, var_1391_int);
				goto Label_7322;
			}
			var_2674_int = 0; var_2675_int = 0; var_2676_int = 0;
			var_371_int = var_2674_int;
			var_365_int = var_2675_int;
			var_366_int = var_2676_int;
			func_7810(var_2674_int, var_2675_int, var_2676_int);
	}
		var_3723_bool = var_366_int == (int)0;
		if(var_3723_bool != 0) {
			var_3724_int = 0;
			var_365_int = var_3724_int;
			func_11565(var_3724_int);
		}
		var_3761_bool = var_366_int == (int)10;
		if(var_3761_bool != 0) {
			Trace("day time");
			GetMainOutdoorScene(var_372_object);
			@@var_372_object:SwitchLights((int)0, (bool)0);
			var_372_object = 0;
		} else {
			var_3766_bool = var_366_int == (int)18;
			if(var_3766_bool == 0) goto Label_7359;
			Trace("night time");
			GetMainOutdoorScene(var_373_object);
			@@var_373_object:SwitchLights((int)0, (bool)1);
			var_373_object = 0;
		}
	Label_7359:
		var_371_int = var_371_int + (int)1;
		goto Label_7285;
	}
	return 6;
	
}


func_9840(var_4788_bool)
{
	var_4791_int = 0; var_4792_string = "";
	func_92(var_4791_int, "d11q03BurahVisit");
	var_4794_bool = var_4791_int != (int)0;
	if(var_4794_bool != 0) {
		var_4788_bool = 1;
		return 0;
	}
	var_4788_bool = 0;
	return 0;
}


func_8310(var_4631_int)
{
	var_4632_int = 0; var_4633_int = 0;
	AddMessage((int)15303, (int)15302, var_4633_int);
	SetVariable("player_mail", (int)1);
	var_4633_int = var_4631_int;
	return 2;
}


func_119(var_300_object, var_301_object, var_302_string, var_303_string, var_304_string)
{
	var_306_bool = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_object = Obj(); var_310_bool = 0; var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_object = Obj();
	@@var_301_object:GetLocator(var_302_string, var_310_bool, var_311_cvector, var_312_cvector);
	var_314_bool = var_310_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_316_int = "Locator " + var_302_string;
		var_318_int = var_316_int + " doesn't exist";
		Trace(var_318_int);
	} else {
		@@var_301_object:AddStationaryActor(Obj(), var_311_cvector, var_312_cvector, var_303_string, var_304_string);
	}
	var_313_object = var_300_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_6266(var_3562_int, var_3563_int, var_3564_object, var_3565_object, var_3566_object, var_3567_object)
{
	var_3569_bool = var_3563_int == (int)0;
	if(var_3569_bool != 0) {
		var_3570_int = 0; var_3571_bool = 0;
		func_731((int)14, (bool)1);
		var_3572_int = 0; var_3573_bool = 0; var_3574_int = 0;
		func_748((int)14, (bool)1, (int)1);
		var_3575_int = 0; var_3576_int = 0; var_3577_object = Obj(); var_3578_object = Obj(); var_3579_object = Obj();
		var_3562_int = var_3576_int;
		var_3564_object = var_3577_object;
		var_3565_object = var_3578_object;
		var_3566_object = var_3579_object;
		func_655((int)14, var_3576_int, var_3577_object, var_3578_object, var_3579_object);
		var_3580_object = Obj(); var_3581_int = 0;
		var_3567_object = var_3580_object;
		func_229(var_3580_object, (int)2);
	}
	var_3582_int = 0; var_3583_bool = 0;
	func_714((int)14, (bool)0);
	var_3584_int = 0; var_3585_int = 0; var_3586_int = 0;
	var_3562_int = var_3585_int;
	var_3563_int = var_3586_int;
	func_2978((int)14, var_3585_int, var_3586_int);
	return 0;
}


func_9852(var_4765_bool)
{
	var_4768_int = 0; var_4769_string = "";
	func_92(var_4768_int, "d11q04KlaraVisit");
	var_4771_bool = var_4768_int != (int)0;
	if(var_4771_bool != 0) {
		var_4765_bool = 1;
		return 0;
	}
	var_4765_bool = 0;
	return 0;
}


func_8321(var_4614_int)
{
	var_4615_int = 0; var_4616_int = 0;
	AddMessage((int)2851, (int)2850, var_4616_int);
	SetVariable("player_mail", (int)1);
	var_4616_int = var_4614_int;
	return 2;
}


func_7810(var_2674_int, var_2675_int, var_2676_int)
{
	var_2677_object = Obj(); var_2678_object = Obj(); var_2679_object = Obj(); var_2680_object = Obj(); var_2681_object = Obj(); var_2682_object = Obj(); var_2683_object = Obj(); var_2684_object = Obj();
	var_2685_object = GlobalVars[12];
	@@var_2685_object:get(var_2681_object, var_2674_int);
	var_2686_object = GlobalVars[13];
	@@var_2686_object:get(var_2682_object, var_2674_int);
	var_2687_object = GlobalVars[14];
	@@var_2687_object:get(var_2683_object, var_2674_int);
	var_2688_object = GlobalVars[17];
	@@var_2688_object:get(var_2684_object, var_2674_int);
	var_2690_bool = var_2674_int == (int)0;
	if(var_2690_bool != 0) {
		var_2691_int = 0; var_2692_int = 0; var_2693_object = Obj(); var_2694_object = Obj(); var_2695_object = Obj(); var_2696_object = Obj();
		var_2675_int = var_2691_int;
		var_2676_int = var_2692_int;
		var_2681_object = var_2693_object;
		var_2682_object = var_2694_object;
		var_2683_object = var_2695_object;
		var_2684_object = var_2696_object;
		func_3934(var_2691_int, var_2692_int, var_2693_object, var_2694_object, var_2695_object, var_2696_object);
	} else {
		var_2896_bool = var_2674_int == (int)1;
		if(var_2896_bool != 0) {
			var_2897_int = 0; var_2898_int = 0; var_2899_object = Obj(); var_2900_object = Obj(); var_2901_object = Obj(); var_2902_object = Obj();
			var_2675_int = var_2897_int;
			var_2676_int = var_2898_int;
			var_2681_object = var_2899_object;
			var_2682_object = var_2900_object;
			var_2683_object = var_2901_object;
			var_2684_object = var_2902_object;
			func_4086(var_2897_int, var_2898_int, var_2899_object, var_2900_object, var_2901_object, var_2902_object);
			goto Label_8030;
		}
		var_3024_bool = var_2674_int == (int)2;
		if(var_3024_bool != 0) {
			var_3025_int = 0; var_3026_int = 0; var_3027_object = Obj(); var_3028_object = Obj(); var_3029_object = Obj(); var_3030_object = Obj();
			var_2675_int = var_3025_int;
			var_2676_int = var_3026_int;
			var_2681_object = var_3027_object;
			var_2682_object = var_3028_object;
			var_2683_object = var_3029_object;
			var_2684_object = var_3030_object;
			func_4277(var_3025_int, var_3026_int, var_3027_object, var_3028_object, var_3029_object, var_3030_object);
			goto Label_8030;
		}
		var_3159_bool = var_2674_int == (int)3;
		if(var_3159_bool != 0) {
			var_3160_int = 0; var_3161_int = 0; var_3162_object = Obj(); var_3163_object = Obj(); var_3164_object = Obj(); var_3165_object = Obj();
			var_2675_int = var_3160_int;
			var_2676_int = var_3161_int;
			var_2681_object = var_3162_object;
			var_2682_object = var_3163_object;
			var_2683_object = var_3164_object;
			var_2684_object = var_3165_object;
			func_4450(var_3160_int, var_3161_int, var_3162_object, var_3163_object, var_3164_object, var_3165_object);
			goto Label_8030;
		}
		var_3186_bool = var_2674_int == (int)4;
		if(var_3186_bool != 0) {
			var_3187_int = 0; var_3188_int = 0; var_3189_object = Obj(); var_3190_object = Obj(); var_3191_object = Obj(); var_3192_object = Obj();
			var_2675_int = var_3187_int;
			var_2676_int = var_3188_int;
			var_2681_object = var_3189_object;
			var_2682_object = var_3190_object;
			var_2683_object = var_3191_object;
			var_2684_object = var_3192_object;
			func_4632(var_3187_int, var_3188_int, var_3189_object, var_3190_object, var_3191_object, var_3192_object);
			goto Label_8030;
		}
		var_3213_bool = var_2674_int == (int)5;
		if(var_3213_bool != 0) {
			var_3214_int = 0; var_3215_int = 0; var_3216_object = Obj(); var_3217_object = Obj(); var_3218_object = Obj(); var_3219_object = Obj();
			var_2675_int = var_3214_int;
			var_2676_int = var_3215_int;
			var_2681_object = var_3216_object;
			var_2682_object = var_3217_object;
			var_2683_object = var_3218_object;
			var_2684_object = var_3219_object;
			func_4832(var_3214_int, var_3215_int, var_3216_object, var_3217_object, var_3218_object, var_3219_object);
			goto Label_8030;
		}
		var_3240_bool = var_2674_int == (int)6;
		if(var_3240_bool != 0) {
			var_3241_int = 0; var_3242_int = 0; var_3243_object = Obj(); var_3244_object = Obj(); var_3245_object = Obj(); var_3246_object = Obj();
			var_2675_int = var_3241_int;
			var_2676_int = var_3242_int;
			var_2681_object = var_3243_object;
			var_2682_object = var_3244_object;
			var_2683_object = var_3245_object;
			var_2684_object = var_3246_object;
			func_4942(var_3241_int, var_3242_int, var_3243_object, var_3244_object, var_3245_object, var_3246_object);
			goto Label_8030;
		}
		var_3264_bool = var_2674_int == (int)7;
		if(var_3264_bool != 0) {
			var_3265_int = 0; var_3266_int = 0; var_3267_object = Obj(); var_3268_object = Obj(); var_3269_object = Obj(); var_3270_object = Obj();
			var_2675_int = var_3265_int;
			var_2676_int = var_3266_int;
			var_2681_object = var_3267_object;
			var_2682_object = var_3268_object;
			var_2683_object = var_3269_object;
			var_2684_object = var_3270_object;
			func_5100(var_3265_int, var_3266_int, var_3267_object, var_3268_object, var_3269_object, var_3270_object);
			goto Label_8030;
		}
		var_3399_bool = var_2674_int == (int)8;
		if(var_3399_bool != 0) {
			var_3400_int = 0; var_3401_int = 0; var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); var_3405_object = Obj();
			var_2675_int = var_3400_int;
			var_2676_int = var_3401_int;
			var_2681_object = var_3402_object;
			var_2682_object = var_3403_object;
			var_2683_object = var_3404_object;
			var_2684_object = var_3405_object;
			func_5255(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object);
			goto Label_8030;
		}
		var_3426_bool = var_2674_int == (int)9;
		if(var_3426_bool != 0) {
			var_3427_int = 0; var_3428_int = 0; var_3429_object = Obj(); var_3430_object = Obj(); var_3431_object = Obj(); var_3432_object = Obj();
			var_2675_int = var_3427_int;
			var_2676_int = var_3428_int;
			var_2681_object = var_3429_object;
			var_2682_object = var_3430_object;
			var_2683_object = var_3431_object;
			var_2684_object = var_3432_object;
			func_5428(var_3427_int, var_3428_int, var_3429_object, var_3430_object, var_3431_object, var_3432_object);
			goto Label_8030;
		}
		var_3453_bool = var_2674_int == (int)10;
		if(var_3453_bool != 0) {
			var_3454_int = 0; var_3455_int = 0; var_3456_object = Obj(); var_3457_object = Obj(); var_3458_object = Obj(); var_3459_object = Obj();
			var_2675_int = var_3454_int;
			var_2676_int = var_3455_int;
			var_2681_object = var_3456_object;
			var_2682_object = var_3457_object;
			var_2683_object = var_3458_object;
			var_2684_object = var_3459_object;
			func_5601(var_3454_int, var_3455_int, var_3456_object, var_3457_object, var_3458_object, var_3459_object);
			goto Label_8030;
		}
		var_3480_bool = var_2674_int == (int)11;
		if(var_3480_bool != 0) {
			var_3481_int = 0; var_3482_int = 0; var_3483_object = Obj(); var_3484_object = Obj(); var_3485_object = Obj(); var_3486_object = Obj();
			var_2675_int = var_3481_int;
			var_2676_int = var_3482_int;
			var_2681_object = var_3483_object;
			var_2682_object = var_3484_object;
			var_2683_object = var_3485_object;
			var_2684_object = var_3486_object;
			func_5777(var_3481_int, var_3482_int, var_3483_object, var_3484_object, var_3485_object, var_3486_object);
			goto Label_8030;
		}
		var_3507_bool = var_2674_int == (int)12;
		if(var_3507_bool != 0) {
			var_3508_int = 0; var_3509_int = 0; var_3510_object = Obj(); var_3511_object = Obj(); var_3512_object = Obj(); var_3513_object = Obj();
			var_2675_int = var_3508_int;
			var_2676_int = var_3509_int;
			var_2681_object = var_3510_object;
			var_2682_object = var_3511_object;
			var_2683_object = var_3512_object;
			var_2684_object = var_3513_object;
			func_5935(var_3508_int, var_3509_int, var_3510_object, var_3511_object, var_3512_object, var_3513_object);
			goto Label_8030;
		}
		var_3534_bool = var_2674_int == (int)13;
		if(var_3534_bool != 0) {
			var_3535_int = 0; var_3536_int = 0; var_3537_object = Obj(); var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj();
			var_2675_int = var_3535_int;
			var_2676_int = var_3536_int;
			var_2681_object = var_3537_object;
			var_2682_object = var_3538_object;
			var_2683_object = var_3539_object;
			var_2684_object = var_3540_object;
			func_6102(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object);
			goto Label_8030;
		}
		var_3561_bool = var_2674_int == (int)14;
		if(var_3561_bool != 0) {
			var_3562_int = 0; var_3563_int = 0; var_3564_object = Obj(); var_3565_object = Obj(); var_3566_object = Obj(); var_3567_object = Obj();
			var_2675_int = var_3562_int;
			var_2676_int = var_3563_int;
			var_2681_object = var_3564_object;
			var_2682_object = var_3565_object;
			var_2683_object = var_3566_object;
			var_2684_object = var_3567_object;
			func_6266(var_3562_int, var_3563_int, var_3564_object, var_3565_object, var_3566_object, var_3567_object);
			goto Label_8030;
		}
		var_3696_bool = var_2674_int == (int)15;
		if(var_3696_bool == 0) goto Label_8030;
		var_3697_int = 0; var_3698_int = 0; var_3699_object = Obj(); var_3700_object = Obj(); var_3701_object = Obj(); var_3702_object = Obj();
		var_2675_int = var_3697_int;
		var_2676_int = var_3698_int;
		var_2681_object = var_3699_object;
		var_2682_object = var_3700_object;
		var_2683_object = var_3701_object;
		var_2684_object = var_3702_object;
		func_6409(var_3697_int, var_3698_int, var_3699_object, var_3700_object, var_3701_object, var_3702_object);
	}
Label_8030:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_11395()
{
	SetVariable("player", (int)0);
	return 0;
}


func_6791()
{
	var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	var_26_object = GlobalVars[17];
	func_86(Obj());
	var_27_object = var_26_object;
	GlobalVars[17] = var_26_object;
	var_30_object = GlobalVars[12];
	func_86(Obj());
	var_31_object = var_30_object;
	GlobalVars[12] = var_30_object;
	var_32_object = GlobalVars[13];
	func_86(Obj());
	var_33_object = var_32_object;
	GlobalVars[13] = var_32_object;
	var_34_object = GlobalVars[14];
	func_86(Obj());
	var_35_object = var_34_object;
	GlobalVars[14] = var_34_object;
	var_22_int = 0;
	
Label_6817:
	var_37_bool = var_22_int < (int)16;
	if(var_37_bool != 0) {
		var_38_object = GlobalVars[12];
		var_39_object = Obj();
		func_86(var_39_object);
		@@var_38_object:add(var_39_object);
		var_40_object = GlobalVars[13];
		var_41_object = Obj();
		func_86(var_41_object);
		@@var_40_object:add(var_41_object);
		var_42_object = GlobalVars[14];
		var_43_object = Obj();
		func_86(var_43_object);
		@@var_42_object:add(var_43_object);
		var_22_int = var_22_int + (int)1;
		goto Label_6817;
	}
	CreateStringVector(var_23_object);
	var_45_object = GlobalVars[17];
	@@var_45_object:add(var_23_object);
	var_23_object = Obj();
	func_3852();
	CreateStringVector(var_23_object);
	var_47_object = GlobalVars[17];
	@@var_47_object:add(var_23_object);
	var_48_object = Obj();
	var_23_object = var_48_object;
	func_3974(var_48_object);
	CreateStringVector(var_23_object);
	var_59_object = GlobalVars[17];
	@@var_59_object:add(var_23_object);
	var_60_object = Obj();
	var_23_object = var_60_object;
	func_4126(var_60_object);
	CreateStringVector(var_23_object);
	var_84_object = GlobalVars[17];
	@@var_84_object:add(var_23_object);
	var_85_object = Obj();
	var_23_object = var_85_object;
	func_4317(var_85_object);
	CreateStringVector(var_23_object);
	var_103_object = GlobalVars[17];
	@@var_103_object:add(var_23_object);
	var_104_object = Obj();
	var_23_object = var_104_object;
	func_4490(var_104_object);
	CreateStringVector(var_23_object);
	var_125_object = GlobalVars[17];
	@@var_125_object:add(var_23_object);
	var_126_object = Obj();
	var_23_object = var_126_object;
	func_4672(var_126_object);
	CreateStringVector(var_23_object);
	var_153_object = GlobalVars[17];
	@@var_153_object:add(var_23_object);
	var_23_object = Obj();
	func_4872();
	CreateStringVector(var_23_object);
	var_155_object = GlobalVars[17];
	@@var_155_object:add(var_23_object);
	var_156_object = Obj();
	var_23_object = var_156_object;
	func_4976(var_156_object);
	CreateStringVector(var_23_object);
	var_171_object = GlobalVars[17];
	@@var_171_object:add(var_23_object);
	var_172_object = Obj();
	var_23_object = var_172_object;
	func_5140(var_172_object);
	CreateStringVector(var_23_object);
	var_184_object = GlobalVars[17];
	@@var_184_object:add(var_23_object);
	var_185_object = Obj();
	var_23_object = var_185_object;
	func_5295(var_185_object);
	CreateStringVector(var_23_object);
	var_203_object = GlobalVars[17];
	@@var_203_object:add(var_23_object);
	var_204_object = Obj();
	var_23_object = var_204_object;
	func_5468(var_204_object);
	CreateStringVector(var_23_object);
	var_222_object = GlobalVars[17];
	@@var_222_object:add(var_23_object);
	var_223_object = Obj();
	var_23_object = var_223_object;
	func_5641(var_223_object);
	CreateStringVector(var_23_object);
	var_242_object = GlobalVars[17];
	@@var_242_object:add(var_23_object);
	var_243_object = Obj();
	var_23_object = var_243_object;
	func_5817(var_243_object);
	CreateStringVector(var_23_object);
	var_256_object = GlobalVars[17];
	@@var_256_object:add(var_23_object);
	var_257_object = Obj();
	var_23_object = var_257_object;
	func_5975(var_257_object);
	CreateStringVector(var_23_object);
	var_273_object = GlobalVars[17];
	@@var_273_object:add(var_23_object);
	var_274_object = Obj();
	var_23_object = var_274_object;
	func_6142(var_274_object);
	CreateStringVector(var_23_object);
	var_289_object = GlobalVars[17];
	@@var_289_object:add(var_23_object);
	var_290_object = Obj();
	var_23_object = var_290_object;
	func_6306(var_290_object);
	GetMainOutdoorScene(var_24_object);
	var_25_int = 1;
	
Label_6988:
	var_299_bool = var_25_int <= (int)17;
	if(var_299_bool != 0) {
		var_300_object = Obj(); var_301_object = Obj(); var_302_string = ""; var_303_string = ""; var_304_string = "";
		var_24_object = var_301_object;
		var_302_string = "pt_bull" + var_25_int;
		func_119(var_300_object, var_301_object, var_302_string, "pers_bull", "bull.xml");
		var_25_int = var_25_int + (int)1;
		goto Label_6988;
	}
	return 8;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_11400(var_118_bool, var_119_int)
{
	var_121_bool = var_119_int == (int)6;
	if(var_121_bool != 0) {
		var_118_bool = 0;
		return 0;
	}
	var_122_bool = 0; var_123_int = 0;
	func_217(var_122_bool, (int)4);
	if(var_122_bool != 0) {
		var_131_bool = var_119_int == (int)15;
		if(var_131_bool != 0) {
			var_118_bool = 0;
			return 0;
		}
		var_133_bool = var_119_int == (int)9;
		if(var_133_bool != 0) {
			var_118_bool = 0;
			return 0;
		}
	} else {
		var_134_bool = 0; var_135_int = 0;
		func_217(var_134_bool, (int)5);
		if(var_134_bool != 0) {
			var_137_bool = var_119_int == (int)15;
			if(var_137_bool != 0) {
				var_118_bool = 0;
				return 0;
			}
			goto Label_11443;
		}
		var_138_bool = 0; var_139_int = 0;
		func_217(var_138_bool, (int)6);
		if(var_138_bool == 0) goto Label_11443;
		var_141_bool = var_119_int == (int)15;
		if(var_141_bool == 0) goto Label_11443;
		var_118_bool = 0;
		return 0;
	}
Label_11443:
	var_118_bool = 1;
	return 0;
	
}


func_137(var_3922_string, var_3923_bool)
{
	var_3924_object = Obj(); var_3925_object = Obj();
	FindActor(var_3925_object, var_3922_string);
	var_3926_bool = var_3925_object == 0; //@nz
	if(var_3926_bool != 0) {
		var_3928_int = "Door " + var_3922_string;
		var_3930_int = var_3928_int + " not found";
		Trace(var_3930_int);
	}
	@@var_3925_object:SetProperty("locked", var_3923_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5255(var_3400_int, var_3401_int, var_3402_object, var_3403_object, var_3404_object, var_3405_object)
{
	var_3407_bool = var_3401_int == (int)0;
	if(var_3407_bool != 0) {
		var_3408_int = 0; var_3409_bool = 0;
		func_731((int)8, (bool)1);
		var_3410_int = 0; var_3411_bool = 0; var_3412_int = 0;
		func_748((int)8, (bool)1, (int)1);
		var_3413_int = 0; var_3414_int = 0; var_3415_object = Obj(); var_3416_object = Obj(); var_3417_object = Obj();
		var_3400_int = var_3414_int;
		var_3402_object = var_3415_object;
		var_3403_object = var_3416_object;
		var_3404_object = var_3417_object;
		func_655((int)8, var_3414_int, var_3415_object, var_3416_object, var_3417_object);
		var_3418_object = Obj(); var_3419_int = 0;
		var_3405_object = var_3418_object;
		func_229(var_3418_object, (int)2);
	}
	var_3420_int = 0; var_3421_bool = 0;
	func_714((int)8, (bool)0);
	var_3422_int = 0; var_3423_int = 0; var_3424_int = 0;
	var_3400_int = var_3423_int;
	var_3401_int = var_3424_int;
	func_3158((int)8, var_3423_int, var_3424_int);
	return 0;
}


func_9864(var_4587_bool)
{
	var_4587_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_8332(var_4648_int)
{
	var_4649_int = 0; var_4650_int = 0;
	AddMessage((int)15334, (int)15333, var_4650_int);
	SetVariable("player_mail", (int)1);
	var_4650_int = var_4648_int;
	return 2;
}


func_4237(var_1827_int, var_1828_int, var_1829_object, var_1830_object, var_1831_object, var_1832_object)
{
	var_1834_bool = var_1828_int == (int)0;
	if(var_1834_bool != 0) {
		var_1835_int = 0; var_1836_bool = 0;
		func_731((int)2, (bool)1);
		var_1837_int = 0; var_1838_bool = 0; var_1839_int = 0;
		func_748((int)2, (bool)1, (int)1);
		var_1840_int = 0; var_1841_int = 0; var_1842_object = Obj(); var_1843_object = Obj(); var_1844_object = Obj();
		var_1827_int = var_1841_int;
		var_1829_object = var_1842_object;
		var_1830_object = var_1843_object;
		var_1831_object = var_1844_object;
		func_576((int)2, var_1841_int, var_1842_object, var_1843_object, var_1844_object);
		var_1845_object = Obj(); var_1846_int = 0;
		var_1832_object = var_1845_object;
		func_229(var_1845_object, (int)1);
	}
	var_1847_int = 0; var_1848_bool = 0;
	func_714((int)2, (bool)0);
	var_1849_int = 0; var_1850_int = 0; var_1851_int = 0;
	var_1827_int = var_1850_int;
	var_1828_int = var_1851_int;
	func_2310((int)2, var_1850_int, var_1851_int);
	return 0;
}


func_9869(var_4600_bool)
{
	var_4603_int = 0; var_4604_string = "";
	func_92(var_4603_int, "d3RubinVisit");
	var_4606_bool = var_4603_int == (int)1;
	if(var_4606_bool != 0) {
		var_4600_bool = 1;
		return 0;
	}
	var_4600_bool = 0;
	return 0;
}


func_655(var_2704_int, var_2705_int, var_2706_object, var_2707_object, var_2708_object)
{
	var_2709_int = 0; var_2710_bool = 0;
	var_2704_int = var_2709_int;
	func_477(var_2709_int, (bool)0);
	var_2711_object = Obj();
	var_2706_object = var_2711_object;
	func_189(var_2711_object);
	var_2712_object = Obj();
	var_2707_object = var_2712_object;
	func_189(var_2712_object);
	var_2713_object = Obj();
	var_2708_object = var_2713_object;
	func_189(var_2713_object);
	var_2715_bool = var_2705_int <= (int)8;
	if(var_2715_bool != 0) {
		var_2716_string = ""; var_2717_object = Obj(); var_2718_string = ""; var_2719_string = "";
		var_2722_int = var_2704_int + (int)1;
		var_2723_int = "pt_blockpost" + var_2722_int;
		var_2716_string = var_2723_int + "_1_";
		var_2706_object = var_2717_object;
		func_511(var_2716_string, var_2717_object, "pers_patrool", "patrol_stat.xml");
	} else {
		var_2725_string = ""; var_2726_object = Obj(); var_2727_string = ""; var_2728_string = "";
		var_2731_int = var_2704_int + (int)1;
		var_2732_int = "pt_blockpost" + var_2731_int;
		var_2725_string = var_2732_int + "_1_";
		var_2706_object = var_2726_object;
		func_511(var_2725_string, var_2726_object, "pers_soldat", "soldier.xml");
		var_2734_string = ""; var_2735_object = Obj(); var_2736_string = ""; var_2737_string = "";
		var_2740_int = var_2704_int + (int)1;
		var_2741_int = "pt_blockpost" + var_2740_int;
		var_2734_string = var_2741_int + "_2_";
		var_2707_object = var_2735_object;
		func_511(var_2734_string, var_2735_object, "pers_sanitar", "sanitar_stat.xml");
	}
	return 0;
	
}


func_4752(var_917_int, var_918_int, var_919_object, var_920_object, var_921_object, var_922_object)
{
	var_924_bool = var_918_int == (int)0;
	if(var_924_bool != 0) {
		var_925_int = 0; var_926_bool = 0;
		func_731((int)5, (bool)0);
		var_927_int = 0; var_928_bool = 0; var_929_int = 0;
		func_748((int)5, (bool)0, (int)1);
		var_930_int = 0; var_931_int = 0; var_932_object = Obj(); var_933_object = Obj(); var_934_object = Obj();
		var_930_int = 5;
		var_917_int = var_931_int;
		var_919_object = var_932_object;
		var_920_object = var_933_object;
		var_921_object = var_934_object;
		func_557(var_931_int, var_932_object, var_933_object, var_934_object);
		var_935_object = Obj(); var_936_int = 0;
		var_922_object = var_935_object;
		func_229(var_935_object, (int)0);
	}
	var_937_int = 0; var_938_int = 0;
	var_918_int = var_938_int;
	func_805((int)5, var_938_int);
	var_939_int = 0; var_940_int = 0; var_941_int = 0;
	var_917_int = var_940_int;
	var_918_int = var_941_int;
	func_1411((int)5, var_940_int, var_941_int);
	return 0;
}


func_5777(var_3481_int, var_3482_int, var_3483_object, var_3484_object, var_3485_object, var_3486_object)
{
	var_3488_bool = var_3482_int == (int)0;
	if(var_3488_bool != 0) {
		var_3489_int = 0; var_3490_bool = 0;
		func_731((int)11, (bool)1);
		var_3491_int = 0; var_3492_bool = 0; var_3493_int = 0;
		func_748((int)11, (bool)1, (int)1);
		var_3494_int = 0; var_3495_int = 0; var_3496_object = Obj(); var_3497_object = Obj(); var_3498_object = Obj();
		var_3481_int = var_3495_int;
		var_3483_object = var_3496_object;
		var_3484_object = var_3497_object;
		var_3485_object = var_3498_object;
		func_655((int)11, var_3495_int, var_3496_object, var_3497_object, var_3498_object);
		var_3499_object = Obj(); var_3500_int = 0;
		var_3486_object = var_3499_object;
		func_229(var_3499_object, (int)2);
	}
	var_3501_int = 0; var_3502_bool = 0;
	func_714((int)11, (bool)0);
	var_3503_int = 0; var_3504_int = 0; var_3505_int = 0;
	var_3481_int = var_3504_int;
	var_3482_int = var_3505_int;
	func_3158((int)11, var_3504_int, var_3505_int);
	return 0;
}


func_8343(var_4853_int)
{
	var_4854_int = 0; var_4855_int = 0;
	AddMessage((int)2853, (int)2852, var_4855_int);
	SetVariable("player_mail", (int)1);
	var_4855_int = var_4853_int;
	return 2;
}


func_153(var_4380_bool, var_4381_string, var_4382_string)
{
	var_4383_object = Obj(); var_4384_object = Obj();
	FindActor(var_4384_object, var_4381_string);
	var_4385_bool = var_4384_object == 0; //@ne
	if(var_4385_bool != 0) {
		var_4380_bool = 0;
		return 2;
	}
	Trigger(var_4384_object, var_4382_string);
	var_4380_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9881(var_4623_bool)
{
	var_4626_int = 0; var_4627_string = "";
	func_92(var_4626_int, "d3GeorgVisit");
	var_4629_bool = var_4626_int == (int)1;
	if(var_4629_bool != 0) {
		var_4623_bool = 1;
		return 0;
	}
	var_4623_bool = 0;
	return 0;
}


func_1697(var_635_int, var_636_int, var_637_int)
{
	var_638_bool = 0;
	var_638_bool = 0;
	var_640_bool = var_637_int > (int)8;
	if(var_640_bool != 0) {
		var_642_bool = var_637_int < (int)21;
		if(var_642_bool != 0) {
			var_638_bool = 1;
		}
	}
	if(var_638_bool != 0) {
		var_643_int = 0; var_644_string = ""; var_645_string = ""; var_646_int = 0;
		var_635_int = var_643_int;
		func_438(var_643_int, "pers_worker", "worker.xml", (int)3);
		var_647_int = 0; var_648_string = ""; var_649_string = ""; var_650_int = 0;
		var_635_int = var_647_int;
		func_438(var_647_int, "pers_worker", "worker2.xml", (int)3);
		var_651_int = 0; var_652_string = ""; var_653_string = ""; var_654_int = 0;
		var_635_int = var_651_int;
		func_438(var_651_int, "pers_alkash", "alkash.xml", (int)1);
		var_655_int = 0; var_656_string = ""; var_657_string = ""; var_658_int = 0;
		var_635_int = var_655_int;
		func_438(var_655_int, "pers_woman", "woman.xml", (int)2);
		var_659_int = 0; var_660_string = ""; var_661_string = ""; var_662_int = 0;
		var_635_int = var_659_int;
		func_438(var_659_int, "pers_dog", "dog.xml", (int)1);
	} else {
		var_675_int = 0; var_676_string = ""; var_677_string = ""; var_678_int = 0;
		var_635_int = var_675_int;
		func_438(var_675_int, "pers_alkash", "alkash.xml", (int)2);
		var_679_int = 0; var_680_string = ""; var_681_string = ""; var_682_int = 0;
		var_635_int = var_679_int;
		func_438(var_679_int, "pers_worker", "worker.xml", (int)1);
		var_683_int = 0; var_684_string = ""; var_685_string = ""; var_686_int = 0;
		var_635_int = var_683_int;
		func_438(var_683_int, "pers_worker", "worker2.xml", (int)1);
		var_687_int = 0; var_688_string = ""; var_689_string = ""; var_690_int = 0;
		var_635_int = var_687_int;
		func_438(var_687_int, "pers_dog", "dog.xml", (int)1);
	}
	var_663_bool = 0;
	var_663_bool = 0;
	var_664_bool = 0;
	var_664_bool = 0;
	var_666_bool = var_636_int == (int)0;
	if(var_666_bool != 0) {
		var_668_bool = var_637_int > (int)12;
		if(var_668_bool != 0) {
			var_664_bool = 1;
		}
	}
	if(var_664_bool != 0) {
		var_670_bool = var_637_int < (int)22;
		if(var_670_bool != 0) {
			var_663_bool = 1;
		}
	}
	if(var_663_bool != 0) {
		var_671_int = 0; var_672_string = ""; var_673_string = ""; var_674_int = 0;
		var_635_int = var_671_int;
		func_438(var_671_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	return 0;
	
}


func_6306(var_290_object)
{
	@@var_290_object:add("lc_house3_05_i2");
	@@var_290_object:add("lc_house3_05");
	@@var_290_object:add("lc_house3_06_i2");
	@@var_290_object:add("lc_house3_06");
	@@var_290_object:add("lc_House6_06");
	@@var_290_object:add("lc_house3_04_i2");
	@@var_290_object:add("lc_house3_04");
	return 0;
}


func_8354(var_4095_int)
{
	var_4096_int = 0; var_4097_int = 0;
	AddMessage((int)3175, (int)3174, var_4097_int);
	SetVariable("player_mail", (int)1);
	var_4097_int = var_4095_int;
	return 2;
}


func_165(var_3904_bool, var_3905_string, var_3906_string, var_3907_string)
{
	var_3908_object = Obj(); var_3909_object = Obj();
	FindActor(var_3909_object, var_3905_string);
	var_3910_bool = var_3909_object == 0; //@ne
	if(var_3910_bool != 0) {
		var_3904_bool = 0;
		return 2;
	}
	Trigger(var_3909_object, var_3906_string, var_3907_string);
	var_3904_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9893(var_4640_bool)
{
	var_4643_int = 0; var_4644_string = "";
	func_92(var_4643_int, "d4BigVladVisit");
	var_4646_bool = var_4643_int == (int)1;
	if(var_4646_bool != 0) {
		var_4640_bool = 1;
		return 0;
	}
	var_4640_bool = 0;
	return 0;
}


func_8365(var_4904_int)
{
	var_4905_int = 0; var_4906_int = 0;
	AddMessage((int)3177, (int)3176, var_4906_int);
	SetVariable("player_mail", (int)1);
	var_4906_int = var_4904_int;
	return 2;
}


func_5295(var_185_object)
{
	@@var_185_object:add("r3_house_2_02");
	@@var_185_object:add("r3_house7_01");
	@@var_185_object:add("r3_house3_02_i2");
	@@var_185_object:add("r3_house3_02");
	@@var_185_object:add("r3_house7_02");
	@@var_185_object:add("r3_house4_05_i2");
	@@var_185_object:add("r3_house4_05");
	@@var_185_object:add("r3_house4_03_i2");
	@@var_185_object:add("r3_house4_04_i2");
	@@var_185_object:add("r3_house4_04");
	@@var_185_object:add("r3_house4_01_i2");
	@@var_185_object:add("r3_house4_01");
	@@var_185_object:add("r3_house_2_01");
	@@var_185_object:add("r3_house4_02_i2");
	@@var_185_object:add("r3_house4_02");
	@@var_185_object:add("r3_house3_01_i2");
	@@var_185_object:add("r3_house3_01");
	return 0;
}


func_177(var_3982_bool, var_3983_string)
{
	var_3984_object = Obj(); var_3985_object = Obj();
	FindActor(var_3985_object, var_3983_string);
	var_3986_bool = var_3985_object == 0; //@nz
	if(var_3986_bool != 0) {
		var_3982_bool = 0;
		return 2;
	}
	RemoveActor(var_3985_object);
	var_3982_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9905(var_4845_bool)
{
	var_4848_int = 0; var_4849_string = "";
	func_92(var_4848_int, "d5RubinVisit");
	var_4851_bool = var_4848_int == (int)1;
	if(var_4851_bool != 0) {
		var_4845_bool = 1;
		return 0;
	}
	var_4845_bool = 0;
	return 0;
}


func_4277(var_3025_int, var_3026_int, var_3027_object, var_3028_object, var_3029_object, var_3030_object)
{
	var_3032_bool = var_3026_int == (int)0;
	if(var_3032_bool != 0) {
		var_3033_int = 0; var_3034_bool = 0;
		func_731((int)2, (bool)1);
		var_3035_int = 0; var_3036_bool = 0; var_3037_int = 0;
		func_748((int)2, (bool)1, (int)1);
		var_3038_int = 0; var_3039_int = 0; var_3040_object = Obj(); var_3041_object = Obj(); var_3042_object = Obj();
		var_3025_int = var_3039_int;
		var_3027_object = var_3040_object;
		var_3028_object = var_3041_object;
		var_3029_object = var_3042_object;
		func_655((int)2, var_3039_int, var_3040_object, var_3041_object, var_3042_object);
		var_3043_object = Obj(); var_3044_int = 0;
		var_3030_object = var_3043_object;
		func_229(var_3043_object, (int)2);
	}
	var_3045_int = 0; var_3046_bool = 0;
	func_714((int)2, (bool)0);
	var_3047_int = 0; var_3048_int = 0; var_3049_int = 0;
	var_3025_int = var_3048_int;
	var_3026_int = var_3049_int;
	func_3338((int)2, var_3048_int, var_3049_int);
	return 0;
}


func_11445(var_3775_int, var_3776_int)
{
	var_3779_int = "Updating game " + var_3775_int;
	var_3781_int = var_3779_int + " ";
	var_3782_int = var_3781_int + var_3776_int;
	Trace(var_3782_int);
	return 0;
}


func_6142(var_274_object)
{
	@@var_274_object:add("lc_house7_03");
	@@var_274_object:add("lc_house7_05");
	@@var_274_object:add("lc_House6_05");
	@@var_274_object:add("lc_house7_06");
	@@var_274_object:add("lc_House6_02");
	@@var_274_object:add("lc_house7_01");
	@@var_274_object:add("lc_house_2_02");
	@@var_274_object:add("lc_House6_01");
	@@var_274_object:add("lc_house3_03_i2");
	@@var_274_object:add("lc_house3_03");
	@@var_274_object:add("lc_house7_04");
	@@var_274_object:add("lc_house7_07");
	@@var_274_object:add("lc_House6_03");
	@@var_274_object:add("lc_House6_04");
	return 0;
}


func_4792(var_2078_int, var_2079_int, var_2080_object, var_2081_object, var_2082_object, var_2083_object)
{
	var_2085_bool = var_2079_int == (int)0;
	if(var_2085_bool != 0) {
		var_2086_int = 0; var_2087_bool = 0;
		func_731((int)5, (bool)1);
		var_2088_int = 0; var_2089_bool = 0; var_2090_int = 0;
		func_748((int)5, (bool)1, (int)1);
		var_2091_int = 0; var_2092_int = 0; var_2093_object = Obj(); var_2094_object = Obj(); var_2095_object = Obj();
		var_2078_int = var_2092_int;
		var_2080_object = var_2093_object;
		var_2081_object = var_2094_object;
		var_2082_object = var_2095_object;
		func_576((int)5, var_2092_int, var_2093_object, var_2094_object, var_2095_object);
		var_2096_object = Obj(); var_2097_int = 0;
		var_2083_object = var_2096_object;
		func_229(var_2096_object, (int)1);
	}
	var_2098_int = 0; var_2099_bool = 0;
	func_714((int)5, (bool)0);
	var_2100_int = 0; var_2101_int = 0; var_2102_int = 0;
	var_2078_int = var_2101_int;
	var_2079_int = var_2102_int;
	func_2310((int)5, var_2101_int, var_2102_int);
	return 0;
}


func_5817(var_243_object)
{
	@@var_243_object:add("r6_house2_03");
	@@var_243_object:add("r6_house4_01_i2");
	@@var_243_object:add("r6_house4_02_i2");
	@@var_243_object:add("r6_house4_02");
	@@var_243_object:add("r6_house3_02_i2");
	@@var_243_object:add("r6_house3_02");
	@@var_243_object:add("r6_house3_01_i2");
	@@var_243_object:add("r6_house3_01");
	@@var_243_object:add("r6_house2_01");
	@@var_243_object:add("r6_house7_01");
	@@var_243_object:add("r6_House6_01");
	@@var_243_object:add("r6_house2_02");
	return 0;
}


func_6329(var_1353_int, var_1354_int, var_1355_object, var_1356_object, var_1357_object, var_1358_object)
{
	var_1360_bool = var_1354_int == (int)0;
	if(var_1360_bool != 0) {
		var_1361_int = 0; var_1362_bool = 0;
		func_731((int)15, (bool)0);
		var_1363_int = 0; var_1364_bool = 0; var_1365_int = 0;
		func_748((int)15, (bool)0, (int)1);
		var_1366_int = 0; var_1367_int = 0; var_1368_object = Obj(); var_1369_object = Obj(); var_1370_object = Obj();
		var_1366_int = 15;
		var_1353_int = var_1367_int;
		var_1355_object = var_1368_object;
		var_1356_object = var_1369_object;
		var_1357_object = var_1370_object;
		func_557(var_1367_int, var_1368_object, var_1369_object, var_1370_object);
		var_1371_object = Obj(); var_1372_int = 0;
		var_1358_object = var_1371_object;
		func_229(var_1371_object, (int)0);
	}
	var_1373_int = 0; var_1374_int = 0;
	var_1354_int = var_1374_int;
	func_909((int)15, var_1374_int);
	var_1375_int = 0; var_1376_int = 0; var_1377_int = 0;
	var_1353_int = var_1376_int;
	var_1354_int = var_1377_int;
	func_1122((int)15, var_1376_int, var_1377_int);
	return 0;
}


func_8376(var_4887_int)
{
	var_4888_int = 0; var_4889_int = 0;
	AddMessage((int)3181, (int)3180, var_4889_int);
	SetVariable("player_mail", (int)1);
	var_4889_int = var_4887_int;
	return 2;
}


func_189(var_490_object)
{
	var_491_int = 0; var_492_int = 0; var_493_object = Obj(); var_494_int = 0; var_495_int = 0; var_496_object = Obj();
	@@var_490_object:size(var_494_int);
	var_495_int = 0;
	
Label_193:
	var_497_bool = var_495_int < var_494_int;
	if(var_497_bool != 0) {
		@@var_490_object:get(var_496_object, var_495_int);
		var_498_object = var_496_object;
		if(var_498_object != 0) {
			@@var_496_object:Remove();
		}
		var_496_object = 0;
		var_495_int = var_495_int + (int)1;
		goto Label_193;
	}
	@@var_490_object:clear();
	return 6;
}


func_11454(var_17_int)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0;
	Trace("Disease update");
	var_23_int = 0;
	var_30_bool = var_17_int == (int)0;
	if(var_30_bool != 0) {
		var_23_int = 0;
	} else {
			var_159_bool = var_17_int == (int)1;
			if(var_159_bool != 0) {
				var_23_int = 0;
				goto Label_11518;
			}
			var_161_bool = var_17_int == (int)2;
			if(var_161_bool != 0) {
				var_23_int = 4;
				goto Label_11518;
			}
			var_163_bool = var_17_int == (int)3;
			if(var_163_bool != 0) {
				var_23_int = 4;
				goto Label_11518;
			}
			var_165_bool = var_17_int == (int)4;
			if(var_165_bool != 0) {
				var_23_int = 4;
				goto Label_11518;
			}
			var_167_bool = var_17_int == (int)5;
			if(var_167_bool != 0) {
				var_23_int = 4;
				goto Label_11518;
			}
			var_169_bool = var_17_int == (int)6;
			if(var_169_bool != 0) {
				var_23_int = 5;
				goto Label_11518;
			}
			var_171_bool = var_17_int == (int)7;
			if(var_171_bool != 0) {
				var_23_int = 6;
				goto Label_11518;
			}
			var_173_bool = var_17_int == (int)8;
			if(var_173_bool != 0) {
				var_23_int = 7;
				goto Label_11518;
			}
			var_175_bool = var_17_int == (int)9;
			if(var_175_bool != 0) {
				var_23_int = 7;
				goto Label_11518;
			}
			var_177_bool = var_17_int == (int)10;
			if(var_177_bool != 0) {
				var_23_int = 7;
				goto Label_11518;
			}
			var_179_bool = var_17_int == (int)11;
			if(var_179_bool == 0) goto Label_11518;
			var_23_int = 7;
	}
Label_11518:
	var_32_int = "Diseased regions : " + var_23_int;
	Trace(var_32_int);
	
Label_11523:
	var_34_bool = (int)0 < (int)16;
	if(var_34_bool != 0) {
		var_35_bool = 0; var_36_int = 0;
		var_24_int = var_36_int;
		func_357(var_35_bool, var_36_int);
		if(var_35_bool != 0) {
			var_48_int = 0;
			var_24_int = var_48_int;
			func_407(var_48_int);
		} else {
			var_61_bool = 0; var_62_int = 0;
			var_24_int = var_62_int;
			func_391(var_61_bool, var_62_int);
			if(var_61_bool == 0) goto Label_11545;
			var_71_int = 0;
			var_24_int = var_71_int;
			func_339(var_71_int);
	}
		func_267((int)0);
		var_83_int = var_25_int;
		var_94_bool = var_25_int < var_23_int;
		if(var_94_bool != 0) {
			var_26_int = var_23_int - var_25_int;
			var_27_int = 0;

		Label_11556:
			var_95_bool = var_27_int < var_26_int;
			if(var_95_bool != 0) {
				func_285();
				var_27_int = var_27_int + (int)1;
				goto Label_11556;
			}
		}
		var_24_int = var_24_int + (int)1;
		goto Label_11523;
	}
	return 10;
	
}


func_9917(var_4879_bool)
{
	var_4882_int = 0; var_4883_string = "";
	func_92(var_4882_int, "d6KapellaVisit");
	var_4885_bool = var_4882_int == (int)1;
	if(var_4885_bool != 0) {
		var_4879_bool = 1;
		return 0;
	}
	var_4879_bool = 0;
	return 0;
}


func_7360(var_392_int, var_393_int, var_394_int)
{
	var_395_object = Obj(); var_396_object = Obj(); var_397_object = Obj(); var_398_object = Obj(); var_399_object = Obj(); var_400_object = Obj(); var_401_object = Obj(); var_402_object = Obj();
	var_403_object = GlobalVars[12];
	@@var_403_object:get(var_399_object, var_392_int);
	var_404_object = GlobalVars[13];
	@@var_404_object:get(var_400_object, var_392_int);
	var_405_object = GlobalVars[14];
	@@var_405_object:get(var_401_object, var_392_int);
	var_406_object = GlobalVars[17];
	@@var_406_object:get(var_402_object, var_392_int);
	var_408_bool = var_392_int == (int)0;
	if(var_408_bool != 0) {
		var_409_int = 0; var_410_int = 0; var_411_object = Obj(); var_412_object = Obj(); var_413_object = Obj(); var_414_object = Obj();
		var_393_int = var_409_int;
		var_394_int = var_410_int;
		var_399_object = var_411_object;
		var_400_object = var_412_object;
		var_401_object = var_413_object;
		var_402_object = var_414_object;
		func_3854(var_409_int, var_410_int, var_411_object, var_412_object, var_413_object, var_414_object);
	} else {
		var_612_bool = var_392_int == (int)1;
		if(var_612_bool != 0) {
			var_613_int = 0; var_614_int = 0; var_615_object = Obj(); var_616_object = Obj(); var_617_object = Obj(); var_618_object = Obj();
			var_393_int = var_613_int;
			var_394_int = var_614_int;
			var_399_object = var_615_object;
			var_400_object = var_616_object;
			var_401_object = var_617_object;
			var_402_object = var_618_object;
			func_4006(var_613_int, var_614_int, var_615_object, var_616_object, var_617_object, var_618_object);
			goto Label_7580;
		}
		var_692_bool = var_392_int == (int)2;
		if(var_692_bool != 0) {
			var_693_int = 0; var_694_int = 0; var_695_object = Obj(); var_696_object = Obj(); var_697_object = Obj(); var_698_object = Obj();
			var_393_int = var_693_int;
			var_394_int = var_694_int;
			var_399_object = var_695_object;
			var_400_object = var_696_object;
			var_401_object = var_697_object;
			var_402_object = var_698_object;
			func_4197(var_693_int, var_694_int, var_695_object, var_696_object, var_697_object, var_698_object);
			goto Label_7580;
		}
		var_835_bool = var_392_int == (int)3;
		if(var_835_bool != 0) {
			var_836_int = 0; var_837_int = 0; var_838_object = Obj(); var_839_object = Obj(); var_840_object = Obj(); var_841_object = Obj();
			var_393_int = var_836_int;
			var_394_int = var_837_int;
			var_399_object = var_838_object;
			var_400_object = var_839_object;
			var_401_object = var_840_object;
			var_402_object = var_841_object;
			func_4370(var_836_int, var_837_int, var_838_object, var_839_object, var_840_object, var_841_object);
			goto Label_7580;
		}
		var_877_bool = var_392_int == (int)4;
		if(var_877_bool != 0) {
			var_878_int = 0; var_879_int = 0; var_880_object = Obj(); var_881_object = Obj(); var_882_object = Obj(); var_883_object = Obj();
			var_393_int = var_878_int;
			var_394_int = var_879_int;
			var_399_object = var_880_object;
			var_400_object = var_881_object;
			var_401_object = var_882_object;
			var_402_object = var_883_object;
			func_4552(var_878_int, var_879_int, var_880_object, var_881_object, var_882_object, var_883_object);
			goto Label_7580;
		}
		var_916_bool = var_392_int == (int)5;
		if(var_916_bool != 0) {
			var_917_int = 0; var_918_int = 0; var_919_object = Obj(); var_920_object = Obj(); var_921_object = Obj(); var_922_object = Obj();
			var_393_int = var_917_int;
			var_394_int = var_918_int;
			var_399_object = var_919_object;
			var_400_object = var_920_object;
			var_401_object = var_921_object;
			var_402_object = var_922_object;
			func_4752(var_917_int, var_918_int, var_919_object, var_920_object, var_921_object, var_922_object);
			goto Label_7580;
		}
		var_943_bool = var_392_int == (int)6;
		if(var_943_bool != 0) {
			var_944_int = 0; var_945_int = 0; var_946_object = Obj(); var_947_object = Obj(); var_948_object = Obj(); var_949_object = Obj();
			var_393_int = var_944_int;
			var_394_int = var_945_int;
			var_399_object = var_946_object;
			var_400_object = var_947_object;
			var_401_object = var_948_object;
			var_402_object = var_949_object;
			func_4874(var_944_int, var_945_int, var_946_object, var_947_object, var_948_object, var_949_object);
			goto Label_7580;
		}
		var_967_bool = var_392_int == (int)7;
		if(var_967_bool != 0) {
			var_968_int = 0; var_969_int = 0; var_970_object = Obj(); var_971_object = Obj(); var_972_object = Obj(); var_973_object = Obj();
			var_393_int = var_968_int;
			var_394_int = var_969_int;
			var_399_object = var_970_object;
			var_400_object = var_971_object;
			var_401_object = var_972_object;
			var_402_object = var_973_object;
			func_5020(var_968_int, var_969_int, var_970_object, var_971_object, var_972_object, var_973_object);
			goto Label_7580;
		}
		var_1074_bool = var_392_int == (int)8;
		if(var_1074_bool != 0) {
			var_1075_int = 0; var_1076_int = 0; var_1077_object = Obj(); var_1078_object = Obj(); var_1079_object = Obj(); var_1080_object = Obj();
			var_393_int = var_1075_int;
			var_394_int = var_1076_int;
			var_399_object = var_1077_object;
			var_400_object = var_1078_object;
			var_401_object = var_1079_object;
			var_402_object = var_1080_object;
			func_5175(var_1075_int, var_1076_int, var_1077_object, var_1078_object, var_1079_object, var_1080_object);
			goto Label_7580;
		}
		var_1101_bool = var_392_int == (int)9;
		if(var_1101_bool != 0) {
			var_1102_int = 0; var_1103_int = 0; var_1104_object = Obj(); var_1105_object = Obj(); var_1106_object = Obj(); var_1107_object = Obj();
			var_393_int = var_1102_int;
			var_394_int = var_1103_int;
			var_399_object = var_1104_object;
			var_400_object = var_1105_object;
			var_401_object = var_1106_object;
			var_402_object = var_1107_object;
			func_5348(var_1102_int, var_1103_int, var_1104_object, var_1105_object, var_1106_object, var_1107_object);
			goto Label_7580;
		}
		var_1128_bool = var_392_int == (int)10;
		if(var_1128_bool != 0) {
			var_1129_int = 0; var_1130_int = 0; var_1131_object = Obj(); var_1132_object = Obj(); var_1133_object = Obj(); var_1134_object = Obj();
			var_393_int = var_1129_int;
			var_394_int = var_1130_int;
			var_399_object = var_1131_object;
			var_400_object = var_1132_object;
			var_401_object = var_1133_object;
			var_402_object = var_1134_object;
			func_5521(var_1129_int, var_1130_int, var_1131_object, var_1132_object, var_1133_object, var_1134_object);
			goto Label_7580;
		}
		var_1155_bool = var_392_int == (int)11;
		if(var_1155_bool != 0) {
			var_1156_int = 0; var_1157_int = 0; var_1158_object = Obj(); var_1159_object = Obj(); var_1160_object = Obj(); var_1161_object = Obj();
			var_393_int = var_1156_int;
			var_394_int = var_1157_int;
			var_399_object = var_1158_object;
			var_400_object = var_1159_object;
			var_401_object = var_1160_object;
			var_402_object = var_1161_object;
			func_5697(var_1156_int, var_1157_int, var_1158_object, var_1159_object, var_1160_object, var_1161_object);
			goto Label_7580;
		}
		var_1182_bool = var_392_int == (int)12;
		if(var_1182_bool != 0) {
			var_1183_int = 0; var_1184_int = 0; var_1185_object = Obj(); var_1186_object = Obj(); var_1187_object = Obj(); var_1188_object = Obj();
			var_393_int = var_1183_int;
			var_394_int = var_1184_int;
			var_399_object = var_1185_object;
			var_400_object = var_1186_object;
			var_401_object = var_1187_object;
			var_402_object = var_1188_object;
			func_5855(var_1183_int, var_1184_int, var_1185_object, var_1186_object, var_1187_object, var_1188_object);
			goto Label_7580;
		}
		var_1209_bool = var_392_int == (int)13;
		if(var_1209_bool != 0) {
			var_1210_int = 0; var_1211_int = 0; var_1212_object = Obj(); var_1213_object = Obj(); var_1214_object = Obj(); var_1215_object = Obj();
			var_393_int = var_1210_int;
			var_394_int = var_1211_int;
			var_399_object = var_1212_object;
			var_400_object = var_1213_object;
			var_401_object = var_1214_object;
			var_402_object = var_1215_object;
			func_6022(var_1210_int, var_1211_int, var_1212_object, var_1213_object, var_1214_object, var_1215_object);
			goto Label_7580;
		}
		var_1236_bool = var_392_int == (int)14;
		if(var_1236_bool != 0) {
			var_1237_int = 0; var_1238_int = 0; var_1239_object = Obj(); var_1240_object = Obj(); var_1241_object = Obj(); var_1242_object = Obj();
			var_393_int = var_1237_int;
			var_394_int = var_1238_int;
			var_399_object = var_1239_object;
			var_400_object = var_1240_object;
			var_401_object = var_1241_object;
			var_402_object = var_1242_object;
			func_6186(var_1237_int, var_1238_int, var_1239_object, var_1240_object, var_1241_object, var_1242_object);
			goto Label_7580;
		}
		var_1352_bool = var_392_int == (int)15;
		if(var_1352_bool == 0) goto Label_7580;
		var_1353_int = 0; var_1354_int = 0; var_1355_object = Obj(); var_1356_object = Obj(); var_1357_object = Obj(); var_1358_object = Obj();
		var_393_int = var_1353_int;
		var_394_int = var_1354_int;
		var_399_object = var_1355_object;
		var_400_object = var_1356_object;
		var_401_object = var_1357_object;
		var_402_object = var_1358_object;
		func_6329(var_1353_int, var_1354_int, var_1355_object, var_1356_object, var_1357_object, var_1358_object);
	}
Label_7580:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_8387(var_4870_int)
{
	var_4871_int = 0; var_4872_int = 0;
	AddMessage((int)3179, (int)3178, var_4872_int);
	SetVariable("player_mail", (int)1);
	var_4872_int = var_4870_int;
	return 2;
}


func_9929(var_4862_bool)
{
	var_4865_int = 0; var_4866_string = "";
	func_92(var_4865_int, "d6MariaVisit");
	var_4868_bool = var_4865_int == (int)1;
	if(var_4868_bool != 0) {
		var_4862_bool = 1;
		return 0;
	}
	var_4862_bool = 0;
	return 0;
}


func_714(var_542_int, var_543_bool)
{
	var_544_object = Obj(); var_545_int = 0; var_546_object = Obj(); var_547_int = 0;
	GetMainOutdoorScene(var_546_object);
	var_548_bool = var_546_object == 0; //@ne
	if(var_548_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_547_int = var_542_int + (int)1;
	@@var_546_object:EnableSubsets(var_547_int, (int)100, var_543_bool, (bool)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_8398(var_3922_int)
{
	var_3923_int = 0; var_3924_int = 0;
	AddMessage((int)12530, (int)12529, var_3924_int);
	SetVariable("player_mail", (int)1);
	var_3924_int = var_3922_int;
	return 2;
}


func_208(var_124_int)
{
	var_125_float = 0; var_126_float = 0;
	GetGameTime(var_126_float);
	var_128_int = 0;
	var_128_int = var_126_float / (int)24;
	var_124_int = (int)1 + var_128_int;
	return 2;
}


func_9941(var_4896_bool)
{
	var_4899_int = 0; var_4900_string = "";
	func_92(var_4899_int, "d6BigVladVisit");
	var_4902_bool = var_4899_int == (int)1;
	if(var_4902_bool != 0) {
		var_4896_bool = 1;
		return 0;
	}
	var_4896_bool = 0;
	return 0;
}


func_8920()
{
	var_4426_object = Obj(); var_4427_object = Obj(); var_4428_object = Obj(); var_4429_object = Obj();
	func_10048(Obj());
	var_4430_object = var_4428_object;
	@@var_4428_object:FindMark(var_4429_object, "d3q01AlexandrGotoOspina");
	var_4432_object = var_4429_object;
	if(var_4432_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01AlexandrGotoOspinaSelf");
	var_4434_object = var_4429_object;
	if(var_4434_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01BigVladAgreed");
	var_4436_object = var_4429_object;
	if(var_4436_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01BigVladAgreedSelf");
	var_4438_object = var_4429_object;
	if(var_4438_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01BigVladGotoGeorg");
	var_4440_object = var_4429_object;
	if(var_4440_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01BigVladGotoGeorgSelf");
	var_4442_object = var_4429_object;
	if(var_4442_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01GeorgAgreed");
	var_4444_object = var_4429_object;
	if(var_4444_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01GeorgAgreedSelf");
	var_4446_object = var_4429_object;
	if(var_4446_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01OspinaButchersWillHelpSelf");
	var_4448_object = var_4429_object;
	if(var_4448_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01OspinaGotoBigVlad");
	var_4450_object = var_4429_object;
	if(var_4450_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01OspinaGotoBigVladSelf");
	var_4452_object = var_4429_object;
	if(var_4452_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01RubinGotoAlexandr");
	var_4454_object = var_4429_object;
	if(var_4454_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q01RubinGotoAlexandrSelf");
	var_4456_object = var_4429_object;
	if(var_4456_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02BigVladGotoHan");
	var_4458_object = var_4429_object;
	if(var_4458_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02GeorgGotoMishka");
	var_4460_object = var_4429_object;
	if(var_4460_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02GeorgGotoViktor");
	var_4462_object = var_4429_object;
	if(var_4462_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02GeorgSelf");
	var_4464_object = var_4429_object;
	if(var_4464_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02HanGotoViktor");
	var_4466_object = var_4429_object;
	if(var_4466_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02MishkaGotoMladVlad");
	var_4468_object = var_4429_object;
	if(var_4468_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02MladVladGotoBigVlad");
	var_4470_object = var_4429_object;
	if(var_4470_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02ViktorGotoMladVlad");
	var_4472_object = var_4429_object;
	if(var_4472_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q02ViktorGotoMladVladSelf");
	var_4474_object = var_4429_object;
	if(var_4474_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q03KapellaBoyLocation");
	var_4476_object = var_4429_object;
	if(var_4476_object != 0) {
		@@var_4429_object:Remove();
	}
	@@var_4428_object:FindMark(var_4429_object, "d3q03KapellaBoyLocationSelf");
	var_4478_object = var_4429_object;
	if(var_4478_object != 0) {
		@@var_4429_object:Remove();
	}
	var_4479_bool = 0; var_4480_int = 0;
	func_10031(var_4479_bool, (int)25);
	var_4481_bool = 0; var_4482_int = 0;
	func_10031(var_4481_bool, (int)26);
	var_4483_bool = 0; var_4484_int = 0;
	func_10031(var_4483_bool, (int)27);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8409(var_4921_int)
{
	var_4922_int = 0; var_4923_int = 0;
	AddMessage((int)15382, (int)15381, var_4923_int);
	SetVariable("player_mail", (int)1);
	var_4923_int = var_4921_int;
	return 2;
}


func_2778(var_1703_int, var_1704_int, var_1705_int)
{
	var_1706_int = 0; var_1707_int = 0; var_1708_int = 0; var_1709_int = 0;
	var_1710_bool = 0;
	var_1710_bool = 0;
	var_1712_bool = var_1705_int > (int)8;
	if(var_1712_bool != 0) {
		var_1714_bool = var_1705_int < (int)21;
		if(var_1714_bool != 0) {
			var_1710_bool = 1;
		}
	}
	if(var_1710_bool != 0) {
		var_1715_int = 0; var_1716_string = ""; var_1717_string = ""; var_1718_int = 0;
		var_1703_int = var_1715_int;
		func_438(var_1715_int, "pers_worker", "worker_d.xml", (int)2);
		var_1719_int = 0; var_1720_string = ""; var_1721_string = ""; var_1722_int = 0;
		var_1703_int = var_1719_int;
		func_438(var_1719_int, "pers_worker", "worker2_d.xml", (int)2);
		var_1723_int = 0; var_1724_string = ""; var_1725_string = ""; var_1726_int = 0;
		var_1703_int = var_1723_int;
		func_438(var_1723_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1727_int = 0; var_1728_string = ""; var_1729_string = ""; var_1730_int = 0;
		var_1703_int = var_1727_int;
		func_438(var_1727_int, "pers_woman", "woman_d.xml", (int)1);
		var_1731_int = 0; var_1732_string = ""; var_1733_string = ""; var_1734_int = 0;
		var_1703_int = var_1731_int;
		func_438(var_1731_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_1735_int = 0; var_1736_string = ""; var_1737_string = ""; var_1738_int = 0;
		var_1703_int = var_1735_int;
		func_438(var_1735_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1739_int = 0; var_1740_string = ""; var_1741_string = ""; var_1742_int = 0;
		var_1703_int = var_1739_int;
		func_438(var_1739_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_1743_int = 0; var_1744_string = ""; var_1745_string = ""; var_1746_int = 0;
		var_1703_int = var_1743_int;
		func_438(var_1743_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1747_int = 0; var_1748_string = ""; var_1749_string = ""; var_1750_int = 0;
		var_1703_int = var_1747_int;
		func_464(var_1747_int, "fog", "fog.xml", (int)5);
		var_1752_float = 0; var_1753_int = 0;
		var_1704_int = var_1753_int;
		func_1022(var_1752_float, var_1753_int);
		var_1708_int = (int)2 * var_1752_float;
		var_1754_int = var_1708_int;
		if(var_1754_int != 0) {
			var_1755_int = 0; var_1756_string = ""; var_1757_string = ""; var_1758_int = 0;
			var_1703_int = var_1755_int;
			var_1708_int = var_1758_int;
			func_438(var_1755_int, "pers_bomber", "bomber.xml", var_1758_int);
		}
	} else {
		var_1789_int = 0; var_1790_string = ""; var_1791_string = ""; var_1792_int = 0;
		var_1703_int = var_1789_int;
		func_438(var_1789_int, "pers_worker", "worker_d.xml", (int)1);
		var_1793_int = 0; var_1794_string = ""; var_1795_string = ""; var_1796_int = 0;
		var_1703_int = var_1793_int;
		func_438(var_1793_int, "pers_worker", "worker2_d.xml", (int)1);
		var_1797_int = 0; var_1798_string = ""; var_1799_string = ""; var_1800_int = 0;
		var_1703_int = var_1797_int;
		func_438(var_1797_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1801_int = 0; var_1802_string = ""; var_1803_string = ""; var_1804_int = 0;
		var_1703_int = var_1801_int;
		func_438(var_1801_int, "pers_woman", "woman_d.xml", (int)1);
		var_1805_int = 0; var_1806_string = ""; var_1807_string = ""; var_1808_int = 0;
		var_1703_int = var_1805_int;
		func_438(var_1805_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1809_int = 0; var_1810_string = ""; var_1811_string = ""; var_1812_int = 0;
		var_1703_int = var_1809_int;
		func_438(var_1809_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1813_int = 0; var_1814_string = ""; var_1815_string = ""; var_1816_int = 0;
		var_1703_int = var_1813_int;
		func_464(var_1813_int, "fog", "fog.xml", (int)5);
		var_1818_float = 0; var_1819_int = 0;
		var_1704_int = var_1819_int;
		func_1022(var_1818_float, var_1819_int);
		var_1709_int = (int)2 * var_1818_float;
		var_1820_int = var_1709_int;
		if(var_1820_int == 0) goto Label_2932;
		var_1821_int = 0; var_1822_string = ""; var_1823_string = ""; var_1824_int = 0;
		var_1703_int = var_1821_int;
		var_1709_int = var_1824_int;
		func_438(var_1821_int, "pers_bomber", "bomber.xml", var_1824_int);
	}
Label_2932:
	var_1759_int = 0; var_1760_string = ""; var_1761_string = ""; var_1762_int = 0; var_1763_int = 0; var_1764_int = 0;
	var_1703_int = var_1759_int;
	func_451(var_1759_int, "pers_worker", "agony1.xml", (int)2, (int)4, (int)4);
	var_1765_int = 0; var_1766_string = ""; var_1767_string = ""; var_1768_int = 0; var_1769_int = 0; var_1770_int = 0;
	var_1703_int = var_1765_int;
	func_451(var_1765_int, "pers_unosha", "agony1.xml", (int)2, (int)4, (int)4);
	var_1771_int = 0; var_1772_string = ""; var_1773_string = ""; var_1774_int = 0; var_1775_int = 0; var_1776_int = 0;
	var_1703_int = var_1771_int;
	func_451(var_1771_int, "pers_woman", "agony1.xml", (int)2, (int)4, (int)4);
	var_1777_int = 0; var_1778_string = ""; var_1779_string = ""; var_1780_int = 0; var_1781_int = 0; var_1782_int = 0;
	var_1703_int = var_1777_int;
	func_451(var_1777_int, "pers_vaxxabitka", "agony1.xml", (int)2, (int)4, (int)4);
	var_1783_int = 0; var_1784_string = ""; var_1785_string = ""; var_1786_int = 0; var_1787_int = 0; var_1788_int = 0;
	var_1703_int = var_1783_int;
	func_451(var_1783_int, "pers_wasted_girl", "agony1.xml", (int)2, (int)4, (int)4);
	return 4;
	
}


func_731(var_353_int, var_354_bool)
{
	var_355_object = Obj(); var_356_int = 0; var_357_object = Obj(); var_358_int = 0;
	GetMainOutdoorScene(var_357_object);
	var_359_bool = var_357_object == 0; //@ne
	if(var_359_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 4;
	}
	var_358_int = var_353_int + (int)1;
	@@var_357_object:EnableSubsets(var_358_int, (int)200, var_354_bool, (bool)0);
	return 4;
}
EMIT "Stack[-2] = 0";


func_217(var_122_bool, var_123_int)
{
	var_124_int = 0;
	func_208(var_124_int);
	var_122_bool = var_124_int == var_123_int;
	return 0;
}


func_4317(var_85_object)
{
	@@var_85_object:add("house5_02");
	@@var_85_object:add("dt_house1_union2_03l");
	@@var_85_object:add("dt_house1_union2_03r");
	@@var_85_object:add("dt_house1_union2_01l");
	@@var_85_object:add("dt_house1_union2_01r");
	@@var_85_object:add("house5_unoinl");
	@@var_85_object:add("house5_unoinr");
	@@var_85_object:add("dt_house_1_01");
	@@var_85_object:add("house5_05");
	@@var_85_object:add("house5_06");
	@@var_85_object:add("dt_house1_union2_02l");
	@@var_85_object:add("dt_house1_union2_02r");
	@@var_85_object:add("dt_house_1_02");
	@@var_85_object:add("house5_unoin_solid01l");
	@@var_85_object:add("house5_unoin_solid01r");
	@@var_85_object:add("house5_03");
	@@var_85_object:add("house5_04");
	return 0;
}


func_223(var_347_string, var_348_int)
{
	var_350_int = "Region" + var_348_int;
	var_347_string = var_350_int + "State";
	return 0;
}


func_5855(var_1183_int, var_1184_int, var_1185_object, var_1186_object, var_1187_object, var_1188_object)
{
	var_1190_bool = var_1184_int == (int)0;
	if(var_1190_bool != 0) {
		var_1191_int = 0; var_1192_bool = 0;
		func_731((int)12, (bool)0);
		var_1193_int = 0; var_1194_bool = 0; var_1195_int = 0;
		func_748((int)12, (bool)0, (int)1);
		var_1196_int = 0; var_1197_int = 0; var_1198_object = Obj(); var_1199_object = Obj(); var_1200_object = Obj();
		var_1196_int = 12;
		var_1183_int = var_1197_int;
		var_1185_object = var_1198_object;
		var_1186_object = var_1199_object;
		var_1187_object = var_1200_object;
		func_557(var_1197_int, var_1198_object, var_1199_object, var_1200_object);
		var_1201_object = Obj(); var_1202_int = 0;
		var_1188_object = var_1201_object;
		func_229(var_1201_object, (int)0);
	}
	var_1203_int = 0; var_1204_int = 0;
	var_1184_int = var_1204_int;
	func_842((int)12, var_1204_int);
	var_1205_int = 0; var_1206_int = 0; var_1207_int = 0;
	var_1183_int = var_1206_int;
	var_1184_int = var_1207_int;
	func_1270((int)12, var_1206_int, var_1207_int);
	return 0;
}


func_6369(var_2649_int, var_2650_int, var_2651_object, var_2652_object, var_2653_object, var_2654_object)
{
	var_2656_bool = var_2650_int == (int)0;
	if(var_2656_bool != 0) {
		var_2657_int = 0; var_2658_bool = 0;
		func_731((int)15, (bool)1);
		var_2659_int = 0; var_2660_bool = 0; var_2661_int = 0;
		func_748((int)15, (bool)1, (int)1);
		var_2662_int = 0; var_2663_int = 0; var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj();
		var_2649_int = var_2663_int;
		var_2651_object = var_2664_object;
		var_2652_object = var_2665_object;
		var_2653_object = var_2666_object;
		func_576((int)15, var_2663_int, var_2664_object, var_2665_object, var_2666_object);
		var_2667_object = Obj(); var_2668_int = 0;
		var_2654_object = var_2667_object;
		func_229(var_2667_object, (int)1);
	}
	var_2669_int = 0; var_2670_bool = 0;
	func_714((int)15, (bool)0);
	var_2671_int = 0; var_2672_int = 0; var_2673_int = 0;
	var_2649_int = var_2672_int;
	var_2650_int = var_2673_int;
	func_1797((int)15, var_2672_int, var_2673_int);
	return 0;
}


func_4832(var_3214_int, var_3215_int, var_3216_object, var_3217_object, var_3218_object, var_3219_object)
{
	var_3221_bool = var_3215_int == (int)0;
	if(var_3221_bool != 0) {
		var_3222_int = 0; var_3223_bool = 0;
		func_731((int)5, (bool)1);
		var_3224_int = 0; var_3225_bool = 0; var_3226_int = 0;
		func_748((int)5, (bool)1, (int)1);
		var_3227_int = 0; var_3228_int = 0; var_3229_object = Obj(); var_3230_object = Obj(); var_3231_object = Obj();
		var_3214_int = var_3228_int;
		var_3216_object = var_3229_object;
		var_3217_object = var_3230_object;
		var_3218_object = var_3231_object;
		func_655((int)5, var_3228_int, var_3229_object, var_3230_object, var_3231_object);
		var_3232_object = Obj(); var_3233_int = 0;
		var_3219_object = var_3232_object;
		func_229(var_3232_object, (int)2);
	}
	var_3234_int = 0; var_3235_bool = 0;
	func_714((int)5, (bool)0);
	var_3236_int = 0; var_3237_int = 0; var_3238_int = 0;
	var_3214_int = var_3237_int;
	var_3215_int = var_3238_int;
	func_3338((int)5, var_3237_int, var_3238_int);
	return 0;
}


func_9953(var_4913_bool)
{
	var_4916_int = 0; var_4917_string = "";
	func_92(var_4916_int, "d6ViktorVisit");
	var_4919_bool = var_4916_int == (int)1;
	if(var_4919_bool != 0) {
		var_4913_bool = 1;
		return 0;
	}
	var_4913_bool = 0;
	return 0;
}


func_5348(var_1102_int, var_1103_int, var_1104_object, var_1105_object, var_1106_object, var_1107_object)
{
	var_1109_bool = var_1103_int == (int)0;
	if(var_1109_bool != 0) {
		var_1110_int = 0; var_1111_bool = 0;
		func_731((int)9, (bool)0);
		var_1112_int = 0; var_1113_bool = 0; var_1114_int = 0;
		func_748((int)9, (bool)0, (int)1);
		var_1115_int = 0; var_1116_int = 0; var_1117_object = Obj(); var_1118_object = Obj(); var_1119_object = Obj();
		var_1115_int = 9;
		var_1102_int = var_1116_int;
		var_1104_object = var_1117_object;
		var_1105_object = var_1118_object;
		var_1106_object = var_1119_object;
		func_557(var_1116_int, var_1117_object, var_1118_object, var_1119_object);
		var_1120_object = Obj(); var_1121_int = 0;
		var_1107_object = var_1120_object;
		func_229(var_1120_object, (int)0);
	}
	var_1122_int = 0; var_1123_int = 0;
	var_1103_int = var_1123_int;
	func_872((int)9, var_1123_int);
	var_1124_int = 0; var_1125_int = 0; var_1126_int = 0;
	var_1102_int = var_1125_int;
	var_1103_int = var_1126_int;
	func_1270((int)9, var_1125_int, var_1126_int);
	return 0;
}


func_229(var_502_object, var_503_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_string = ""; var_508_string = ""; var_509_object = Obj(); var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_string = ""; var_514_string = ""; var_515_object = Obj();
	@@var_502_object:size(var_510_int);
	var_517_bool = var_503_int == (int)1;
	if(var_517_bool != 0) {
		var_511_string = "s_";
	} else {
			var_528_bool = var_503_int == (int)2;
			if(var_528_bool == 0) goto Label_241;
			var_511_string = "n_";
	}
Label_241:
	var_512_int = 0;
	
Label_242:
	var_518_bool = var_512_int < var_510_int;
	if(var_518_bool != 0) {
		@@var_502_object:get(var_513_string, var_512_int);
		var_519_int = var_511_string + var_513_string;
		var_514_string = var_519_int + ".isc";
		GetSceneByName(var_515_object, var_513_string);
		var_521_bool = var_515_object == 0; //@nz
		if(var_521_bool != 0) {
			var_523_int = "City manager: can't replace indoor scene \"" + var_513_string;
			var_525_int = var_523_int + "\" because it doesn't exist";
			Trace(var_525_int);
		} else {
			ReplaceScene(var_515_object, var_514_string);
	}
		var_515_object = 0;
		var_512_int = var_512_int + (int)3;
		goto Label_242;
	}
	return 12;
	
}


func_8420(var_4510_int)
{
	var_4511_int = 0; var_4512_int = 0;
	AddMessage((int)15433, (int)15432, var_4512_int);
	SetVariable("player_mail", (int)1);
	var_4512_int = var_4510_int;
	return 2;
}


func_748(var_419_int, var_420_bool, var_421_int)
{
	var_422_string = ""; var_423_object = Obj(); var_424_int = 0; var_425_string = ""; var_426_object = Obj(); var_427_int = 0; var_428_object = Obj(); var_429_string = ""; var_430_object = Obj(); var_431_int = 0; var_432_string = ""; var_433_object = Obj(); var_434_int = 0; var_435_object = Obj();
	var_438_int = var_419_int + (int)1;
	var_429_string = "street_rags" + var_438_int;
	var_439_bool = var_420_bool;
	if(var_439_bool != 0) {
		GetMainOutdoorScene(var_430_object);
		var_440_bool = var_430_object == 0; //@ne
		if(var_440_bool != 0) {
			Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_431_int = 1;

	Label_764:
		var_442_bool = var_431_int <= var_421_int;
		if(var_442_bool != 0) {
			var_444_int = var_429_string + "_";
			var_432_string = var_444_int + var_431_int;
			FindActor(var_433_object, var_432_string);
			var_445_bool = var_433_object == 0; //@nz
			if(var_445_bool != 0) {
				AddActor(var_433_object, var_432_string, var_430_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "do_invis.xml");
			} else {
				@@var_433_object:RemoveOnUnload((bool)0);
		}
			var_430_object = 0;
	} else {
			var_434_int = 1;

		Label_789:
			var_451_bool = var_434_int <= var_421_int;
			if(var_451_bool == 0) goto Label_804;
			var_453_int = var_429_string + "_";
			var_454_int = var_453_int + var_434_int;
			FindActor(var_435_object, var_454_int);
			var_455_object = var_435_object;
			if(var_455_object != 0) {
				@@var_435_object:RemoveOnUnload();
			}
			var_435_object = 0;
			var_434_int = var_434_int + (int)1;
			goto Label_789;
	}
	Label_804:
		return 14;

	}
	var_433_object = 0;
	var_431_int = var_431_int + (int)1;
	goto Label_764;
	
}


func_9965(var_4502_bool)
{
	var_4505_int = 0; var_4506_string = "";
	func_92(var_4505_int, "d7AglajaVisit");
	var_4508_bool = var_4505_int == (int)1;
	if(var_4508_bool != 0) {
		var_4502_bool = 1;
		return 0;
	}
	var_4502_bool = 0;
	return 0;
}


func_8431(var_4519_int)
{
	var_4520_int = 0; var_4521_int = 0;
	AddMessage((int)15439, (int)15438, var_4521_int);
	SetVariable("player_mail", (int)1);
	var_4521_int = var_4519_int;
	return 2;
}


func_1270(var_990_int, var_991_int, var_992_int)
{
	var_993_bool = 0;
	var_993_bool = 0;
	var_995_bool = var_992_int > (int)8;
	if(var_995_bool != 0) {
		var_997_bool = var_992_int < (int)21;
		if(var_997_bool != 0) {
			var_993_bool = 1;
		}
	}
	if(var_993_bool != 0) {
		var_998_int = 0; var_999_string = ""; var_1000_string = ""; var_1001_int = 0;
		var_990_int = var_998_int;
		func_438(var_998_int, "pers_woman", "woman.xml", (int)2);
		var_1002_int = 0; var_1003_string = ""; var_1004_string = ""; var_1005_int = 0;
		var_990_int = var_1002_int;
		func_438(var_1002_int, "pers_unosha", "unosha.xml", (int)1);
		var_1006_int = 0; var_1007_string = ""; var_1008_string = ""; var_1009_int = 0;
		var_990_int = var_1006_int;
		func_438(var_1006_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1010_int = 0; var_1011_string = ""; var_1012_string = ""; var_1013_int = 0;
		var_990_int = var_1010_int;
		func_438(var_1010_int, "pers_boy", "boy.xml", (int)2);
		var_1014_int = 0; var_1015_string = ""; var_1016_string = ""; var_1017_int = 0;
		var_990_int = var_1014_int;
		func_438(var_1014_int, "pers_girl", "girl.xml", (int)1);
		var_1018_int = 0; var_1019_string = ""; var_1020_string = ""; var_1021_int = 0;
		var_990_int = var_1018_int;
		func_438(var_1018_int, "pers_girl", "girl2.xml", (int)1);
		var_1022_int = 0; var_1023_string = ""; var_1024_string = ""; var_1025_int = 0;
		var_990_int = var_1022_int;
		func_438(var_1022_int, "pers_littleboy", "littleboy.xml", (int)1);
		var_1026_int = 0; var_1027_string = ""; var_1028_string = ""; var_1029_int = 0;
		var_990_int = var_1026_int;
		func_438(var_1026_int, "pers_littlegirl", "littlegirl.xml", (int)1);
		var_1030_int = 0; var_1031_string = ""; var_1032_string = ""; var_1033_int = 0;
		var_990_int = var_1030_int;
		func_438(var_1030_int, "pers_alkash", "alkash.xml", (int)1);
		var_1035_int = var_991_int + (int)1;
		var_1037_bool = var_1035_int >= (int)3;
		if(var_1037_bool != 0) {
		}
		var_1038_int = 0; var_1039_string = ""; var_1040_string = ""; var_1041_int = 0;
		var_990_int = var_1038_int;
		func_438(var_1038_int, "pers_dog", "dog.xml", (int)1);
	} else {
		var_1049_int = 0; var_1050_string = ""; var_1051_string = ""; var_1052_int = 0;
		var_990_int = var_1049_int;
		func_438(var_1049_int, "pers_woman", "woman.xml", (int)1);
		var_1053_int = 0; var_1054_string = ""; var_1055_string = ""; var_1056_int = 0;
		var_990_int = var_1053_int;
		func_438(var_1053_int, "pers_unosha", "unosha.xml", (int)1);
		var_1057_int = 0; var_1058_string = ""; var_1059_string = ""; var_1060_int = 0;
		var_990_int = var_1057_int;
		func_438(var_1057_int, "pers_unosha", "unosha2.xml", (int)1);
		var_1061_int = 0; var_1062_string = ""; var_1063_string = ""; var_1064_int = 0;
		var_990_int = var_1061_int;
		func_438(var_1061_int, "pers_alkash", "alkash.xml", (int)2);
		var_1066_int = var_991_int + (int)1;
		var_1068_bool = var_1066_int >= (int)3;
		if(var_1068_bool != 0) {
		}
		var_1069_int = 0; var_1070_string = ""; var_1071_string = ""; var_1072_int = 0;
		var_990_int = var_1069_int;
		func_438(var_1069_int, "pers_dog", "dog.xml", (int)1);
	}
	var_1042_bool = 0; var_1043_int = 0; var_1044_int = 0;
	var_991_int = var_1043_int;
	var_992_int = var_1044_int;
	func_1112(var_1042_bool, var_1043_int, var_1044_int);
	if(var_1042_bool != 0) {
		var_1045_int = 0; var_1046_string = ""; var_1047_string = ""; var_1048_int = 0;
		var_990_int = var_1045_int;
		func_438(var_1045_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 0;
	
}


func_9977(var_4528_bool)
{
	var_4531_int = 0; var_4532_string = "";
	func_92(var_4531_int, "d11AglajaVisit");
	var_4534_bool = var_4531_int == (int)1;
	if(var_4534_bool != 0) {
		var_4528_bool = 1;
		return 0;
	}
	var_4528_bool = 0;
	return 0;
}


func_8442(var_4930_int)
{
	var_4931_int = 0; var_4932_int = 0;
	AddMessage((int)15431, (int)15430, var_4932_int);
	SetVariable("player_mail", (int)1);
	var_4932_int = var_4930_int;
	return 2;
}


func_11007()
{
	var_3917_object = GlobalVars[18];
	GlobalVars[18] = Obj();
	var_3918_object = Obj(); var_3919_object = Obj();
	var_3920_object = GlobalVars[18];
	var_3920_object = var_3918_object;
	var_3921_object = GlobalVars[18];
	var_3921_object = var_3919_object;
	func_8516();
	var_3932_object = Obj(); var_3933_object = Obj();
	var_3934_object = GlobalVars[18];
	var_3934_object = var_3932_object;
	var_3935_object = GlobalVars[18];
	var_3935_object = var_3933_object;
	func_8460();
	var_3938_object = Obj(); var_3939_object = Obj();
	var_3940_object = GlobalVars[18];
	var_3940_object = var_3938_object;
	var_3941_object = GlobalVars[18];
	var_3941_object = var_3939_object;
	func_8467();
	var_3944_object = Obj(); var_3945_object = Obj();
	var_3946_object = GlobalVars[18];
	var_3946_object = var_3944_object;
	var_3947_object = GlobalVars[18];
	var_3947_object = var_3945_object;
	func_8481();
	var_3973_object = Obj(); var_3974_object = Obj();
	var_3975_object = GlobalVars[18];
	var_3975_object = var_3973_object;
	var_3976_object = GlobalVars[18];
	var_3976_object = var_3974_object;
	func_8486();
	var_3979_object = Obj(); var_3980_object = Obj();
	var_3981_object = GlobalVars[18];
	var_3981_object = var_3979_object;
	var_3982_object = GlobalVars[18];
	var_3982_object = var_3980_object;
	func_9695();
	func_8255((int)0);
	var_3992_object = Obj(); var_3993_string = "";
	func_97(var_3992_object, "volonteers_danko");
	SetTimeEvent((int)45003, (float)24.0);
	SetTimeEvent((int)45015, (float)129.0);
	SetTimeEvent((int)45013, (float)144.0);
	SetTimeEvent((int)45028, (float)239.0);
	SetTimeEvent((int)45029, (float)263.0);
	SetTimeEvent((int)45026, (float)191.0);
	SetTimeEvent((int)45027, (float)215.0);
	SetTimeEvent((int)45012, (float)120.0);
	SetTimeEvent((int)45016, (float)168.0);
	SetTimeEvent((int)45022, (float)95.0);
	SetTimeEvent((int)45023, (float)119.0);
	SetTimeEvent((int)45031, (float)240.0);
	SetTimeEvent((int)45032, (float)245.0);
	SetTimeEvent((int)45011, (float)96.0);
	SetTimeEvent((int)45024, (float)143.0);
	SetTimeEvent((int)45025, (float)167.0);
	SetTimeEvent((int)45020, (float)47.0);
	SetTimeEvent((int)45021, (float)71.0);
	SetTimeEvent((int)45008, (float)10.0);
	SetTimeEvent((int)45054, (float)272.0);
	SetTimeEvent((int)45056, (float)266.0);
	SetTimeEvent((int)45017, (float)196.0);
	SetTimeEvent((int)45019, (float)23.0);
	SetTimeEvent((int)45007, (float)17.920000076293945);
	SetTimeEvent((int)45006, (float)72.0);
	SetTimeEvent((int)45049, (float)152.07000732421875);
	SetTimeEvent((int)45050, (float)174.0);
	SetTimeEvent((int)45051, (float)249.35000610351562);
	SetTimeEvent((int)45052, (float)276.0);
	SetTimeEvent((int)45053, (float)279.0);
	SetTimeEvent((int)45038, (float)35.0);
	SetTimeEvent((int)45039, (float)60.0);
	SetTimeEvent((int)45040, (float)55.0);
	SetTimeEvent((int)45041, (float)80.0);
	SetTimeEvent((int)45010, (float)16.0);
	SetTimeEvent((int)45033, (float)32.0);
	SetTimeEvent((int)45034, (float)41.0);
	SetTimeEvent((int)45035, (float)253.0);
	SetTimeEvent((int)45036, (float)255.0);
	SetTimeEvent((int)45042, (float)264.0);
	SetTimeEvent((int)45009, (float)23.5);
	SetTimeEvent((int)45043, (float)108.0);
	SetTimeEvent((int)45044, (float)127.0);
	SetTimeEvent((int)45045, (float)127.5);
	SetTimeEvent((int)45046, (float)128.0);
	SetTimeEvent((int)45047, (float)132.44000244140625);
	SetTimeEvent((int)45048, (float)154.0);
	SetTimeEvent((int)45018, (float)216.0);
	SetTimeEvent((int)45005, (float)48.0);
	return 0;
}


func_8453()
{
	var_4612_string = ""; var_4613_bool = 0;
	func_137("warehouse_rubin@door1", (bool)0);
	return 0;
}


func_9477()
{
	var_3935_object = Obj(); var_3936_object = Obj(); var_3937_object = Obj(); var_3938_object = Obj();
	func_10048(Obj());
	var_3939_object = var_3937_object;
	@@var_3937_object:FindMark(var_3938_object, "d6q01AlexandrGotoJulia");
	var_3941_object = var_3938_object;
	if(var_3941_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01AlexandrGotoKaterina");
	var_3943_object = var_3938_object;
	if(var_3943_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01AlexandrGotoLara");
	var_3945_object = var_3938_object;
	if(var_3945_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01AlexangrGotoJulLaraSelf");
	var_3947_object = var_3938_object;
	if(var_3947_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01BigVladGotoAnna");
	var_3949_object = var_3938_object;
	if(var_3949_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_3951_object = var_3938_object;
	if(var_3951_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01BigVladGotoOspina");
	var_3953_object = var_3938_object;
	if(var_3953_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01KaterinaGotoLaska");
	var_3955_object = var_3938_object;
	if(var_3955_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01KaterinagotoLaskaSelf");
	var_3957_object = var_3938_object;
	if(var_3957_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01KillerIsKlara");
	var_3959_object = var_3938_object;
	if(var_3959_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01LaskaGotoAlbinos");
	var_3961_object = var_3938_object;
	if(var_3961_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01ViktorGotoAlexandr");
	var_3963_object = var_3938_object;
	if(var_3963_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01ViktorGotoAlxBigSelf");
	var_3965_object = var_3938_object;
	if(var_3965_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q01ViktorGotoBigVlad");
	var_3967_object = var_3938_object;
	if(var_3967_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q02BigVlad");
	var_3969_object = var_3938_object;
	if(var_3969_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q02KapellaGotoMladVlad");
	var_3971_object = var_3938_object;
	if(var_3971_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q02MladVladGotoBigVlad");
	var_3973_object = var_3938_object;
	if(var_3973_object != 0) {
		@@var_3938_object:Remove();
	}
	@@var_3937_object:FindMark(var_3938_object, "d6q02MladVladGotoBigVladSelf");
	var_3975_object = var_3938_object;
	if(var_3975_object != 0) {
		@@var_3938_object:Remove();
	}
	var_3976_bool = 0; var_3977_int = 0;
	func_10031(var_3976_bool, (int)111);
	var_3978_bool = 0; var_3979_int = 0;
	func_10031(var_3978_bool, (int)102);
	var_3980_bool = 0; var_3981_int = 0;
	func_10031(var_3980_bool, (int)107);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9989(var_3963_object)
{
	var_3964_object = Obj(); var_3965_object = Obj();
	GetDiaryRoot(var_3965_object);
	var_3966_bool = var_3965_object == 0; //@nz
	if(var_3966_bool != 0) {
		Trace("Can't retrieve diary root");
		var_3963_object = 0;
		return 2;
	}
	var_3965_object = var_3963_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1797(var_2494_int, var_2495_int, var_2496_int)
{
	var_2497_int = 0; var_2498_int = 0; var_2499_int = 0; var_2500_int = 0;
	var_2501_bool = 0;
	var_2501_bool = 0;
	var_2503_bool = var_2496_int > (int)8;
	if(var_2503_bool != 0) {
		var_2505_bool = var_2496_int < (int)21;
		if(var_2505_bool != 0) {
			var_2501_bool = 1;
		}
	}
	if(var_2501_bool != 0) {
		var_2506_int = 0; var_2507_string = ""; var_2508_string = ""; var_2509_int = 0;
		var_2494_int = var_2506_int;
		func_438(var_2506_int, "pers_wasted_girl", "wasted_girl_d.xml", (int)1);
		var_2510_int = 0; var_2511_string = ""; var_2512_string = ""; var_2513_int = 0;
		var_2494_int = var_2510_int;
		func_438(var_2510_int, "pers_wasted_male", "wasted_male_d.xml", (int)1);
		var_2514_int = 0; var_2515_string = ""; var_2516_string = ""; var_2517_int = 0;
		var_2494_int = var_2514_int;
		func_438(var_2514_int, "pers_woman", "woman_d.xml", (int)1);
		var_2518_int = 0; var_2519_string = ""; var_2520_string = ""; var_2521_int = 0;
		var_2494_int = var_2518_int;
		func_438(var_2518_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_2522_int = 0; var_2523_string = ""; var_2524_string = ""; var_2525_int = 0;
		var_2494_int = var_2522_int;
		func_438(var_2522_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_2526_int = 0; var_2527_string = ""; var_2528_string = ""; var_2529_int = 0;
		var_2494_int = var_2526_int;
		func_438(var_2526_int, "pers_boy", "boy_d.xml", (int)1);
		var_2530_int = 0; var_2531_string = ""; var_2532_string = ""; var_2533_int = 0;
		var_2494_int = var_2530_int;
		func_438(var_2530_int, "pers_girl", "girl_d.xml", (int)1);
		var_2534_int = 0; var_2535_string = ""; var_2536_string = ""; var_2537_int = 0;
		var_2494_int = var_2534_int;
		func_438(var_2534_int, "pers_girl", "girl2_d.xml", (int)1);
		var_2538_int = 0; var_2539_string = ""; var_2540_string = ""; var_2541_int = 0;
		var_2494_int = var_2538_int;
		func_438(var_2538_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_2542_int = 0; var_2543_string = ""; var_2544_string = ""; var_2545_int = 0;
		var_2494_int = var_2542_int;
		func_438(var_2542_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_2546_int = 0; var_2547_string = ""; var_2548_string = ""; var_2549_int = 0;
		var_2494_int = var_2546_int;
		func_438(var_2546_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_2550_int = 0; var_2551_string = ""; var_2552_string = ""; var_2553_int = 0;
		var_2494_int = var_2550_int;
		func_438(var_2550_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_2554_int = 0; var_2555_string = ""; var_2556_string = ""; var_2557_int = 0;
		var_2494_int = var_2554_int;
		func_464(var_2554_int, "fog", "fog.xml", (int)6);
		var_2559_float = 0; var_2560_int = 0;
		var_2495_int = var_2560_int;
		func_1022(var_2559_float, var_2560_int);
		var_2499_int = (int)1 * var_2559_float;
		var_2561_int = var_2499_int;
		if(var_2561_int != 0) {
			var_2562_int = 0; var_2563_string = ""; var_2564_string = ""; var_2565_int = 0;
			var_2494_int = var_2562_int;
			var_2499_int = var_2565_int;
			func_438(var_2562_int, "pers_bomber", "bomber.xml", var_2565_int);
		}
	} else {
		var_2603_int = 0; var_2604_string = ""; var_2605_string = ""; var_2606_int = 0;
		var_2494_int = var_2603_int;
		func_438(var_2603_int, "pers_wasted_girl", "wasted_girl_d.xml", (int)1);
		var_2607_int = 0; var_2608_string = ""; var_2609_string = ""; var_2610_int = 0;
		var_2494_int = var_2607_int;
		func_438(var_2607_int, "pers_wasted_male", "wasted_male_d.xml", (int)1);
		var_2611_int = 0; var_2612_string = ""; var_2613_string = ""; var_2614_int = 0;
		var_2494_int = var_2611_int;
		func_438(var_2611_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_2615_int = 0; var_2616_string = ""; var_2617_string = ""; var_2618_int = 0;
		var_2494_int = var_2615_int;
		func_438(var_2615_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_2619_int = 0; var_2620_string = ""; var_2621_string = ""; var_2622_int = 0;
		var_2494_int = var_2619_int;
		func_438(var_2619_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_2623_int = 0; var_2624_string = ""; var_2625_string = ""; var_2626_int = 0;
		var_2494_int = var_2623_int;
		func_438(var_2623_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_2627_int = 0; var_2628_string = ""; var_2629_string = ""; var_2630_int = 0;
		var_2494_int = var_2627_int;
		func_438(var_2627_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_2631_int = 0; var_2632_string = ""; var_2633_string = ""; var_2634_int = 0;
		var_2494_int = var_2631_int;
		func_438(var_2631_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_2635_int = 0; var_2636_string = ""; var_2637_string = ""; var_2638_int = 0;
		var_2494_int = var_2635_int;
		func_464(var_2635_int, "fog", "fog.xml", (int)6);
		var_2640_float = 0; var_2641_int = 0;
		var_2495_int = var_2641_int;
		func_1022(var_2640_float, var_2641_int);
		var_2500_int = (int)1 * var_2640_float;
		var_2642_int = var_2500_int;
		if(var_2642_int == 0) goto Label_1993;
		var_2643_int = 0; var_2644_string = ""; var_2645_string = ""; var_2646_int = 0;
		var_2494_int = var_2643_int;
		var_2500_int = var_2646_int;
		func_438(var_2643_int, "pers_bomber", "bomber.xml", var_2646_int);
	}
Label_1993:
	var_2566_int = 0; var_2567_string = ""; var_2568_string = ""; var_2569_int = 0; var_2570_int = 0; var_2571_int = 0;
	var_2494_int = var_2566_int;
	func_451(var_2566_int, "pers_worker", "agony1.xml", (int)2, (int)4, (int)4);
	var_2572_int = 0; var_2573_string = ""; var_2574_string = ""; var_2575_int = 0; var_2576_int = 0; var_2577_int = 0;
	var_2494_int = var_2572_int;
	func_451(var_2572_int, "pers_unosha", "agony1.xml", (int)2, (int)4, (int)4);
	var_2578_int = 0; var_2579_string = ""; var_2580_string = ""; var_2581_int = 0; var_2582_int = 0; var_2583_int = 0;
	var_2494_int = var_2578_int;
	func_451(var_2578_int, "pers_woman", "agony1.xml", (int)2, (int)4, (int)4);
	var_2584_int = 0; var_2585_string = ""; var_2586_string = ""; var_2587_int = 0; var_2588_int = 0; var_2589_int = 0;
	var_2494_int = var_2584_int;
	func_451(var_2584_int, "pers_vaxxabitka", "agony1.xml", (int)2, (int)4, (int)4);
	var_2590_int = 0; var_2591_string = ""; var_2592_string = ""; var_2593_int = 0; var_2594_int = 0; var_2595_int = 0;
	var_2494_int = var_2590_int;
	func_451(var_2590_int, "pers_wasted_girl", "agony1.xml", (int)2, (int)4, (int)4);
	var_2596_bool = 0; var_2597_int = 0; var_2598_int = 0;
	var_2495_int = var_2597_int;
	var_2496_int = var_2598_int;
	func_1112(var_2596_bool, var_2597_int, var_2598_int);
	if(var_2596_bool != 0) {
		var_2599_int = 0; var_2600_string = ""; var_2601_string = ""; var_2602_int = 0;
		var_2494_int = var_2599_int;
		func_438(var_2599_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 4;
	
}


func_2310(var_1849_int, var_1850_int, var_1851_int)
{
	var_1852_int = 0; var_1853_int = 0; var_1854_int = 0; var_1855_int = 0;
	var_1856_bool = 0;
	var_1856_bool = 0;
	var_1858_bool = var_1851_int > (int)8;
	if(var_1858_bool != 0) {
		var_1860_bool = var_1851_int < (int)21;
		if(var_1860_bool != 0) {
			var_1856_bool = 1;
		}
	}
	if(var_1856_bool != 0) {
		var_1861_int = 0; var_1862_string = ""; var_1863_string = ""; var_1864_int = 0;
		var_1849_int = var_1861_int;
		func_438(var_1861_int, "pers_woman", "woman_d.xml", (int)1);
		var_1865_int = 0; var_1866_string = ""; var_1867_string = ""; var_1868_int = 0;
		var_1849_int = var_1865_int;
		func_438(var_1865_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_1869_int = 0; var_1870_string = ""; var_1871_string = ""; var_1872_int = 0;
		var_1849_int = var_1869_int;
		func_438(var_1869_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_1873_int = 0; var_1874_string = ""; var_1875_string = ""; var_1876_int = 0;
		var_1849_int = var_1873_int;
		func_438(var_1873_int, "pers_worker", "worker_d.xml", (int)1);
		var_1877_int = 0; var_1878_string = ""; var_1879_string = ""; var_1880_int = 0;
		var_1849_int = var_1877_int;
		func_438(var_1877_int, "pers_worker", "worker2_d.xml", (int)1);
		var_1881_int = 0; var_1882_string = ""; var_1883_string = ""; var_1884_int = 0;
		var_1849_int = var_1881_int;
		func_438(var_1881_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1885_int = 0; var_1886_string = ""; var_1887_string = ""; var_1888_int = 0;
		var_1849_int = var_1885_int;
		func_438(var_1885_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_1889_int = 0; var_1890_string = ""; var_1891_string = ""; var_1892_int = 0;
		var_1849_int = var_1889_int;
		func_438(var_1889_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1893_int = 0; var_1894_string = ""; var_1895_string = ""; var_1896_int = 0;
		var_1849_int = var_1893_int;
		func_438(var_1893_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_1897_int = 0; var_1898_string = ""; var_1899_string = ""; var_1900_int = 0;
		var_1849_int = var_1897_int;
		func_438(var_1897_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1902_int = var_1850_int + (int)1;
		var_1904_bool = var_1902_int >= (int)3;
		if(var_1904_bool != 0) {
		}
		var_1906_int = var_1850_int + (int)1;
		var_1908_bool = var_1906_int >= (int)7;
		if(var_1908_bool != 0) {
			var_1909_int = 0; var_1910_string = ""; var_1911_string = ""; var_1912_int = 0;
			var_1849_int = var_1909_int;
			func_438(var_1909_int, "pers_butcher", "butcher_d.xml", (int)2);
		}
		var_1913_int = 0; var_1914_string = ""; var_1915_string = ""; var_1916_int = 0;
		var_1849_int = var_1913_int;
		func_464(var_1913_int, "fog", "fog.xml", (int)5);
		var_1918_float = 0; var_1919_int = 0;
		var_1850_int = var_1919_int;
		func_1022(var_1918_float, var_1919_int);
		var_1854_int = (int)1 * var_1918_float;
		var_1920_int = var_1854_int;
		if(var_1920_int != 0) {
			var_1921_int = 0; var_1922_string = ""; var_1923_string = ""; var_1924_int = 0;
			var_1849_int = var_1921_int;
			var_1854_int = var_1924_int;
			func_438(var_1921_int, "pers_bomber", "bomber.xml", var_1924_int);
		}
	} else {
		var_1962_int = 0; var_1963_string = ""; var_1964_string = ""; var_1965_int = 0;
		var_1849_int = var_1962_int;
		func_438(var_1962_int, "pers_unosha", "unosha_d.xml", (int)1);
		var_1966_int = 0; var_1967_string = ""; var_1968_string = ""; var_1969_int = 0;
		var_1849_int = var_1966_int;
		func_438(var_1966_int, "pers_unosha", "unosha2_d.xml", (int)1);
		var_1970_int = 0; var_1971_string = ""; var_1972_string = ""; var_1973_int = 0;
		var_1849_int = var_1970_int;
		func_438(var_1970_int, "pers_worker", "worker_d.xml", (int)1);
		var_1974_int = 0; var_1975_string = ""; var_1976_string = ""; var_1977_int = 0;
		var_1849_int = var_1974_int;
		func_438(var_1974_int, "pers_worker", "worker2_d.xml", (int)1);
		var_1978_int = 0; var_1979_string = ""; var_1980_string = ""; var_1981_int = 0;
		var_1849_int = var_1978_int;
		func_438(var_1978_int, "pers_alkash", "alkash_d.xml", (int)1);
		var_1982_int = 0; var_1983_string = ""; var_1984_string = ""; var_1985_int = 0;
		var_1849_int = var_1982_int;
		func_438(var_1982_int, "pers_vaxxabit", "vaxxabit.xml", (int)1);
		var_1986_int = 0; var_1987_string = ""; var_1988_string = ""; var_1989_int = 0;
		var_1849_int = var_1986_int;
		func_438(var_1986_int, "pers_vaxxabit", "vaxxabit_d.xml", (int)1);
		var_1990_int = 0; var_1991_string = ""; var_1992_string = ""; var_1993_int = 0;
		var_1849_int = var_1990_int;
		func_438(var_1990_int, "pers_vaxxabitka", "vaxxabitka.xml", (int)1);
		var_1994_int = 0; var_1995_string = ""; var_1996_string = ""; var_1997_int = 0;
		var_1849_int = var_1994_int;
		func_438(var_1994_int, "pers_vaxxabitka", "vaxxabitka_d.xml", (int)1);
		var_1999_int = var_1850_int + (int)1;
		var_2001_bool = var_1999_int >= (int)3;
		if(var_2001_bool != 0) {
		}
		var_2003_int = var_1850_int + (int)1;
		var_2005_bool = var_2003_int >= (int)7;
		if(var_2005_bool != 0) {
			var_2006_int = 0; var_2007_string = ""; var_2008_string = ""; var_2009_int = 0;
			var_1849_int = var_2006_int;
			func_438(var_2006_int, "pers_butcher", "butcher_d.xml", (int)2);
		}
		var_2010_int = 0; var_2011_string = ""; var_2012_string = ""; var_2013_int = 0;
		var_1849_int = var_2010_int;
		func_464(var_2010_int, "fog", "fog.xml", (int)4);
		var_2015_float = 0; var_2016_int = 0;
		var_1850_int = var_2016_int;
		func_1022(var_2015_float, var_2016_int);
		var_1855_int = (int)1 * var_2015_float;
		var_2017_int = var_1855_int;
		if(var_2017_int == 0) goto Label_2533;
		var_2018_int = 0; var_2019_string = ""; var_2020_string = ""; var_2021_int = 0;
		var_1849_int = var_2018_int;
		var_1855_int = var_2021_int;
		func_438(var_2018_int, "pers_bomber", "bomber.xml", var_2021_int);
	}
Label_2533:
	var_1925_int = 0; var_1926_string = ""; var_1927_string = ""; var_1928_int = 0; var_1929_int = 0; var_1930_int = 0;
	var_1849_int = var_1925_int;
	func_451(var_1925_int, "pers_worker", "agony1.xml", (int)2, (int)4, (int)4);
	var_1931_int = 0; var_1932_string = ""; var_1933_string = ""; var_1934_int = 0; var_1935_int = 0; var_1936_int = 0;
	var_1849_int = var_1931_int;
	func_451(var_1931_int, "pers_unosha", "agony1.xml", (int)2, (int)4, (int)4);
	var_1937_int = 0; var_1938_string = ""; var_1939_string = ""; var_1940_int = 0; var_1941_int = 0; var_1942_int = 0;
	var_1849_int = var_1937_int;
	func_451(var_1937_int, "pers_woman", "agony1.xml", (int)2, (int)4, (int)4);
	var_1943_int = 0; var_1944_string = ""; var_1945_string = ""; var_1946_int = 0; var_1947_int = 0; var_1948_int = 0;
	var_1849_int = var_1943_int;
	func_451(var_1943_int, "pers_vaxxabitka", "agony1.xml", (int)2, (int)4, (int)4);
	var_1949_int = 0; var_1950_string = ""; var_1951_string = ""; var_1952_int = 0; var_1953_int = 0; var_1954_int = 0;
	var_1849_int = var_1949_int;
	func_451(var_1949_int, "pers_wasted_girl", "agony1.xml", (int)2, (int)4, (int)4);
	var_1955_bool = 0; var_1956_int = 0; var_1957_int = 0;
	var_1850_int = var_1956_int;
	var_1851_int = var_1957_int;
	func_1112(var_1955_bool, var_1956_int, var_1957_int);
	if(var_1955_bool != 0) {
		var_1958_int = 0; var_1959_string = ""; var_1960_string = ""; var_1961_int = 0;
		var_1849_int = var_1958_int;
		func_438(var_1958_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 4;
	
}


func_5895(var_2418_int, var_2419_int, var_2420_object, var_2421_object, var_2422_object, var_2423_object)
{
	var_2425_bool = var_2419_int == (int)0;
	if(var_2425_bool != 0) {
		var_2426_int = 0; var_2427_bool = 0;
		func_731((int)12, (bool)1);
		var_2428_int = 0; var_2429_bool = 0; var_2430_int = 0;
		func_748((int)12, (bool)1, (int)1);
		var_2431_int = 0; var_2432_int = 0; var_2433_object = Obj(); var_2434_object = Obj(); var_2435_object = Obj();
		var_2418_int = var_2432_int;
		var_2420_object = var_2433_object;
		var_2421_object = var_2434_object;
		var_2422_object = var_2435_object;
		func_576((int)12, var_2432_int, var_2433_object, var_2434_object, var_2435_object);
		var_2436_object = Obj(); var_2437_int = 0;
		var_2423_object = var_2436_object;
		func_229(var_2436_object, (int)1);
	}
	var_2438_int = 0; var_2439_bool = 0;
	func_714((int)12, (bool)0);
	var_2440_int = 0; var_2441_int = 0; var_2442_int = 0;
	var_2418_int = var_2441_int;
	var_2419_int = var_2442_int;
	func_2052((int)12, var_2441_int, var_2442_int);
	return 0;
}


func_4872()
{
	return 0;
}


func_6409(var_3697_int, var_3698_int, var_3699_object, var_3700_object, var_3701_object, var_3702_object)
{
	var_3704_bool = var_3698_int == (int)0;
	if(var_3704_bool != 0) {
		var_3705_int = 0; var_3706_bool = 0;
		func_731((int)15, (bool)1);
		var_3707_int = 0; var_3708_bool = 0; var_3709_int = 0;
		func_748((int)15, (bool)1, (int)1);
		var_3710_int = 0; var_3711_int = 0; var_3712_object = Obj(); var_3713_object = Obj(); var_3714_object = Obj();
		var_3697_int = var_3711_int;
		var_3699_object = var_3712_object;
		var_3700_object = var_3713_object;
		var_3701_object = var_3714_object;
		func_576((int)15, var_3711_int, var_3712_object, var_3713_object, var_3714_object);
		var_3715_object = Obj(); var_3716_int = 0;
		var_3702_object = var_3715_object;
		func_229(var_3715_object, (int)1);
	}
	var_3717_int = 0; var_3718_bool = 0;
	func_714((int)15, (bool)0);
	var_3719_int = 0; var_3720_int = 0; var_3721_int = 0;
	var_3697_int = var_3720_int;
	var_3698_int = var_3721_int;
	func_2978((int)15, var_3720_int, var_3721_int);
	return 0;
}


func_3338(var_3047_int, var_3048_int, var_3049_int)
{
	var_3050_int = 0; var_3051_int = 0; var_3052_int = 0; var_3053_int = 0; var_3054_int = 0; var_3055_int = 0; var_3056_int = 0; var_3057_int = 0;
	var_3058_bool = 0;
	var_3058_bool = 0;
	var_3060_bool = var_3049_int > (int)8;
	if(var_3060_bool != 0) {
		var_3062_bool = var_3049_int < (int)21;
		if(var_3062_bool != 0) {
			var_3058_bool = 1;
		}
	}
	if(var_3058_bool != 0) {
		var_3063_int = 0; var_3064_string = ""; var_3065_string = ""; var_3066_int = 0;
		var_3047_int = var_3063_int;
		func_438(var_3063_int, "pers_woman", "woman.xml", (int)1);
		var_3067_int = 0; var_3068_string = ""; var_3069_string = ""; var_3070_int = 0;
		var_3047_int = var_3067_int;
		func_438(var_3067_int, "pers_unosha", "unosha.xml", (int)1);
		var_3071_int = 0; var_3072_string = ""; var_3073_string = ""; var_3074_int = 0;
		var_3047_int = var_3071_int;
		func_438(var_3071_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3075_int = 0; var_3076_string = ""; var_3077_string = ""; var_3078_int = 0;
		var_3047_int = var_3075_int;
		func_438(var_3075_int, "pers_boy", "boy.xml", (int)1);
		var_3080_int = var_3048_int + (int)1;
		var_3082_bool = var_3080_int >= (int)2;
		if(var_3082_bool != 0) {
			var_3083_int = 0; var_3084_string = ""; var_3085_string = ""; var_3086_int = 0;
			var_3047_int = var_3083_int;
			func_438(var_3083_int, "pers_patrool", "patrol.xml", (int)2);
		}
		var_3087_int = 0; var_3088_string = ""; var_3089_string = ""; var_3090_int = 0;
		var_3047_int = var_3087_int;
		func_438(var_3087_int, "pers_rat", "rat.xml", (int)3);
		var_3092_float = 0; var_3093_int = 0;
		var_3048_int = var_3093_int;
		func_932(var_3092_float, var_3093_int);
		var_3054_int = (int)1 * var_3092_float;
		var_3094_int = var_3054_int;
		if(var_3094_int != 0) {
			var_3095_int = 0; var_3096_string = ""; var_3097_string = ""; var_3098_int = 0;
			var_3047_int = var_3095_int;
			var_3054_int = var_3098_int;
			func_438(var_3095_int, "pers_grabitel", "grabitel.xml", var_3098_int);
		}
		var_3100_float = 0; var_3101_int = 0;
		var_3048_int = var_3101_int;
		func_1022(var_3100_float, var_3101_int);
		var_3055_int = (int)1 * var_3100_float;
		var_3102_int = var_3055_int;
		if(var_3102_int != 0) {
			var_3103_int = 0; var_3104_string = ""; var_3105_string = ""; var_3106_int = 0;
			var_3047_int = var_3103_int;
			var_3055_int = var_3106_int;
			func_438(var_3103_int, "pers_bomber", "bomber.xml", var_3106_int);
		}
	} else {
		var_3114_int = 0; var_3115_string = ""; var_3116_string = ""; var_3117_int = 0;
		var_3047_int = var_3114_int;
		func_438(var_3114_int, "pers_woman", "woman.xml", (int)1);
		var_3118_int = 0; var_3119_string = ""; var_3120_string = ""; var_3121_int = 0;
		var_3047_int = var_3118_int;
		func_438(var_3118_int, "pers_unosha", "unosha.xml", (int)1);
		var_3122_int = 0; var_3123_string = ""; var_3124_string = ""; var_3125_int = 0;
		var_3047_int = var_3122_int;
		func_438(var_3122_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3126_int = 0; var_3127_string = ""; var_3128_string = ""; var_3129_int = 0;
		var_3047_int = var_3126_int;
		func_438(var_3126_int, "pers_boy", "boy.xml", (int)1);
		var_3131_int = var_3048_int + (int)1;
		var_3133_bool = var_3131_int >= (int)2;
		if(var_3133_bool != 0) {
			var_3134_int = 0; var_3135_string = ""; var_3136_string = ""; var_3137_int = 0;
			var_3047_int = var_3134_int;
			func_438(var_3134_int, "pers_patrool", "patrol.xml", (int)2);
		}
		var_3138_int = 0; var_3139_string = ""; var_3140_string = ""; var_3141_int = 0;
		var_3047_int = var_3138_int;
		func_438(var_3138_int, "pers_rat", "rat.xml", (int)3);
		var_3143_float = 0; var_3144_int = 0;
		var_3048_int = var_3144_int;
		func_932(var_3143_float, var_3144_int);
		var_3056_int = (int)2 * var_3143_float;
		var_3145_int = var_3056_int;
		if(var_3145_int != 0) {
			var_3146_int = 0; var_3147_string = ""; var_3148_string = ""; var_3149_int = 0;
			var_3047_int = var_3146_int;
			var_3056_int = var_3149_int;
			func_438(var_3146_int, "pers_grabitel", "grabitel.xml", var_3149_int);
		}
		var_3151_float = 0; var_3152_int = 0;
		var_3048_int = var_3152_int;
		func_1022(var_3151_float, var_3152_int);
		var_3057_int = (int)1 * var_3151_float;
		var_3153_int = var_3057_int;
		if(var_3153_int == 0) goto Label_3504;
		var_3154_int = 0; var_3155_string = ""; var_3156_string = ""; var_3157_int = 0;
		var_3047_int = var_3154_int;
		var_3057_int = var_3157_int;
		func_438(var_3154_int, "pers_bomber", "bomber.xml", var_3157_int);
	}
Label_3504:
	var_3107_bool = 0; var_3108_int = 0; var_3109_int = 0;
	var_3048_int = var_3108_int;
	var_3049_int = var_3109_int;
	func_1112(var_3107_bool, var_3108_int, var_3109_int);
	if(var_3107_bool != 0) {
		var_3110_int = 0; var_3111_string = ""; var_3112_string = ""; var_3113_int = 0;
		var_3047_int = var_3110_int;
		func_438(var_3110_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 8;
	
}


func_4874(var_944_int, var_945_int, var_946_object, var_947_object, var_948_object, var_949_object)
{
	var_951_bool = var_945_int == (int)0;
	if(var_951_bool != 0) {
		var_952_int = 0; var_953_bool = 0;
		func_731((int)6, (bool)0);
		var_954_int = 0; var_955_bool = 0; var_956_int = 0;
		func_748((int)6, (bool)0, (int)1);
		var_957_int = 0; var_958_int = 0; var_959_object = Obj(); var_960_object = Obj(); var_961_object = Obj();
		var_957_int = 6;
		var_944_int = var_958_int;
		var_946_object = var_959_object;
		var_947_object = var_960_object;
		var_948_object = var_961_object;
		func_557(var_958_int, var_959_object, var_960_object, var_961_object);
		var_962_object = Obj(); var_963_int = 0;
		var_949_object = var_962_object;
		func_229(var_962_object, (int)0);
	}
	var_964_int = 0; var_965_int = 0;
	var_945_int = var_965_int;
	func_872((int)6, var_965_int);
	return 0;
}


func_3852()
{
	return 0;
}


func_5388(var_2337_int, var_2338_int, var_2339_object, var_2340_object, var_2341_object, var_2342_object)
{
	var_2344_bool = var_2338_int == (int)0;
	if(var_2344_bool != 0) {
		var_2345_int = 0; var_2346_bool = 0;
		func_731((int)9, (bool)1);
		var_2347_int = 0; var_2348_bool = 0; var_2349_int = 0;
		func_748((int)9, (bool)1, (int)1);
		var_2350_int = 0; var_2351_int = 0; var_2352_object = Obj(); var_2353_object = Obj(); var_2354_object = Obj();
		var_2337_int = var_2351_int;
		var_2339_object = var_2352_object;
		var_2340_object = var_2353_object;
		var_2341_object = var_2354_object;
		func_576((int)9, var_2351_int, var_2352_object, var_2353_object, var_2354_object);
		var_2355_object = Obj(); var_2356_int = 0;
		var_2342_object = var_2355_object;
		func_229(var_2355_object, (int)1);
	}
	var_2357_int = 0; var_2358_bool = 0;
	func_714((int)9, (bool)0);
	var_2359_int = 0; var_2360_int = 0; var_2361_int = 0;
	var_2337_int = var_2360_int;
	var_2338_int = var_2361_int;
	func_2052((int)9, var_2360_int, var_2361_int);
	return 0;
}


func_3854(var_409_int, var_410_int, var_411_object, var_412_object, var_413_object, var_414_object)
{
	var_416_bool = var_410_int == (int)0;
	if(var_416_bool != 0) {
		var_417_int = 0; var_418_bool = 0;
		func_731((int)0, (bool)0);
		var_419_int = 0; var_420_bool = 0; var_421_int = 0;
		func_748((int)0, (bool)0, (int)1);
		var_457_int = 0; var_458_int = 0; var_459_object = Obj(); var_460_object = Obj(); var_461_object = Obj();
		var_457_int = 0;
		var_409_int = var_458_int;
		var_411_object = var_459_object;
		var_412_object = var_460_object;
		var_413_object = var_461_object;
		func_557(var_458_int, var_459_object, var_460_object, var_461_object);
		var_502_object = Obj(); var_503_int = 0;
		var_414_object = var_502_object;
		func_229(var_502_object, (int)0);
	}
	var_529_int = 0; var_530_int = 0;
	var_410_int = var_530_int;
	func_872((int)0, var_530_int);
	var_555_int = 0; var_556_int = 0; var_557_int = 0;
	var_555_int = 0;
	var_409_int = var_556_int;
	var_410_int = var_557_int;
	func_1607(var_556_int, var_557_int);
	return 0;
}


func_8460()
{
	var_3936_string = ""; var_3937_bool = 0;
	func_137("warehouse_rubin@door1", (bool)1);
	return 0;
}


func_267(var_83_int)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	
Label_270:
	var_89_bool = (int)0 < (int)16;
	if(var_89_bool != 0) {
		var_90_bool = 0; var_91_int = 0;
		var_87_int = var_91_int;
		func_357(var_90_bool, var_91_int);
		if(var_90_bool != 0) {
			(int)0 = (int)0 + (int)1;
		}
		var_87_int = var_87_int + (int)1;
		goto Label_270;
	}
	var_86_int = var_83_int;
	return 4;
}


func_4370(var_836_int, var_837_int, var_838_object, var_839_object, var_840_object, var_841_object)
{
	var_843_bool = var_837_int == (int)0;
	if(var_843_bool != 0) {
		var_844_int = 0; var_845_bool = 0;
		func_731((int)13, (bool)0);
		var_846_int = 0; var_847_bool = 0; var_848_int = 0;
		func_748((int)13, (bool)0, (int)1);
		var_849_int = 0; var_850_int = 0; var_851_object = Obj(); var_852_object = Obj(); var_853_object = Obj();
		var_849_int = 13;
		var_836_int = var_850_int;
		var_838_object = var_851_object;
		var_839_object = var_852_object;
		var_840_object = var_853_object;
		func_557(var_850_int, var_851_object, var_852_object, var_853_object);
		var_854_object = Obj(); var_855_int = 0;
		var_841_object = var_854_object;
		func_229(var_854_object, (int)0);
	}
	var_856_int = 0; var_857_int = 0;
	var_837_int = var_857_int;
	func_805((int)3, var_857_int);
	var_873_int = 0; var_874_int = 0; var_875_int = 0;
	var_836_int = var_874_int;
	var_837_int = var_875_int;
	func_1411((int)3, var_874_int, var_875_int);
	return 0;
}


func_10002(var_3954_bool, var_3955_object, var_3956_int)
{
	var_3957_object = Obj(); var_3958_object = Obj(); var_3959_int = 0; var_3960_object = Obj(); var_3961_object = Obj(); var_3962_int = 0;
	func_9989(Obj());
	var_3963_object = var_3960_object;
	@@var_3960_object:Find(var_3956_int, var_3961_object);
	var_3968_bool = var_3961_object == 0; //@nz
	if(var_3968_bool != 0) {
		var_3970_int = "Can't find diary parent with id: " + var_3956_int;
		Trace(var_3970_int);
		var_3954_bool = 0;
		return 6;
	}
	@@var_3961_object:AddChild(var_3955_object);
	SetVariable("player_diary", (int)1);
	@@var_3955_object:GetCategory(var_3962_int);
	SetDiarySection(var_3962_int);
	var_3954_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_8467()
{
	var_3942_string = ""; var_3943_bool = 0;
	func_137("theater@door1", (bool)1);
	return 0;
}


func_8474()
{
	var_4418_string = ""; var_4419_bool = 0;
	func_137("theater@door1", (bool)0);
	return 0;
}


func_285()
{
	var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0;
	irand(var_99_int, (int)16);
	var_100_int = 0;
	
Label_290:
	var_104_bool = var_100_int < (int)16;
	if(var_104_bool != 0) {
		var_105_int = var_100_int + var_99_int;
		var_101_int = var_105_int % (int)16;
		var_107_bool = 0;
		var_107_bool = 0;
		var_108_bool = 0; var_109_int = 0;
		var_101_int = var_109_int;
		func_323(var_108_bool, var_109_int);
		if(var_108_bool != 0) {
			var_118_bool = 0; var_119_int = 0;
			var_101_int = var_119_int;
			func_11400(var_118_bool, var_119_int);
			if(var_118_bool != 0) {
				var_107_bool = 1;
			}
		}
		if(var_107_bool != 0) {
			var_142_int = 0;
			var_101_int = var_142_int;
			func_373(var_142_int);
			var_155_int = "Diseased Region: " + var_101_int;
			Trace(var_155_int);
			var_100_int = var_100_int + (int)1;
			goto Label_290;
		}
		return 6;
	}
	return 6;
}


func_8481()
{
	func_10126();
	return 0;
}


func_805(var_856_int, var_857_int)
{
	var_858_bool = 0;
	var_858_bool = 1;
	var_859_bool = 0;
	var_859_bool = 1;
	var_861_bool = var_857_int >= (int)20;
	if(var_861_bool != 1) {
		var_863_bool = var_857_int < (int)2;
		if(var_863_bool != 1) {
			var_859_bool = 0;
		}
	}
	if(var_859_bool != 1) {
		var_864_bool = 0;
		var_864_bool = 0;
		var_866_bool = var_857_int >= (int)6;
		if(var_866_bool != 0) {
			var_868_bool = var_857_int < (int)10;
			if(var_868_bool != 0) {
				var_864_bool = 1;
			}
		}
		if(var_864_bool != 1) {
			var_858_bool = 0;
		}
	}
	if(var_858_bool != 0) {
		var_869_int = 0; var_870_bool = 0;
		var_856_int = var_869_int;
		func_714(var_869_int, (bool)1);
	} else {
		var_871_int = 0; var_872_bool = 0;
		var_856_int = var_871_int;
		func_714(var_871_int, (bool)0);
	}
	return 0;
	
}


func_8486()
{
	var_3977_string = ""; var_3978_bool = 0;
	func_137("termitnik@door1", (bool)1);
	return 0;
}


func_4908(var_2105_int, var_2106_int, var_2107_object, var_2108_object, var_2109_object, var_2110_object)
{
	var_2112_bool = var_2106_int == (int)0;
	if(var_2112_bool != 0) {
		var_2113_int = 0; var_2114_bool = 0;
		func_731((int)6, (bool)1);
		var_2115_int = 0; var_2116_bool = 0; var_2117_int = 0;
		func_748((int)6, (bool)1, (int)1);
		var_2118_int = 0; var_2119_int = 0; var_2120_object = Obj(); var_2121_object = Obj(); var_2122_object = Obj();
		var_2105_int = var_2119_int;
		var_2107_object = var_2120_object;
		var_2108_object = var_2121_object;
		var_2109_object = var_2122_object;
		func_576((int)6, var_2119_int, var_2120_object, var_2121_object, var_2122_object);
		var_2123_object = Obj(); var_2124_int = 0;
		var_2110_object = var_2123_object;
		func_229(var_2123_object, (int)1);
	}
	var_2125_int = 0; var_2126_bool = 0;
	func_714((int)6, (bool)0);
	return 0;
}


func_11565(var_3724_int)
{
	var_3725_object = Obj(); var_3726_object = Obj(); var_3727_object = Obj(); var_3728_object = Obj(); var_3729_object = Obj(); var_3730_object = Obj(); var_3731_object = Obj(); var_3732_object = Obj(); var_3733_object = Obj(); var_3734_object = Obj();
	var_3736_bool = var_3724_int == (int)1;
	if(var_3736_bool != 0) {
		Trace("Special diseased house: r4_house_2_02");
		GetSceneByName(var_3730_object, "r4_house_2_02");
		ReplaceScene(var_3730_object, "s_r4_house_2_02.isc");
		var_3730_object = 0;
	} else {
		var_3741_bool = var_3724_int == (int)3;
		if(var_3741_bool != 0) {
			Trace("Special diseased house: house7_03");
			GetSceneByName(var_3731_object, "house7_03");
			ReplaceScene(var_3731_object, "s_house7_03.isc");
			var_3731_object = 0;
			goto Label_11635;
		}
		var_3746_bool = var_3724_int == (int)5;
		if(var_3746_bool != 0) {
			Trace("Special house: sobor (with corpses)");
			GetSceneByName(var_3732_object, "sobor");
			ReplaceScene(var_3732_object, "sobor_trup.isc");
			var_3732_object = 0;
			goto Label_11635;
		}
		var_3751_bool = var_3724_int == (int)6;
		if(var_3751_bool != 0) {
			Trace("Special house: sobor (normal)");
			GetSceneByName(var_3733_object, "sobor");
			ReplaceScene(var_3733_object, "sobor.isc");
			var_3733_object = 0;
			goto Label_11635;
		}
		var_3756_bool = var_3724_int == (int)7;
		if(var_3756_bool == 0) goto Label_11635;
		Trace("Special diseased house: r4_house_2_02");
		GetSceneByName(var_3734_object, "r4_house_2_02");
		ReplaceScene(var_3734_object, "s_r4_house_2_02.isc");
		var_3734_object = 0;
	}
Label_11635:
	return 10;
	
}


func_8493()
{
	var_4777_string = ""; var_4778_bool = 0;
	func_137("termitnik@door1", (bool)0);
	return 0;
}


func_5935(var_3508_int, var_3509_int, var_3510_object, var_3511_object, var_3512_object, var_3513_object)
{
	var_3515_bool = var_3509_int == (int)0;
	if(var_3515_bool != 0) {
		var_3516_int = 0; var_3517_bool = 0;
		func_731((int)12, (bool)1);
		var_3518_int = 0; var_3519_bool = 0; var_3520_int = 0;
		func_748((int)12, (bool)1, (int)1);
		var_3521_int = 0; var_3522_int = 0; var_3523_object = Obj(); var_3524_object = Obj(); var_3525_object = Obj();
		var_3508_int = var_3522_int;
		var_3510_object = var_3523_object;
		var_3511_object = var_3524_object;
		var_3512_object = var_3525_object;
		func_655((int)12, var_3522_int, var_3523_object, var_3524_object, var_3525_object);
		var_3526_object = Obj(); var_3527_int = 0;
		var_3513_object = var_3526_object;
		func_229(var_3526_object, (int)2);
	}
	var_3528_int = 0; var_3529_bool = 0;
	func_714((int)12, (bool)0);
	var_3530_int = 0; var_3531_int = 0; var_3532_int = 0;
	var_3508_int = var_3531_int;
	var_3509_int = var_3532_int;
	func_3158((int)12, var_3531_int, var_3532_int);
	return 0;
}


func_10031(var_3870_bool, var_3871_int)
{
	var_3872_object = Obj(); var_3873_object = Obj(); var_3874_object = Obj(); var_3875_object = Obj();
	func_9989(Obj());
	var_3876_object = var_3874_object;
	@@var_3874_object:Find(var_3871_int, var_3875_object);
	var_3881_bool = var_3875_object == 0; //@nz
	if(var_3881_bool != 0) {
		var_3870_bool = 0;
		return 4;
	}
	@@var_3875_object:Remove();
	var_3870_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5428(var_3427_int, var_3428_int, var_3429_object, var_3430_object, var_3431_object, var_3432_object)
{
	var_3434_bool = var_3428_int == (int)0;
	if(var_3434_bool != 0) {
		var_3435_int = 0; var_3436_bool = 0;
		func_731((int)9, (bool)1);
		var_3437_int = 0; var_3438_bool = 0; var_3439_int = 0;
		func_748((int)9, (bool)1, (int)1);
		var_3440_int = 0; var_3441_int = 0; var_3442_object = Obj(); var_3443_object = Obj(); var_3444_object = Obj();
		var_3427_int = var_3441_int;
		var_3429_object = var_3442_object;
		var_3430_object = var_3443_object;
		var_3431_object = var_3444_object;
		func_655((int)9, var_3441_int, var_3442_object, var_3443_object, var_3444_object);
		var_3445_object = Obj(); var_3446_int = 0;
		var_3432_object = var_3445_object;
		func_229(var_3445_object, (int)2);
	}
	var_3447_int = 0; var_3448_bool = 0;
	func_714((int)9, (bool)0);
	var_3449_int = 0; var_3450_int = 0; var_3451_int = 0;
	var_3427_int = var_3450_int;
	var_3428_int = var_3451_int;
	func_3158((int)9, var_3450_int, var_3451_int);
	return 0;
}


func_8500()
{
	SetVariable("resque_list", (int)1);
	func_11280();
	return 0;
}


func_3894(var_1406_int, var_1407_int, var_1408_object, var_1409_object, var_1410_object, var_1411_object)
{
	var_1413_bool = var_1407_int == (int)0;
	if(var_1413_bool != 0) {
		var_1414_int = 0; var_1415_bool = 0;
		func_731((int)0, (bool)1);
		var_1416_int = 0; var_1417_bool = 0; var_1418_int = 0;
		func_748((int)0, (bool)1, (int)1);
		var_1419_int = 0; var_1420_int = 0; var_1421_object = Obj(); var_1422_object = Obj(); var_1423_object = Obj();
		var_1406_int = var_1420_int;
		var_1408_object = var_1421_object;
		var_1409_object = var_1422_object;
		var_1410_object = var_1423_object;
		func_576((int)0, var_1420_int, var_1421_object, var_1422_object, var_1423_object);
		var_1509_object = Obj(); var_1510_int = 0;
		var_1411_object = var_1509_object;
		func_229(var_1509_object, (int)1);
	}
	var_1511_int = 0; var_1512_bool = 0;
	func_714((int)0, (bool)0);
	var_1513_int = 0; var_1514_int = 0; var_1515_int = 0;
	var_1406_int = var_1514_int;
	var_1407_int = var_1515_int;
	func_2592((int)0, var_1514_int, var_1515_int);
	return 0;
}


func_4410(var_2024_int, var_2025_int, var_2026_object, var_2027_object, var_2028_object, var_2029_object)
{
	var_2031_bool = var_2025_int == (int)0;
	if(var_2031_bool != 0) {
		var_2032_int = 0; var_2033_bool = 0;
		func_731((int)13, (bool)1);
		var_2034_int = 0; var_2035_bool = 0; var_2036_int = 0;
		func_748((int)13, (bool)1, (int)1);
		var_2037_int = 0; var_2038_int = 0; var_2039_object = Obj(); var_2040_object = Obj(); var_2041_object = Obj();
		var_2024_int = var_2038_int;
		var_2026_object = var_2039_object;
		var_2027_object = var_2040_object;
		var_2028_object = var_2041_object;
		func_576((int)13, var_2038_int, var_2039_object, var_2040_object, var_2041_object);
		var_2042_object = Obj(); var_2043_int = 0;
		var_2029_object = var_2042_object;
		func_229(var_2042_object, (int)1);
	}
	var_2044_int = 0; var_2045_bool = 0;
	func_714((int)3, (bool)0);
	var_2046_int = 0; var_2047_int = 0; var_2048_int = 0;
	var_2024_int = var_2047_int;
	var_2025_int = var_2048_int;
	func_2310((int)3, var_2047_int, var_2048_int);
	return 0;
}


func_8509()
{
	var_4800_string = ""; var_4801_bool = 0;
	func_137("factory@door1", (bool)0);
	return 0;
}


func_10048(var_3815_object)
{
	var_3816_object = Obj(); var_3817_object = Obj(); var_3818_object = Obj(); var_3819_object = Obj();
	GetMainOutdoorScene(var_3818_object);
	var_3820_bool = var_3818_object == 0; //@ne
	if(var_3820_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_3819_object = 0;
		var_3819_object = var_3815_object;
		return 4;
	}
	@@var_3818_object:GetMap(var_3819_object);
	var_3819_object = var_3815_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_323(var_382_bool, var_383_int)
{
	var_384_int = 0; var_385_int = 0;
	var_386_string = ""; var_387_int = 0;
	var_383_int = var_387_int;
	func_223(var_386_string, var_387_int);
	GetVariable(var_386_string, var_385_int);
	var_389_int = var_385_int & (int)3;
	var_391_bool = var_389_int == (int)0;
	if(var_391_bool != 0) {
		var_382_bool = 1;
		return 2;
	}
	var_382_bool = 0;
	return 2;
}


func_8516()
{
	var_3922_string = ""; var_3923_bool = 0;
	func_137("icot_eva@door1", (bool)1);
	return 0;
}


func_842(var_898_int, var_899_int)
{
	var_900_bool = 0;
	var_900_bool = 1;
	var_902_bool = var_899_int >= (int)20;
	if(var_902_bool != 1) {
		var_903_bool = 0;
		var_903_bool = 0;
		var_905_bool = var_899_int >= (int)6;
		if(var_905_bool != 0) {
			var_907_bool = var_899_int < (int)10;
			if(var_907_bool != 0) {
				var_903_bool = 1;
			}
		}
		if(var_903_bool != 1) {
			var_900_bool = 0;
		}
	}
	if(var_900_bool != 0) {
		var_908_int = 0; var_909_bool = 0;
		var_898_int = var_908_int;
		func_714(var_908_int, (bool)1);
	} else {
		var_910_int = 0; var_911_bool = 0;
		var_898_int = var_910_int;
		func_714(var_910_int, (bool)0);
	}
	return 0;
	
}


func_8523()
{
	var_3811_object = Obj(); var_3812_object = Obj(); var_3813_object = Obj(); var_3814_object = Obj();
	func_10048(Obj());
	var_3815_object = var_3813_object;
	@@var_3813_object:FindMark(var_3814_object, "d1AlexandrAboutKaterina");
	var_3823_object = var_3814_object;
	if(var_3823_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01EvaAboutMark");
	var_3825_object = var_3814_object;
	if(var_3825_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1EvaGotoMaria");
	var_3827_object = var_3814_object;
	if(var_3827_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01EvaGotoSimon");
	var_3829_object = var_3814_object;
	if(var_3829_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1EvaInfo");
	var_3831_object = var_3814_object;
	if(var_3831_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1GeorgAboutAlexandr");
	var_3833_object = var_3814_object;
	if(var_3833_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1GeorgAboutBigVlad");
	var_3835_object = var_3814_object;
	if(var_3835_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1GeorgGotoViktor");
	var_3837_object = var_3814_object;
	if(var_3837_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1GeorgInfo");
	var_3839_object = var_3814_object;
	if(var_3839_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01GrifAboutRubin");
	var_3841_object = var_3814_object;
	if(var_3841_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01MarkAboutJulia");
	var_3843_object = var_3814_object;
	if(var_3843_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01MarkAboutLara");
	var_3845_object = var_3814_object;
	if(var_3845_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q01NotkinAboutRubin");
	var_3847_object = var_3814_object;
	if(var_3847_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q02AnnaGotoLaska");
	var_3849_object = var_3814_object;
	if(var_3849_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q02ViktorGotoAnna");
	var_3851_object = var_3814_object;
	if(var_3851_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1BigVladAboutKapella");
	var_3853_object = var_3814_object;
	if(var_3853_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1BigVladAboutMladVlad");
	var_3855_object = var_3814_object;
	if(var_3855_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1EvaAboutKapella");
	var_3857_object = var_3814_object;
	if(var_3857_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q03KapellaGotoOspina");
	var_3859_object = var_3814_object;
	if(var_3859_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q03MladVladGotoOspina");
	var_3861_object = var_3814_object;
	if(var_3861_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1EvaAboutKaterina");
	var_3863_object = var_3814_object;
	if(var_3863_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q04KaterinaGotoMishka");
	var_3865_object = var_3814_object;
	if(var_3865_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q04MishkaGotoSpi4ka");
	var_3867_object = var_3814_object;
	if(var_3867_object != 0) {
		@@var_3814_object:Remove();
	}
	@@var_3813_object:FindMark(var_3814_object, "d1q04Spi4kaGotoPowderHouse");
	var_3869_object = var_3814_object;
	if(var_3869_object != 0) {
		@@var_3814_object:Remove();
	}
	var_3870_bool = 0; var_3871_int = 0;
	func_10031(var_3870_bool, (int)2);
	var_3882_bool = 0; var_3883_int = 0;
	func_10031(var_3882_bool, (int)7);
	var_3884_bool = 0; var_3885_int = 0;
	func_10031(var_3884_bool, (int)37);
	var_3886_bool = 0; var_3887_int = 0;
	func_10031(var_3886_bool, (int)43);
	Trace("Day1 cleanup");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4942(var_3241_int, var_3242_int, var_3243_object, var_3244_object, var_3245_object, var_3246_object)
{
	var_3248_bool = var_3242_int == (int)0;
	if(var_3248_bool != 0) {
		var_3249_int = 0; var_3250_bool = 0;
		func_731((int)6, (bool)1);
		var_3251_int = 0; var_3252_bool = 0; var_3253_int = 0;
		func_748((int)6, (bool)1, (int)1);
		var_3254_int = 0; var_3255_int = 0; var_3256_object = Obj(); var_3257_object = Obj(); var_3258_object = Obj();
		var_3241_int = var_3255_int;
		var_3243_object = var_3256_object;
		var_3244_object = var_3257_object;
		var_3245_object = var_3258_object;
		func_655((int)6, var_3255_int, var_3256_object, var_3257_object, var_3258_object);
		var_3259_object = Obj(); var_3260_int = 0;
		var_3246_object = var_3259_object;
		func_229(var_3259_object, (int)2);
	}
	var_3261_int = 0; var_3262_bool = 0;
	func_714((int)6, (bool)0);
	return 0;
}


func_10065(var_3588_bool, var_3589_int)
{
	var_3591_int = 0; var_3592_int = 0; var_3593_int = 0; var_3594_int = 0;
	var_3595_bool = 0;
	var_3595_bool = 0;
	var_3597_bool = var_3589_int > (int)40000;
	if(var_3597_bool != 0) {
		var_3599_bool = var_3589_int < (int)40288;
		if(var_3599_bool != 0) {
			var_3595_bool = 1;
		}
	}
	if(var_3595_bool != 0) {
		var_3601_int = var_3589_int - (int)40000;
		var_3593_int = var_3601_int / (int)24;
		var_3604_int = var_3589_int - (int)40000;
		var_3594_int = var_3604_int % (int)24;
		var_3606_int = 0; var_3607_int = 0;
		var_3606_int = var_3593_int + (int)1;
		var_3594_int = var_3607_int;
		func_7115(var_3606_int, var_3607_int);
		var_3775_int = 0; var_3776_int = 0;
		var_3775_int = var_3593_int + (int)1;
		var_3594_int = var_3776_int;
		func_11445(var_3775_int, var_3776_int);
		var_3588_bool = 1;
		return 4;
	}
	var_3588_bool = 0;
	return 4;
}


func_339(var_71_int)
{
	var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_int = 0;
	var_76_string = ""; var_77_int = 0;
	var_71_int = var_77_int;
	func_223(var_76_string, var_77_int);
	GetVariable(var_76_string, var_74_int);
	var_79_int = var_74_int & (int)252;
	var_75_int = var_79_int | (int)0;
	var_81_string = ""; var_82_int = 0;
	var_71_int = var_82_int;
	func_223(var_81_string, var_82_int);
	SetVariable(var_81_string, var_75_int);
	return 4;
}


func_5975(var_257_object)
{
	@@var_257_object:add("r7_house2_01");
	@@var_257_object:add("r7_house2_02");
	@@var_257_object:add("r7_house2_03");
	@@var_257_object:add("r7_house2_04");
	@@var_257_object:add("r7_house3_03_i2");
	@@var_257_object:add("r7_house3_03");
	@@var_257_object:add("r7_house3_04_i2");
	@@var_257_object:add("r7_house3_04");
	@@var_257_object:add("r7_house3_05_i2");
	@@var_257_object:add("r7_house3_05");
	@@var_257_object:add("r7_house3_06_i2");
	@@var_257_object:add("r7_house3_01_i2");
	@@var_257_object:add("r7_house3_01");
	@@var_257_object:add("r7_house3_02_i2");
	@@var_257_object:add("r7_house3_02");
	return 0;
}


func_5468(var_204_object)
{
	@@var_204_object:add("r4_house_2_02");
	@@var_204_object:add("r4_house3_03_i2");
	@@var_204_object:add("r4_house3_03");
	@@var_204_object:add("r4_house4_02_i2");
	@@var_204_object:add("r4_house4_02");
	@@var_204_object:add("r4_house4_01_i2");
	@@var_204_object:add("r4_house4_01");
	@@var_204_object:add("r4_house3_02_i2");
	@@var_204_object:add("r4_house3_02");
	@@var_204_object:add("r4_house_2_01");
	@@var_204_object:add("r4_house3_01_i2");
	@@var_204_object:add("r4_house3_01");
	@@var_204_object:add("r4_house7_01");
	@@var_204_object:add("r4_House6_01");
	@@var_204_object:add("r4_house_2_03");
	@@var_204_object:add("r4_House6_03");
	@@var_204_object:add("r4_house_2_04");
	return 0;
}


func_7005()
{
	var_3789_object = Obj(); var_3790_object = Obj();
	GetMainOutdoorScene(var_3790_object);
	var_3791_object = GlobalVars[0];
	var_3792_object = Obj(); var_3793_object = Obj(); var_3794_int = 0;
	var_3790_object = var_3793_object;
	func_6562(var_3792_object, var_3793_object, (int)1);
	var_3792_object = var_3791_object;
	GlobalVars[0] = var_3791_object;
	var_3817_object = GlobalVars[1];
	var_3818_object = Obj(); var_3819_object = Obj(); var_3820_int = 0;
	var_3790_object = var_3819_object;
	func_6562(var_3818_object, var_3819_object, (int)2);
	var_3818_object = var_3817_object;
	GlobalVars[1] = var_3817_object;
	var_3821_object = GlobalVars[2];
	var_3822_object = Obj(); var_3823_object = Obj(); var_3824_int = 0;
	var_3790_object = var_3823_object;
	func_6562(var_3822_object, var_3823_object, (int)3);
	var_3822_object = var_3821_object;
	GlobalVars[2] = var_3821_object;
	var_3825_object = GlobalVars[3];
	var_3826_object = Obj(); var_3827_object = Obj(); var_3828_int = 0;
	var_3790_object = var_3827_object;
	func_6562(var_3826_object, var_3827_object, (int)4);
	var_3826_object = var_3825_object;
	GlobalVars[3] = var_3825_object;
	var_3829_object = GlobalVars[4];
	var_3830_object = Obj(); var_3831_object = Obj(); var_3832_int = 0;
	var_3790_object = var_3831_object;
	func_6562(var_3830_object, var_3831_object, (int)5);
	var_3830_object = var_3829_object;
	GlobalVars[4] = var_3829_object;
	var_3833_object = GlobalVars[5];
	var_3834_object = Obj(); var_3835_object = Obj(); var_3836_int = 0;
	var_3790_object = var_3835_object;
	func_6562(var_3834_object, var_3835_object, (int)6);
	var_3834_object = var_3833_object;
	GlobalVars[5] = var_3833_object;
	var_3837_object = GlobalVars[6];
	var_3838_object = Obj(); var_3839_object = Obj(); var_3840_int = 0;
	var_3790_object = var_3839_object;
	func_6576(var_3838_object, var_3839_object, (int)1);
	var_3838_object = var_3837_object;
	GlobalVars[6] = var_3837_object;
	var_3847_object = GlobalVars[7];
	var_3848_object = Obj(); var_3849_object = Obj(); var_3850_int = 0;
	var_3790_object = var_3849_object;
	func_6576(var_3848_object, var_3849_object, (int)2);
	var_3848_object = var_3847_object;
	GlobalVars[7] = var_3847_object;
	var_3851_object = GlobalVars[8];
	var_3852_object = Obj(); var_3853_object = Obj(); var_3854_int = 0;
	var_3790_object = var_3853_object;
	func_6576(var_3852_object, var_3853_object, (int)3);
	var_3852_object = var_3851_object;
	GlobalVars[8] = var_3851_object;
	var_3855_object = GlobalVars[9];
	var_3856_object = Obj(); var_3857_object = Obj(); var_3858_int = 0;
	var_3790_object = var_3857_object;
	func_6576(var_3856_object, var_3857_object, (int)4);
	var_3856_object = var_3855_object;
	GlobalVars[9] = var_3855_object;
	var_3859_object = GlobalVars[10];
	var_3860_object = Obj(); var_3861_object = Obj(); var_3862_int = 0;
	var_3790_object = var_3861_object;
	func_6576(var_3860_object, var_3861_object, (int)5);
	var_3860_object = var_3859_object;
	GlobalVars[10] = var_3859_object;
	var_3863_object = GlobalVars[11];
	var_3864_object = Obj(); var_3865_object = Obj(); var_3866_int = 0;
	var_3790_object = var_3865_object;
	func_6576(var_3864_object, var_3865_object, (int)6);
	var_3864_object = var_3863_object;
	GlobalVars[11] = var_3863_object;
	var_3867_object = GlobalVars[16];
	func_86(Obj());
	var_3868_object = var_3867_object;
	GlobalVars[16] = var_3867_object;
	func_6688();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3934(var_2691_int, var_2692_int, var_2693_object, var_2694_object, var_2695_object, var_2696_object)
{
	var_2698_bool = var_2692_int == (int)0;
	if(var_2698_bool != 0) {
		var_2699_int = 0; var_2700_bool = 0;
		func_731((int)0, (bool)1);
		var_2701_int = 0; var_2702_bool = 0; var_2703_int = 0;
		func_748((int)0, (bool)1, (int)1);
		var_2704_int = 0; var_2705_int = 0; var_2706_object = Obj(); var_2707_object = Obj(); var_2708_object = Obj();
		var_2691_int = var_2705_int;
		var_2693_object = var_2706_object;
		var_2694_object = var_2707_object;
		var_2695_object = var_2708_object;
		func_655((int)0, var_2705_int, var_2706_object, var_2707_object, var_2708_object);
		var_2743_object = Obj(); var_2744_int = 0;
		var_2696_object = var_2743_object;
		func_229(var_2743_object, (int)2);
	}
	var_2745_int = 0; var_2746_bool = 0;
	func_714((int)0, (bool)0);
	var_2747_int = 0; var_2748_int = 0; var_2749_int = 0;
	var_2691_int = var_2748_int;
	var_2692_int = var_2749_int;
	func_3518((int)0, var_2748_int, var_2749_int);
	return 0;
}


func_4450(var_3160_int, var_3161_int, var_3162_object, var_3163_object, var_3164_object, var_3165_object)
{
	var_3167_bool = var_3161_int == (int)0;
	if(var_3167_bool != 0) {
		var_3168_int = 0; var_3169_bool = 0;
		func_731((int)13, (bool)1);
		var_3170_int = 0; var_3171_bool = 0; var_3172_int = 0;
		func_748((int)13, (bool)1, (int)1);
		var_3173_int = 0; var_3174_int = 0; var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj();
		var_3160_int = var_3174_int;
		var_3162_object = var_3175_object;
		var_3163_object = var_3176_object;
		var_3164_object = var_3177_object;
		func_655((int)13, var_3174_int, var_3175_object, var_3176_object, var_3177_object);
		var_3178_object = Obj(); var_3179_int = 0;
		var_3165_object = var_3178_object;
		func_229(var_3178_object, (int)2);
	}
	var_3180_int = 0; var_3181_bool = 0;
	func_714((int)3, (bool)0);
	var_3182_int = 0; var_3183_int = 0; var_3184_int = 0;
	var_3160_int = var_3183_int;
	var_3161_int = var_3184_int;
	func_3338((int)3, var_3183_int, var_3184_int);
	return 0;
}


func_8035(var_4405_int)
{
	var_4406_int = 0; var_4407_int = 0;
	AddMessage((int)14087, (int)14086, var_4407_int);
	SetVariable("player_mail", (int)1);
	var_4407_int = var_4405_int;
	return 2;
}


func_357(var_1379_bool, var_1380_int)
{
	var_1381_int = 0; var_1382_int = 0;
	var_1383_string = ""; var_1384_int = 0;
	var_1380_int = var_1384_int;
	func_223(var_1383_string, var_1384_int);
	GetVariable(var_1383_string, var_1382_int);
	var_1386_int = var_1382_int & (int)3;
	var_1388_bool = var_1386_int == (int)1;
	if(var_1388_bool != 0) {
		var_1379_bool = 1;
		return 2;
	}
	var_1379_bool = 0;
	return 2;
}


func_872(var_529_int, var_530_int)
{
	var_531_bool = 0;
	var_531_bool = 1;
	var_532_bool = 0;
	var_532_bool = 1;
	var_534_bool = var_530_int >= (int)22;
	if(var_534_bool != 1) {
		var_536_bool = var_530_int < (int)4;
		if(var_536_bool != 1) {
			var_532_bool = 0;
		}
	}
	if(var_532_bool != 1) {
		var_537_bool = 0;
		var_537_bool = 0;
		var_539_bool = var_530_int >= (int)6;
		if(var_539_bool != 0) {
			var_541_bool = var_530_int < (int)8;
			if(var_541_bool != 0) {
				var_537_bool = 1;
			}
		}
		if(var_537_bool != 1) {
			var_531_bool = 0;
		}
	}
	if(var_531_bool != 0) {
		var_542_int = 0; var_543_bool = 0;
		var_529_int = var_542_int;
		func_714(var_542_int, (bool)1);
	} else {
		var_553_int = 0; var_554_bool = 0;
		var_529_int = var_553_int;
		func_714(var_553_int, (bool)0);
	}
	return 0;
	
}


func_8046(var_4327_int)
{
	var_4328_int = 0; var_4329_int = 0;
	AddMessage((int)14089, (int)14088, var_4329_int);
	SetVariable("player_mail", (int)1);
	var_4329_int = var_4327_int;
	return 2;
}


func_4976(var_156_object)
{
	@@var_156_object:add("House6_02");
	@@var_156_object:add("House6_01");
	@@var_156_object:add("house_2_01");
	@@var_156_object:add("house7_03");
	@@var_156_object:add("house7_02");
	@@var_156_object:add("house3_01_i2");
	@@var_156_object:add("house3_01");
	@@var_156_object:add("house_2_03");
	@@var_156_object:add("house_2_02");
	@@var_156_object:add("house4_01_i2");
	@@var_156_object:add("house4_01");
	@@var_156_object:add("House6_05");
	@@var_156_object:add("House6_04");
	@@var_156_object:add("House6_03");
	return 0;
}


func_10100()
{
	var_3776_float = 0; var_3777_int = 0; var_3778_float = 0; var_3779_float = 0; var_3780_int = 0; var_3781_float = 0;
	GetGameTime(var_3779_float);
	var_3780_int = 1;
	
Label_10104:
	var_3783_bool = var_3780_int < (int)288;
	if(var_3783_bool != 0) {
		var_3781_float = (float)1.0 * var_3780_int;
		var_3785_bool = var_3781_float < var_3779_float;
		if(var_3785_bool != 0) {
		} else {
			var_3788_int = (int)40000 + var_3780_int;
			SetTimeEvent(var_3788_int, var_3781_float);
	}
		func_7005();
		func_11395();
		var_3780_int = var_3780_int + (int)1;
		goto Label_10104;
	}
	return 6;
	
}


func_373(var_142_int)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0;
	var_147_string = ""; var_148_int = 0;
	var_142_int = var_148_int;
	func_223(var_147_string, var_148_int);
	GetVariable(var_147_string, var_145_int);
	var_150_int = var_145_int & (int)252;
	var_146_int = var_150_int | (int)1;
	var_152_string = ""; var_153_int = 0;
	var_142_int = var_153_int;
	func_223(var_152_string, var_153_int);
	SetVariable(var_152_string, var_146_int);
	return 4;
}


func_11636(var_3907_object, var_3908_object, var_3909_cvector, var_3910_cvector)
{
	var_3911_object = Obj(); var_3912_object = Obj();
	@@var_3908_object:AddStationaryActor(var_3912_object, var_3909_cvector, var_3910_cvector, "pers_butcher", "Danko_arena_manager.xml");
	var_3912_object = var_3907_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8057(var_4336_int)
{
	var_4337_int = 0; var_4338_int = 0;
	AddMessage((int)14091, (int)14090, var_4338_int);
	SetVariable("player_mail", (int)1);
	var_4338_int = var_4336_int;
	return 2;
}


func_1411(var_715_int, var_716_int, var_717_int)
{
	var_718_bool = 0;
	var_718_bool = 0;
	var_720_bool = var_717_int > (int)8;
	if(var_720_bool != 0) {
		var_722_bool = var_717_int < (int)21;
		if(var_722_bool != 0) {
			var_718_bool = 1;
		}
	}
	if(var_718_bool != 0) {
		var_723_int = 0; var_724_string = ""; var_725_string = ""; var_726_int = 0;
		var_715_int = var_723_int;
		func_438(var_723_int, "pers_woman", "woman.xml", (int)3);
		var_727_int = 0; var_728_string = ""; var_729_string = ""; var_730_int = 0;
		var_715_int = var_727_int;
		func_438(var_727_int, "pers_unosha", "unosha.xml", (int)1);
		var_731_int = 0; var_732_string = ""; var_733_string = ""; var_734_int = 0;
		var_715_int = var_731_int;
		func_438(var_731_int, "pers_unosha", "unosha2.xml", (int)1);
		var_735_int = 0; var_736_string = ""; var_737_string = ""; var_738_int = 0;
		var_715_int = var_735_int;
		func_438(var_735_int, "pers_worker", "worker.xml", (int)2);
		var_739_int = 0; var_740_string = ""; var_741_string = ""; var_742_int = 0;
		var_715_int = var_739_int;
		func_438(var_739_int, "pers_worker", "worker2.xml", (int)2);
		var_743_int = 0; var_744_string = ""; var_745_string = ""; var_746_int = 0;
		var_715_int = var_743_int;
		func_438(var_743_int, "pers_alkash", "alkash.xml", (int)2);
		var_747_int = 0; var_748_string = ""; var_749_string = ""; var_750_int = 0;
		var_715_int = var_747_int;
		func_438(var_747_int, "pers_girl", "girl.xml", (int)1);
		var_751_int = 0; var_752_string = ""; var_753_string = ""; var_754_int = 0;
		var_715_int = var_751_int;
		func_438(var_751_int, "pers_girl", "girl2.xml", (int)1);
		var_756_int = var_716_int + (int)1;
		var_758_bool = var_756_int >= (int)3;
		if(var_758_bool != 0) {
		}
		var_760_int = var_716_int + (int)1;
		var_762_bool = var_760_int >= (int)7;
		if(var_762_bool != 0) {
			var_763_int = 0; var_764_string = ""; var_765_string = ""; var_766_int = 0;
			var_715_int = var_763_int;
			func_438(var_763_int, "pers_butcher", "butcher.xml", (int)2);
		}
		var_767_int = 0; var_768_string = ""; var_769_string = ""; var_770_int = 0;
		var_715_int = var_767_int;
		func_438(var_767_int, "pers_dog", "dog.xml", (int)1);
	} else {
		var_794_int = 0; var_795_string = ""; var_796_string = ""; var_797_int = 0;
		var_715_int = var_794_int;
		func_438(var_794_int, "pers_woman", "woman.xml", (int)1);
		var_798_int = 0; var_799_string = ""; var_800_string = ""; var_801_int = 0;
		var_715_int = var_798_int;
		func_438(var_798_int, "pers_unosha", "unosha.xml", (int)1);
		var_802_int = 0; var_803_string = ""; var_804_string = ""; var_805_int = 0;
		var_715_int = var_802_int;
		func_438(var_802_int, "pers_unosha", "unosha2.xml", (int)1);
		var_806_int = 0; var_807_string = ""; var_808_string = ""; var_809_int = 0;
		var_715_int = var_806_int;
		func_438(var_806_int, "pers_worker", "worker.xml", (int)1);
		var_810_int = 0; var_811_string = ""; var_812_string = ""; var_813_int = 0;
		var_715_int = var_810_int;
		func_438(var_810_int, "pers_worker", "worker2.xml", (int)1);
		var_814_int = 0; var_815_string = ""; var_816_string = ""; var_817_int = 0;
		var_715_int = var_814_int;
		func_438(var_814_int, "pers_alkash", "alkash.xml", (int)3);
		var_819_int = var_716_int + (int)1;
		var_821_bool = var_819_int >= (int)3;
		if(var_821_bool != 0) {
		}
		var_823_int = var_716_int + (int)1;
		var_825_bool = var_823_int >= (int)7;
		if(var_825_bool != 0) {
			var_826_int = 0; var_827_string = ""; var_828_string = ""; var_829_int = 0;
			var_715_int = var_826_int;
			func_438(var_826_int, "pers_butcher", "butcher.xml", (int)3);
		}
		var_830_int = 0; var_831_string = ""; var_832_string = ""; var_833_int = 0;
		var_715_int = var_830_int;
		func_438(var_830_int, "pers_dog", "dog.xml", (int)1);
	}
	var_771_bool = 0;
	var_771_bool = 0;
	var_772_bool = 0;
	var_772_bool = 0;
	var_774_bool = var_716_int == (int)0;
	if(var_774_bool != 0) {
		var_776_bool = var_717_int > (int)12;
		if(var_776_bool != 0) {
			var_772_bool = 1;
		}
	}
	if(var_772_bool != 0) {
		var_778_bool = var_717_int < (int)22;
		if(var_778_bool != 0) {
			var_771_bool = 1;
		}
	}
	if(var_771_bool != 0) {
		var_779_int = 0; var_780_string = ""; var_781_string = ""; var_782_int = 0;
		var_715_int = var_779_int;
		func_438(var_779_int, "pers_woman", "woman_killme.xml", (int)1);
	}
	var_783_bool = 0; var_784_int = 0; var_785_int = 0;
	var_716_int = var_784_int;
	var_717_int = var_785_int;
	func_1112(var_783_bool, var_784_int, var_785_int);
	if(var_783_bool != 0) {
		var_790_int = 0; var_791_string = ""; var_792_string = ""; var_793_int = 0;
		var_715_int = var_790_int;
		func_438(var_790_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 0;
	
}


func_8068(var_4165_int)
{
	var_4166_int = 0; var_4167_int = 0;
	AddMessage((int)14093, (int)14092, var_4167_int);
	SetVariable("player_mail", (int)1);
	var_4167_int = var_4165_int;
	return 2;
}


func_3974(var_48_object)
{
	@@var_48_object:add("dt_house3_05_i2");
	@@var_48_object:add("dt_house3_05");
	@@var_48_object:add("dt_house_1_10");
	@@var_48_object:add("house5_10");
	@@var_48_object:add("house5_07");
	@@var_48_object:add("dt_house_1_03");
	@@var_48_object:add("dt_house1_union2_04l");
	@@var_48_object:add("dt_house1_union2_04r");
	@@var_48_object:add("house5_22");
	@@var_48_object:add("house5_08");
	return 0;
}


func_6022(var_1210_int, var_1211_int, var_1212_object, var_1213_object, var_1214_object, var_1215_object)
{
	var_1217_bool = var_1211_int == (int)0;
	if(var_1217_bool != 0) {
		var_1218_int = 0; var_1219_bool = 0;
		func_731((int)13, (bool)0);
		var_1220_int = 0; var_1221_bool = 0; var_1222_int = 0;
		func_748((int)13, (bool)0, (int)1);
		var_1223_int = 0; var_1224_int = 0; var_1225_object = Obj(); var_1226_object = Obj(); var_1227_object = Obj();
		var_1223_int = 13;
		var_1210_int = var_1224_int;
		var_1212_object = var_1225_object;
		var_1213_object = var_1226_object;
		var_1214_object = var_1227_object;
		func_557(var_1224_int, var_1225_object, var_1226_object, var_1227_object);
		var_1228_object = Obj(); var_1229_int = 0;
		var_1215_object = var_1228_object;
		func_229(var_1228_object, (int)0);
	}
	var_1230_int = 0; var_1231_int = 0;
	var_1211_int = var_1231_int;
	func_872((int)13, var_1231_int);
	var_1232_int = 0; var_1233_int = 0; var_1234_int = 0;
	var_1210_int = var_1233_int;
	var_1211_int = var_1234_int;
	func_1270((int)13, var_1233_int, var_1234_int);
	return 0;
}


func_391(var_61_bool, var_62_int)
{
	var_63_int = 0; var_64_int = 0;
	var_65_string = ""; var_66_int = 0;
	var_62_int = var_66_int;
	func_223(var_65_string, var_66_int);
	GetVariable(var_65_string, var_64_int);
	var_68_int = var_64_int & (int)3;
	var_70_bool = var_68_int == (int)2;
	if(var_70_bool != 0) {
		var_61_bool = 1;
		return 2;
	}
	var_61_bool = 0;
	return 2;
}


func_4490(var_104_object)
{
	@@var_104_object:add("dt_house3_09_i2");
	@@var_104_object:add("dt_house3_09");
	@@var_104_object:add("house1_se_03l");
	@@var_104_object:add("house1_se_03r");
	@@var_104_object:add("house1_se_01l");
	@@var_104_object:add("house1_se_01r");
	@@var_104_object:add("house1_se_04l");
	@@var_104_object:add("house1_se_04r");
	@@var_104_object:add("house5_11");
	@@var_104_object:add("house5_09");
	@@var_104_object:add("dt_house_1_04");
	@@var_104_object:add("house5_13");
	@@var_104_object:add("house5_12");
	@@var_104_object:add("house5_14");
	@@var_104_object:add("house5_unoin03l");
	@@var_104_object:add("house5_unoin03r");
	@@var_104_object:add("house5_unoin02l");
	@@var_104_object:add("house5_unoin02r");
	@@var_104_object:add("house5_unoin01l");
	@@var_104_object:add("house5_unoin01r");
	return 0;
}


func_909(var_1257_int, var_1258_int)
{
	var_1259_bool = 0;
	var_1259_bool = 1;
	var_1261_bool = var_1258_int >= (int)22;
	if(var_1261_bool != 1) {
		var_1263_bool = var_1258_int < (int)6;
		if(var_1263_bool != 1) {
			var_1259_bool = 0;
		}
	}
	if(var_1259_bool != 0) {
		var_1264_int = 0; var_1265_bool = 0;
		var_1257_int = var_1264_int;
		func_714(var_1264_int, (bool)1);
	} else {
		var_1266_int = 0; var_1267_bool = 0;
		var_1257_int = var_1266_int;
		func_714(var_1266_int, (bool)0);
	}
	return 0;
	
}


func_10126()
{
	var_3948_object = Obj(); var_3949_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_3949_object, (int)30, (int)0, (int)4079);
	var_3954_bool = 0; var_3955_object = Obj(); var_3956_int = 0;
	var_3949_object = var_3955_object;
	func_10002(var_3954_bool, var_3955_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8079(var_4174_int)
{
	var_4175_int = 0; var_4176_int = 0;
	AddMessage((int)14095, (int)14094, var_4176_int);
	SetVariable("player_mail", (int)1);
	var_4176_int = var_4174_int;
	return 2;
}


func_6545(var_3795_object, var_3796_object, var_3797_string, var_3798_string, var_3799_string)
{
	var_3804_bool = 0; var_3805_cvector = CVector(0,0,0); var_3806_cvector = CVector(0,0,0); var_3807_object = Obj(); var_3808_bool = 0; var_3809_cvector = CVector(0,0,0); var_3810_cvector = CVector(0,0,0); var_3811_object = Obj();
	var_3813_int = "pt_guard_" + var_3797_string;
	@@var_3796_object:GetLocator(var_3813_int, var_3808_bool, var_3809_cvector, var_3810_cvector);
	var_3814_bool = var_3808_bool == 0; //@nz
	if(var_3814_bool != 0) {
		var_3816_int = "Locator doesn't exist for guard " + var_3797_string;
		Trace(var_3816_int);
	} else {
		@@var_3796_object:AddStationaryActor(var_3811_object, var_3809_cvector, var_3810_cvector, var_3798_string, var_3799_string);
	}
	var_3811_object = var_3795_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_5521(var_1129_int, var_1130_int, var_1131_object, var_1132_object, var_1133_object, var_1134_object)
{
	var_1136_bool = var_1130_int == (int)0;
	if(var_1136_bool != 0) {
		var_1137_int = 0; var_1138_bool = 0;
		func_731((int)10, (bool)0);
		var_1139_int = 0; var_1140_bool = 0; var_1141_int = 0;
		func_748((int)10, (bool)0, (int)1);
		var_1142_int = 0; var_1143_int = 0; var_1144_object = Obj(); var_1145_object = Obj(); var_1146_object = Obj();
		var_1142_int = 10;
		var_1129_int = var_1143_int;
		var_1131_object = var_1144_object;
		var_1132_object = var_1145_object;
		var_1133_object = var_1146_object;
		func_557(var_1143_int, var_1144_object, var_1145_object, var_1146_object);
		var_1147_object = Obj(); var_1148_int = 0;
		var_1134_object = var_1147_object;
		func_229(var_1147_object, (int)0);
	}
	var_1149_int = 0; var_1150_int = 0;
	var_1130_int = var_1150_int;
	func_805((int)10, var_1150_int);
	var_1151_int = 0; var_1152_int = 0; var_1153_int = 0;
	var_1129_int = var_1152_int;
	var_1130_int = var_1153_int;
	func_1270((int)10, var_1152_int, var_1153_int);
	return 0;
}


func_9108()
{
	var_4223_object = Obj(); var_4224_object = Obj(); var_4225_object = Obj(); var_4226_object = Obj();
	func_10048(Obj());
	var_4227_object = var_4225_object;
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoLara");
	var_4229_object = var_4226_object;
	if(var_4229_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoLaraSelf");
	var_4231_object = var_4226_object;
	if(var_4231_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoSklad");
	var_4233_object = var_4226_object;
	if(var_4233_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoSobor");
	var_4235_object = var_4226_object;
	if(var_4235_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoSoborAndTheaterSelf");
	var_4237_object = var_4226_object;
	if(var_4237_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01BigVladGotoTheater");
	var_4239_object = var_4226_object;
	if(var_4239_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01LaraGotoMladVlad");
	var_4241_object = var_4226_object;
	if(var_4241_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01LaraGotoMladVladSelf");
	var_4243_object = var_4226_object;
	if(var_4243_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01LaraGotoOspina");
	var_4245_object = var_4226_object;
	if(var_4245_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01LaraGotoOspinaSelf");
	var_4247_object = var_4226_object;
	if(var_4247_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01MladVladGotoBigVlad");
	var_4249_object = var_4226_object;
	if(var_4249_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01MladVladGotoBigVladSelf");
	var_4251_object = var_4226_object;
	if(var_4251_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01MladVladGotoOspina");
	var_4253_object = var_4226_object;
	if(var_4253_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01OspinaGotoLara");
	var_4255_object = var_4226_object;
	if(var_4255_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01WastedMale");
	var_4257_object = var_4226_object;
	if(var_4257_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q01Whitemask");
	var_4259_object = var_4226_object;
	if(var_4259_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q02BirdmaskNearHome");
	var_4261_object = var_4226_object;
	if(var_4261_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q02MladVladGotoAJLSelf");
	var_4263_object = var_4226_object;
	if(var_4263_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q02MladVladGotoAnna");
	var_4265_object = var_4226_object;
	if(var_4265_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q02MladVladGotoJulia");
	var_4267_object = var_4226_object;
	if(var_4267_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q02MladVladGotoLara");
	var_4269_object = var_4226_object;
	if(var_4269_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q03AlexandrAboutVolnica");
	var_4271_object = var_4226_object;
	if(var_4271_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q03AlexandrGotoGrif");
	var_4273_object = var_4226_object;
	if(var_4273_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q03AlexandrGotoGrifSelf");
	var_4275_object = var_4226_object;
	if(var_4275_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q03GrifGotoAlexandr");
	var_4277_object = var_4226_object;
	if(var_4277_object != 0) {
		@@var_4226_object:Remove();
	}
	@@var_4225_object:FindMark(var_4226_object, "d4q03GrifGotoAlexandrSelf");
	var_4279_object = var_4226_object;
	if(var_4279_object != 0) {
		@@var_4226_object:Remove();
	}
	var_4280_bool = 0; var_4281_int = 0;
	func_10031(var_4280_bool, (int)20);
	var_4282_bool = 0; var_4283_int = 0;
	func_10031(var_4282_bool, (int)21);
	var_4284_bool = 0; var_4285_int = 0;
	func_10031(var_4284_bool, (int)22);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9623()
{
	var_4123_object = Obj(); var_4124_object = Obj(); var_4125_object = Obj(); var_4126_object = Obj();
	func_10048(Obj());
	var_4127_object = var_4125_object;
	@@var_4125_object:FindMark(var_4126_object, "d7q01AglajaFindLierSelf");
	var_4129_object = var_4126_object;
	if(var_4129_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q01AglajaGotoBirdmaskSelf");
	var_4131_object = var_4126_object;
	if(var_4131_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q01BirdmaskD");
	var_4133_object = var_4126_object;
	if(var_4133_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q01BirdmaskM");
	var_4135_object = var_4126_object;
	if(var_4135_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q01BirdmaskU");
	var_4137_object = var_4126_object;
	if(var_4137_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q02AlexandrGotoPetr");
	var_4139_object = var_4126_object;
	if(var_4139_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q02MarkGotoAlexandr");
	var_4141_object = var_4126_object;
	if(var_4141_object != 0) {
		@@var_4126_object:Remove();
	}
	@@var_4125_object:FindMark(var_4126_object, "d7q02MarkGotoCemetery");
	var_4143_object = var_4126_object;
	if(var_4143_object != 0) {
		@@var_4126_object:Remove();
	}
	var_4144_bool = 0; var_4145_int = 0;
	func_10031(var_4144_bool, (int)165);
	var_4146_bool = 0; var_4147_int = 0;
	func_10031(var_4146_bool, (int)170);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_407(var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0;
	var_53_string = ""; var_54_int = 0;
	var_48_int = var_54_int;
	func_223(var_53_string, var_54_int);
	GetVariable(var_53_string, var_51_int);
	var_56_int = var_51_int & (int)252;
	var_52_int = var_56_int | (int)2;
	var_58_string = ""; var_59_int = 0;
	var_48_int = var_59_int;
	func_223(var_58_string, var_59_int);
	SetVariable(var_58_string, var_52_int);
	return 4;
}


func_8090(var_4309_int)
{
	var_4310_int = 0; var_4311_int = 0;
	AddMessage((int)14097, (int)14096, var_4311_int);
	SetVariable("player_mail", (int)1);
	var_4311_int = var_4309_int;
	return 2;
}


func_5020(var_968_int, var_969_int, var_970_object, var_971_object, var_972_object, var_973_object)
{
	var_975_bool = var_969_int == (int)0;
	if(var_975_bool != 0) {
		var_976_int = 0; var_977_bool = 0;
		func_731((int)7, (bool)0);
		var_978_int = 0; var_979_bool = 0; var_980_int = 0;
		func_748((int)7, (bool)0, (int)1);
		var_981_int = 0; var_982_int = 0; var_983_object = Obj(); var_984_object = Obj(); var_985_object = Obj();
		var_981_int = 7;
		var_968_int = var_982_int;
		var_970_object = var_983_object;
		var_971_object = var_984_object;
		var_972_object = var_985_object;
		func_557(var_982_int, var_983_object, var_984_object, var_985_object);
		var_986_object = Obj(); var_987_int = 0;
		var_973_object = var_986_object;
		func_229(var_986_object, (int)0);
	}
	var_988_int = 0; var_989_int = 0;
	var_969_int = var_989_int;
	func_842((int)7, var_989_int);
	var_990_int = 0; var_991_int = 0; var_992_int = 0;
	var_968_int = var_991_int;
	var_969_int = var_992_int;
	func_1270((int)7, var_991_int, var_992_int);
	return 0;
}


func_10142(var_3783_int)
{
	var_3785_int = 0; var_3786_int = 0; var_3787_int = 0; var_3788_int = 0; var_3789_int = 0; var_3790_int = 0; var_3791_int = 0; var_3792_int = 0; var_3793_int = 0; var_3794_int = 0; var_3795_int = 0; var_3796_int = 0; var_3797_int = 0; var_3798_int = 0; var_3799_int = 0; var_3800_int = 0; var_3801_int = 0; var_3802_int = 0; var_3803_int = 0; var_3804_int = 0;
	var_3806_bool = var_3783_int == (int)45003;
	if(var_3806_bool != 0) {
		var_3807_object = Obj(); var_3808_object = Obj();
		var_3809_object = GlobalVars[18];
		var_3809_object = var_3807_object;
		var_3810_object = GlobalVars[18];
		var_3810_object = var_3808_object;
		func_8523();
		func_8222((int)0);
		var_3896_object = Obj(); var_3897_string = "";
		func_97(var_3896_object, "quest_d2_01");
		var_3904_bool = 0; var_3905_string = ""; var_3906_string = ""; var_3907_string = "";
		func_165(var_3904_bool, "volonteers_danko", "update", "");
	}
	var_3912_bool = var_3783_int == (int)45015;
	if(var_3912_bool != 0) {
		var_3913_bool = 0; var_3914_object = Obj();
		var_3915_object = GlobalVars[18];
		var_3915_object = var_3914_object;
		func_9816(var_3914_object);
		if(var_3913_bool != 0) {
			func_8398((int)0);
		}
	}
	var_3930_bool = var_3783_int == (int)45013;
	if(var_3930_bool != 0) {
		var_3931_object = Obj(); var_3932_object = Obj();
		var_3933_object = GlobalVars[18];
		var_3933_object = var_3931_object;
		var_3934_object = GlobalVars[18];
		var_3934_object = var_3932_object;
		func_9477();
		var_3982_bool = 0; var_3983_string = "";
		func_177(var_3982_bool, "quest_d6_01");
		var_3987_object = Obj(); var_3988_string = "";
		func_97(var_3987_object, "quest_d7_01");
		GetVariable("d6q01", var_3795_int);
		var_3991_bool = var_3795_int == (int)1000;
		if(var_3991_bool != 0) {
			var_3992_bool = 0; var_3993_string = ""; var_3994_string = ""; var_3995_string = "";
			func_165(var_3992_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_3996_bool = 0; var_3997_string = ""; var_3998_string = ""; var_3999_string = "";
		func_165(var_3996_bool, "volonteers_danko", "update", "");
	}
	var_4001_bool = var_3783_int == (int)45028;
	if(var_4001_bool != 0) {
		func_8134((int)0);
	}
	var_4010_bool = var_3783_int == (int)45029;
	if(var_4010_bool != 0) {
		func_8145((int)0);
	}
	var_4019_bool = var_3783_int == (int)45026;
	if(var_4019_bool != 0) {
		func_8112((int)0);
	}
	var_4028_bool = var_3783_int == (int)45027;
	if(var_4028_bool != 0) {
		func_8123((int)0);
	}
	var_4037_bool = var_3783_int == (int)45012;
	if(var_4037_bool != 0) {
		var_4038_object = Obj(); var_4039_object = Obj();
		var_4040_object = GlobalVars[18];
		var_4040_object = var_4038_object;
		var_4041_object = GlobalVars[18];
		var_4041_object = var_4039_object;
		func_9310();
		func_8354((int)0);
		var_4102_bool = 0; var_4103_string = "";
		func_177(var_4102_bool, "quest_d5_01");
		var_4104_object = Obj(); var_4105_string = "";
		func_97(var_4104_object, "quest_d6_01");
		GetVariable("d5q01", var_3796_int);
		var_4108_bool = var_3796_int == (int)1000;
		if(var_4108_bool != 0) {
			var_4109_bool = 0; var_4110_string = ""; var_4111_string = ""; var_4112_string = "";
			func_165(var_4109_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4113_bool = 0; var_4114_string = ""; var_4115_string = ""; var_4116_string = "";
		func_165(var_4113_bool, "volonteers_danko", "update", "");
	}
	var_4118_bool = var_3783_int == (int)45016;
	if(var_4118_bool != 0) {
		var_4119_object = Obj(); var_4120_object = Obj();
		var_4121_object = GlobalVars[18];
		var_4121_object = var_4119_object;
		var_4122_object = GlobalVars[18];
		var_4122_object = var_4120_object;
		func_9623();
		var_4148_bool = 0; var_4149_string = "";
		func_177(var_4148_bool, "quest_d7_01");
		var_4150_object = Obj(); var_4151_string = "";
		func_97(var_4150_object, "quest_d8_01");
		GetVariable("d7q01", var_3797_int);
		var_4154_bool = var_3797_int == (int)1000;
		if(var_4154_bool != 0) {
			var_4155_bool = 0; var_4156_string = ""; var_4157_string = ""; var_4158_string = "";
			func_165(var_4155_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4159_bool = 0; var_4160_string = ""; var_4161_string = ""; var_4162_string = "";
		func_165(var_4159_bool, "volonteers_danko", "update", "");
	}
	var_4164_bool = var_3783_int == (int)45022;
	if(var_4164_bool != 0) {
		func_8068((int)0);
	}
	var_4173_bool = var_3783_int == (int)45023;
	if(var_4173_bool != 0) {
		func_8079((int)0);
	}
	var_4182_bool = var_3783_int == (int)45031;
	if(var_4182_bool != 0) {
		var_4183_object = Obj(); var_4184_object = Obj();
		var_4185_object = GlobalVars[18];
		var_4185_object = var_4183_object;
		var_4186_object = GlobalVars[18];
		var_4186_object = var_4184_object;
		func_9728();
		var_4198_bool = 0; var_4199_string = "";
		func_177(var_4198_bool, "quest_d10_01");
		var_4200_object = Obj(); var_4201_string = "";
		func_97(var_4200_object, "quest_d11_01");
		GetVariable("d10q01", var_3798_int);
		var_4204_bool = var_3798_int == (int)1000;
		if(var_4204_bool != 0) {
			var_4205_bool = 0; var_4206_string = ""; var_4207_string = ""; var_4208_string = "";
			func_165(var_4205_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4209_bool = 0; var_4210_string = ""; var_4211_string = ""; var_4212_string = "";
		func_165(var_4209_bool, "volonteers_danko", "update", "");
	}
	var_4214_bool = var_3783_int == (int)45032;
	if(var_4214_bool != 0) {
		var_4215_object = Obj(); var_4216_string = "";
		func_97(var_4215_object, "quest_d11_02");
	}
	var_4218_bool = var_3783_int == (int)45011;
	if(var_4218_bool != 0) {
		var_4219_object = Obj(); var_4220_object = Obj();
		var_4221_object = GlobalVars[18];
		var_4221_object = var_4219_object;
		var_4222_object = GlobalVars[18];
		var_4222_object = var_4220_object;
		func_9108();
		var_4286_bool = 0; var_4287_string = "";
		func_177(var_4286_bool, "quest_d4_01");
		var_4288_object = Obj(); var_4289_string = "";
		func_108(var_4288_object, "quest_d5_01");
		GetVariable("d4q01", var_3799_int);
		var_4298_bool = var_3799_int == (int)1000;
		if(var_4298_bool != 0) {
			var_4299_bool = 0; var_4300_string = ""; var_4301_string = ""; var_4302_string = "";
			func_165(var_4299_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4303_bool = 0; var_4304_string = ""; var_4305_string = ""; var_4306_string = "";
		func_165(var_4303_bool, "volonteers_danko", "update", "");
	}
	var_4308_bool = var_3783_int == (int)45024;
	if(var_4308_bool != 0) {
		func_8090((int)0);
	}
	var_4317_bool = var_3783_int == (int)45025;
	if(var_4317_bool != 0) {
		func_8101((int)0);
	}
	var_4326_bool = var_3783_int == (int)45020;
	if(var_4326_bool != 0) {
		func_8046((int)0);
	}
	var_4335_bool = var_3783_int == (int)45021;
	if(var_4335_bool != 0) {
		func_8057((int)0);
	}
	var_4344_bool = var_3783_int == (int)45008;
	if(var_4344_bool != 0) {
		var_4345_bool = 0; var_4346_object = Obj();
		var_4347_object = GlobalVars[18];
		var_4347_object = var_4346_object;
		func_9792(var_4346_object);
		if(var_4345_bool != 0) {
			func_8244((int)0);
		}
	}
	var_4360_bool = var_3783_int == (int)45054;
	if(var_4360_bool != 0) {
		func_8189((int)0);
	}
	var_4369_bool = var_3783_int == (int)45056;
	if(var_4369_bool != 0) {
		var_4370_object = Obj(); var_4371_object = Obj();
		var_4372_object = GlobalVars[18];
		var_4372_object = var_4370_object;
		var_4373_object = GlobalVars[18];
		var_4373_object = var_4371_object;
		func_9778();
		var_4376_object = Obj(); var_4377_object = Obj();
		var_4378_object = GlobalVars[18];
		var_4378_object = var_4376_object;
		var_4379_object = GlobalVars[18];
		var_4379_object = var_4377_object;
		func_9785();
	}
	var_4387_bool = var_3783_int == (int)45017;
	if(var_4387_bool != 0) {
		var_4388_bool = 0; var_4389_string = "";
		func_177(var_4388_bool, "quest_d8_01");
		var_4390_object = Obj(); var_4391_string = "";
		func_97(var_4390_object, "quest_d9_01");
		GetVariable("d8q01", var_3800_int);
		var_4394_bool = var_3800_int == (int)1000;
		if(var_4394_bool != 0) {
			var_4395_bool = 0; var_4396_string = ""; var_4397_string = ""; var_4398_string = "";
			func_165(var_4395_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4399_bool = 0; var_4400_string = ""; var_4401_string = ""; var_4402_string = "";
		func_165(var_4399_bool, "volonteers_danko", "update", "");
	}
	var_4404_bool = var_3783_int == (int)45019;
	if(var_4404_bool != 0) {
		func_8035((int)0);
	}
	var_4413_bool = var_3783_int == (int)45007;
	if(var_4413_bool != 0) {
		var_4414_object = Obj(); var_4415_object = Obj();
		var_4416_object = GlobalVars[18];
		var_4416_object = var_4414_object;
		var_4417_object = GlobalVars[18];
		var_4417_object = var_4415_object;
		func_8474();
	}
	var_4421_bool = var_3783_int == (int)45006;
	if(var_4421_bool != 0) {
		var_4422_object = Obj(); var_4423_object = Obj();
		var_4424_object = GlobalVars[18];
		var_4424_object = var_4422_object;
		var_4425_object = GlobalVars[18];
		var_4425_object = var_4423_object;
		func_8920();
		var_4485_bool = 0; var_4486_string = "";
		func_177(var_4485_bool, "quest_d3_01");
		var_4487_object = Obj(); var_4488_string = "";
		func_97(var_4487_object, "quest_d4_01");
		GetVariable("d3q01", var_3801_int);
		var_4491_bool = var_3801_int == (int)1000;
		if(var_4491_bool != 0) {
			var_4492_bool = 0; var_4493_string = ""; var_4494_string = ""; var_4495_string = "";
			func_165(var_4492_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4496_bool = 0; var_4497_string = ""; var_4498_string = ""; var_4499_string = "";
		func_165(var_4496_bool, "volonteers_danko", "update", "");
	}
	var_4501_bool = var_3783_int == (int)45049;
	if(var_4501_bool != 0) {
		var_4502_bool = 0; var_4503_object = Obj();
		var_4504_object = GlobalVars[18];
		var_4504_object = var_4503_object;
		func_9965(var_4503_object);
		var_4509_bool = var_4502_bool == 0; //@nz
		if(var_4509_bool != 0) {
			func_8420((int)0);
		}
	}
	var_4518_bool = var_3783_int == (int)45050;
	if(var_4518_bool != 0) {
		func_8431((int)0);
	}
	var_4527_bool = var_3783_int == (int)45051;
	if(var_4527_bool != 0) {
		var_4528_bool = 0; var_4529_object = Obj();
		var_4530_object = GlobalVars[18];
		var_4530_object = var_4529_object;
		func_9977(var_4529_object);
		var_4535_bool = var_4528_bool == 0; //@nz
		if(var_4535_bool != 0) {
			func_8156((int)0);
		}
	}
	var_4544_bool = var_3783_int == (int)45052;
	if(var_4544_bool != 0) {
		var_4545_object = Obj(); var_4546_object = Obj();
		var_4547_object = GlobalVars[18];
		var_4547_object = var_4545_object;
		var_4548_object = GlobalVars[18];
		var_4548_object = var_4546_object;
		func_9702();
		var_4551_object = Obj(); var_4552_object = Obj();
		var_4553_object = GlobalVars[18];
		var_4553_object = var_4551_object;
		var_4554_object = GlobalVars[18];
		var_4554_object = var_4552_object;
		func_9764();
		func_8200((int)0);
	}
	var_4566_bool = var_3783_int == (int)45053;
	if(var_4566_bool != 0) {
		var_4567_object = Obj(); var_4568_object = Obj();
		var_4569_object = GlobalVars[18];
		var_4569_object = var_4567_object;
		var_4570_object = GlobalVars[18];
		var_4570_object = var_4568_object;
		func_8474();
		var_4571_object = Obj(); var_4572_object = Obj();
		var_4573_object = GlobalVars[18];
		var_4573_object = var_4571_object;
		var_4574_object = GlobalVars[18];
		var_4574_object = var_4572_object;
		func_9771();
		func_8211((int)0);
	}
	var_4586_bool = var_3783_int == (int)45038;
	if(var_4586_bool != 0) {
		var_4587_bool = 0; var_4588_object = Obj();
		var_4589_object = GlobalVars[18];
		var_4589_object = var_4588_object;
		func_9864(var_4588_object);
		var_4590_bool = var_4587_bool == 0; //@nz
		if(var_4590_bool != 0) {
			func_8277((int)0);
		}
	}
	var_4599_bool = var_3783_int == (int)45039;
	if(var_4599_bool != 0) {
		var_4600_bool = 0; var_4601_object = Obj();
		var_4602_object = GlobalVars[18];
		var_4602_object = var_4601_object;
		func_9869(var_4601_object);
		var_4607_bool = var_4600_bool == 0; //@nz
		if(var_4607_bool != 0) {
			var_4608_object = Obj(); var_4609_object = Obj();
			var_4610_object = GlobalVars[18];
			var_4610_object = var_4608_object;
			var_4611_object = GlobalVars[18];
			var_4611_object = var_4609_object;
			func_8453();
			func_8321((int)0);
		}
	}
	var_4622_bool = var_3783_int == (int)45040;
	if(var_4622_bool != 0) {
		var_4623_bool = 0; var_4624_object = Obj();
		var_4625_object = GlobalVars[18];
		var_4625_object = var_4624_object;
		func_9881(var_4624_object);
		var_4630_bool = var_4623_bool == 0; //@nz
		if(var_4630_bool != 0) {
			func_8310((int)0);
		}
	}
	var_4639_bool = var_3783_int == (int)45041;
	if(var_4639_bool != 0) {
		var_4640_bool = 0; var_4641_object = Obj();
		var_4642_object = GlobalVars[18];
		var_4642_object = var_4641_object;
		func_9893(var_4641_object);
		var_4647_bool = var_4640_bool == 0; //@nz
		if(var_4647_bool != 0) {
			func_8332((int)0);
		}
	}
	var_4656_bool = var_3783_int == (int)45010;
	if(var_4656_bool != 0) {
		var_4657_bool = 0; var_4658_object = Obj();
		var_4659_object = GlobalVars[18];
		var_4659_object = var_4658_object;
		func_9804(var_4658_object);
		var_4664_bool = var_4657_bool == 0; //@nz
		if(var_4664_bool != 0) {
			func_8266((int)0);
		}
	}
	var_4673_bool = var_3783_int == (int)45033;
	if(var_4673_bool != 0) {
		var_4674_bool = 0; var_4675_object = Obj();
		var_4676_object = GlobalVars[18];
		var_4676_object = var_4675_object;
		func_9828(var_4675_object);
		var_4681_bool = var_4674_bool == 0; //@nz
		if(var_4681_bool != 0) {
			func_8288((int)0);
		}
	}
	var_4690_bool = var_3783_int == (int)45034;
	if(var_4690_bool != 0) {
		var_4691_bool = 0; var_4692_object = Obj();
		var_4693_object = GlobalVars[18];
		var_4693_object = var_4692_object;
		func_9828(var_4692_object);
		var_4694_bool = var_4691_bool == 0; //@nz
		if(var_4694_bool != 0) {
			var_4695_object = Obj(); var_4696_object = Obj();
			var_4697_object = GlobalVars[18];
			var_4697_object = var_4695_object;
			var_4698_object = GlobalVars[18];
			var_4698_object = var_4696_object;
			func_8500();
			func_8299((int)0);
		}
	}
	var_4764_bool = var_3783_int == (int)45035;
	if(var_4764_bool != 0) {
		var_4765_bool = 0; var_4766_object = Obj();
		var_4767_object = GlobalVars[18];
		var_4767_object = var_4766_object;
		func_9852(var_4766_object);
		var_4772_bool = var_4765_bool == 0; //@nz
		if(var_4772_bool != 0) {
			var_4773_object = Obj(); var_4774_object = Obj();
			var_4775_object = GlobalVars[18];
			var_4775_object = var_4773_object;
			var_4776_object = GlobalVars[18];
			var_4776_object = var_4774_object;
			func_8493();
			func_8178((int)0);
		}
	}
	var_4787_bool = var_3783_int == (int)45036;
	if(var_4787_bool != 0) {
		var_4788_bool = 0; var_4789_object = Obj();
		var_4790_object = GlobalVars[18];
		var_4790_object = var_4789_object;
		func_9840(var_4789_object);
		var_4795_bool = var_4788_bool == 0; //@nz
		if(var_4795_bool != 0) {
			var_4796_object = Obj(); var_4797_object = Obj();
			var_4798_object = GlobalVars[18];
			var_4798_object = var_4796_object;
			var_4799_object = GlobalVars[18];
			var_4799_object = var_4797_object;
			func_8509();
			func_8167((int)0);
		}
	}
	var_4810_bool = var_3783_int == (int)45042;
	if(var_4810_bool != 0) {
		var_4811_object = Obj(); var_4812_object = Obj();
		var_4813_object = GlobalVars[18];
		var_4813_object = var_4811_object;
		var_4814_object = GlobalVars[18];
		var_4814_object = var_4812_object;
		func_9754();
		var_4819_bool = 0; var_4820_string = "";
		func_177(var_4819_bool, "quest_d11_01");
		var_4821_object = Obj(); var_4822_string = "";
		func_97(var_4821_object, "quest_d12_01");
		GetVariable("d11q01", var_3802_int);
		var_4825_bool = var_3802_int == (int)1000;
		if(var_4825_bool != 0) {
			var_4826_bool = 0; var_4827_string = ""; var_4828_string = ""; var_4829_string = "";
			func_165(var_4826_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4830_bool = 0; var_4831_string = ""; var_4832_string = ""; var_4833_string = "";
		func_165(var_4830_bool, "volonteers_danko", "update", "");
	}
	var_4835_bool = var_3783_int == (int)45009;
	if(var_4835_bool != 0) {
		func_8233((int)0);
	}
	var_4844_bool = var_3783_int == (int)45043;
	if(var_4844_bool != 0) {
		var_4845_bool = 0; var_4846_object = Obj();
		var_4847_object = GlobalVars[18];
		var_4847_object = var_4846_object;
		func_9905(var_4846_object);
		var_4852_bool = var_4845_bool == 0; //@nz
		if(var_4852_bool != 0) {
			func_8343((int)0);
		}
	}
	var_4861_bool = var_3783_int == (int)45044;
	if(var_4861_bool != 0) {
		var_4862_bool = 0; var_4863_object = Obj();
		var_4864_object = GlobalVars[18];
		var_4864_object = var_4863_object;
		func_9929(var_4863_object);
		var_4869_bool = var_4862_bool == 0; //@nz
		if(var_4869_bool != 0) {
			func_8387((int)0);
		}
	}
	var_4878_bool = var_3783_int == (int)45045;
	if(var_4878_bool != 0) {
		var_4879_bool = 0; var_4880_object = Obj();
		var_4881_object = GlobalVars[18];
		var_4881_object = var_4880_object;
		func_9917(var_4880_object);
		var_4886_bool = var_4879_bool == 0; //@nz
		if(var_4886_bool != 0) {
			func_8376((int)0);
		}
	}
	var_4895_bool = var_3783_int == (int)45046;
	if(var_4895_bool != 0) {
		var_4896_bool = 0; var_4897_object = Obj();
		var_4898_object = GlobalVars[18];
		var_4898_object = var_4897_object;
		func_9941(var_4897_object);
		var_4903_bool = var_4896_bool == 0; //@nz
		if(var_4903_bool != 0) {
			func_8365((int)0);
		}
	}
	var_4912_bool = var_3783_int == (int)45047;
	if(var_4912_bool != 0) {
		var_4913_bool = 0; var_4914_object = Obj();
		var_4915_object = GlobalVars[18];
		var_4915_object = var_4914_object;
		func_9953(var_4914_object);
		var_4920_bool = var_4913_bool == 0; //@nz
		if(var_4920_bool != 0) {
			func_8409((int)0);
		}
	}
	var_4929_bool = var_3783_int == (int)45048;
	if(var_4929_bool != 0) {
		func_8442((int)0);
	}
	var_4938_bool = var_3783_int == (int)45018;
	if(var_4938_bool != 0) {
		var_4939_object = Obj(); var_4940_object = Obj();
		var_4941_object = GlobalVars[18];
		var_4941_object = var_4939_object;
		var_4942_object = GlobalVars[18];
		var_4942_object = var_4940_object;
		func_9709();
		var_4952_bool = 0; var_4953_string = "";
		func_177(var_4952_bool, "quest_d9_01");
		var_4954_object = Obj(); var_4955_string = "";
		func_97(var_4954_object, "quest_d10_01");
		GetVariable("d9q01", var_3803_int);
		var_4958_bool = var_3803_int == (int)1000;
		if(var_4958_bool != 0) {
			var_4959_bool = 0; var_4960_string = ""; var_4961_string = ""; var_4962_string = "";
			func_165(var_4959_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_4963_bool = 0; var_4964_string = ""; var_4965_string = ""; var_4966_string = "";
		func_165(var_4963_bool, "volonteers_danko", "update", "");
	}
	var_4968_bool = var_3783_int == (int)45005;
	if(var_4968_bool != 0) {
		var_4969_object = Obj(); var_4970_object = Obj();
		var_4971_object = GlobalVars[18];
		var_4971_object = var_4969_object;
		var_4972_object = GlobalVars[18];
		var_4972_object = var_4970_object;
		func_8718();
		var_5036_bool = 0; var_5037_string = "";
		func_177(var_5036_bool, "quest_d2_01");
		var_5038_object = Obj(); var_5039_string = "";
		func_97(var_5038_object, "quest_d3_01");
		GetVariable("d2q01", var_3804_int);
		var_5042_bool = var_3804_int == (int)1000;
		if(var_5042_bool != 0) {
			var_5043_bool = 0; var_5044_string = ""; var_5045_string = ""; var_5046_string = "";
			func_165(var_5043_bool, "volonteers_danko", "rescue_locked", "");
		}
		var_5047_bool = 0; var_5048_string = ""; var_5049_string = ""; var_5050_string = "";
		func_165(var_5047_bool, "volonteers_danko", "update", "");
	}
	return 20;
}


func_7585(var_1389_int, var_1390_int, var_1391_int)
{
	var_1392_object = Obj(); var_1393_object = Obj(); var_1394_object = Obj(); var_1395_object = Obj(); var_1396_object = Obj(); var_1397_object = Obj(); var_1398_object = Obj(); var_1399_object = Obj();
	var_1400_object = GlobalVars[12];
	@@var_1400_object:get(var_1396_object, var_1389_int);
	var_1401_object = GlobalVars[13];
	@@var_1401_object:get(var_1397_object, var_1389_int);
	var_1402_object = GlobalVars[14];
	@@var_1402_object:get(var_1398_object, var_1389_int);
	var_1403_object = GlobalVars[17];
	@@var_1403_object:get(var_1399_object, var_1389_int);
	var_1405_bool = var_1389_int == (int)0;
	if(var_1405_bool != 0) {
		var_1406_int = 0; var_1407_int = 0; var_1408_object = Obj(); var_1409_object = Obj(); var_1410_object = Obj(); var_1411_object = Obj();
		var_1390_int = var_1406_int;
		var_1391_int = var_1407_int;
		var_1396_object = var_1408_object;
		var_1397_object = var_1409_object;
		var_1398_object = var_1410_object;
		var_1399_object = var_1411_object;
		func_3894(var_1406_int, var_1407_int, var_1408_object, var_1409_object, var_1410_object, var_1411_object);
	} else {
		var_1680_bool = var_1389_int == (int)1;
		if(var_1680_bool != 0) {
			var_1681_int = 0; var_1682_int = 0; var_1683_object = Obj(); var_1684_object = Obj(); var_1685_object = Obj(); var_1686_object = Obj();
			var_1390_int = var_1681_int;
			var_1391_int = var_1682_int;
			var_1396_object = var_1683_object;
			var_1397_object = var_1684_object;
			var_1398_object = var_1685_object;
			var_1399_object = var_1686_object;
			func_4046(var_1681_int, var_1682_int, var_1683_object, var_1684_object, var_1685_object, var_1686_object);
			goto Label_7805;
		}
		var_1826_bool = var_1389_int == (int)2;
		if(var_1826_bool != 0) {
			var_1827_int = 0; var_1828_int = 0; var_1829_object = Obj(); var_1830_object = Obj(); var_1831_object = Obj(); var_1832_object = Obj();
			var_1390_int = var_1827_int;
			var_1391_int = var_1828_int;
			var_1396_object = var_1829_object;
			var_1397_object = var_1830_object;
			var_1398_object = var_1831_object;
			var_1399_object = var_1832_object;
			func_4237(var_1827_int, var_1828_int, var_1829_object, var_1830_object, var_1831_object, var_1832_object);
			goto Label_7805;
		}
		var_2023_bool = var_1389_int == (int)3;
		if(var_2023_bool != 0) {
			var_2024_int = 0; var_2025_int = 0; var_2026_object = Obj(); var_2027_object = Obj(); var_2028_object = Obj(); var_2029_object = Obj();
			var_1390_int = var_2024_int;
			var_1391_int = var_2025_int;
			var_1396_object = var_2026_object;
			var_1397_object = var_2027_object;
			var_1398_object = var_2028_object;
			var_1399_object = var_2029_object;
			func_4410(var_2024_int, var_2025_int, var_2026_object, var_2027_object, var_2028_object, var_2029_object);
			goto Label_7805;
		}
		var_2050_bool = var_1389_int == (int)4;
		if(var_2050_bool != 0) {
			var_2051_int = 0; var_2052_int = 0; var_2053_object = Obj(); var_2054_object = Obj(); var_2055_object = Obj(); var_2056_object = Obj();
			var_1390_int = var_2051_int;
			var_1391_int = var_2052_int;
			var_1396_object = var_2053_object;
			var_1397_object = var_2054_object;
			var_1398_object = var_2055_object;
			var_1399_object = var_2056_object;
			func_4592(var_2051_int, var_2052_int, var_2053_object, var_2054_object, var_2055_object, var_2056_object);
			goto Label_7805;
		}
		var_2077_bool = var_1389_int == (int)5;
		if(var_2077_bool != 0) {
			var_2078_int = 0; var_2079_int = 0; var_2080_object = Obj(); var_2081_object = Obj(); var_2082_object = Obj(); var_2083_object = Obj();
			var_1390_int = var_2078_int;
			var_1391_int = var_2079_int;
			var_1396_object = var_2080_object;
			var_1397_object = var_2081_object;
			var_1398_object = var_2082_object;
			var_1399_object = var_2083_object;
			func_4792(var_2078_int, var_2079_int, var_2080_object, var_2081_object, var_2082_object, var_2083_object);
			goto Label_7805;
		}
		var_2104_bool = var_1389_int == (int)6;
		if(var_2104_bool != 0) {
			var_2105_int = 0; var_2106_int = 0; var_2107_object = Obj(); var_2108_object = Obj(); var_2109_object = Obj(); var_2110_object = Obj();
			var_1390_int = var_2105_int;
			var_1391_int = var_2106_int;
			var_1396_object = var_2107_object;
			var_1397_object = var_2108_object;
			var_1398_object = var_2109_object;
			var_1399_object = var_2110_object;
			func_4908(var_2105_int, var_2106_int, var_2107_object, var_2108_object, var_2109_object, var_2110_object);
			goto Label_7805;
		}
		var_2128_bool = var_1389_int == (int)7;
		if(var_2128_bool != 0) {
			var_2129_int = 0; var_2130_int = 0; var_2131_object = Obj(); var_2132_object = Obj(); var_2133_object = Obj(); var_2134_object = Obj();
			var_1390_int = var_2129_int;
			var_1391_int = var_2130_int;
			var_1396_object = var_2131_object;
			var_1397_object = var_2132_object;
			var_1398_object = var_2133_object;
			var_1399_object = var_2134_object;
			func_5060(var_2129_int, var_2130_int, var_2131_object, var_2132_object, var_2133_object, var_2134_object);
			goto Label_7805;
		}
		var_2309_bool = var_1389_int == (int)8;
		if(var_2309_bool != 0) {
			var_2310_int = 0; var_2311_int = 0; var_2312_object = Obj(); var_2313_object = Obj(); var_2314_object = Obj(); var_2315_object = Obj();
			var_1390_int = var_2310_int;
			var_1391_int = var_2311_int;
			var_1396_object = var_2312_object;
			var_1397_object = var_2313_object;
			var_1398_object = var_2314_object;
			var_1399_object = var_2315_object;
			func_5215(var_2310_int, var_2311_int, var_2312_object, var_2313_object, var_2314_object, var_2315_object);
			goto Label_7805;
		}
		var_2336_bool = var_1389_int == (int)9;
		if(var_2336_bool != 0) {
			var_2337_int = 0; var_2338_int = 0; var_2339_object = Obj(); var_2340_object = Obj(); var_2341_object = Obj(); var_2342_object = Obj();
			var_1390_int = var_2337_int;
			var_1391_int = var_2338_int;
			var_1396_object = var_2339_object;
			var_1397_object = var_2340_object;
			var_1398_object = var_2341_object;
			var_1399_object = var_2342_object;
			func_5388(var_2337_int, var_2338_int, var_2339_object, var_2340_object, var_2341_object, var_2342_object);
			goto Label_7805;
		}
		var_2363_bool = var_1389_int == (int)10;
		if(var_2363_bool != 0) {
			var_2364_int = 0; var_2365_int = 0; var_2366_object = Obj(); var_2367_object = Obj(); var_2368_object = Obj(); var_2369_object = Obj();
			var_1390_int = var_2364_int;
			var_1391_int = var_2365_int;
			var_1396_object = var_2366_object;
			var_1397_object = var_2367_object;
			var_1398_object = var_2368_object;
			var_1399_object = var_2369_object;
			func_5561(var_2364_int, var_2365_int, var_2366_object, var_2367_object, var_2368_object, var_2369_object);
			goto Label_7805;
		}
		var_2390_bool = var_1389_int == (int)11;
		if(var_2390_bool != 0) {
			var_2391_int = 0; var_2392_int = 0; var_2393_object = Obj(); var_2394_object = Obj(); var_2395_object = Obj(); var_2396_object = Obj();
			var_1390_int = var_2391_int;
			var_1391_int = var_2392_int;
			var_1396_object = var_2393_object;
			var_1397_object = var_2394_object;
			var_1398_object = var_2395_object;
			var_1399_object = var_2396_object;
			func_5737(var_2391_int, var_2392_int, var_2393_object, var_2394_object, var_2395_object, var_2396_object);
			goto Label_7805;
		}
		var_2417_bool = var_1389_int == (int)12;
		if(var_2417_bool != 0) {
			var_2418_int = 0; var_2419_int = 0; var_2420_object = Obj(); var_2421_object = Obj(); var_2422_object = Obj(); var_2423_object = Obj();
			var_1390_int = var_2418_int;
			var_1391_int = var_2419_int;
			var_1396_object = var_2420_object;
			var_1397_object = var_2421_object;
			var_1398_object = var_2422_object;
			var_1399_object = var_2423_object;
			func_5895(var_2418_int, var_2419_int, var_2420_object, var_2421_object, var_2422_object, var_2423_object);
			goto Label_7805;
		}
		var_2444_bool = var_1389_int == (int)13;
		if(var_2444_bool != 0) {
			var_2445_int = 0; var_2446_int = 0; var_2447_object = Obj(); var_2448_object = Obj(); var_2449_object = Obj(); var_2450_object = Obj();
			var_1390_int = var_2445_int;
			var_1391_int = var_2446_int;
			var_1396_object = var_2447_object;
			var_1397_object = var_2448_object;
			var_1398_object = var_2449_object;
			var_1399_object = var_2450_object;
			func_6062(var_2445_int, var_2446_int, var_2447_object, var_2448_object, var_2449_object, var_2450_object);
			goto Label_7805;
		}
		var_2471_bool = var_1389_int == (int)14;
		if(var_2471_bool != 0) {
			var_2472_int = 0; var_2473_int = 0; var_2474_object = Obj(); var_2475_object = Obj(); var_2476_object = Obj(); var_2477_object = Obj();
			var_1390_int = var_2472_int;
			var_1391_int = var_2473_int;
			var_1396_object = var_2474_object;
			var_1397_object = var_2475_object;
			var_1398_object = var_2476_object;
			var_1399_object = var_2477_object;
			func_6226(var_2472_int, var_2473_int, var_2474_object, var_2475_object, var_2476_object, var_2477_object);
			goto Label_7805;
		}
		var_2648_bool = var_1389_int == (int)15;
		if(var_2648_bool == 0) goto Label_7805;
		var_2649_int = 0; var_2650_int = 0; var_2651_object = Obj(); var_2652_object = Obj(); var_2653_object = Obj(); var_2654_object = Obj();
		var_1390_int = var_2649_int;
		var_1391_int = var_2650_int;
		var_1396_object = var_2651_object;
		var_1397_object = var_2652_object;
		var_1398_object = var_2653_object;
		var_1399_object = var_2654_object;
		func_6369(var_2649_int, var_2650_int, var_2651_object, var_2652_object, var_2653_object, var_2654_object);
	}
Label_7805:
	return 8;
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_2978(var_3584_int, var_3585_int, var_3586_int)
{
	var_3587_int = 0; var_3588_int = 0; var_3589_int = 0; var_3590_int = 0; var_3591_int = 0; var_3592_int = 0; var_3593_int = 0; var_3594_int = 0;
	var_3595_bool = 0;
	var_3595_bool = 0;
	var_3597_bool = var_3586_int > (int)8;
	if(var_3597_bool != 0) {
		var_3599_bool = var_3586_int < (int)21;
		if(var_3599_bool != 0) {
			var_3595_bool = 1;
		}
	}
	if(var_3595_bool != 0) {
		var_3600_int = 0; var_3601_string = ""; var_3602_string = ""; var_3603_int = 0;
		var_3584_int = var_3600_int;
		func_438(var_3600_int, "pers_woman", "woman.xml", (int)2);
		var_3604_int = 0; var_3605_string = ""; var_3606_string = ""; var_3607_int = 0;
		var_3584_int = var_3604_int;
		func_438(var_3604_int, "pers_unosha", "unosha.xml", (int)1);
		var_3608_int = 0; var_3609_string = ""; var_3610_string = ""; var_3611_int = 0;
		var_3584_int = var_3608_int;
		func_438(var_3608_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3612_int = 0; var_3613_string = ""; var_3614_string = ""; var_3615_int = 0;
		var_3584_int = var_3612_int;
		func_438(var_3612_int, "pers_boy", "boy.xml", (int)2);
		var_3617_int = var_3585_int + (int)1;
		var_3619_bool = var_3617_int >= (int)2;
		if(var_3619_bool != 0) {
			var_3620_int = 0; var_3621_string = ""; var_3622_string = ""; var_3623_int = 0;
			var_3584_int = var_3620_int;
			func_438(var_3620_int, "pers_patrool", "patrol.xml", (int)3);
		}
		var_3624_int = 0; var_3625_string = ""; var_3626_string = ""; var_3627_int = 0;
		var_3584_int = var_3624_int;
		func_438(var_3624_int, "pers_rat", "rat.xml", (int)2);
		var_3629_float = 0; var_3630_int = 0;
		var_3585_int = var_3630_int;
		func_932(var_3629_float, var_3630_int);
		var_3591_int = (int)1 * var_3629_float;
		var_3631_int = var_3591_int;
		if(var_3631_int != 0) {
			var_3632_int = 0; var_3633_string = ""; var_3634_string = ""; var_3635_int = 0;
			var_3584_int = var_3632_int;
			var_3591_int = var_3635_int;
			func_438(var_3632_int, "pers_grabitel", "grabitel.xml", var_3635_int);
		}
		var_3637_float = 0; var_3638_int = 0;
		var_3585_int = var_3638_int;
		func_1022(var_3637_float, var_3638_int);
		var_3592_int = (int)1 * var_3637_float;
		var_3639_int = var_3592_int;
		if(var_3639_int != 0) {
			var_3640_int = 0; var_3641_string = ""; var_3642_string = ""; var_3643_int = 0;
			var_3584_int = var_3640_int;
			var_3592_int = var_3643_int;
			func_438(var_3640_int, "pers_bomber", "bomber.xml", var_3643_int);
		}
	} else {
		var_3651_int = 0; var_3652_string = ""; var_3653_string = ""; var_3654_int = 0;
		var_3584_int = var_3651_int;
		func_438(var_3651_int, "pers_woman", "woman.xml", (int)1);
		var_3655_int = 0; var_3656_string = ""; var_3657_string = ""; var_3658_int = 0;
		var_3584_int = var_3655_int;
		func_438(var_3655_int, "pers_unosha", "unosha.xml", (int)1);
		var_3659_int = 0; var_3660_string = ""; var_3661_string = ""; var_3662_int = 0;
		var_3584_int = var_3659_int;
		func_438(var_3659_int, "pers_unosha", "unosha2.xml", (int)1);
		var_3663_int = 0; var_3664_string = ""; var_3665_string = ""; var_3666_int = 0;
		var_3584_int = var_3663_int;
		func_438(var_3663_int, "pers_boy", "boy.xml", (int)1);
		var_3668_int = var_3585_int + (int)1;
		var_3670_bool = var_3668_int >= (int)2;
		if(var_3670_bool != 0) {
			var_3671_int = 0; var_3672_string = ""; var_3673_string = ""; var_3674_int = 0;
			var_3584_int = var_3671_int;
			func_438(var_3671_int, "pers_patrool", "patrol.xml", (int)3);
		}
		var_3675_int = 0; var_3676_string = ""; var_3677_string = ""; var_3678_int = 0;
		var_3584_int = var_3675_int;
		func_438(var_3675_int, "pers_rat", "rat.xml", (int)2);
		var_3680_float = 0; var_3681_int = 0;
		var_3585_int = var_3681_int;
		func_932(var_3680_float, var_3681_int);
		var_3593_int = (int)2 * var_3680_float;
		var_3682_int = var_3593_int;
		if(var_3682_int != 0) {
			var_3683_int = 0; var_3684_string = ""; var_3685_string = ""; var_3686_int = 0;
			var_3584_int = var_3683_int;
			var_3593_int = var_3686_int;
			func_438(var_3683_int, "pers_grabitel", "grabitel.xml", var_3686_int);
		}
		var_3688_float = 0; var_3689_int = 0;
		var_3585_int = var_3689_int;
		func_1022(var_3688_float, var_3689_int);
		var_3594_int = (int)1 * var_3688_float;
		var_3690_int = var_3594_int;
		if(var_3690_int == 0) goto Label_3144;
		var_3691_int = 0; var_3692_string = ""; var_3693_string = ""; var_3694_int = 0;
		var_3584_int = var_3691_int;
		var_3594_int = var_3694_int;
		func_438(var_3691_int, "pers_bomber", "bomber.xml", var_3694_int);
	}
Label_3144:
	var_3644_bool = 0; var_3645_int = 0; var_3646_int = 0;
	var_3585_int = var_3645_int;
	var_3586_int = var_3646_int;
	func_1112(var_3644_bool, var_3645_int, var_3646_int);
	if(var_3644_bool != 0) {
		var_3647_int = 0; var_3648_string = ""; var_3649_string = ""; var_3650_int = 0;
		var_3584_int = var_3647_int;
		func_438(var_3647_int, "pers_soldat", "soldier_marauder.xml", (int)2);
	}
	return 8;
	
}


func_6562(var_3792_object, var_3793_object, var_3794_int)
{
	var_3795_object = Obj(); var_3796_object = Obj(); var_3797_string = ""; var_3798_string = ""; var_3799_string = "";
	var_3793_object = var_3796_object;
	var_3797_string = "sklad" + var_3794_int;
	var_3802_int = "key_guard_sklad" + var_3794_int;
	var_3799_string = var_3802_int + ".xml";
	func_6545(var_3795_object, var_3796_object, var_3797_string, "pers_patrool", var_3799_string);
	var_3795_object = var_3792_object;
	return 0;
}


func_932(var_2792_float, var_2793_int)
{
	var_2795_int = var_2793_int + (int)1;
	var_2797_bool = var_2795_int == (int)1;
	if(var_2797_bool != 0) {
		var_2792_float = 0;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2799_int = var_2793_int + (int)1;
	var_2801_bool = var_2799_int == (int)2;
	if(var_2801_bool != 0) {
		var_2792_float = 0;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2803_int = var_2793_int + (int)1;
	var_2805_bool = var_2803_int == (int)3;
	if(var_2805_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2807_int = var_2793_int + (int)1;
	var_2809_bool = var_2807_int == (int)4;
	if(var_2809_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2811_int = var_2793_int + (int)1;
	var_2813_bool = var_2811_int == (int)5;
	if(var_2813_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2815_int = var_2793_int + (int)1;
	var_2817_bool = var_2815_int == (int)6;
	if(var_2817_bool != 0) {
		var_2792_float = 2;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2819_int = var_2793_int + (int)1;
	var_2821_bool = var_2819_int == (int)7;
	if(var_2821_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2823_int = var_2793_int + (int)1;
	var_2825_bool = var_2823_int == (int)8;
	if(var_2825_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2827_int = var_2793_int + (int)1;
	var_2829_bool = var_2827_int == (int)9;
	if(var_2829_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2831_int = var_2793_int + (int)1;
	var_2833_bool = var_2831_int == (int)10;
	if(var_2833_bool != 0) {
		var_2792_float = 1;
		return 0;
	EMIT "GOTO 0x3fc";
	}
	var_2835_int = var_2793_int + (int)1;
	var_2837_bool = var_2835_int == (int)11;
	if(var_2837_bool != 0) {
		var_2792_float = 1;
		return 0;
	}
	var_2792_float = 0;
	return 0;
}


func_8101(var_4318_int)
{
	var_4319_int = 0; var_4320_int = 0;
	AddMessage((int)14099, (int)14098, var_4320_int);
	SetVariable("player_mail", (int)1);
	var_4320_int = var_4318_int;
	return 2;
}


func_4006(var_613_int, var_614_int, var_615_object, var_616_object, var_617_object, var_618_object)
{
	var_620_bool = var_614_int == (int)0;
	if(var_620_bool != 0) {
		var_621_int = 0; var_622_bool = 0;
		func_731((int)1, (bool)0);
		var_623_int = 0; var_624_bool = 0; var_625_int = 0;
		func_748((int)1, (bool)0, (int)1);
		var_626_int = 0; var_627_int = 0; var_628_object = Obj(); var_629_object = Obj(); var_630_object = Obj();
		var_626_int = 1;
		var_613_int = var_627_int;
		var_615_object = var_628_object;
		var_616_object = var_629_object;
		var_617_object = var_630_object;
		func_557(var_627_int, var_628_object, var_629_object, var_630_object);
		var_631_object = Obj(); var_632_int = 0;
		var_618_object = var_631_object;
		func_229(var_631_object, (int)0);
	}
	var_633_int = 0; var_634_int = 0;
	var_614_int = var_634_int;
	func_872((int)1, var_634_int);
	var_635_int = 0; var_636_int = 0; var_637_int = 0;
	var_613_int = var_636_int;
	var_614_int = var_637_int;
	func_1697((int)1, var_636_int, var_637_int);
	return 0;
}


func_425(var_377_int)
{
	var_378_object = Obj(); var_379_object = Obj();
	GetMainOutdoorScene(var_379_object);
	var_380_bool = var_379_object == 0; //@ne
	if(var_380_bool != 0) {
		Trace("City manager: main outdoor scene not found");
		return 2;
	}
	@@var_379_object:RemoveAllRegionActors(var_377_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6062(var_2445_int, var_2446_int, var_2447_object, var_2448_object, var_2449_object, var_2450_object)
{
	var_2452_bool = var_2446_int == (int)0;
	if(var_2452_bool != 0) {
		var_2453_int = 0; var_2454_bool = 0;
		func_731((int)13, (bool)1);
		var_2455_int = 0; var_2456_bool = 0; var_2457_int = 0;
		func_748((int)13, (bool)1, (int)1);
		var_2458_int = 0; var_2459_int = 0; var_2460_object = Obj(); var_2461_object = Obj(); var_2462_object = Obj();
		var_2445_int = var_2459_int;
		var_2447_object = var_2460_object;
		var_2448_object = var_2461_object;
		var_2449_object = var_2462_object;
		func_576((int)13, var_2459_int, var_2460_object, var_2461_object, var_2462_object);
		var_2463_object = Obj(); var_2464_int = 0;
		var_2450_object = var_2463_object;
		func_229(var_2463_object, (int)1);
	}
	var_2465_int = 0; var_2466_bool = 0;
	func_714((int)13, (bool)0);
	var_2467_int = 0; var_2468_int = 0; var_2469_int = 0;
	var_2445_int = var_2468_int;
	var_2446_int = var_2469_int;
	func_2052((int)13, var_2468_int, var_2469_int);
	return 0;
}


func_6576(var_3838_object, var_3839_object, var_3840_int)
{
	var_3841_object = Obj(); var_3842_object = Obj(); var_3843_string = ""; var_3844_string = ""; var_3845_string = "";
	var_3839_object = var_3842_object;
	var_3843_string = "term" + var_3840_int;
	func_6545(var_3841_object, var_3842_object, var_3843_string, "pers_butcher", "guard_term.xml");
	var_3841_object = var_3838_object;
	return 0;
}


func_8112(var_4020_int)
{
	var_4021_int = 0; var_4022_int = 0;
	AddMessage((int)14101, (int)14100, var_4022_int);
	SetVariable("player_mail", (int)1);
	var_4022_int = var_4020_int;
	return 2;
}


func_438(var_563_int, var_564_string, var_565_string, var_566_int)
{
	var_567_object = Obj(); var_568_object = Obj();
	GetMainOutdoorScene(var_568_object);
	var_569_bool = var_568_object == 0; //@ne
	if(var_569_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_568_object:SetRegionActorCount(var_563_int, var_564_string, var_565_string, var_566_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5561(var_2364_int, var_2365_int, var_2366_object, var_2367_object, var_2368_object, var_2369_object)
{
	var_2371_bool = var_2365_int == (int)0;
	if(var_2371_bool != 0) {
		var_2372_int = 0; var_2373_bool = 0;
		func_731((int)10, (bool)1);
		var_2374_int = 0; var_2375_bool = 0; var_2376_int = 0;
		func_748((int)10, (bool)1, (int)1);
		var_2377_int = 0; var_2378_int = 0; var_2379_object = Obj(); var_2380_object = Obj(); var_2381_object = Obj();
		var_2364_int = var_2378_int;
		var_2366_object = var_2379_object;
		var_2367_object = var_2380_object;
		var_2368_object = var_2381_object;
		func_576((int)10, var_2378_int, var_2379_object, var_2380_object, var_2381_object);
		var_2382_object = Obj(); var_2383_int = 0;
		var_2369_object = var_2382_object;
		func_229(var_2382_object, (int)1);
	}
	var_2384_int = 0; var_2385_bool = 0;
	func_714((int)10, (bool)0);
	var_2386_int = 0; var_2387_int = 0; var_2388_int = 0;
	var_2364_int = var_2387_int;
	var_2365_int = var_2388_int;
	func_2052((int)10, var_2387_int, var_2388_int);
	return 0;
}


func_6587()
{
	var_3661_object = Obj(); var_3662_object = Obj();
	GetMainOutdoorScene(var_3662_object);
	var_3663_object = GlobalVars[0];
	var_3664_bool = var_3663_object == 0; //@ne
	if(var_3664_bool != 0) {
		var_3665_object = GlobalVars[0];
		var_3666_object = Obj(); var_3667_object = Obj(); var_3668_int = 0;
		var_3662_object = var_3667_object;
		func_6562(var_3666_object, var_3667_object, (int)1);
		var_3666_object = var_3665_object;
		GlobalVars[0] = var_3665_object;
		var_3691_string = ""; var_3692_bool = 0;
		func_137("warehouse4_guard1@door1", (bool)1);
	}
	var_3701_object = GlobalVars[1];
	var_3702_bool = var_3701_object == 0; //@ne
	if(var_3702_bool != 0) {
		var_3703_object = GlobalVars[1];
		var_3704_object = Obj(); var_3705_object = Obj(); var_3706_int = 0;
		var_3662_object = var_3705_object;
		func_6562(var_3704_object, var_3705_object, (int)2);
		var_3704_object = var_3703_object;
		GlobalVars[1] = var_3703_object;
		var_3707_string = ""; var_3708_bool = 0;
		func_137("warehouse4_guard2@door1", (bool)1);
	}
	var_3709_object = GlobalVars[2];
	var_3710_bool = var_3709_object == 0; //@ne
	if(var_3710_bool != 0) {
		var_3711_object = GlobalVars[2];
		var_3712_object = Obj(); var_3713_object = Obj(); var_3714_int = 0;
		var_3662_object = var_3713_object;
		func_6562(var_3712_object, var_3713_object, (int)3);
		var_3712_object = var_3711_object;
		GlobalVars[2] = var_3711_object;
		var_3715_string = ""; var_3716_bool = 0;
		func_137("warehouse4_guard3@door1", (bool)1);
	}
	var_3717_object = GlobalVars[3];
	var_3718_bool = var_3717_object == 0; //@ne
	if(var_3718_bool != 0) {
		var_3719_object = GlobalVars[3];
		var_3720_object = Obj(); var_3721_object = Obj(); var_3722_int = 0;
		var_3662_object = var_3721_object;
		func_6562(var_3720_object, var_3721_object, (int)4);
		var_3720_object = var_3719_object;
		GlobalVars[3] = var_3719_object;
		var_3723_string = ""; var_3724_bool = 0;
		func_137("warehouse4_guard4@door1", (bool)1);
	}
	var_3725_object = GlobalVars[4];
	var_3726_bool = var_3725_object == 0; //@ne
	if(var_3726_bool != 0) {
		var_3727_object = GlobalVars[4];
		var_3728_object = Obj(); var_3729_object = Obj(); var_3730_int = 0;
		var_3662_object = var_3729_object;
		func_6562(var_3728_object, var_3729_object, (int)5);
		var_3728_object = var_3727_object;
		GlobalVars[4] = var_3727_object;
		var_3731_string = ""; var_3732_bool = 0;
		func_137("warehouse4_guard5@door1", (bool)1);
	}
	var_3733_object = GlobalVars[5];
	var_3734_bool = var_3733_object == 0; //@ne
	if(var_3734_bool != 0) {
		var_3735_object = GlobalVars[5];
		var_3736_object = Obj(); var_3737_object = Obj(); var_3738_int = 0;
		var_3662_object = var_3737_object;
		func_6562(var_3736_object, var_3737_object, (int)6);
		var_3736_object = var_3735_object;
		GlobalVars[5] = var_3735_object;
		var_3739_string = ""; var_3740_bool = 0;
		func_137("warehouse4_guard6@door1", (bool)1);
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_8123(var_4029_int)
{
	var_4030_int = 0; var_4031_int = 0;
	AddMessage((int)14103, (int)14102, var_4031_int);
	SetVariable("player_mail", (int)1);
	var_4031_int = var_4029_int;
	return 2;
}


func_3518(var_2747_int, var_2748_int, var_2749_int)
{
	var_2750_int = 0; var_2751_int = 0; var_2752_int = 0; var_2753_int = 0; var_2754_int = 0; var_2755_int = 0; var_2756_int = 0; var_2757_int = 0;
	var_2758_bool = 0;
	var_2758_bool = 0;
	var_2760_bool = var_2749_int > (int)8;
	if(var_2760_bool != 0) {
		var_2762_bool = var_2749_int < (int)21;
		if(var_2762_bool != 0) {
			var_2758_bool = 1;
		}
	}
	if(var_2758_bool != 0) {
		var_2763_int = 0; var_2764_string = ""; var_2765_string = ""; var_2766_int = 0;
		var_2747_int = var_2763_int;
		func_438(var_2763_int, "pers_woman", "woman.xml", (int)1);
		var_2767_int = 0; var_2768_string = ""; var_2769_string = ""; var_2770_int = 0;
		var_2747_int = var_2767_int;
		func_438(var_2767_int, "pers_unosha", "unosha.xml", (int)1);
		var_2771_int = 0; var_2772_string = ""; var_2773_string = ""; var_2774_int = 0;
		var_2747_int = var_2771_int;
		func_438(var_2771_int, "pers_unosha", "unosha2.xml", (int)1);
		var_2775_int = 0; var_2776_string = ""; var_2777_string = ""; var_2778_int = 0;
		var_2747_int = var_2775_int;
		func_438(var_2775_int, "pers_boy", "boy.xml", (int)1);
		var_2780_int = var_2748_int + (int)1;
		var_2782_bool = var_2780_int >= (int)2;
		if(var_2782_bool != 0) {
			var_2783_int = 0; var_2784_string = ""; var_2785_string = ""; var_2786_int = 0;
			var_2747_int = var_2783_int;
			func_438(var_2783_int, "pers_patrool", "patrol.xml", (int)4);
		}
		var_2787_int = 0; var_2788_string = ""; var_2789_string = ""; var_2790_int = 0;
		var_2747_int = var_2787_int;
		func_438(var_2787_int, "pers_rat", "rat.xml", (int)5);
		var_2792_float = 0; var_2793_int = 0;
		var_2748_int = var_2793_int;
		func_932(var_2792_float, var_2793_int);
		var_2754_int = (int)3 * var_2792_float;
		var_2838_int = var_2754_int;
		if(var_2838_int != 0) {
			var_2839_int = 0; var_2840_string = ""; var_2841_string = ""; var_2842_int = 0;
			var_2747_int = var_2839_int;
			var_2754_int = var_2842_int;
			func_438(var_2839_int, "pers_grabitel", "grabitel.xml", var_2842_int);
		}
		var_2844_float = 0; var_2845_int = 0;
		var_2748_int = var_2845_int;
		func_1022(var_2844_float, var_2845_int);
		var_2755_int = (int)2 * var_2844_float;
		var_2846_int = var_2755_int;
		if(var_2846_int != 0) {
			var_2847_int = 0; var_2848_string = ""; var_2849_string = ""; var_2850_int = 0;
			var_2747_int = var_2847_int;
			var_2755_int = var_2850_int;
			func_438(var_2847_int, "pers_bomber", "bomber.xml", var_2850_int);
		}
	} else {
		var_2851_int = 0; var_2852_string = ""; var_2853_string = ""; var_2854_int = 0;
		var_2747_int = var_2851_int;
		func_438(var_2851_int, "pers_woman", "woman.xml", (int)1);
		var_2855_int = 0; var_2856_string = ""; var_2857_string = ""; var_2858_int = 0;
		var_2747_int = var_2855_int;
		func_438(var_2855_int, "pers_unosha", "unosha.xml", (int)1);
		var_2859_int = 0; var_2860_string = ""; var_2861_string = ""; var_2862_int = 0;
		var_2747_int = var_2859_int;
		func_438(var_2859_int, "pers_unosha", "unosha2.xml", (int)1);
		var_2863_int = 0; var_2864_string = ""; var_2865_string = ""; var_2866_int = 0;
		var_2747_int = var_2863_int;
		func_438(var_2863_int, "pers_boy", "boy.xml", (int)1);
		var_2868_int = var_2748_int + (int)1;
		var_2870_bool = var_2868_int >= (int)2;
		if(var_2870_bool != 0) {
			var_2871_int = 0; var_2872_string = ""; var_2873_string = ""; var_2874_int = 0;
			var_2747_int = var_2871_int;
			func_438(var_2871_int, "pers_patrool", "patrol.xml", (int)4);
		}
		var_2875_int = 0; var_2876_string = ""; var_2877_string = ""; var_2878_int = 0;
		var_2747_int = var_2875_int;
		func_438(var_2875_int, "pers_rat", "rat.xml", (int)5);
		var_2880_float = 0; var_2881_int = 0;
		var_2748_int = var_2881_int;
		func_932(var_2880_float, var_2881_int);
		var_2756_int = (int)4 * var_2880_float;
		var_2882_int = var_2756_int;
		if(var_2882_int != 0) {
			var_2883_int = 0; var_2884_string = ""; var_2885_string = ""; var_2886_int = 0;
			var_2747_int = var_2883_int;
			var_2756_int = var_2886_int;
			func_438(var_2883_int, "pers_grabitel", "grabitel.xml", var_2886_int);
		}
		var_2888_float = 0; var_2889_int = 0;
		var_2748_int = var_2889_int;
		func_1022(var_2888_float, var_2889_int);
		var_2757_int = (int)3 * var_2888_float;
		var_2890_int = var_2757_int;
		if(var_2890_int == 0) goto Label_3684;
		var_2891_int = 0; var_2892_string = ""; var_2893_string = ""; var_2894_int = 0;
		var_2747_int = var_2891_int;
		var_2757_int = var_2894_int;
		func_438(var_2891_int, "pers_bomber", "bomber.xml", var_2894_int);
	}
Label_3684:
	return 8;
	
}


func_451(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int)
{
	var_1619_object = Obj(); var_1620_object = Obj();
	GetMainOutdoorScene(var_1620_object);
	var_1621_bool = var_1620_object == 0; //@ne
	if(var_1621_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_1620_object:SetRegionActorCount(var_1613_int, var_1614_string, var_1615_string, var_1616_int, var_1617_int, var_1618_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5060(var_2129_int, var_2130_int, var_2131_object, var_2132_object, var_2133_object, var_2134_object)
{
	var_2136_bool = var_2130_int == (int)0;
	if(var_2136_bool != 0) {
		var_2137_int = 0; var_2138_bool = 0;
		func_731((int)7, (bool)1);
		var_2139_int = 0; var_2140_bool = 0; var_2141_int = 0;
		func_748((int)7, (bool)1, (int)1);
		var_2142_int = 0; var_2143_int = 0; var_2144_object = Obj(); var_2145_object = Obj(); var_2146_object = Obj();
		var_2129_int = var_2143_int;
		var_2131_object = var_2144_object;
		var_2132_object = var_2145_object;
		var_2133_object = var_2146_object;
		func_576((int)7, var_2143_int, var_2144_object, var_2145_object, var_2146_object);
		var_2147_object = Obj(); var_2148_int = 0;
		var_2134_object = var_2147_object;
		func_229(var_2147_object, (int)1);
	}
	var_2149_int = 0; var_2150_bool = 0;
	func_714((int)7, (bool)0);
	var_2151_int = 0; var_2152_int = 0; var_2153_int = 0;
	var_2129_int = var_2152_int;
	var_2130_int = var_2153_int;
	func_2052((int)7, var_2152_int, var_2153_int);
	return 0;
}


func_8134(var_4002_int)
{
	var_4003_int = 0; var_4004_int = 0;
	AddMessage((int)14105, (int)14104, var_4004_int);
	SetVariable("player_mail", (int)1);
	var_4004_int = var_4002_int;
	return 2;
}


func_4552(var_878_int, var_879_int, var_880_object, var_881_object, var_882_object, var_883_object)
{
	var_885_bool = var_879_int == (int)0;
	if(var_885_bool != 0) {
		var_886_int = 0; var_887_bool = 0;
		func_731((int)4, (bool)0);
		var_888_int = 0; var_889_bool = 0; var_890_int = 0;
		func_748((int)4, (bool)0, (int)1);
		var_891_int = 0; var_892_int = 0; var_893_object = Obj(); var_894_object = Obj(); var_895_object = Obj();
		var_891_int = 4;
		var_878_int = var_892_int;
		var_880_object = var_893_object;
		var_881_object = var_894_object;
		var_882_object = var_895_object;
		func_557(var_892_int, var_893_object, var_894_object, var_895_object);
		var_896_object = Obj(); var_897_int = 0;
		var_883_object = var_896_object;
		func_229(var_896_object, (int)0);
	}
	var_898_int = 0; var_899_int = 0;
	var_879_int = var_899_int;
	func_842((int)4, var_899_int);
	var_912_int = 0; var_913_int = 0; var_914_int = 0;
	var_878_int = var_913_int;
	var_879_int = var_914_int;
	func_1411((int)4, var_913_int, var_914_int);
	return 0;
}


func_7115(var_3606_int, var_3607_int)
{
	var_3610_bool = var_3607_int == (int)5;
	if(var_3610_bool != 0) {
		func_6688();
	} else {
				var_3754_bool = var_3607_int == (int)22;
				if(var_3754_bool == 0) goto Label_7129;
				func_6754();
	}
Label_7129:
	var_3658_bool = var_3607_int == (int)0;
	if(var_3658_bool != 0) {
		var_3660_bool = var_3606_int == (int)3;
		if(var_3660_bool != 0) {
			func_6587();
		} else {
			var_3742_bool = var_3606_int == (int)9;
			if(var_3742_bool == 0) goto Label_7145;
			func_7146();

		}
	}
Label_7145:
	return 0;
	
}


func_4046(var_1681_int, var_1682_int, var_1683_object, var_1684_object, var_1685_object, var_1686_object)
{
	var_1688_bool = var_1682_int == (int)0;
	if(var_1688_bool != 0) {
		var_1689_int = 0; var_1690_bool = 0;
		func_731((int)1, (bool)1);
		var_1691_int = 0; var_1692_bool = 0; var_1693_int = 0;
		func_748((int)1, (bool)1, (int)1);
		var_1694_int = 0; var_1695_int = 0; var_1696_object = Obj(); var_1697_object = Obj(); var_1698_object = Obj();
		var_1681_int = var_1695_int;
		var_1683_object = var_1696_object;
		var_1684_object = var_1697_object;
		var_1685_object = var_1698_object;
		func_576((int)1, var_1695_int, var_1696_object, var_1697_object, var_1698_object);
		var_1699_object = Obj(); var_1700_int = 0;
		var_1686_object = var_1699_object;
		func_229(var_1699_object, (int)1);
	}
	var_1701_int = 0; var_1702_bool = 0;
	func_714((int)1, (bool)0);
	var_1703_int = 0; var_1704_int = 0; var_1705_int = 0;
	var_1681_int = var_1704_int;
	var_1682_int = var_1705_int;
	func_2778((int)1, var_1704_int, var_1705_int);
	return 0;
}


func_464(var_1553_int, var_1554_string, var_1555_string, var_1556_int)
{
	var_1557_object = Obj(); var_1558_object = Obj();
	GetMainOutdoorScene(var_1558_object);
	var_1559_bool = var_1558_object == 0; //@ne
	if(var_1559_bool != 0) {
		Trace("City manager: Can't find main outdoor scene");
		return 2;
	}
	@@var_1558_object:SetRegionActorCountByType(var_1553_int, var_1554_string, var_1555_string, var_1556_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8145(var_4011_int)
{
	var_4012_int = 0; var_4013_int = 0;
	AddMessage((int)14107, (int)14106, var_4013_int);
	SetVariable("player_mail", (int)1);
	var_4013_int = var_4011_int;
	return 2;
}


func_6102(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object)
{
	var_3542_bool = var_3536_int == (int)0;
	if(var_3542_bool != 0) {
		var_3543_int = 0; var_3544_bool = 0;
		func_731((int)13, (bool)1);
		var_3545_int = 0; var_3546_bool = 0; var_3547_int = 0;
		func_748((int)13, (bool)1, (int)1);
		var_3548_int = 0; var_3549_int = 0; var_3550_object = Obj(); var_3551_object = Obj(); var_3552_object = Obj();
		var_3535_int = var_3549_int;
		var_3537_object = var_3550_object;
		var_3538_object = var_3551_object;
		var_3539_object = var_3552_object;
		func_655((int)13, var_3549_int, var_3550_object, var_3551_object, var_3552_object);
		var_3553_object = Obj(); var_3554_int = 0;
		var_3540_object = var_3553_object;
		func_229(var_3553_object, (int)2);
	}
	var_3555_int = 0; var_3556_bool = 0;
	func_714((int)13, (bool)0);
	var_3557_int = 0; var_3558_int = 0; var_3559_int = 0;
	var_3535_int = var_3558_int;
	var_3536_int = var_3559_int;
	func_3158((int)13, var_3558_int, var_3559_int);
	return 0;
}


func_8156(var_4536_int)
{
	var_4537_int = 0; var_4538_int = 0;
	AddMessage((int)15484, (int)15483, var_4538_int);
	SetVariable("player_mail", (int)1);
	var_4538_int = var_4536_int;
	return 2;
}


func_477(var_462_int, var_463_bool)
{
	var_464_object = Obj(); var_465_object = Obj(); var_466_bool = 0; var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_bool = 0; var_471_object = Obj();
	GetMainOutdoorScene(var_468_object);
	var_473_int = (int)101 + var_462_int;
	@@var_468_object:GetGroupActors(var_469_object, var_473_int);
	var_474_object = var_469_object;
	if(var_474_object != 0) {

	Label_486:
		@@var_469_object:Next(var_470_bool, var_471_object);
		var_475_bool = var_470_bool;
		if(var_475_bool != 0) {
			var_476_bool = 0; var_477_object = Obj(); var_478_string = "";
			var_471_object = var_477_object;
			func_74(var_476_bool, var_477_object, "locked");
			if(var_476_bool != 0) {
				@@var_471_object:SetProperty("locked", var_463_bool);
			} else {
				var_487_int = "Actor \"" + var_471_object;
				var_489_int = var_487_int + "\" can't be locked";
				Trace(var_489_int);
		}
			var_471_object = 0;
	}
		return 8;
	}
	goto Label_486;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_9695()
{
	var_3983_string = ""; var_3984_bool = 0;
	func_137("mnogogrannik@door1", (bool)1);
	return 0;
}


func_5601(var_3454_int, var_3455_int, var_3456_object, var_3457_object, var_3458_object, var_3459_object)
{
	var_3461_bool = var_3455_int == (int)0;
	if(var_3461_bool != 0) {
		var_3462_int = 0; var_3463_bool = 0;
		func_731((int)10, (bool)1);
		var_3464_int = 0; var_3465_bool = 0; var_3466_int = 0;
		func_748((int)10, (bool)1, (int)1);
		var_3467_int = 0; var_3468_int = 0; var_3469_object = Obj(); var_3470_object = Obj(); var_3471_object = Obj();
		var_3454_int = var_3468_int;
		var_3456_object = var_3469_object;
		var_3457_object = var_3470_object;
		var_3458_object = var_3471_object;
		func_655((int)10, var_3468_int, var_3469_object, var_3470_object, var_3471_object);
		var_3472_object = Obj(); var_3473_int = 0;
		var_3459_object = var_3472_object;
		func_229(var_3472_object, (int)2);
	}
	var_3474_int = 0; var_3475_bool = 0;
	func_714((int)10, (bool)0);
	var_3476_int = 0; var_3477_int = 0; var_3478_int = 0;
	var_3454_int = var_3477_int;
	var_3455_int = var_3478_int;
	func_3158((int)10, var_3477_int, var_3478_int);
	return 0;
}


func_9702()
{
	var_4549_string = ""; var_4550_bool = 0;
	func_137("mnogogrannik@door1", (bool)0);
	return 0;
}


func_8167(var_4802_int)
{
	var_4803_int = 0; var_4804_int = 0;
	AddMessage((int)14529, (int)14528, var_4804_int);
	SetVariable("player_mail", (int)1);
	var_4804_int = var_4802_int;
	return 2;
}


func_7146()
{
	var_3743_object = Obj(); var_3744_object = Obj(); var_3745_object = Obj(); var_3746_object = Obj();
	GetMainOutdoorScene(var_3745_object);
	AddScriptedActor(var_3746_object, "big_gun", "big_gun.bin", var_3745_object, CVector(0.0, 0.0, 0.0));
	AddScriptedActor(var_3746_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_3745_object, CVector(0.0, 0.0, 0.0));
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5100(var_3265_int, var_3266_int, var_3267_object, var_3268_object, var_3269_object, var_3270_object)
{
	var_3272_bool = var_3266_int == (int)0;
	if(var_3272_bool != 0) {
		var_3273_int = 0; var_3274_bool = 0;
		func_731((int)7, (bool)1);
		var_3275_int = 0; var_3276_bool = 0; var_3277_int = 0;
		func_748((int)7, (bool)1, (int)1);
		var_3278_int = 0; var_3279_int = 0; var_3280_object = Obj(); var_3281_object = Obj(); var_3282_object = Obj();
		var_3265_int = var_3279_int;
		var_3267_object = var_3280_object;
		var_3268_object = var_3281_object;
		var_3269_object = var_3282_object;
		func_655((int)7, var_3279_int, var_3280_object, var_3281_object, var_3282_object);
		var_3283_object = Obj(); var_3284_int = 0;
		var_3270_object = var_3283_object;
		func_229(var_3283_object, (int)2);
	}
	var_3285_int = 0; var_3286_bool = 0;
	func_714((int)7, (bool)0);
	var_3287_int = 0; var_3288_int = 0; var_3289_int = 0;
	var_3265_int = var_3288_int;
	var_3266_int = var_3289_int;
	func_3158((int)7, var_3288_int, var_3289_int);
	return 0;
}


func_9709()
{
	var_4943_object = Obj(); var_4944_object = Obj(); var_4945_object = Obj(); var_4946_object = Obj();
	func_10048(Obj());
	var_4947_object = var_4945_object;
	@@var_4945_object:FindMark(var_4946_object, "d8q01MatGotoToyHouse");
	var_4949_object = var_4946_object;
	if(var_4949_object != 0) {
		@@var_4946_object:Remove();
	}
	var_4950_bool = 0; var_4951_int = 0;
	func_10031(var_4950_bool, (int)182);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4592(var_2051_int, var_2052_int, var_2053_object, var_2054_object, var_2055_object, var_2056_object)
{
	var_2058_bool = var_2052_int == (int)0;
	if(var_2058_bool != 0) {
		var_2059_int = 0; var_2060_bool = 0;
		func_731((int)4, (bool)1);
		var_2061_int = 0; var_2062_bool = 0; var_2063_int = 0;
		func_748((int)4, (bool)1, (int)1);
		var_2064_int = 0; var_2065_int = 0; var_2066_object = Obj(); var_2067_object = Obj(); var_2068_object = Obj();
		var_2051_int = var_2065_int;
		var_2053_object = var_2066_object;
		var_2054_object = var_2067_object;
		var_2055_object = var_2068_object;
		func_576((int)4, var_2065_int, var_2066_object, var_2067_object, var_2068_object);
		var_2069_object = Obj(); var_2070_int = 0;
		var_2056_object = var_2069_object;
		func_229(var_2069_object, (int)1);
	}
	var_2071_int = 0; var_2072_bool = 0;
	func_714((int)4, (bool)0);
	var_2073_int = 0; var_2074_int = 0; var_2075_int = 0;
	var_2051_int = var_2074_int;
	var_2052_int = var_2075_int;
	func_2310((int)4, var_2074_int, var_2075_int);
	return 0;
}


func_8178(var_4779_int)
{
	var_4780_int = 0; var_4781_int = 0;
	AddMessage((int)14531, (int)14530, var_4781_int);
	SetVariable("player_mail", (int)1);
	var_4781_int = var_4779_int;
	return 2;
}


func_4086(var_2897_int, var_2898_int, var_2899_object, var_2900_object, var_2901_object, var_2902_object)
{
	var_2904_bool = var_2898_int == (int)0;
	if(var_2904_bool != 0) {
		var_2905_int = 0; var_2906_bool = 0;
		func_731((int)1, (bool)1);
		var_2907_int = 0; var_2908_bool = 0; var_2909_int = 0;
		func_748((int)1, (bool)1, (int)1);
		var_2910_int = 0; var_2911_int = 0; var_2912_object = Obj(); var_2913_object = Obj(); var_2914_object = Obj();
		var_2897_int = var_2911_int;
		var_2899_object = var_2912_object;
		var_2900_object = var_2913_object;
		var_2901_object = var_2914_object;
		func_655((int)1, var_2911_int, var_2912_object, var_2913_object, var_2914_object);
		var_2915_object = Obj(); var_2916_int = 0;
		var_2902_object = var_2915_object;
		func_229(var_2915_object, (int)2);
	}
	var_2917_int = 0; var_2918_bool = 0;
	func_714((int)1, (bool)0);
	var_2919_int = 0; var_2920_int = 0; var_2921_int = 0;
	var_2897_int = var_2920_int;
	var_2898_int = var_2921_int;
	func_3685((int)1, var_2920_int, var_2921_int);
	return 0;
}


func_7162(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	var_11_bool = 0;
	var_11_bool = 0;
	var_13_bool = var_3_int > (int)16384;
	if(var_13_bool != 0) {
		var_15_bool = var_3_int < (int)16396;
		if(var_15_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_8_int = var_3_int - (int)16384;
		var_17_int = 0;
		var_8_int = var_17_int;
		func_11454(var_17_int);
		var_2_bool = 1;
		return 6;
	}
	var_180_bool = 0;
	var_180_bool = 0;
	var_182_bool = var_3_int > (int)32768;
	if(var_182_bool != 0) {
		var_184_bool = var_3_int < (int)33056;
		if(var_184_bool != 0) {
			var_180_bool = 1;
		}
	}
	if(var_180_bool != 0) {
		var_186_int = var_3_int - (int)32768;
		var_9_int = var_186_int / (int)24;
		var_189_int = var_3_int - (int)32768;
		var_10_int = var_189_int % (int)24;
		var_191_int = 0; var_192_int = 0;
		var_9_int = var_191_int;
		var_10_int = var_192_int;
		func_7280(var_191_int, var_192_int);
		var_2_bool = 1;
		return 6;
	}
	var_2_bool = 0;
	return 6;
}


func_8189(var_4361_int)
{
	var_4362_int = 0; var_4363_int = 0;
	AddMessage((int)15493, (int)15492, var_4363_int);
	SetVariable("player_mail", (int)1);
	var_4363_int = var_4361_int;
	return 2;
}


func_1022(var_1562_float, var_1563_int)
{
	var_1565_int = var_1563_int + (int)1;
	var_1567_bool = var_1565_int == (int)1;
	if(var_1567_bool != 0) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1569_int = var_1563_int + (int)1;
	var_1571_bool = var_1569_int == (int)2;
	if(var_1571_bool != 0) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1573_int = var_1563_int + (int)1;
	var_1575_bool = var_1573_int == (int)3;
	if(var_1575_bool != 0) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1577_int = var_1563_int + (int)1;
	var_1579_bool = var_1577_int == (int)4;
	if(var_1579_bool != 0) {
		var_1562_float = 0;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1581_int = var_1563_int + (int)1;
	var_1583_bool = var_1581_int == (int)5;
	if(var_1583_bool != 0) {
		var_1562_float = 2;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1585_int = var_1563_int + (int)1;
	var_1587_bool = var_1585_int == (int)6;
	if(var_1587_bool != 0) {
		var_1562_float = 2;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1589_int = var_1563_int + (int)1;
	var_1591_bool = var_1589_int == (int)7;
	if(var_1591_bool != 0) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1593_int = var_1563_int + (int)1;
	var_1595_bool = var_1593_int == (int)8;
	if(var_1595_bool != 0) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1597_int = var_1563_int + (int)1;
	var_1599_bool = var_1597_int == (int)9;
	if(var_1599_bool != 0) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1601_int = var_1563_int + (int)1;
	var_1603_bool = var_1601_int == (int)10;
	if(var_1603_bool != 0) {
		var_1562_float = 1;
		return 0;
	EMIT "GOTO 0x456";
	}
	var_1605_int = var_1563_int + (int)1;
	var_1607_bool = var_1605_int == (int)11;
	if(var_1607_bool != 0) {
		var_1562_float = 1;
		return 0;
	}
	var_1562_float = 0;
	return 0;
}


func_511(var_1431_string, var_1432_object, var_1433_string, var_1434_string)
{
	var_1440_object = Obj(); var_1441_int = 0; var_1442_bool = 0; var_1443_cvector = CVector(0,0,0); var_1444_cvector = CVector(0,0,0); var_1445_object = Obj(); var_1446_object = Obj(); var_1447_int = 0; var_1448_bool = 0; var_1449_cvector = CVector(0,0,0); var_1450_cvector = CVector(0,0,0); var_1451_object = Obj();
	GetMainOutdoorScene(var_1446_object);
	var_1447_int = 0;
	
Label_515:
	var_1453_int = var_1447_int + (int)1;
	var_1454_int = var_1431_string + var_1453_int;
	@@var_1446_object:GetLocator(var_1454_int, var_1448_bool, var_1449_cvector, var_1450_cvector);
	var_1455_bool = var_1448_bool == 0; //@nz
	if(var_1455_bool != 0) {
	} else {
		@@var_1446_object:AddStationaryActor(var_1451_object, var_1449_cvector, var_1450_cvector, var_1433_string, var_1434_string);
		@@var_1432_object:add(var_1451_object);
		var_1451_object = 0;
		var_1447_int = var_1447_int + (int)1;
		goto Label_515;
	}
	return 12;
	
}
EMIT "Stack[-6] = 0";


