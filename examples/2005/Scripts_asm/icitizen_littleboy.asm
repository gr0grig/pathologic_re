GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	W:Neutral
	W:all
	W:idle
	W:head
	W:attack_on
	W:attack_stay
	W:attack_off
	A:GetPosition
	W:Can't retreat, distance: 
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:HasProperty
	A:HasProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	A:GetProperty
	A:GetEyesHeight
	W:unholster
	W:player_shot
	W:battle
	A:IsWeaponHolstered
	W:heal
	W:player
	W:class
	W:rat
	W:rat_big
	W:dog
	A:SetReturnValue
	W:branch
	W:rifle_ammo
	W:revolver_ammo
	W:samopal_ammo
	W:lockpick
	W:alpha_pills
	W:meradorm
	W:powder
	W:beta_pills
	W:gamma_pills
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
	W:ToDie
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c006500000068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c7900480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f706572747900476574457965734865696768740075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000070006c006100790065007200000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f006700000053657452657475726e56616c7565006200720061006e006300680000007200690066006c0065005f0061006d006d006f0000007200650076006f006c007600650072005f0061006d006d006f000000730061006d006f00700061006c005f0061006d006d006f0000006c006f0063006b007000690063006b00000061006c007000680061005f00700069006c006c00730000006d0065007200610064006f0072006d00000070006f007700640065007200000062006500740061005f00700069006c006c0073000000670061006d006d0061005f00700069006c006c0073000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e006700000054006f004400690065000000

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	GetDirection (1 args)
	StopAsync (0 args)
	UnlookAsync (1 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	GetScene (1 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	ClearSubContainer (1 args)
	SetProperty (2 args)

RunOp = 0x28
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x40 Vars = (object)
		EVENT_17 Op = 0x54 Vars = (object)
		EVENT_30 Op = 0x6c Vars = (object, object, bool)
		EVENT_40 Op = 0x88 Vars = (object)
		EVENT_42 Op = 0x9c Vars = (object, string)
		EVENT_26 Op = 0xc1 Vars = (string)
		EVENT_1 Op = 0xcf Vars = (object)
		EVENT_3 Op = 0xe2 Vars = (object)
		EVENT_7 Op = 0xe8 Vars = (int)
		EVENT_6 Op = 0xf4 Vars = ()
		EVENT_41 Op = 0x10b Vars = (object)
		EVENT_10 Op = 0x17c Vars = (object)
		EVENT_28 Op = 0x180 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x199 Vars = (object)
		EVENT_17 Op = 0x1ad Vars = (object)
		EVENT_30 Op = 0x1c5 Vars = (object, object, bool)
		EVENT_40 Op = 0x1e1 Vars = (object)
		EVENT_42 Op = 0x1f5 Vars = (object, string)
		EVENT_26 Op = 0x21a Vars = (string)
		EVENT_6 Op = 0x228 Vars = ()
		EVENT_1 Op = 0x22f Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x2cb Vars = (object)
		EVENT_17 Op = 0x2df Vars = (object)
		EVENT_30 Op = 0x2f7 Vars = (object, object, bool)
		EVENT_40 Op = 0x313 Vars = (object)
		EVENT_42 Op = 0x327 Vars = (object, string)
		EVENT_26 Op = 0x34c Vars = (string)
		EVENT_41 Op = 0x365 Vars = (object)
		EVENT_7 Op = 0x36e Vars = (int)
		EVENT_6 Op = 0x391 Vars = ()
		EVENT_1 Op = 0x398 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x3c2 Vars = ()
		EVENT_7 Op = 0x430 Vars = (int)
		EVENT_41 Op = 0x46b Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4eb Vars = (int)
		EVENT_41 Op = 0x526 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x53f Vars = ()
		EVENT_7 Op = 0x5ad Vars = (int)
		EVENT_41 Op = 0x5e8 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x601 Vars = ()
		EVENT_7 Op = 0x66f Vars = (int)
		EVENT_41 Op = 0x6aa Vars = (object)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8cd Vars = (int, int)

Events:
EVENT_16 Op = 0x1211 Vars = (object, string)
EVENT_41 Op = 0x1213 Vars = (object)
EVENT_22 Op = 0x1215 Vars = (object, int, float, float)
EVENT_43 Op = 0x1217 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x14ea

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0x1181

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all") // @poff=16
0x12: Push("idle") // @poff=24
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x14ea

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: Push((bool) 1)
0x29: @ SensePlayerOnly(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0x14ec

0x2d: Pop(0)
0x2e: PushEmpty()
0x2f: Call2 0x37

0x30: Pop(0)
0x31: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32: PushEmpty()
0x33: Call2 0x13c

0x34: Pop(0)
0x35: GOTO 0x31

0x36: Return(); Pop(0)

0x37: PushEmpty(bool)
0x38: Call2 0x10ec

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x1331

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-5] = Stack[-1]
0x43: Call2 0x1328

0x44: Stack[-2] = Stack[-3]
0x45: Pop(2)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x49: Push((int) 1)
0x4a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0xfb

0x4e: Pop(0)
0x4f: PushEmpty(object)
0x50: Stack[-4] = Stack[-1]
0x51: Call2 0x132b

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-4] = Stack[-1]
0x57: Call2 0x126f

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-5] = Stack[-1]
0x5b: Call2 0x12c2

0x5c: Stack[-2] = Stack[-3]
0x5d: Pop(2)
0x5e: Push((int) 0)
0x5f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x61: Push((int) 1)
0x62: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: PushEmpty()
0x65: Call2 0xfb

0x66: Pop(0)
0x67: PushEmpty(object)
0x68: Stack[-4] = Stack[-1]
0x69: Call2 0x12cc

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-9] = Stack[-3]
0x6f: Stack[-8] = Stack[-2]
0x70: Stack[-7] = Stack[-1]
0x71: Call2 0x151e

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-8] = Stack[-2]
0x76: Stack[-6] = Stack[-1]
0x77: Call2 0x12d4

0x78: Stack[-3] = Stack[-4]
0x79: Pop(3)
0x7a: Push((int) 0)
0x7b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7d: Push((int) 1)
0x7e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: PushEmpty()
0x81: Call2 0xfb

0x82: Pop(0)
0x83: PushEmpty(object)
0x84: Stack[-6] = Stack[-1]
0x85: Call2 0x12de

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-5] = Stack[-1]
0x8b: Call2 0x1332

0x8c: Stack[-2] = Stack[-3]
0x8d: Pop(2)
0x8e: Push((int) 0)
0x8f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x91: Push((int) 1)
0x92: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: PushEmpty()
0x95: Call2 0xfb

0x96: Pop(0)
0x97: PushEmpty(object)
0x98: Stack[-4] = Stack[-1]
0x99: Call2 0x1335

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-7] = Stack[-2]
0x9f: Stack[-6] = Stack[-1]
0xa0: Call2 0x1219

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-6] = Stack[-2]
0xa8: Stack[-5] = Stack[-1]
0xa9: Call2 0x1239

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-6] = Stack[-2]
0xae: Stack[-7] = Stack[-1]
0xaf: Call2 0x1337

0xb0: Stack[-3] = Stack[-4]
0xb1: Pop(3)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0xfb

0xba: Pop(0)
0xbb: PushEmpty(string, object)
0xbc: Stack[-5] = Stack[-2]
0xbd: Stack[-6] = Stack[-1]
0xbe: Call2 0x133a

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-3] = Stack[-1]
0xc4: Call2 0x127c

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-2] = Stack[-1]
0xcc: Call2 0x128c

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-3] = Stack[-1]
0xd2: Call2 0x1252

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-2] = Stack[-1]
0xda: Call2 0x1269

0xdb: Pop(1)
0xdc: GOTO 0xe1

0xdd: PushEmpty(object)
0xde: Stack[-2] = Stack[-1]
0xdf: Call2 0x114

0xe0: Pop(1)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-2] = Stack[-1]
0xe5: Call2 0x114

0xe6: Pop(1)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push((int) 110)
0xea: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xee: Push((int) 110)
0xef: @ KillTimer(Stack[-1])
0xf0: Pop(1)
0xf1: @ ResetAAS()
0xf2: Pop(0)
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Call2 0xfb

0xf6: Pop(0)
0xf7: PushEmpty()
0xf8: Call2 0x1331

0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: Push((int) 110)
0xfc: @ KillTimer(Stack[-1])
0xfd: Pop(1)
0xfe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xff: PushEmpty()
0x100: Call2 0x183

0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: Push((int) 110)
0x104: @ KillTimer(Stack[-1])
0x105: Pop(1)
0x106: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x107: PushEmpty()
0x108: Call2 0x18a

0x109: Pop(0)
0x10a: Return(); Pop(0)

0x10b: PushEmpty()
0x10c: PushEmpty()
0x10d: Call2 0xfb

0x10e: Pop(0)
0x10f: PushEmpty(object)
0x110: Stack[-2] = Stack[-1]
0x111: Call2 0x1213

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-7] = Stack[-1]
0x117: Call2 0x10c9

0x118: Pop(1)
0x119: Pop(1); Push((bool) Stack[-1] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Return(); Pop(4)

0x11c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Return(); Pop(4)

0x11f: @ IsPlayerActor(Stack[-5], Stack[-2])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-2] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Return(); Pop(4)

0x124: PushEmpty(int, object)
0x125: Stack[-7] = Stack[-1]
0x126: Call2 0x12b1

0x127: Stack[-2] = Stack[-3]
0x128: Pop(2)
0x129: Push((int) 0)
0x12a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: Push((int) 1)
0x12d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: PushEmpty()
0x130: Call2 0x103

0x131: Pop(0)
0x132: PushEmpty(object)
0x133: Stack[-6] = Stack[-1]
0x134: Call2 0x12ba

0x135: Pop(1)
0x136: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x137: Push((int) 110)
0x138: Push((float)10.0)
0x139: @ SetTimer(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: Return(); Pop(4)

0x13c: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x13d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x13e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x13f: Push((float)0.5)
0x140: @ rand(Stack[-7], Stack[-1])
0x141: Pop(1)
0x142: @ Sleep(Stack[-6])
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x146: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: @ GetPosition(Stack[-4])
0x149: Pop(0)
0x14a: PushEmpty(float)
0x14b: Call2 0x177

0x14c: Pop(0)
0x14d: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x14e: Pop(1)
0x14f: Push(Stack[-3])
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: GOTO 0x156

0x152: Push((int) 1)
0x153: @ Sleep(Stack[-1])
0x154: Pop(1)
0x155: GOTO 0x148

0x156: GOTO 0x158

0x157: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x158: PushEmpty(object, cvector)
0x159: Stack[-7] = Stack[-1]
0x15a: Call2 0x193

0x15b: Stack[-2] = Stack[-4]
0x15c: Pop(2)
0x15d: Pop(0); Push(( Stack[-2] != 0 )
0x15e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15f: @ RotatePath(Stack[-2], Stack[-1])
0x160: Pop(0)
0x161: Push(Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x191

0x165: Pop(0)
0x166: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x167: Pop(1)
0x168: Stack[-2] = 0
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: PushEmpty()
0x16c: Push(-0, 0); TaskCall(2)
0x16d: Call2 0x23d

0x16e: Pop(-0, 0); TaskReturn
0x16f: Pop(0)
0x170: GOTO 0x174

0x171: Push((int) 1)
0x172: @ Sleep(Stack[-1])
0x173: Pop(1)
0x174: Stack[-2] = 0
0x175: GOTO 0x144

0x176: Return(); Pop(12)

0x177: PushEmpty(float, float)
0x178: @ GetCameraFarDistance(Stack[-1])
0x179: Pop(0)
0x17a: Stack[-1] = Stack[-3]
0x17b: Return(); Pop(2)

0x17c: PushEmpty()
0x17d: @ RequestClearPath(Stack[-1])
0x17e: Pop(0)
0x17f: Return(); Pop(0)

0x180: @ Stop()
0x181: Pop(0)
0x182: Return(); Pop(0)

0x183: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x184: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x185: @ Stop()
0x186: Pop(0)
0x187: @ StopGroup0()
0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18c: @ Stop()
0x18d: Pop(0)
0x18e: @ StopGroup0()
0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: Stack[-1] = (bool) 0
0x192: Return(); Pop(0)

0x193: PushEmpty(object, object)
0x194: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x195: Pop(0)
0x196: Stack[-1] = Stack[-4]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: PushEmpty(int, object)
0x19b: Stack[-5] = Stack[-1]
0x19c: Call2 0x1328

0x19d: Stack[-2] = Stack[-3]
0x19e: Pop(2)
0x19f: Push((int) 0)
0x1a0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: PushEmpty()
0x1a6: Call2 0x28e

0x1a7: Pop(0)
0x1a8: PushEmpty(object)
0x1a9: Stack[-4] = Stack[-1]
0x1aa: Call2 0x132b

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-4] = Stack[-1]
0x1b0: Call2 0x126f

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-5] = Stack[-1]
0x1b4: Call2 0x12c2

0x1b5: Stack[-2] = Stack[-3]
0x1b6: Pop(2)
0x1b7: Push((int) 0)
0x1b8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1ba: Push((int) 1)
0x1bb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: PushEmpty()
0x1be: Call2 0x28e

0x1bf: Pop(0)
0x1c0: PushEmpty(object)
0x1c1: Stack[-4] = Stack[-1]
0x1c2: Call2 0x12cc

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-9] = Stack[-3]
0x1c8: Stack[-8] = Stack[-2]
0x1c9: Stack[-7] = Stack[-1]
0x1ca: Call2 0x151e

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-8] = Stack[-2]
0x1cf: Stack[-6] = Stack[-1]
0x1d0: Call2 0x12d4

0x1d1: Stack[-3] = Stack[-4]
0x1d2: Pop(3)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: PushEmpty()
0x1da: Call2 0x28e

0x1db: Pop(0)
0x1dc: PushEmpty(object)
0x1dd: Stack[-6] = Stack[-1]
0x1de: Call2 0x12de

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-5] = Stack[-1]
0x1e4: Call2 0x1332

0x1e5: Stack[-2] = Stack[-3]
0x1e6: Pop(2)
0x1e7: Push((int) 0)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ea: Push((int) 1)
0x1eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x28e

0x1ef: Pop(0)
0x1f0: PushEmpty(object)
0x1f1: Stack[-4] = Stack[-1]
0x1f2: Call2 0x1335

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-7] = Stack[-2]
0x1f8: Stack[-6] = Stack[-1]
0x1f9: Call2 0x1219

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-6] = Stack[-2]
0x201: Stack[-5] = Stack[-1]
0x202: Call2 0x1239

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-6] = Stack[-2]
0x207: Stack[-7] = Stack[-1]
0x208: Call2 0x1337

0x209: Stack[-3] = Stack[-4]
0x20a: Pop(3)
0x20b: Push((int) 0)
0x20c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20e: Push((int) 1)
0x20f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: PushEmpty()
0x212: Call2 0x28e

0x213: Pop(0)
0x214: PushEmpty(string, object)
0x215: Stack[-5] = Stack[-2]
0x216: Stack[-6] = Stack[-1]
0x217: Call2 0x133a

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-3] = Stack[-1]
0x21d: Call2 0x127c

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-2] = Stack[-1]
0x225: Call2 0x128c

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x1331

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-3] = Stack[-1]
0x232: Call2 0x1252

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-2] = Stack[-1]
0x23a: Call2 0x1269

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x10ec

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x12a0

0x248: Stack[-1] = Stack[-8]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x10ec

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x256: Push((int) 3)
0x257: @ irand(Stack[-6], Stack[-1])
0x258: Pop(1)
0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25c: Push(Stack[-7])
0x25d: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x25e: @ irand(Stack[-4], Stack[-7])
0x25f: Pop(0)
0x260: Push("all") // @poff=16
0x261: PushEmpty(string, int)
0x262: Stack[-7] = Stack[-1]
0x263: Call2 0x1299

0x264: Pop(1)
0x265: @ PlayAnimation(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: @ WaitForAnimEnd(Stack[-3])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-3] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x289

0x26c: GOTO 0x27e

0x26d: Push((int) 1)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x270: Push((int) 4)
0x271: @ rand(Stack[-3], Stack[-1])
0x272: Pop(1)
0x273: Push((int) 1)
0x274: Pop(1); Push(Stack[-3] + Stack[-1]);
0x275: @ Sleep(Stack[-1], Stack[-2])
0x276: Pop(1)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x289

0x27a: GOTO 0x27e

0x27b: Push(Stack[-6])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x289

0x27e: PushEmpty(bool)
0x27f: Call2 0x28c

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x289

0x284: @ ResetAAS()
0x285: Pop(0)
0x286: Push((int) 1)
0x287: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x288: GOTO 0x24b

0x289: @ ResetAAS()
0x28a: Pop(0)
0x28b: Return(); Pop(14)

0x28c: Stack[-1] = (bool) 1
0x28d: Return(); Pop(0)

0x28e: @ StopAnimation()
0x28f: Pop(0)
0x290: @ StopGroup0()
0x291: Pop(0)
0x292: Return(); Pop(0)

0x293: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x294: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x295: PushEmpty()
0x296: Call2 0x2c6

0x297: Pop(0)
0x298: @ GetDirection(Stack[-3])
0x299: Pop(0)
0x29a: PushEmpty(cvector, object)
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call2 0x1080

0x29d: Stack[-2] = Stack[-4]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-6] = Stack[-2]
0x2a1: Stack[-5] = Stack[-1]
0x2a2: Call2 0x11ea

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x10e1

0x2aa: Pop(1)
0x2ab: Stack[-1] = (bool) 1
0x2ac: GOTO 0x2b0

0x2ad: Push((float)1.5)
0x2ae: @ Sleep(Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b2: PushEmpty(object)
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0x10e1

0x2b5: Pop(1)
0x2b6: Push((int) 111)
0x2b7: Push((float)0.5)
0x2b8: @ SetTimer(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Push((float)5.0)
0x2bb: @ Sleep(Stack[-1])
0x2bc: Pop(1)
0x2bd: Push((int) 111)
0x2be: @ KillTimer(Stack[-1])
0x2bf: Pop(1)
0x2c0: @ StopAsync()
0x2c1: Pop(0)
0x2c2: Push("head") // @poff=34
0x2c3: @ UnlookAsync(Stack[-1])
0x2c4: Pop(1)
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x118e

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-5] = Stack[-1]
0x2ce: Call2 0x1328

0x2cf: Stack[-2] = Stack[-3]
0x2d0: Pop(2)
0x2d1: Push((int) 0)
0x2d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d4: Push((int) 1)
0x2d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: PushEmpty()
0x2d8: Call2 0x35a

0x2d9: Pop(0)
0x2da: PushEmpty(object)
0x2db: Stack[-4] = Stack[-1]
0x2dc: Call2 0x132b

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-4] = Stack[-1]
0x2e2: Call2 0x126f

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-5] = Stack[-1]
0x2e6: Call2 0x12c2

0x2e7: Stack[-2] = Stack[-3]
0x2e8: Pop(2)
0x2e9: Push((int) 0)
0x2ea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ec: Push((int) 1)
0x2ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ef: PushEmpty()
0x2f0: Call2 0x35a

0x2f1: Pop(0)
0x2f2: PushEmpty(object)
0x2f3: Stack[-4] = Stack[-1]
0x2f4: Call2 0x12cc

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-9] = Stack[-3]
0x2fa: Stack[-8] = Stack[-2]
0x2fb: Stack[-7] = Stack[-1]
0x2fc: Call2 0x151e

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-8] = Stack[-2]
0x301: Stack[-6] = Stack[-1]
0x302: Call2 0x12d4

0x303: Stack[-3] = Stack[-4]
0x304: Pop(3)
0x305: Push((int) 0)
0x306: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x308: Push((int) 1)
0x309: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: PushEmpty()
0x30c: Call2 0x35a

0x30d: Pop(0)
0x30e: PushEmpty(object)
0x30f: Stack[-6] = Stack[-1]
0x310: Call2 0x12de

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-5] = Stack[-1]
0x316: Call2 0x1332

0x317: Stack[-2] = Stack[-3]
0x318: Pop(2)
0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31c: Push((int) 1)
0x31d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: PushEmpty()
0x320: Call2 0x35a

0x321: Pop(0)
0x322: PushEmpty(object)
0x323: Stack[-4] = Stack[-1]
0x324: Call2 0x1335

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-7] = Stack[-2]
0x32a: Stack[-6] = Stack[-1]
0x32b: Call2 0x1219

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-6] = Stack[-2]
0x333: Stack[-5] = Stack[-1]
0x334: Call2 0x1239

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-6] = Stack[-2]
0x339: Stack[-7] = Stack[-1]
0x33a: Call2 0x1337

0x33b: Stack[-3] = Stack[-4]
0x33c: Pop(3)
0x33d: Push((int) 0)
0x33e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x340: Push((int) 1)
0x341: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x343: PushEmpty()
0x344: Call2 0x35a

0x345: Pop(0)
0x346: PushEmpty(string, object)
0x347: Stack[-5] = Stack[-2]
0x348: Stack[-6] = Stack[-1]
0x349: Call2 0x133a

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-3] = Stack[-1]
0x34f: Call2 0x127c

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-2] = Stack[-1]
0x357: Call2 0x128c

0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push("head") // @poff=34
0x35f: @ UnlookAsync(Stack[-1])
0x360: Pop(1)
0x361: Push((int) 111)
0x362: @ KillTimer(Stack[-1])
0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty()
0x367: Call2 0x35a

0x368: Pop(0)
0x369: PushEmpty(object)
0x36a: Stack[-2] = Stack[-1]
0x36b: Call2 0x1213

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x10c9

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x379: PushEmpty()
0x37a: Call2 0x35a

0x37b: Pop(0)
0x37c: Return(); Pop(4)

0x37d: @ GetDirection(Stack[-2])
0x37e: Pop(0)
0x37f: PushEmpty(cvector, object)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call2 0x1080

0x382: Stack[-2] = Stack[-3]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-5] = Stack[-2]
0x386: Stack[-4] = Stack[-1]
0x387: Call2 0x11ea

0x388: Pop(2)
0x389: Push((float)0.4999999701976776)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x10e1

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x1331

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-3] = Stack[-1]
0x39b: Call2 0x1252

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-2] = Stack[-1]
0x3a3: Call2 0x1269

0x3a4: Pop(1)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ Face(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push("all") // @poff=16
0x3aa: Push("attack_on") // @poff=44
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push("all") // @poff=16
0x3b0: Push("attack_stay") // @poff=64
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: Push("all") // @poff=16
0x3b6: Push("attack_off") // @poff=88
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: @ StopAsync()
0x3bc: Pop(0)
0x3bd: PushEmpty(object)
0x3be: Stack[-2] = Stack[-1]
0x3bf: Call2 0x3e7

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Call2 0x464

0x3c4: Pop(0)
0x3c5: PushEmpty()
0x3c6: Call2 0x1331

0x3c7: Pop(0)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3ca: @ GetPosition(Stack[-6])
0x3cb: Pop(0)
0x3cc: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x3cd: Pop(0)
0x3ce: @ GetDirection(Stack[-4])
0x3cf: Pop(0)
0x3d0: PushEmpty(cvector, cvector)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d3: Call2 0x11c0

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x11c0

0x3d9: Stack[-2] = Stack[-5]
0x3da: Pop(2)
0x3db: Push((int) 32)
0x3dc: Push((float)7000.0)
0x3dd: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: Push((int) 100)
0x3e0: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3e1: Push((int) 0)
0x3e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (int) 0
0x3e5: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3e6: Return(); Pop(12)

0x3e7: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3e9: PushEmpty(cvector, float)
0x3ea: Stack[-1] = (float) 1.7453293800354004
0x3eb: Call2 0x3c9

0x3ec: Stack[-2] = Stack[-7]
0x3ed: Pop(2)
0x3ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ef: Push((float)2500.0)
0x3f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.6179938316345215
0x3f4: Call2 0x3c9

0x3f5: Stack[-2] = Stack[-7]
0x3f6: Pop(2)
0x3f7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: Push("Can't retreat, distance: ") // @poff=122
0x3fc: Pop(0); Push(Sqrt(Stack[-5]))
0x3fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Push((float)0.5)
0x401: @ Sleep(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(10)

0x404: Push(CvectorIndex(Stack[-5], 0))
0x405: Push(CvectorIndex(Stack[-6], 2))
0x406: @ Rotate(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: PushEmpty(cvector)
0x409: Call2 0x107b

0x40a: Pop(0)
0x40b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x40c: Push((int) 120)
0x40d: Push((float)0.5)
0x40e: @ SetTimer(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x413: Pop(1)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: GOTO 0x42f

0x419: GOTO 0x42d

0x41a: PushEmpty(cvector, float)
0x41b: Stack[-1] = (float) 2.6179938316345215
0x41c: Call2 0x3c9

0x41d: Stack[-2] = Stack[-4]
0x41e: Pop(2)
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Push((float)2500.0)
0x421: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x423: PushEmpty(cvector)
0x424: Call2 0x107b

0x425: Pop(0)
0x426: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x427: Push((int) 120)
0x428: Push((float)0.5)
0x429: @ SetTimer(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x42d

0x42c: GOTO 0x42f

0x42d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 1) GOTO 0x411; Pop(1)

0x42f: Return(); Pop(10)

0x430: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x431: Push((int) 120)
0x432: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(8)

0x435: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x437: @ Stop()
0x438: Pop(0)
0x439: Push((int) 1)
0x43a: @ KillTimer(Stack[-1])
0x43b: Pop(1)
0x43c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43d: GOTO 0x463

0x43e: @ GetDirection(Stack[-4])
0x43f: Pop(0)
0x440: Push((float)7000.0)
0x441: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x442: Pop(1)
0x443: PushEmpty(cvector, float)
0x444: Stack[-1] = (float) 1.7453293800354004
0x445: Call2 0x3c9

0x446: Stack[-2] = Stack[-4]
0x447: Pop(2)
0x448: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x449: PushEmpty(bool)
0x44a: Stack[-1] = (bool) 0
0x44b: Push((float)2500.0)
0x44c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 1
0x450: Pop(0); Push(Stack[-5] * Stack[-5]);
0x451: Push((float)2.25)
0x452: Pop(2); Push(Stack[-2] * Stack[-1]);
0x453: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x454: IF (Stack[-1] == 1) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x474

0x457: Pop(0)
0x458: IF (Stack[-1] == 1) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 0
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: @ Stop()
0x45e: Pop(0)
0x45f: PushEmpty(cvector)
0x460: Call2 0x107b

0x461: Pop(0)
0x462: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x463: Return(); Pop(8)

0x464: @ Stop()
0x465: Pop(0)
0x466: Push((int) 120)
0x467: @ KillTimer(Stack[-1])
0x468: Pop(1)
0x469: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty()
0x46d: Call2 0x464

0x46e: Pop(0)
0x46f: PushEmpty(object)
0x470: Stack[-2] = Stack[-1]
0x471: Call2 0x1213

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x1080

0x47a: Stack[-2] = Stack[-3]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-5] = Stack[-2]
0x47e: Stack[-4] = Stack[-1]
0x47f: Call2 0x11cf

0x480: Pop(2)
0x481: Push((float)-0.3420201241970062)
0x482: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x485: @ GetPosition(Stack[-6])
0x486: Pop(0)
0x487: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x488: Pop(0)
0x489: @ GetDirection(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(cvector, cvector)
0x48c: PushEmpty(cvector, cvector)
0x48d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x48e: Call2 0x11c0

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x11c0

0x494: Stack[-2] = Stack[-5]
0x495: Pop(2)
0x496: Push((int) 32)
0x497: Push((float)7000.0)
0x498: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x499: Pop(2)
0x49a: Push((int) 100)
0x49b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x49c: Push((int) 0)
0x49d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = (int) 0
0x4a0: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x4a1: Return(); Pop(12)

0x4a2: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x4a3: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x4a4: PushEmpty(cvector, float)
0x4a5: Stack[-1] = (float) 1.7453293800354004
0x4a6: Call2 0x484

0x4a7: Stack[-2] = Stack[-7]
0x4a8: Pop(2)
0x4a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4aa: Push((float)2500.0)
0x4ab: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.6179938316345215
0x4af: Call2 0x484

0x4b0: Stack[-2] = Stack[-7]
0x4b1: Pop(2)
0x4b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: Push("Can't retreat, distance: ") // @poff=122
0x4b7: Pop(0); Push(Sqrt(Stack[-5]))
0x4b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b9: @ Trace(Stack[-1])
0x4ba: Pop(1)
0x4bb: Push((float)0.5)
0x4bc: @ Sleep(Stack[-1])
0x4bd: Pop(1)
0x4be: Return(); Pop(10)

0x4bf: Push(CvectorIndex(Stack[-5], 0))
0x4c0: Push(CvectorIndex(Stack[-6], 2))
0x4c1: @ Rotate(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: PushEmpty(cvector)
0x4c4: Call2 0x107b

0x4c5: Pop(0)
0x4c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4c7: Push((int) 120)
0x4c8: Push((float)0.5)
0x4c9: @ SetTimer(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4cc: Push((int) 1)
0x4cd: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x4ce: Pop(1)
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d1: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: GOTO 0x4ea

0x4d4: GOTO 0x4e8

0x4d5: PushEmpty(cvector, float)
0x4d6: Stack[-1] = (float) 2.6179938316345215
0x4d7: Call2 0x484

0x4d8: Stack[-2] = Stack[-4]
0x4d9: Pop(2)
0x4da: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4db: Push((float)2500.0)
0x4dc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4de: PushEmpty(cvector)
0x4df: Call2 0x107b

0x4e0: Pop(0)
0x4e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e2: Push((int) 120)
0x4e3: Push((float)0.5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: GOTO 0x4ea

0x4e8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e9: IF (Stack[-1] == 1) GOTO 0x4cc; Pop(1)

0x4ea: Return(); Pop(10)

0x4eb: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ec: Push((int) 120)
0x4ed: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Return(); Pop(8)

0x4f0: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f2: @ Stop()
0x4f3: Pop(0)
0x4f4: Push((int) 1)
0x4f5: @ KillTimer(Stack[-1])
0x4f6: Pop(1)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f8: GOTO 0x51e

0x4f9: @ GetDirection(Stack[-4])
0x4fa: Pop(0)
0x4fb: Push((float)7000.0)
0x4fc: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4fd: Pop(1)
0x4fe: PushEmpty(cvector, float)
0x4ff: Stack[-1] = (float) 1.7453293800354004
0x500: Call2 0x484

0x501: Stack[-2] = Stack[-4]
0x502: Pop(2)
0x503: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x504: PushEmpty(bool)
0x505: Stack[-1] = (bool) 0
0x506: Push((float)2500.0)
0x507: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 1
0x50b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x50c: Push((float)2.25)
0x50d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x50f: IF (Stack[-1] == 1) GOTO 0x515; Pop(1)

0x510: PushEmpty(bool)
0x511: Call2 0x52f

0x512: Pop(0)
0x513: IF (Stack[-1] == 1) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 1
0x517: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x518: @ Stop()
0x519: Pop(0)
0x51a: PushEmpty(cvector)
0x51b: Call2 0x107b

0x51c: Pop(0)
0x51d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x51e: Return(); Pop(8)

0x51f: @ Stop()
0x520: Pop(0)
0x521: Push((int) 120)
0x522: @ KillTimer(Stack[-1])
0x523: Pop(1)
0x524: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: PushEmpty()
0x528: Call2 0x51f

0x529: Pop(0)
0x52a: PushEmpty(object)
0x52b: Stack[-2] = Stack[-1]
0x52c: Call2 0x1213

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x1080

0x535: Stack[-2] = Stack[-3]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-5] = Stack[-2]
0x539: Stack[-4] = Stack[-1]
0x53a: Call2 0x11cf

0x53b: Pop(2)
0x53c: Push((float)-0.3420201241970062)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x1331

0x544: Pop(0)
0x545: Return(); Pop(0)

0x546: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x547: @ GetPosition(Stack[-6])
0x548: Pop(0)
0x549: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-4])
0x54c: Pop(0)
0x54d: PushEmpty(cvector, cvector)
0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x550: Call2 0x11c0

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x11c0

0x556: Stack[-2] = Stack[-5]
0x557: Pop(2)
0x558: Push((int) 32)
0x559: Push((float)7000.0)
0x55a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x55b: Pop(2)
0x55c: Push((int) 100)
0x55d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x55e: Push((int) 0)
0x55f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (int) 0
0x562: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x563: Return(); Pop(12)

0x564: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x565: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x566: PushEmpty(cvector, float)
0x567: Stack[-1] = (float) 1.7453293800354004
0x568: Call2 0x546

0x569: Stack[-2] = Stack[-7]
0x56a: Pop(2)
0x56b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x56c: Push((float)2500.0)
0x56d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.6179938316345215
0x571: Call2 0x546

0x572: Stack[-2] = Stack[-7]
0x573: Pop(2)
0x574: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: Push("Can't retreat, distance: ") // @poff=122
0x579: Pop(0); Push(Sqrt(Stack[-5]))
0x57a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57b: @ Trace(Stack[-1])
0x57c: Pop(1)
0x57d: Push((float)0.5)
0x57e: @ Sleep(Stack[-1])
0x57f: Pop(1)
0x580: Return(); Pop(10)

0x581: Push(CvectorIndex(Stack[-5], 0))
0x582: Push(CvectorIndex(Stack[-6], 2))
0x583: @ Rotate(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: PushEmpty(cvector)
0x586: Call2 0x107b

0x587: Pop(0)
0x588: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x589: Push((int) 120)
0x58a: Push((float)0.5)
0x58b: @ SetTimer(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 1)
0x58f: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x590: Pop(1)
0x591: Push(Stack[-3])
0x592: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x593: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: GOTO 0x5ac

0x596: GOTO 0x5aa

0x597: PushEmpty(cvector, float)
0x598: Stack[-1] = (float) 2.6179938316345215
0x599: Call2 0x546

0x59a: Stack[-2] = Stack[-4]
0x59b: Pop(2)
0x59c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59d: Push((float)2500.0)
0x59e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a0: PushEmpty(cvector)
0x5a1: Call2 0x107b

0x5a2: Pop(0)
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a4: Push((int) 120)
0x5a5: Push((float)0.5)
0x5a6: @ SetTimer(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: GOTO 0x5aa

0x5a9: GOTO 0x5ac

0x5aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5ab: IF (Stack[-1] == 1) GOTO 0x58e; Pop(1)

0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5ae: Push((int) 120)
0x5af: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(8)

0x5b2: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b4: @ Stop()
0x5b5: Pop(0)
0x5b6: Push((int) 1)
0x5b7: @ KillTimer(Stack[-1])
0x5b8: Pop(1)
0x5b9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5ba: GOTO 0x5e0

0x5bb: @ GetDirection(Stack[-4])
0x5bc: Pop(0)
0x5bd: Push((float)7000.0)
0x5be: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x5bf: Pop(1)
0x5c0: PushEmpty(cvector, float)
0x5c1: Stack[-1] = (float) 1.7453293800354004
0x5c2: Call2 0x546

0x5c3: Stack[-2] = Stack[-4]
0x5c4: Pop(2)
0x5c5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5c6: PushEmpty(bool)
0x5c7: Stack[-1] = (bool) 0
0x5c8: Push((float)2500.0)
0x5c9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5cb: PushEmpty(bool)
0x5cc: Stack[-1] = (bool) 1
0x5cd: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5ce: Push((float)2.25)
0x5cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d0: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5d1: IF (Stack[-1] == 1) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x5f1

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 1) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 0
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: PushEmpty(cvector)
0x5dd: Call2 0x107b

0x5de: Pop(0)
0x5df: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5e0: Return(); Pop(8)

0x5e1: @ Stop()
0x5e2: Pop(0)
0x5e3: Push((int) 120)
0x5e4: @ KillTimer(Stack[-1])
0x5e5: Pop(1)
0x5e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty()
0x5ea: Call2 0x5e1

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-2] = Stack[-1]
0x5ee: Call2 0x1213

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x1080

0x5f7: Stack[-2] = Stack[-3]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-5] = Stack[-2]
0x5fb: Stack[-4] = Stack[-1]
0x5fc: Call2 0x11cf

0x5fd: Pop(2)
0x5fe: Push((float)-0.3420201241970062)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x1331

0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x609: @ GetPosition(Stack[-6])
0x60a: Pop(0)
0x60b: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=110
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-4])
0x60e: Pop(0)
0x60f: PushEmpty(cvector, cvector)
0x610: PushEmpty(cvector, cvector)
0x611: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x612: Call2 0x11c0

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x11c0

0x618: Stack[-2] = Stack[-5]
0x619: Pop(2)
0x61a: Push((int) 32)
0x61b: Push((float)7000.0)
0x61c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x61d: Pop(2)
0x61e: Push((int) 100)
0x61f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x620: Push((int) 0)
0x621: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: Stack[-1] = (int) 0
0x624: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x625: Return(); Pop(12)

0x626: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x627: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x628: PushEmpty(cvector, float)
0x629: Stack[-1] = (float) 1.7453293800354004
0x62a: Call2 0x608

0x62b: Stack[-2] = Stack[-7]
0x62c: Pop(2)
0x62d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62e: Push((float)2500.0)
0x62f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.6179938316345215
0x633: Call2 0x608

0x634: Stack[-2] = Stack[-7]
0x635: Pop(2)
0x636: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: Push("Can't retreat, distance: ") // @poff=122
0x63b: Pop(0); Push(Sqrt(Stack[-5]))
0x63c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x63d: @ Trace(Stack[-1])
0x63e: Pop(1)
0x63f: Push((float)0.5)
0x640: @ Sleep(Stack[-1])
0x641: Pop(1)
0x642: Return(); Pop(10)

0x643: Push(CvectorIndex(Stack[-5], 0))
0x644: Push(CvectorIndex(Stack[-6], 2))
0x645: @ Rotate(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: PushEmpty(cvector)
0x648: Call2 0x107b

0x649: Pop(0)
0x64a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x64b: Push((int) 120)
0x64c: Push((float)0.5)
0x64d: @ SetTimer(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x655: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: GOTO 0x66e

0x658: GOTO 0x66c

0x659: PushEmpty(cvector, float)
0x65a: Stack[-1] = (float) 2.6179938316345215
0x65b: Call2 0x608

0x65c: Stack[-2] = Stack[-4]
0x65d: Pop(2)
0x65e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x65f: Push((float)2500.0)
0x660: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x662: PushEmpty(cvector)
0x663: Call2 0x107b

0x664: Pop(0)
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x666: Push((int) 120)
0x667: Push((float)0.5)
0x668: @ SetTimer(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: GOTO 0x66c

0x66b: GOTO 0x66e

0x66c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66d: IF (Stack[-1] == 1) GOTO 0x650; Pop(1)

0x66e: Return(); Pop(10)

0x66f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x670: Push((int) 120)
0x671: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(8)

0x674: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x676: @ Stop()
0x677: Pop(0)
0x678: Push((int) 1)
0x679: @ KillTimer(Stack[-1])
0x67a: Pop(1)
0x67b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x67c: GOTO 0x6a2

0x67d: @ GetDirection(Stack[-4])
0x67e: Pop(0)
0x67f: Push((float)7000.0)
0x680: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x681: Pop(1)
0x682: PushEmpty(cvector, float)
0x683: Stack[-1] = (float) 1.7453293800354004
0x684: Call2 0x608

0x685: Stack[-2] = Stack[-4]
0x686: Pop(2)
0x687: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 0
0x68a: Push((float)2500.0)
0x68b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 1
0x68f: Pop(0); Push(Stack[-5] * Stack[-5]);
0x690: Push((float)2.25)
0x691: Pop(2); Push(Stack[-2] * Stack[-1]);
0x692: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x693: IF (Stack[-1] == 1) GOTO 0x699; Pop(1)

0x694: PushEmpty(bool)
0x695: Call2 0x6b3

0x696: Pop(0)
0x697: IF (Stack[-1] == 1) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 0
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: @ Stop()
0x69d: Pop(0)
0x69e: PushEmpty(cvector)
0x69f: Call2 0x107b

0x6a0: Pop(0)
0x6a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6a2: Return(); Pop(8)

0x6a3: @ Stop()
0x6a4: Pop(0)
0x6a5: Push((int) 120)
0x6a6: @ KillTimer(Stack[-1])
0x6a7: Pop(1)
0x6a8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty()
0x6ac: Call2 0x6a3

0x6ad: Pop(0)
0x6ae: PushEmpty(object)
0x6af: Stack[-2] = Stack[-1]
0x6b0: Call2 0x1213

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x1080

0x6b9: Stack[-2] = Stack[-3]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-5] = Stack[-2]
0x6bd: Stack[-4] = Stack[-1]
0x6be: Call2 0x11cf

0x6bf: Pop(2)
0x6c0: Push((float)-0.3420201241970062)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-12] = Stack[-2]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x10f1

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x14e4

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=174
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x14e2

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=185
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x14e6

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=203
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x14e8

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=212
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x1472

0x6e6: Pop(0)
0x6e7: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=222
0x6e8: Pop(1)
0x6e9: Stack[-2] = (int) -1
0x6ea: @ IsOverrideActive(Stack[-3])
0x6eb: Pop(0)
0x6ec: Push(Stack[-3])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-10] = (int) -2
0x6ef: Return(); Pop(8)

0x6f0: @ DoDialog(Stack[-4])
0x6f1: Pop(0)
0x6f2: PushEmpty(object, object)
0x6f3: Stack[-11] = Stack[-2]
0x6f4: Stack[-6] = Stack[-1]
0x6f5: Push(-2, 4); TaskCall(9)
0x6f6: Call2 0x70d

0x6f7: Pop(-2, 4); TaskReturn
0x6f8: Pop(2)
0x6f9: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=236
0x6fa: Pop(0)
0x6fb: Pop(0); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fd: @ sync()
0x6fe: Pop(0)
0x6ff: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=236
0x700: Pop(0)
0x701: GOTO 0x6fb

0x702: PushEmpty(object)
0x703: Stack[-10] = Stack[-1]
0x704: Call2 0x1135

0x705: Pop(1)
0x706: @ StopDialog(Stack[-4])
0x707: Pop(0)
0x708: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=248
0x709: Pop(0)
0x70a: Stack[-2] = Stack[-10]
0x70b: Return(); Pop(8)

0x70c: Stack[-4] = 0
0x70d: PushEmpty()
0x70e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x710: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Neutral" // @poff=0
0x715: Call2 0x8b7

0x716: Pop(1)
0x717: Push((int) 537506)
0x718: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x719: Pop(1)
0x71a: @@@ ClearReplies(); Obj=0 // @poff=274
0x71b: Pop(0)
0x71c: Push((int) 537507)
0x71d: Push((int) -1)
0x71e: Push((int) 39354)
0x71f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x720: Pop(3)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 0
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 0
0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x727: Call2 0x1377

0x728: Pop(1)
0x729: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72a: PushEmpty(bool, object)
0x72b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72c: Call2 0x1383

0x72d: Pop(1)
0x72e: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72f: Stack[-1] = (bool) 1
0x730: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call2 0x13f1

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Stack[-1] = (bool) 1
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: Push((int) 537508)
0x739: Push((int) 39356)
0x73a: Push((int) 39355)
0x73b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x73c: Pop(3)
0x73d: PushEmpty(bool)
0x73e: Stack[-1] = (bool) 0
0x73f: PushEmpty(bool)
0x740: Stack[-1] = (bool) 0
0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0x1377

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call2 0x1383

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 1
0x74c: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74d: PushEmpty(bool, object)
0x74e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74f: Call2 0x13fb

0x750: Pop(1)
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = (bool) 1
0x753: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x754: Push((int) 537524)
0x755: Push((int) 39372)
0x756: Push((int) 39371)
0x757: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x758: Pop(3)
0x759: PushEmpty(bool)
0x75a: Stack[-1] = (bool) 0
0x75b: PushEmpty(bool, object)
0x75c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75d: Call2 0x1377

0x75e: Pop(1)
0x75f: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x760: PushEmpty(bool, object)
0x761: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x762: Call2 0x138d

0x763: Pop(1)
0x764: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x765: Stack[-1] = (bool) 1
0x766: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x767: Push((int) 537534)
0x768: Push((int) 39382)
0x769: Push((int) 39381)
0x76a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x76b: Pop(3)
0x76c: PushEmpty(bool)
0x76d: Stack[-1] = (bool) 0
0x76e: PushEmpty(bool, object)
0x76f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x770: Call2 0x1377

0x771: Pop(1)
0x772: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x773: PushEmpty(bool, object)
0x774: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x775: Call2 0x1397

0x776: Pop(1)
0x777: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x778: Stack[-1] = (bool) 1
0x779: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77a: Push((int) 537549)
0x77b: Push((int) 39397)
0x77c: Push((int) 39396)
0x77d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x77e: Pop(3)
0x77f: PushEmpty(bool)
0x780: Stack[-1] = (bool) 0
0x781: PushEmpty(bool, object)
0x782: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x783: Call2 0x1377

0x784: Pop(1)
0x785: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x786: PushEmpty(bool, object)
0x787: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x788: Call2 0x13a1

0x789: Pop(1)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Stack[-1] = (bool) 1
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: Push((int) 537559)
0x78e: Push((int) 39407)
0x78f: Push((int) 39406)
0x790: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x791: Pop(3)
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 0
0x794: PushEmpty(bool, object)
0x795: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x796: Call2 0x1377

0x797: Pop(1)
0x798: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x799: PushEmpty(bool, object)
0x79a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79b: Call2 0x13ab

0x79c: Pop(1)
0x79d: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79e: Stack[-1] = (bool) 1
0x79f: IF (Stack[-1] == 0) GOTO 0x7a5; Pop(1)

0x7a0: Push((int) 537571)
0x7a1: Push((int) 39419)
0x7a2: Push((int) 39418)
0x7a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7a4: Pop(3)
0x7a5: PushEmpty(bool)
0x7a6: Stack[-1] = (bool) 0
0x7a7: PushEmpty(bool, object)
0x7a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a9: Call2 0x1377

0x7aa: Pop(1)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ae: Call2 0x13b5

0x7af: Pop(1)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b1: Stack[-1] = (bool) 1
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b3: Push((int) 537593)
0x7b4: Push((int) 39442)
0x7b5: Push((int) 39441)
0x7b6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7b7: Pop(3)
0x7b8: PushEmpty(bool)
0x7b9: Stack[-1] = (bool) 0
0x7ba: PushEmpty(bool, object)
0x7bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bc: Call2 0x1377

0x7bd: Pop(1)
0x7be: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7bf: PushEmpty(bool, object)
0x7c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c1: Call2 0x13bf

0x7c2: Pop(1)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c4: Stack[-1] = (bool) 1
0x7c5: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c6: Push((int) 537603)
0x7c7: Push((int) 39452)
0x7c8: Push((int) 39451)
0x7c9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7ca: Pop(3)
0x7cb: PushEmpty(bool)
0x7cc: Stack[-1] = (bool) 0
0x7cd: PushEmpty(bool, object)
0x7ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cf: Call2 0x1377

0x7d0: Pop(1)
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d2: PushEmpty(bool, object)
0x7d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d4: Call2 0x13c9

0x7d5: Pop(1)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d7: Stack[-1] = (bool) 1
0x7d8: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d9: Push((int) 537621)
0x7da: Push((int) 39470)
0x7db: Push((int) 39469)
0x7dc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7dd: Pop(3)
0x7de: PushEmpty(bool)
0x7df: Stack[-1] = (bool) 0
0x7e0: PushEmpty(bool, object)
0x7e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e2: Call2 0x1377

0x7e3: Pop(1)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e5: PushEmpty(bool, object)
0x7e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e7: Call2 0x13d3

0x7e8: Pop(1)
0x7e9: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7ea: Stack[-1] = (bool) 1
0x7eb: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7ec: Push((int) 537633)
0x7ed: Push((int) 39482)
0x7ee: Push((int) 39481)
0x7ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7f0: Pop(3)
0x7f1: PushEmpty(bool)
0x7f2: Stack[-1] = (bool) 0
0x7f3: PushEmpty(bool, object)
0x7f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f5: Call2 0x1377

0x7f6: Pop(1)
0x7f7: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7f8: PushEmpty(bool, object)
0x7f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fa: Call2 0x13dd

0x7fb: Pop(1)
0x7fc: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fd: Stack[-1] = (bool) 1
0x7fe: IF (Stack[-1] == 0) GOTO 0x804; Pop(1)

0x7ff: Push((int) 537640)
0x800: Push((int) 39489)
0x801: Push((int) 39488)
0x802: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x803: Pop(3)
0x804: PushEmpty(bool)
0x805: Stack[-1] = (bool) 0
0x806: PushEmpty(bool, object)
0x807: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x808: Call2 0x1377

0x809: Pop(1)
0x80a: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x80b: PushEmpty(bool, object)
0x80c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80d: Call2 0x13e7

0x80e: Pop(1)
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: Stack[-1] = (bool) 1
0x811: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x812: Push((int) 537647)
0x813: Push((int) 39496)
0x814: Push((int) 39495)
0x815: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x816: Pop(3)
0x817: PushEmpty(bool)
0x818: Stack[-1] = (bool) 0
0x819: PushEmpty(bool)
0x81a: Stack[-1] = (bool) 0
0x81b: PushEmpty(bool, object)
0x81c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81d: Call2 0x1377

0x81e: Pop(1)
0x81f: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x820: PushEmpty(bool, object)
0x821: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x822: Call2 0x13fb

0x823: Pop(1)
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: Stack[-1] = (bool) 1
0x826: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x827: PushEmpty(bool, object)
0x828: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x829: Call2 0x1383

0x82a: Pop(1)
0x82b: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x82c: Stack[-1] = (bool) 1
0x82d: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82e: Push((int) 537659)
0x82f: Push((int) 39508)
0x830: Push((int) 39507)
0x831: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x832: Pop(3)
0x833: PushEmpty(bool)
0x834: Stack[-1] = (bool) 0
0x835: PushEmpty(bool, object)
0x836: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x837: Call2 0x1377

0x838: Pop(1)
0x839: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83a: PushEmpty(bool, object)
0x83b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83c: Call2 0x1383

0x83d: Pop(1)
0x83e: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83f: Stack[-1] = (bool) 1
0x840: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x841: Push((int) 537665)
0x842: Push((int) 39514)
0x843: Push((int) 39513)
0x844: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x845: Pop(3)
0x846: PushEmpty(bool)
0x847: Stack[-1] = (bool) 0
0x848: PushEmpty(bool, object)
0x849: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84a: Call2 0x1377

0x84b: Pop(1)
0x84c: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x84d: PushEmpty(bool, object)
0x84e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84f: Call2 0x1383

0x850: Pop(1)
0x851: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x852: Stack[-1] = (bool) 1
0x853: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x854: Push((int) 537671)
0x855: Push((int) 39520)
0x856: Push((int) 39519)
0x857: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x858: Pop(3)
0x859: PushEmpty(bool)
0x85a: Stack[-1] = (bool) 0
0x85b: PushEmpty(bool)
0x85c: Stack[-1] = (bool) 0
0x85d: PushEmpty(bool, object)
0x85e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85f: Call2 0x1377

0x860: Pop(1)
0x861: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x864: Call2 0x1383

0x865: Pop(1)
0x866: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x867: Stack[-1] = (bool) 1
0x868: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x869: PushEmpty(bool, object)
0x86a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86b: Call2 0x13f1

0x86c: Pop(1)
0x86d: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86e: Stack[-1] = (bool) 1
0x86f: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x870: Push((int) 537689)
0x871: Push((int) 39538)
0x872: Push((int) 39537)
0x873: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x874: Pop(3)
0x875: PushEmpty(bool)
0x876: Stack[-1] = (bool) 0
0x877: PushEmpty(bool)
0x878: Stack[-1] = (bool) 0
0x879: PushEmpty(bool, object)
0x87a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87b: Call2 0x1377

0x87c: Pop(1)
0x87d: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x87e: PushEmpty(bool, object)
0x87f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x880: Call2 0x1383

0x881: Pop(1)
0x882: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x883: Stack[-1] = (bool) 1
0x884: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x885: PushEmpty(bool, object)
0x886: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x887: Call2 0x13f1

0x888: Pop(1)
0x889: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x88a: Stack[-1] = (bool) 1
0x88b: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88c: Push((int) 537702)
0x88d: Push((int) 39551)
0x88e: Push((int) 39550)
0x88f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x890: Pop(3)
0x891: Push((int) 537721)
0x892: Push((int) -1)
0x893: Push((int) 39569)
0x894: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x895: Pop(3)
0x896: GOTO 0x899

0x897: Return(); Pop(0)

0x898: GOTO 0x711

0x899: PushEmpty(bool)
0x89a: Call2 0x14ea

0x89b: Pop(0)
0x89c: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x89d: @ lshWaitForAnimEnd()
0x89e: Pop(0)
0x89f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: GOTO 0x8a7

0x8a2: PushEmpty(string)
0x8a3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a4: Call2 0x1181

0x8a5: Pop(1)
0x8a6: GOTO 0x89d

0x8a7: GOTO 0x8b6

0x8a8: Push("all") // @poff=16
0x8a9: Push("idle") // @poff=24
0x8aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x8ab: Pop(2)
0x8ac: @ WaitForAnimEnd()
0x8ad: Pop(0)
0x8ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8af: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8b0: GOTO 0x8b6

0x8b1: Push("all") // @poff=16
0x8b2: Push("idle") // @poff=24
0x8b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b4: Pop(2)
0x8b5: GOTO 0x8ac

0x8b6: Return(); Pop(0)

0x8b7: PushEmpty()
0x8b8: PushEmpty(bool)
0x8b9: Call2 0x14ea

0x8ba: Pop(0)
0x8bb: Pop(1); Push((bool) Stack[-1] == 0)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8bd: Return(); Pop(0)

0x8be: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8c0: Return(); Pop(0)

0x8c1: PushEmpty(string, bool)
0x8c2: Stack[-3] = Stack[-2]
0x8c3: Push("") // @poff=13
0x8c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: Stack[-1] = (bool) 0
0x8c7: GOTO 0x8c9

0x8c8: Stack[-1] = (bool) 1
0x8c9: Call2 0x1188

0x8ca: Pop(2)
0x8cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8cc: Return(); Pop(0)

0x8cd: PushEmpty()
0x8ce: Push((int) 1)
0x8cf: IF (Stack[-1] == 0) GOTO 0x107a; Pop(1)

0x8d0: PushEmpty()
0x8d1: Call2 0x1199

0x8d2: Pop(0)
0x8d3: Push((int) 39354)
0x8d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d5: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d6: PushEmpty(object, object)
0x8d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d9: Call2 0x1372

0x8da: Pop(2)
0x8db: Push((int) 39353)
0x8dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)

0x8de: PushEmpty(string)
0x8df: Stack[-1] = "Neutral" // @poff=0
0x8e0: Call2 0x8b7

0x8e1: Pop(1)
0x8e2: Push((int) 537506)
0x8e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8e4: Pop(1)
0x8e5: @@@ ClearReplies(); Obj=0 // @poff=274
0x8e6: Pop(0)
0x8e7: Push((int) 537507)
0x8e8: Push((int) -1)
0x8e9: Push((int) 39354)
0x8ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8eb: Pop(3)
0x8ec: PushEmpty(bool)
0x8ed: Stack[-1] = (bool) 0
0x8ee: PushEmpty(bool)
0x8ef: Stack[-1] = (bool) 0
0x8f0: PushEmpty(bool, object)
0x8f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f2: Call2 0x1377

0x8f3: Pop(1)
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f5: PushEmpty(bool, object)
0x8f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f7: Call2 0x1383

0x8f8: Pop(1)
0x8f9: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8fa: Stack[-1] = (bool) 1
0x8fb: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fe: Call2 0x13f1

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x901: Stack[-1] = (bool) 1
0x902: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x903: Push((int) 537508)
0x904: Push((int) 39356)
0x905: Push((int) 39355)
0x906: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x907: Pop(3)
0x908: PushEmpty(bool)
0x909: Stack[-1] = (bool) 0
0x90a: PushEmpty(bool)
0x90b: Stack[-1] = (bool) 0
0x90c: PushEmpty(bool, object)
0x90d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90e: Call2 0x1377

0x90f: Pop(1)
0x910: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x911: PushEmpty(bool, object)
0x912: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x913: Call2 0x1383

0x914: Pop(1)
0x915: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x916: Stack[-1] = (bool) 1
0x917: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x918: PushEmpty(bool, object)
0x919: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91a: Call2 0x13fb

0x91b: Pop(1)
0x91c: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x91d: Stack[-1] = (bool) 1
0x91e: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x91f: Push((int) 537524)
0x920: Push((int) 39372)
0x921: Push((int) 39371)
0x922: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x923: Pop(3)
0x924: PushEmpty(bool)
0x925: Stack[-1] = (bool) 0
0x926: PushEmpty(bool, object)
0x927: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x928: Call2 0x1377

0x929: Pop(1)
0x92a: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92b: PushEmpty(bool, object)
0x92c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92d: Call2 0x138d

0x92e: Pop(1)
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: Stack[-1] = (bool) 1
0x931: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x932: Push((int) 537534)
0x933: Push((int) 39382)
0x934: Push((int) 39381)
0x935: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x936: Pop(3)
0x937: PushEmpty(bool)
0x938: Stack[-1] = (bool) 0
0x939: PushEmpty(bool, object)
0x93a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93b: Call2 0x1377

0x93c: Pop(1)
0x93d: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x93e: PushEmpty(bool, object)
0x93f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x940: Call2 0x1397

0x941: Pop(1)
0x942: IF (Stack[-1] == 0) GOTO 0x944; Pop(1)

0x943: Stack[-1] = (bool) 1
0x944: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x945: Push((int) 537549)
0x946: Push((int) 39397)
0x947: Push((int) 39396)
0x948: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x949: Pop(3)
0x94a: PushEmpty(bool)
0x94b: Stack[-1] = (bool) 0
0x94c: PushEmpty(bool, object)
0x94d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94e: Call2 0x1377

0x94f: Pop(1)
0x950: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x951: PushEmpty(bool, object)
0x952: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x953: Call2 0x13a1

0x954: Pop(1)
0x955: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x956: Stack[-1] = (bool) 1
0x957: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x958: Push((int) 537559)
0x959: Push((int) 39407)
0x95a: Push((int) 39406)
0x95b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x95c: Pop(3)
0x95d: PushEmpty(bool)
0x95e: Stack[-1] = (bool) 0
0x95f: PushEmpty(bool, object)
0x960: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x961: Call2 0x1377

0x962: Pop(1)
0x963: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x964: PushEmpty(bool, object)
0x965: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x966: Call2 0x13ab

0x967: Pop(1)
0x968: IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)

0x969: Stack[-1] = (bool) 1
0x96a: IF (Stack[-1] == 0) GOTO 0x970; Pop(1)

0x96b: Push((int) 537571)
0x96c: Push((int) 39419)
0x96d: Push((int) 39418)
0x96e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x96f: Pop(3)
0x970: PushEmpty(bool)
0x971: Stack[-1] = (bool) 0
0x972: PushEmpty(bool, object)
0x973: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x974: Call2 0x1377

0x975: Pop(1)
0x976: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x977: PushEmpty(bool, object)
0x978: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x979: Call2 0x13b5

0x97a: Pop(1)
0x97b: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97c: Stack[-1] = (bool) 1
0x97d: IF (Stack[-1] == 0) GOTO 0x983; Pop(1)

0x97e: Push((int) 537593)
0x97f: Push((int) 39442)
0x980: Push((int) 39441)
0x981: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x982: Pop(3)
0x983: PushEmpty(bool)
0x984: Stack[-1] = (bool) 0
0x985: PushEmpty(bool, object)
0x986: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x987: Call2 0x1377

0x988: Pop(1)
0x989: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98a: PushEmpty(bool, object)
0x98b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98c: Call2 0x13bf

0x98d: Pop(1)
0x98e: IF (Stack[-1] == 0) GOTO 0x990; Pop(1)

0x98f: Stack[-1] = (bool) 1
0x990: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x991: Push((int) 537603)
0x992: Push((int) 39452)
0x993: Push((int) 39451)
0x994: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x995: Pop(3)
0x996: PushEmpty(bool)
0x997: Stack[-1] = (bool) 0
0x998: PushEmpty(bool, object)
0x999: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99a: Call2 0x1377

0x99b: Pop(1)
0x99c: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x99d: PushEmpty(bool, object)
0x99e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x99f: Call2 0x13c9

0x9a0: Pop(1)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x9a2: Stack[-1] = (bool) 1
0x9a3: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a4: Push((int) 537621)
0x9a5: Push((int) 39470)
0x9a6: Push((int) 39469)
0x9a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9a8: Pop(3)
0x9a9: PushEmpty(bool)
0x9aa: Stack[-1] = (bool) 0
0x9ab: PushEmpty(bool, object)
0x9ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ad: Call2 0x1377

0x9ae: Pop(1)
0x9af: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9b0: PushEmpty(bool, object)
0x9b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b2: Call2 0x13d3

0x9b3: Pop(1)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9b5: Stack[-1] = (bool) 1
0x9b6: IF (Stack[-1] == 0) GOTO 0x9bc; Pop(1)

0x9b7: Push((int) 537633)
0x9b8: Push((int) 39482)
0x9b9: Push((int) 39481)
0x9ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9bb: Pop(3)
0x9bc: PushEmpty(bool)
0x9bd: Stack[-1] = (bool) 0
0x9be: PushEmpty(bool, object)
0x9bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c0: Call2 0x1377

0x9c1: Pop(1)
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c3: PushEmpty(bool, object)
0x9c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c5: Call2 0x13dd

0x9c6: Pop(1)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9c8: Stack[-1] = (bool) 1
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x9ca: Push((int) 537640)
0x9cb: Push((int) 39489)
0x9cc: Push((int) 39488)
0x9cd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9ce: Pop(3)
0x9cf: PushEmpty(bool)
0x9d0: Stack[-1] = (bool) 0
0x9d1: PushEmpty(bool, object)
0x9d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d3: Call2 0x1377

0x9d4: Pop(1)
0x9d5: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9d6: PushEmpty(bool, object)
0x9d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Call2 0x13e7

0x9d9: Pop(1)
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: Stack[-1] = (bool) 1
0x9dc: IF (Stack[-1] == 0) GOTO 0x9e2; Pop(1)

0x9dd: Push((int) 537647)
0x9de: Push((int) 39496)
0x9df: Push((int) 39495)
0x9e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9e1: Pop(3)
0x9e2: PushEmpty(bool)
0x9e3: Stack[-1] = (bool) 0
0x9e4: PushEmpty(bool)
0x9e5: Stack[-1] = (bool) 0
0x9e6: PushEmpty(bool, object)
0x9e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Call2 0x1377

0x9e9: Pop(1)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9eb: PushEmpty(bool, object)
0x9ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ed: Call2 0x13fb

0x9ee: Pop(1)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9f0: Stack[-1] = (bool) 1
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f2: PushEmpty(bool, object)
0x9f3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f4: Call2 0x1383

0x9f5: Pop(1)
0x9f6: IF (Stack[-1] == 0) GOTO 0x9f8; Pop(1)

0x9f7: Stack[-1] = (bool) 1
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9f9: Push((int) 537659)
0x9fa: Push((int) 39508)
0x9fb: Push((int) 39507)
0x9fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9fd: Pop(3)
0x9fe: PushEmpty(bool)
0x9ff: Stack[-1] = (bool) 0
0xa00: PushEmpty(bool, object)
0xa01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa02: Call2 0x1377

0xa03: Pop(1)
0xa04: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa05: PushEmpty(bool, object)
0xa06: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa07: Call2 0x1383

0xa08: Pop(1)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa0a: Stack[-1] = (bool) 1
0xa0b: IF (Stack[-1] == 0) GOTO 0xa11; Pop(1)

0xa0c: Push((int) 537665)
0xa0d: Push((int) 39514)
0xa0e: Push((int) 39513)
0xa0f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa10: Pop(3)
0xa11: PushEmpty(bool)
0xa12: Stack[-1] = (bool) 0
0xa13: PushEmpty(bool, object)
0xa14: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa15: Call2 0x1377

0xa16: Pop(1)
0xa17: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa18: PushEmpty(bool, object)
0xa19: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1a: Call2 0x1383

0xa1b: Pop(1)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1d: Stack[-1] = (bool) 1
0xa1e: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1f: Push((int) 537671)
0xa20: Push((int) 39520)
0xa21: Push((int) 39519)
0xa22: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa23: Pop(3)
0xa24: PushEmpty(bool)
0xa25: Stack[-1] = (bool) 0
0xa26: PushEmpty(bool)
0xa27: Stack[-1] = (bool) 0
0xa28: PushEmpty(bool, object)
0xa29: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2a: Call2 0x1377

0xa2b: Pop(1)
0xa2c: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa2d: PushEmpty(bool, object)
0xa2e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2f: Call2 0x1383

0xa30: Pop(1)
0xa31: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa32: Stack[-1] = (bool) 1
0xa33: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa34: PushEmpty(bool, object)
0xa35: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa36: Call2 0x13f1

0xa37: Pop(1)
0xa38: IF (Stack[-1] == 0) GOTO 0xa3a; Pop(1)

0xa39: Stack[-1] = (bool) 1
0xa3a: IF (Stack[-1] == 0) GOTO 0xa40; Pop(1)

0xa3b: Push((int) 537689)
0xa3c: Push((int) 39538)
0xa3d: Push((int) 39537)
0xa3e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa3f: Pop(3)
0xa40: PushEmpty(bool)
0xa41: Stack[-1] = (bool) 0
0xa42: PushEmpty(bool)
0xa43: Stack[-1] = (bool) 0
0xa44: PushEmpty(bool, object)
0xa45: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa46: Call2 0x1377

0xa47: Pop(1)
0xa48: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa49: PushEmpty(bool, object)
0xa4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4b: Call2 0x1383

0xa4c: Pop(1)
0xa4d: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4e: Stack[-1] = (bool) 1
0xa4f: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa50: PushEmpty(bool, object)
0xa51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa52: Call2 0x13f1

0xa53: Pop(1)
0xa54: IF (Stack[-1] == 0) GOTO 0xa56; Pop(1)

0xa55: Stack[-1] = (bool) 1
0xa56: IF (Stack[-1] == 0) GOTO 0xa5c; Pop(1)

0xa57: Push((int) 537702)
0xa58: Push((int) 39551)
0xa59: Push((int) 39550)
0xa5a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa5b: Pop(3)
0xa5c: Push((int) 537721)
0xa5d: Push((int) -1)
0xa5e: Push((int) 39569)
0xa5f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa60: Pop(3)
0xa61: Return(); Pop(0)

0xa62: Push((int) 39551)
0xa63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa64: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa65: PushEmpty(string)
0xa66: Stack[-1] = "Neutral" // @poff=0
0xa67: Call2 0x8b7

0xa68: Pop(1)
0xa69: Push((int) 537703)
0xa6a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa6b: Pop(1)
0xa6c: @@@ ClearReplies(); Obj=0 // @poff=274
0xa6d: Pop(0)
0xa6e: Push((int) 537704)
0xa6f: Push((int) 39553)
0xa70: Push((int) 39552)
0xa71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa72: Pop(3)
0xa73: Return(); Pop(0)

0xa74: Push((int) 39553)
0xa75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa77: PushEmpty(string)
0xa78: Stack[-1] = "Neutral" // @poff=0
0xa79: Call2 0x8b7

0xa7a: Pop(1)
0xa7b: Push((int) 537705)
0xa7c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa7d: Pop(1)
0xa7e: @@@ ClearReplies(); Obj=0 // @poff=274
0xa7f: Pop(0)
0xa80: Push((int) 537706)
0xa81: Push((int) 39555)
0xa82: Push((int) 39554)
0xa83: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa84: Pop(3)
0xa85: Push((int) 537717)
0xa86: Push((int) 39566)
0xa87: Push((int) 39565)
0xa88: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa89: Pop(3)
0xa8a: Return(); Pop(0)

0xa8b: Push((int) 39566)
0xa8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8d: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = "Neutral" // @poff=0
0xa90: Call2 0x8b7

0xa91: Pop(1)
0xa92: Push((int) 537718)
0xa93: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xa94: Pop(1)
0xa95: @@@ ClearReplies(); Obj=0 // @poff=274
0xa96: Pop(0)
0xa97: Push((int) 537719)
0xa98: Push((int) -1)
0xa99: Push((int) 39567)
0xa9a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xa9b: Pop(3)
0xa9c: Push((int) 537720)
0xa9d: Push((int) -1)
0xa9e: Push((int) 39568)
0xa9f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaa0: Pop(3)
0xaa1: Return(); Pop(0)

0xaa2: Push((int) 39555)
0xaa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xaa5: PushEmpty(string)
0xaa6: Stack[-1] = "Neutral" // @poff=0
0xaa7: Call2 0x8b7

0xaa8: Pop(1)
0xaa9: Push((int) 537707)
0xaaa: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xaab: Pop(1)
0xaac: @@@ ClearReplies(); Obj=0 // @poff=274
0xaad: Pop(0)
0xaae: Push((int) 537708)
0xaaf: Push((int) 39557)
0xab0: Push((int) 39556)
0xab1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xab2: Pop(3)
0xab3: Push((int) 537711)
0xab4: Push((int) 39560)
0xab5: Push((int) 39559)
0xab6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xab7: Pop(3)
0xab8: Return(); Pop(0)

0xab9: Push((int) 39560)
0xaba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xabc: PushEmpty(string)
0xabd: Stack[-1] = "Neutral" // @poff=0
0xabe: Call2 0x8b7

0xabf: Pop(1)
0xac0: Push((int) 537712)
0xac1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xac2: Pop(1)
0xac3: @@@ ClearReplies(); Obj=0 // @poff=274
0xac4: Pop(0)
0xac5: Push((int) 537713)
0xac6: Push((int) -1)
0xac7: Push((int) 39561)
0xac8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xac9: Pop(3)
0xaca: Push((int) 537714)
0xacb: Push((int) 39563)
0xacc: Push((int) 39562)
0xacd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xace: Pop(3)
0xacf: Return(); Pop(0)

0xad0: Push((int) 39563)
0xad1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad2: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xad3: PushEmpty(string)
0xad4: Stack[-1] = "Neutral" // @poff=0
0xad5: Call2 0x8b7

0xad6: Pop(1)
0xad7: Push((int) 537715)
0xad8: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xad9: Pop(1)
0xada: @@@ ClearReplies(); Obj=0 // @poff=274
0xadb: Pop(0)
0xadc: Push((int) 537716)
0xadd: Push((int) -1)
0xade: Push((int) 39564)
0xadf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xae0: Pop(3)
0xae1: Return(); Pop(0)

0xae2: Push((int) 39557)
0xae3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xae5: PushEmpty(string)
0xae6: Stack[-1] = "Neutral" // @poff=0
0xae7: Call2 0x8b7

0xae8: Pop(1)
0xae9: Push((int) 537709)
0xaea: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xaeb: Pop(1)
0xaec: @@@ ClearReplies(); Obj=0 // @poff=274
0xaed: Pop(0)
0xaee: Push((int) 537710)
0xaef: Push((int) -1)
0xaf0: Push((int) 39558)
0xaf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xaf2: Pop(3)
0xaf3: Return(); Pop(0)

0xaf4: Push((int) 39538)
0xaf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaf6: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xaf7: PushEmpty(string)
0xaf8: Stack[-1] = "Neutral" // @poff=0
0xaf9: Call2 0x8b7

0xafa: Pop(1)
0xafb: Push((int) 537690)
0xafc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xafd: Pop(1)
0xafe: @@@ ClearReplies(); Obj=0 // @poff=274
0xaff: Pop(0)
0xb00: Push((int) 537691)
0xb01: Push((int) 39540)
0xb02: Push((int) 39539)
0xb03: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb04: Pop(3)
0xb05: Push((int) 537701)
0xb06: Push((int) -1)
0xb07: Push((int) 39549)
0xb08: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb09: Pop(3)
0xb0a: Return(); Pop(0)

0xb0b: Push((int) 39540)
0xb0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb0e: PushEmpty(string)
0xb0f: Stack[-1] = "Neutral" // @poff=0
0xb10: Call2 0x8b7

0xb11: Pop(1)
0xb12: Push((int) 537692)
0xb13: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb14: Pop(1)
0xb15: @@@ ClearReplies(); Obj=0 // @poff=274
0xb16: Pop(0)
0xb17: Push((int) 537693)
0xb18: Push((int) 39542)
0xb19: Push((int) 39541)
0xb1a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb1b: Pop(3)
0xb1c: Push((int) 537696)
0xb1d: Push((int) 39545)
0xb1e: Push((int) 39544)
0xb1f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb20: Pop(3)
0xb21: Return(); Pop(0)

0xb22: Push((int) 39545)
0xb23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb25: PushEmpty(string)
0xb26: Stack[-1] = "Neutral" // @poff=0
0xb27: Call2 0x8b7

0xb28: Pop(1)
0xb29: Push((int) 537697)
0xb2a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb2b: Pop(1)
0xb2c: @@@ ClearReplies(); Obj=0 // @poff=274
0xb2d: Pop(0)
0xb2e: Push((int) 537698)
0xb2f: Push((int) 39547)
0xb30: Push((int) 39546)
0xb31: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb32: Pop(3)
0xb33: Return(); Pop(0)

0xb34: Push((int) 39547)
0xb35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb36: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb37: PushEmpty(string)
0xb38: Stack[-1] = "Neutral" // @poff=0
0xb39: Call2 0x8b7

0xb3a: Pop(1)
0xb3b: Push((int) 537699)
0xb3c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb3d: Pop(1)
0xb3e: @@@ ClearReplies(); Obj=0 // @poff=274
0xb3f: Pop(0)
0xb40: Push((int) 537700)
0xb41: Push((int) -1)
0xb42: Push((int) 39548)
0xb43: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb44: Pop(3)
0xb45: Return(); Pop(0)

0xb46: Push((int) 39542)
0xb47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb49: PushEmpty(string)
0xb4a: Stack[-1] = "Neutral" // @poff=0
0xb4b: Call2 0x8b7

0xb4c: Pop(1)
0xb4d: Push((int) 537694)
0xb4e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb4f: Pop(1)
0xb50: @@@ ClearReplies(); Obj=0 // @poff=274
0xb51: Pop(0)
0xb52: Push((int) 537695)
0xb53: Push((int) -1)
0xb54: Push((int) 39543)
0xb55: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb56: Pop(3)
0xb57: Return(); Pop(0)

0xb58: Push((int) 39520)
0xb59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5a: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb5b: PushEmpty(string)
0xb5c: Stack[-1] = "Neutral" // @poff=0
0xb5d: Call2 0x8b7

0xb5e: Pop(1)
0xb5f: Push((int) 537672)
0xb60: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb61: Pop(1)
0xb62: @@@ ClearReplies(); Obj=0 // @poff=274
0xb63: Pop(0)
0xb64: Push((int) 537673)
0xb65: Push((int) 39522)
0xb66: Push((int) 39521)
0xb67: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb68: Pop(3)
0xb69: Push((int) 537678)
0xb6a: Push((int) 39527)
0xb6b: Push((int) 39526)
0xb6c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb6d: Pop(3)
0xb6e: Return(); Pop(0)

0xb6f: Push((int) 39527)
0xb70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb71: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb72: PushEmpty(string)
0xb73: Stack[-1] = "Neutral" // @poff=0
0xb74: Call2 0x8b7

0xb75: Pop(1)
0xb76: Push((int) 537679)
0xb77: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb78: Pop(1)
0xb79: @@@ ClearReplies(); Obj=0 // @poff=274
0xb7a: Pop(0)
0xb7b: Push((int) 537680)
0xb7c: Push((int) 39529)
0xb7d: Push((int) 39528)
0xb7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb7f: Pop(3)
0xb80: Return(); Pop(0)

0xb81: Push((int) 39529)
0xb82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb84: PushEmpty(string)
0xb85: Stack[-1] = "Neutral" // @poff=0
0xb86: Call2 0x8b7

0xb87: Pop(1)
0xb88: Push((int) 537681)
0xb89: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xb8a: Pop(1)
0xb8b: @@@ ClearReplies(); Obj=0 // @poff=274
0xb8c: Pop(0)
0xb8d: Push((int) 537682)
0xb8e: Push((int) 39531)
0xb8f: Push((int) 39530)
0xb90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb91: Pop(3)
0xb92: Push((int) 537688)
0xb93: Push((int) -1)
0xb94: Push((int) 39536)
0xb95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xb96: Pop(3)
0xb97: Return(); Pop(0)

0xb98: Push((int) 39531)
0xb99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9a: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xb9b: PushEmpty(string)
0xb9c: Stack[-1] = "Neutral" // @poff=0
0xb9d: Call2 0x8b7

0xb9e: Pop(1)
0xb9f: Push((int) 537683)
0xba0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xba1: Pop(1)
0xba2: @@@ ClearReplies(); Obj=0 // @poff=274
0xba3: Pop(0)
0xba4: Push((int) 537684)
0xba5: Push((int) 39533)
0xba6: Push((int) 39532)
0xba7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xba8: Pop(3)
0xba9: Push((int) 537687)
0xbaa: Push((int) -1)
0xbab: Push((int) 39535)
0xbac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbad: Pop(3)
0xbae: Return(); Pop(0)

0xbaf: Push((int) 39533)
0xbb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbb2: PushEmpty(string)
0xbb3: Stack[-1] = "Neutral" // @poff=0
0xbb4: Call2 0x8b7

0xbb5: Pop(1)
0xbb6: Push((int) 537685)
0xbb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbb8: Pop(1)
0xbb9: @@@ ClearReplies(); Obj=0 // @poff=274
0xbba: Pop(0)
0xbbb: Push((int) 537686)
0xbbc: Push((int) -1)
0xbbd: Push((int) 39534)
0xbbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbbf: Pop(3)
0xbc0: Return(); Pop(0)

0xbc1: Push((int) 39522)
0xbc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc3: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbc4: PushEmpty(string)
0xbc5: Stack[-1] = "Neutral" // @poff=0
0xbc6: Call2 0x8b7

0xbc7: Pop(1)
0xbc8: Push((int) 537674)
0xbc9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbca: Pop(1)
0xbcb: @@@ ClearReplies(); Obj=0 // @poff=274
0xbcc: Pop(0)
0xbcd: Push((int) 537675)
0xbce: Push((int) 39524)
0xbcf: Push((int) 39523)
0xbd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbd1: Pop(3)
0xbd2: Return(); Pop(0)

0xbd3: Push((int) 39524)
0xbd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd5: IF (Stack[-1] == 0) GOTO 0xbe5; Pop(1)

0xbd6: PushEmpty(string)
0xbd7: Stack[-1] = "Neutral" // @poff=0
0xbd8: Call2 0x8b7

0xbd9: Pop(1)
0xbda: Push((int) 537676)
0xbdb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbdc: Pop(1)
0xbdd: @@@ ClearReplies(); Obj=0 // @poff=274
0xbde: Pop(0)
0xbdf: Push((int) 537677)
0xbe0: Push((int) -1)
0xbe1: Push((int) 39525)
0xbe2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbe3: Pop(3)
0xbe4: Return(); Pop(0)

0xbe5: Push((int) 39514)
0xbe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe7: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbe8: PushEmpty(string)
0xbe9: Stack[-1] = "Neutral" // @poff=0
0xbea: Call2 0x8b7

0xbeb: Pop(1)
0xbec: Push((int) 537666)
0xbed: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xbee: Pop(1)
0xbef: @@@ ClearReplies(); Obj=0 // @poff=274
0xbf0: Pop(0)
0xbf1: Push((int) 537667)
0xbf2: Push((int) 39516)
0xbf3: Push((int) 39515)
0xbf4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbf5: Pop(3)
0xbf6: Push((int) 537670)
0xbf7: Push((int) -1)
0xbf8: Push((int) 39518)
0xbf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xbfa: Pop(3)
0xbfb: Return(); Pop(0)

0xbfc: Push((int) 39516)
0xbfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfe: IF (Stack[-1] == 0) GOTO 0xc0e; Pop(1)

0xbff: PushEmpty(string)
0xc00: Stack[-1] = "Neutral" // @poff=0
0xc01: Call2 0x8b7

0xc02: Pop(1)
0xc03: Push((int) 537668)
0xc04: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc05: Pop(1)
0xc06: @@@ ClearReplies(); Obj=0 // @poff=274
0xc07: Pop(0)
0xc08: Push((int) 537669)
0xc09: Push((int) -1)
0xc0a: Push((int) 39517)
0xc0b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc0c: Pop(3)
0xc0d: Return(); Pop(0)

0xc0e: Push((int) 39508)
0xc0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc10: IF (Stack[-1] == 0) GOTO 0xc25; Pop(1)

0xc11: PushEmpty(string)
0xc12: Stack[-1] = "Neutral" // @poff=0
0xc13: Call2 0x8b7

0xc14: Pop(1)
0xc15: Push((int) 537660)
0xc16: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc17: Pop(1)
0xc18: @@@ ClearReplies(); Obj=0 // @poff=274
0xc19: Pop(0)
0xc1a: Push((int) 537661)
0xc1b: Push((int) 39510)
0xc1c: Push((int) 39509)
0xc1d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc1e: Pop(3)
0xc1f: Push((int) 537664)
0xc20: Push((int) -1)
0xc21: Push((int) 39512)
0xc22: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc23: Pop(3)
0xc24: Return(); Pop(0)

0xc25: Push((int) 39510)
0xc26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc27: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc28: PushEmpty(string)
0xc29: Stack[-1] = "Neutral" // @poff=0
0xc2a: Call2 0x8b7

0xc2b: Pop(1)
0xc2c: Push((int) 537662)
0xc2d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc2e: Pop(1)
0xc2f: @@@ ClearReplies(); Obj=0 // @poff=274
0xc30: Pop(0)
0xc31: Push((int) 537663)
0xc32: Push((int) -1)
0xc33: Push((int) 39511)
0xc34: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc35: Pop(3)
0xc36: Return(); Pop(0)

0xc37: Push((int) 39496)
0xc38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc39: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc3a: PushEmpty(string)
0xc3b: Stack[-1] = "Neutral" // @poff=0
0xc3c: Call2 0x8b7

0xc3d: Pop(1)
0xc3e: Push((int) 537648)
0xc3f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc40: Pop(1)
0xc41: @@@ ClearReplies(); Obj=0 // @poff=274
0xc42: Pop(0)
0xc43: Push((int) 537649)
0xc44: Push((int) 39498)
0xc45: Push((int) 39497)
0xc46: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc47: Pop(3)
0xc48: Push((int) 537658)
0xc49: Push((int) -1)
0xc4a: Push((int) 39506)
0xc4b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc4c: Pop(3)
0xc4d: Return(); Pop(0)

0xc4e: Push((int) 39498)
0xc4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc50: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc51: PushEmpty(string)
0xc52: Stack[-1] = "Neutral" // @poff=0
0xc53: Call2 0x8b7

0xc54: Pop(1)
0xc55: Push((int) 537650)
0xc56: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc57: Pop(1)
0xc58: @@@ ClearReplies(); Obj=0 // @poff=274
0xc59: Pop(0)
0xc5a: Push((int) 537651)
0xc5b: Push((int) 39500)
0xc5c: Push((int) 39499)
0xc5d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc5e: Pop(3)
0xc5f: Push((int) 537657)
0xc60: Push((int) -1)
0xc61: Push((int) 39505)
0xc62: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc63: Pop(3)
0xc64: Return(); Pop(0)

0xc65: Push((int) 39500)
0xc66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc67: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc68: PushEmpty(string)
0xc69: Stack[-1] = "Neutral" // @poff=0
0xc6a: Call2 0x8b7

0xc6b: Pop(1)
0xc6c: Push((int) 537652)
0xc6d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc6e: Pop(1)
0xc6f: @@@ ClearReplies(); Obj=0 // @poff=274
0xc70: Pop(0)
0xc71: Push((int) 537653)
0xc72: Push((int) -1)
0xc73: Push((int) 39501)
0xc74: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc75: Pop(3)
0xc76: Push((int) 537654)
0xc77: Push((int) 39503)
0xc78: Push((int) 39502)
0xc79: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc7a: Pop(3)
0xc7b: Return(); Pop(0)

0xc7c: Push((int) 39503)
0xc7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7e: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc7f: PushEmpty(string)
0xc80: Stack[-1] = "Neutral" // @poff=0
0xc81: Call2 0x8b7

0xc82: Pop(1)
0xc83: Push((int) 537655)
0xc84: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc85: Pop(1)
0xc86: @@@ ClearReplies(); Obj=0 // @poff=274
0xc87: Pop(0)
0xc88: Push((int) 537656)
0xc89: Push((int) -1)
0xc8a: Push((int) 39504)
0xc8b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc8c: Pop(3)
0xc8d: Return(); Pop(0)

0xc8e: Push((int) 39489)
0xc8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc90: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xc91: PushEmpty(string)
0xc92: Stack[-1] = "Neutral" // @poff=0
0xc93: Call2 0x8b7

0xc94: Pop(1)
0xc95: Push((int) 537641)
0xc96: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xc97: Pop(1)
0xc98: @@@ ClearReplies(); Obj=0 // @poff=274
0xc99: Pop(0)
0xc9a: Push((int) 537642)
0xc9b: Push((int) 39491)
0xc9c: Push((int) 39490)
0xc9d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xc9e: Pop(3)
0xc9f: Push((int) 537646)
0xca0: Push((int) -1)
0xca1: Push((int) 39494)
0xca2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xca3: Pop(3)
0xca4: Return(); Pop(0)

0xca5: Push((int) 39491)
0xca6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca7: IF (Stack[-1] == 0) GOTO 0xcbc; Pop(1)

0xca8: PushEmpty(string)
0xca9: Stack[-1] = "Neutral" // @poff=0
0xcaa: Call2 0x8b7

0xcab: Pop(1)
0xcac: Push((int) 537643)
0xcad: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcae: Pop(1)
0xcaf: @@@ ClearReplies(); Obj=0 // @poff=274
0xcb0: Pop(0)
0xcb1: Push((int) 537644)
0xcb2: Push((int) -1)
0xcb3: Push((int) 39492)
0xcb4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcb5: Pop(3)
0xcb6: Push((int) 537645)
0xcb7: Push((int) -1)
0xcb8: Push((int) 39493)
0xcb9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcba: Pop(3)
0xcbb: Return(); Pop(0)

0xcbc: Push((int) 39482)
0xcbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbe: IF (Stack[-1] == 0) GOTO 0xcd3; Pop(1)

0xcbf: PushEmpty(string)
0xcc0: Stack[-1] = "Neutral" // @poff=0
0xcc1: Call2 0x8b7

0xcc2: Pop(1)
0xcc3: Push((int) 537634)
0xcc4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcc5: Pop(1)
0xcc6: @@@ ClearReplies(); Obj=0 // @poff=274
0xcc7: Pop(0)
0xcc8: Push((int) 537635)
0xcc9: Push((int) 39484)
0xcca: Push((int) 39483)
0xccb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xccc: Pop(3)
0xccd: Push((int) 537639)
0xcce: Push((int) -1)
0xccf: Push((int) 39487)
0xcd0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcd1: Pop(3)
0xcd2: Return(); Pop(0)

0xcd3: Push((int) 39484)
0xcd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd5: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xcd6: PushEmpty(string)
0xcd7: Stack[-1] = "Neutral" // @poff=0
0xcd8: Call2 0x8b7

0xcd9: Pop(1)
0xcda: Push((int) 537636)
0xcdb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcdc: Pop(1)
0xcdd: @@@ ClearReplies(); Obj=0 // @poff=274
0xcde: Pop(0)
0xcdf: Push((int) 537637)
0xce0: Push((int) -1)
0xce1: Push((int) 39485)
0xce2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xce3: Pop(3)
0xce4: Push((int) 537638)
0xce5: Push((int) -1)
0xce6: Push((int) 39486)
0xce7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xce8: Pop(3)
0xce9: Return(); Pop(0)

0xcea: Push((int) 39470)
0xceb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcec: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xced: PushEmpty(string)
0xcee: Stack[-1] = "Neutral" // @poff=0
0xcef: Call2 0x8b7

0xcf0: Pop(1)
0xcf1: Push((int) 537622)
0xcf2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xcf3: Pop(1)
0xcf4: @@@ ClearReplies(); Obj=0 // @poff=274
0xcf5: Pop(0)
0xcf6: Push((int) 537623)
0xcf7: Push((int) 39472)
0xcf8: Push((int) 39471)
0xcf9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcfa: Pop(3)
0xcfb: Push((int) 537632)
0xcfc: Push((int) -1)
0xcfd: Push((int) 39480)
0xcfe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xcff: Pop(3)
0xd00: Return(); Pop(0)

0xd01: Push((int) 39472)
0xd02: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd03: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xd04: PushEmpty(string)
0xd05: Stack[-1] = "Neutral" // @poff=0
0xd06: Call2 0x8b7

0xd07: Pop(1)
0xd08: Push((int) 537624)
0xd09: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd0a: Pop(1)
0xd0b: @@@ ClearReplies(); Obj=0 // @poff=274
0xd0c: Pop(0)
0xd0d: Push((int) 537625)
0xd0e: Push((int) 39474)
0xd0f: Push((int) 39473)
0xd10: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd11: Pop(3)
0xd12: Return(); Pop(0)

0xd13: Push((int) 39474)
0xd14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd16: PushEmpty(string)
0xd17: Stack[-1] = "Neutral" // @poff=0
0xd18: Call2 0x8b7

0xd19: Pop(1)
0xd1a: Push((int) 537626)
0xd1b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd1c: Pop(1)
0xd1d: @@@ ClearReplies(); Obj=0 // @poff=274
0xd1e: Pop(0)
0xd1f: Push((int) 537627)
0xd20: Push((int) -1)
0xd21: Push((int) 39475)
0xd22: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd23: Pop(3)
0xd24: Push((int) 537628)
0xd25: Push((int) 39477)
0xd26: Push((int) 39476)
0xd27: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd28: Pop(3)
0xd29: Return(); Pop(0)

0xd2a: Push((int) 39477)
0xd2b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd2d: PushEmpty(string)
0xd2e: Stack[-1] = "Neutral" // @poff=0
0xd2f: Call2 0x8b7

0xd30: Pop(1)
0xd31: Push((int) 537629)
0xd32: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd33: Pop(1)
0xd34: @@@ ClearReplies(); Obj=0 // @poff=274
0xd35: Pop(0)
0xd36: Push((int) 537630)
0xd37: Push((int) -1)
0xd38: Push((int) 39478)
0xd39: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd3a: Pop(3)
0xd3b: Push((int) 537631)
0xd3c: Push((int) -1)
0xd3d: Push((int) 39479)
0xd3e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd3f: Pop(3)
0xd40: Return(); Pop(0)

0xd41: Push((int) 39452)
0xd42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd43: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd44: PushEmpty(string)
0xd45: Stack[-1] = "Neutral" // @poff=0
0xd46: Call2 0x8b7

0xd47: Pop(1)
0xd48: Push((int) 537604)
0xd49: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd4a: Pop(1)
0xd4b: @@@ ClearReplies(); Obj=0 // @poff=274
0xd4c: Pop(0)
0xd4d: Push((int) 537605)
0xd4e: Push((int) 39454)
0xd4f: Push((int) 39453)
0xd50: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd51: Pop(3)
0xd52: Push((int) 537612)
0xd53: Push((int) 39461)
0xd54: Push((int) 39460)
0xd55: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd56: Pop(3)
0xd57: Return(); Pop(0)

0xd58: Push((int) 39461)
0xd59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5a: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd5b: PushEmpty(string)
0xd5c: Stack[-1] = "Neutral" // @poff=0
0xd5d: Call2 0x8b7

0xd5e: Pop(1)
0xd5f: Push((int) 537613)
0xd60: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd61: Pop(1)
0xd62: @@@ ClearReplies(); Obj=0 // @poff=274
0xd63: Pop(0)
0xd64: Push((int) 537614)
0xd65: Push((int) 39463)
0xd66: Push((int) 39462)
0xd67: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd68: Pop(3)
0xd69: Push((int) 537620)
0xd6a: Push((int) -1)
0xd6b: Push((int) 39468)
0xd6c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd6d: Pop(3)
0xd6e: Return(); Pop(0)

0xd6f: Push((int) 39463)
0xd70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd71: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd72: PushEmpty(string)
0xd73: Stack[-1] = "Neutral" // @poff=0
0xd74: Call2 0x8b7

0xd75: Pop(1)
0xd76: Push((int) 537615)
0xd77: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd78: Pop(1)
0xd79: @@@ ClearReplies(); Obj=0 // @poff=274
0xd7a: Pop(0)
0xd7b: Push((int) 537616)
0xd7c: Push((int) 39465)
0xd7d: Push((int) 39464)
0xd7e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd7f: Pop(3)
0xd80: Return(); Pop(0)

0xd81: Push((int) 39465)
0xd82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd83: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd84: PushEmpty(string)
0xd85: Stack[-1] = "Neutral" // @poff=0
0xd86: Call2 0x8b7

0xd87: Pop(1)
0xd88: Push((int) 537617)
0xd89: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xd8a: Pop(1)
0xd8b: @@@ ClearReplies(); Obj=0 // @poff=274
0xd8c: Pop(0)
0xd8d: Push((int) 537618)
0xd8e: Push((int) -1)
0xd8f: Push((int) 39466)
0xd90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd91: Pop(3)
0xd92: Push((int) 537619)
0xd93: Push((int) -1)
0xd94: Push((int) 39467)
0xd95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xd96: Pop(3)
0xd97: Return(); Pop(0)

0xd98: Push((int) 39454)
0xd99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9a: IF (Stack[-1] == 0) GOTO 0xdaf; Pop(1)

0xd9b: PushEmpty(string)
0xd9c: Stack[-1] = "Neutral" // @poff=0
0xd9d: Call2 0x8b7

0xd9e: Pop(1)
0xd9f: Push((int) 537606)
0xda0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xda1: Pop(1)
0xda2: @@@ ClearReplies(); Obj=0 // @poff=274
0xda3: Pop(0)
0xda4: Push((int) 537607)
0xda5: Push((int) 39456)
0xda6: Push((int) 39455)
0xda7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xda8: Pop(3)
0xda9: Push((int) 537611)
0xdaa: Push((int) -1)
0xdab: Push((int) 39459)
0xdac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdad: Pop(3)
0xdae: Return(); Pop(0)

0xdaf: Push((int) 39456)
0xdb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdb2: PushEmpty(string)
0xdb3: Stack[-1] = "Neutral" // @poff=0
0xdb4: Call2 0x8b7

0xdb5: Pop(1)
0xdb6: Push((int) 537608)
0xdb7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdb8: Pop(1)
0xdb9: @@@ ClearReplies(); Obj=0 // @poff=274
0xdba: Pop(0)
0xdbb: Push((int) 537609)
0xdbc: Push((int) -1)
0xdbd: Push((int) 39457)
0xdbe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdbf: Pop(3)
0xdc0: Push((int) 537610)
0xdc1: Push((int) -1)
0xdc2: Push((int) 39458)
0xdc3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdc4: Pop(3)
0xdc5: Return(); Pop(0)

0xdc6: Push((int) 39442)
0xdc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc8: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xdc9: PushEmpty(string)
0xdca: Stack[-1] = "Neutral" // @poff=0
0xdcb: Call2 0x8b7

0xdcc: Pop(1)
0xdcd: Push((int) 537594)
0xdce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdcf: Pop(1)
0xdd0: @@@ ClearReplies(); Obj=0 // @poff=274
0xdd1: Pop(0)
0xdd2: Push((int) 537595)
0xdd3: Push((int) 39444)
0xdd4: Push((int) 39443)
0xdd5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdd6: Pop(3)
0xdd7: Push((int) 537602)
0xdd8: Push((int) -1)
0xdd9: Push((int) 39450)
0xdda: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xddb: Pop(3)
0xddc: Return(); Pop(0)

0xddd: Push((int) 39444)
0xdde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xddf: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xde0: PushEmpty(string)
0xde1: Stack[-1] = "Neutral" // @poff=0
0xde2: Call2 0x8b7

0xde3: Pop(1)
0xde4: Push((int) 537596)
0xde5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xde6: Pop(1)
0xde7: @@@ ClearReplies(); Obj=0 // @poff=274
0xde8: Pop(0)
0xde9: Push((int) 537597)
0xdea: Push((int) 39446)
0xdeb: Push((int) 39445)
0xdec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xded: Pop(3)
0xdee: Push((int) 537601)
0xdef: Push((int) -1)
0xdf0: Push((int) 39449)
0xdf1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xdf2: Pop(3)
0xdf3: Return(); Pop(0)

0xdf4: Push((int) 39446)
0xdf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf6: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdf7: PushEmpty(string)
0xdf8: Stack[-1] = "Neutral" // @poff=0
0xdf9: Call2 0x8b7

0xdfa: Pop(1)
0xdfb: Push((int) 537598)
0xdfc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xdfd: Pop(1)
0xdfe: @@@ ClearReplies(); Obj=0 // @poff=274
0xdff: Pop(0)
0xe00: Push((int) 537599)
0xe01: Push((int) -1)
0xe02: Push((int) 39447)
0xe03: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe04: Pop(3)
0xe05: Push((int) 537600)
0xe06: Push((int) -1)
0xe07: Push((int) 39448)
0xe08: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Push((int) 39419)
0xe0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe2c; Pop(1)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Neutral" // @poff=0
0xe10: Call2 0x8b7

0xe11: Pop(1)
0xe12: Push((int) 537572)
0xe13: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe14: Pop(1)
0xe15: @@@ ClearReplies(); Obj=0 // @poff=274
0xe16: Pop(0)
0xe17: Push((int) 537573)
0xe18: Push((int) 39421)
0xe19: Push((int) 39420)
0xe1a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe1b: Pop(3)
0xe1c: Push((int) 537578)
0xe1d: Push((int) 39426)
0xe1e: Push((int) 39425)
0xe1f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe20: Pop(3)
0xe21: Push((int) 537588)
0xe22: Push((int) 39437)
0xe23: Push((int) 39436)
0xe24: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe25: Pop(3)
0xe26: Push((int) 537592)
0xe27: Push((int) -1)
0xe28: Push((int) 39440)
0xe29: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe2a: Pop(3)
0xe2b: Return(); Pop(0)

0xe2c: Push((int) 39437)
0xe2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2e: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe2f: PushEmpty(string)
0xe30: Stack[-1] = "Neutral" // @poff=0
0xe31: Call2 0x8b7

0xe32: Pop(1)
0xe33: Push((int) 537589)
0xe34: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe35: Pop(1)
0xe36: @@@ ClearReplies(); Obj=0 // @poff=274
0xe37: Pop(0)
0xe38: Push((int) 537590)
0xe39: Push((int) -1)
0xe3a: Push((int) 39438)
0xe3b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe3c: Pop(3)
0xe3d: Push((int) 537591)
0xe3e: Push((int) -1)
0xe3f: Push((int) 39439)
0xe40: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe41: Pop(3)
0xe42: Return(); Pop(0)

0xe43: Push((int) 39426)
0xe44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe45: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe46: PushEmpty(string)
0xe47: Stack[-1] = "Neutral" // @poff=0
0xe48: Call2 0x8b7

0xe49: Pop(1)
0xe4a: Push((int) 537579)
0xe4b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe4c: Pop(1)
0xe4d: @@@ ClearReplies(); Obj=0 // @poff=274
0xe4e: Pop(0)
0xe4f: Push((int) 537580)
0xe50: Push((int) 39421)
0xe51: Push((int) 39427)
0xe52: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe53: Pop(3)
0xe54: Push((int) 537581)
0xe55: Push((int) 39430)
0xe56: Push((int) 39429)
0xe57: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe58: Pop(3)
0xe59: Return(); Pop(0)

0xe5a: Push((int) 39430)
0xe5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5c: IF (Stack[-1] == 0) GOTO 0xe71; Pop(1)

0xe5d: PushEmpty(string)
0xe5e: Stack[-1] = "Neutral" // @poff=0
0xe5f: Call2 0x8b7

0xe60: Pop(1)
0xe61: Push((int) 537582)
0xe62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe63: Pop(1)
0xe64: @@@ ClearReplies(); Obj=0 // @poff=274
0xe65: Pop(0)
0xe66: Push((int) 537583)
0xe67: Push((int) 39432)
0xe68: Push((int) 39431)
0xe69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe6a: Pop(3)
0xe6b: Push((int) 537587)
0xe6c: Push((int) -1)
0xe6d: Push((int) 39435)
0xe6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe6f: Pop(3)
0xe70: Return(); Pop(0)

0xe71: Push((int) 39432)
0xe72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe73: IF (Stack[-1] == 0) GOTO 0xe88; Pop(1)

0xe74: PushEmpty(string)
0xe75: Stack[-1] = "Neutral" // @poff=0
0xe76: Call2 0x8b7

0xe77: Pop(1)
0xe78: Push((int) 537584)
0xe79: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe7a: Pop(1)
0xe7b: @@@ ClearReplies(); Obj=0 // @poff=274
0xe7c: Pop(0)
0xe7d: Push((int) 537585)
0xe7e: Push((int) -1)
0xe7f: Push((int) 39433)
0xe80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe81: Pop(3)
0xe82: Push((int) 537586)
0xe83: Push((int) -1)
0xe84: Push((int) 39434)
0xe85: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe86: Pop(3)
0xe87: Return(); Pop(0)

0xe88: Push((int) 39421)
0xe89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8a: IF (Stack[-1] == 0) GOTO 0xe9a; Pop(1)

0xe8b: PushEmpty(string)
0xe8c: Stack[-1] = "Neutral" // @poff=0
0xe8d: Call2 0x8b7

0xe8e: Pop(1)
0xe8f: Push((int) 537574)
0xe90: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xe91: Pop(1)
0xe92: @@@ ClearReplies(); Obj=0 // @poff=274
0xe93: Pop(0)
0xe94: Push((int) 537575)
0xe95: Push((int) 39423)
0xe96: Push((int) 39422)
0xe97: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xe98: Pop(3)
0xe99: Return(); Pop(0)

0xe9a: Push((int) 39423)
0xe9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9c: IF (Stack[-1] == 0) GOTO 0xeac; Pop(1)

0xe9d: PushEmpty(string)
0xe9e: Stack[-1] = "Neutral" // @poff=0
0xe9f: Call2 0x8b7

0xea0: Pop(1)
0xea1: Push((int) 537576)
0xea2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xea3: Pop(1)
0xea4: @@@ ClearReplies(); Obj=0 // @poff=274
0xea5: Pop(0)
0xea6: Push((int) 537577)
0xea7: Push((int) -1)
0xea8: Push((int) 39424)
0xea9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xeaa: Pop(3)
0xeab: Return(); Pop(0)

0xeac: Push((int) 39407)
0xead: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeae: IF (Stack[-1] == 0) GOTO 0xec3; Pop(1)

0xeaf: PushEmpty(string)
0xeb0: Stack[-1] = "Neutral" // @poff=0
0xeb1: Call2 0x8b7

0xeb2: Pop(1)
0xeb3: Push((int) 537560)
0xeb4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xeb5: Pop(1)
0xeb6: @@@ ClearReplies(); Obj=0 // @poff=274
0xeb7: Pop(0)
0xeb8: Push((int) 537561)
0xeb9: Push((int) 39409)
0xeba: Push((int) 39408)
0xebb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xebc: Pop(3)
0xebd: Push((int) 537570)
0xebe: Push((int) -1)
0xebf: Push((int) 39417)
0xec0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xec1: Pop(3)
0xec2: Return(); Pop(0)

0xec3: Push((int) 39409)
0xec4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec5: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xec6: PushEmpty(string)
0xec7: Stack[-1] = "Neutral" // @poff=0
0xec8: Call2 0x8b7

0xec9: Pop(1)
0xeca: Push((int) 537562)
0xecb: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xecc: Pop(1)
0xecd: @@@ ClearReplies(); Obj=0 // @poff=274
0xece: Pop(0)
0xecf: Push((int) 537563)
0xed0: Push((int) 39411)
0xed1: Push((int) 39410)
0xed2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xed3: Pop(3)
0xed4: Push((int) 537567)
0xed5: Push((int) 39415)
0xed6: Push((int) 39414)
0xed7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xed8: Pop(3)
0xed9: Return(); Pop(0)

0xeda: Push((int) 39415)
0xedb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xedc: IF (Stack[-1] == 0) GOTO 0xeec; Pop(1)

0xedd: PushEmpty(string)
0xede: Stack[-1] = "Neutral" // @poff=0
0xedf: Call2 0x8b7

0xee0: Pop(1)
0xee1: Push((int) 537568)
0xee2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xee3: Pop(1)
0xee4: @@@ ClearReplies(); Obj=0 // @poff=274
0xee5: Pop(0)
0xee6: Push((int) 537569)
0xee7: Push((int) -1)
0xee8: Push((int) 39416)
0xee9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xeea: Pop(3)
0xeeb: Return(); Pop(0)

0xeec: Push((int) 39411)
0xeed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeee: IF (Stack[-1] == 0) GOTO 0xf03; Pop(1)

0xeef: PushEmpty(string)
0xef0: Stack[-1] = "Neutral" // @poff=0
0xef1: Call2 0x8b7

0xef2: Pop(1)
0xef3: Push((int) 537564)
0xef4: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xef5: Pop(1)
0xef6: @@@ ClearReplies(); Obj=0 // @poff=274
0xef7: Pop(0)
0xef8: Push((int) 537565)
0xef9: Push((int) -1)
0xefa: Push((int) 39412)
0xefb: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xefc: Pop(3)
0xefd: Push((int) 537566)
0xefe: Push((int) -1)
0xeff: Push((int) 39413)
0xf00: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf01: Pop(3)
0xf02: Return(); Pop(0)

0xf03: Push((int) 39397)
0xf04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf05: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf06: PushEmpty(string)
0xf07: Stack[-1] = "Neutral" // @poff=0
0xf08: Call2 0x8b7

0xf09: Pop(1)
0xf0a: Push((int) 537550)
0xf0b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf0c: Pop(1)
0xf0d: @@@ ClearReplies(); Obj=0 // @poff=274
0xf0e: Pop(0)
0xf0f: Push((int) 537551)
0xf10: Push((int) 39399)
0xf11: Push((int) 39398)
0xf12: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf13: Pop(3)
0xf14: Push((int) 537558)
0xf15: Push((int) -1)
0xf16: Push((int) 39405)
0xf17: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf18: Pop(3)
0xf19: Return(); Pop(0)

0xf1a: Push((int) 39399)
0xf1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1c: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf1d: PushEmpty(string)
0xf1e: Stack[-1] = "Neutral" // @poff=0
0xf1f: Call2 0x8b7

0xf20: Pop(1)
0xf21: Push((int) 537552)
0xf22: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf23: Pop(1)
0xf24: @@@ ClearReplies(); Obj=0 // @poff=274
0xf25: Pop(0)
0xf26: Push((int) 537553)
0xf27: Push((int) 39401)
0xf28: Push((int) 39400)
0xf29: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf2a: Pop(3)
0xf2b: Push((int) 537557)
0xf2c: Push((int) -1)
0xf2d: Push((int) 39404)
0xf2e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf2f: Pop(3)
0xf30: Return(); Pop(0)

0xf31: Push((int) 39401)
0xf32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf33: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf34: PushEmpty(string)
0xf35: Stack[-1] = "Neutral" // @poff=0
0xf36: Call2 0x8b7

0xf37: Pop(1)
0xf38: Push((int) 537554)
0xf39: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf3a: Pop(1)
0xf3b: @@@ ClearReplies(); Obj=0 // @poff=274
0xf3c: Pop(0)
0xf3d: Push((int) 537555)
0xf3e: Push((int) -1)
0xf3f: Push((int) 39402)
0xf40: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf41: Pop(3)
0xf42: Push((int) 537556)
0xf43: Push((int) -1)
0xf44: Push((int) 39403)
0xf45: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf46: Pop(3)
0xf47: Return(); Pop(0)

0xf48: Push((int) 39382)
0xf49: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf4b: PushEmpty(string)
0xf4c: Stack[-1] = "Neutral" // @poff=0
0xf4d: Call2 0x8b7

0xf4e: Pop(1)
0xf4f: Push((int) 537535)
0xf50: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf51: Pop(1)
0xf52: @@@ ClearReplies(); Obj=0 // @poff=274
0xf53: Pop(0)
0xf54: Push((int) 537536)
0xf55: Push((int) 39384)
0xf56: Push((int) 39383)
0xf57: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf58: Pop(3)
0xf59: Return(); Pop(0)

0xf5a: Push((int) 39384)
0xf5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5c: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf5d: PushEmpty(string)
0xf5e: Stack[-1] = "Neutral" // @poff=0
0xf5f: Call2 0x8b7

0xf60: Pop(1)
0xf61: Push((int) 537537)
0xf62: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf63: Pop(1)
0xf64: @@@ ClearReplies(); Obj=0 // @poff=274
0xf65: Pop(0)
0xf66: Push((int) 537538)
0xf67: Push((int) 39386)
0xf68: Push((int) 39385)
0xf69: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf6a: Pop(3)
0xf6b: Push((int) 537548)
0xf6c: Push((int) -1)
0xf6d: Push((int) 39395)
0xf6e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf6f: Pop(3)
0xf70: Return(); Pop(0)

0xf71: Push((int) 39386)
0xf72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf73: IF (Stack[-1] == 0) GOTO 0xf8d; Pop(1)

0xf74: PushEmpty(string)
0xf75: Stack[-1] = "Neutral" // @poff=0
0xf76: Call2 0x8b7

0xf77: Pop(1)
0xf78: Push((int) 537539)
0xf79: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf7a: Pop(1)
0xf7b: @@@ ClearReplies(); Obj=0 // @poff=274
0xf7c: Pop(0)
0xf7d: Push((int) 537540)
0xf7e: Push((int) 39388)
0xf7f: Push((int) 39387)
0xf80: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf81: Pop(3)
0xf82: Push((int) 537543)
0xf83: Push((int) -1)
0xf84: Push((int) 39390)
0xf85: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf86: Pop(3)
0xf87: Push((int) 537544)
0xf88: Push((int) 39392)
0xf89: Push((int) 39391)
0xf8a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf8b: Pop(3)
0xf8c: Return(); Pop(0)

0xf8d: Push((int) 39392)
0xf8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8f: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xf90: PushEmpty(string)
0xf91: Stack[-1] = "Neutral" // @poff=0
0xf92: Call2 0x8b7

0xf93: Pop(1)
0xf94: Push((int) 537545)
0xf95: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xf96: Pop(1)
0xf97: @@@ ClearReplies(); Obj=0 // @poff=274
0xf98: Pop(0)
0xf99: Push((int) 537546)
0xf9a: Push((int) -1)
0xf9b: Push((int) 39393)
0xf9c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xf9d: Pop(3)
0xf9e: Push((int) 537547)
0xf9f: Push((int) -1)
0xfa0: Push((int) 39394)
0xfa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfa2: Pop(3)
0xfa3: Return(); Pop(0)

0xfa4: Push((int) 39388)
0xfa5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa6: IF (Stack[-1] == 0) GOTO 0xfb6; Pop(1)

0xfa7: PushEmpty(string)
0xfa8: Stack[-1] = "Neutral" // @poff=0
0xfa9: Call2 0x8b7

0xfaa: Pop(1)
0xfab: Push((int) 537541)
0xfac: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfad: Pop(1)
0xfae: @@@ ClearReplies(); Obj=0 // @poff=274
0xfaf: Pop(0)
0xfb0: Push((int) 537542)
0xfb1: Push((int) -1)
0xfb2: Push((int) 39389)
0xfb3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfb4: Pop(3)
0xfb5: Return(); Pop(0)

0xfb6: Push((int) 39372)
0xfb7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb8: IF (Stack[-1] == 0) GOTO 0xfcd; Pop(1)

0xfb9: PushEmpty(string)
0xfba: Stack[-1] = "Neutral" // @poff=0
0xfbb: Call2 0x8b7

0xfbc: Pop(1)
0xfbd: Push((int) 537525)
0xfbe: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfbf: Pop(1)
0xfc0: @@@ ClearReplies(); Obj=0 // @poff=274
0xfc1: Pop(0)
0xfc2: Push((int) 537526)
0xfc3: Push((int) 39374)
0xfc4: Push((int) 39373)
0xfc5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfc6: Pop(3)
0xfc7: Push((int) 537533)
0xfc8: Push((int) -1)
0xfc9: Push((int) 39380)
0xfca: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfcb: Pop(3)
0xfcc: Return(); Pop(0)

0xfcd: Push((int) 39374)
0xfce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcf: IF (Stack[-1] == 0) GOTO 0xfe4; Pop(1)

0xfd0: PushEmpty(string)
0xfd1: Stack[-1] = "Neutral" // @poff=0
0xfd2: Call2 0x8b7

0xfd3: Pop(1)
0xfd4: Push((int) 537527)
0xfd5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfd6: Pop(1)
0xfd7: @@@ ClearReplies(); Obj=0 // @poff=274
0xfd8: Pop(0)
0xfd9: Push((int) 537528)
0xfda: Push((int) 39376)
0xfdb: Push((int) 39375)
0xfdc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfdd: Pop(3)
0xfde: Push((int) 537532)
0xfdf: Push((int) -1)
0xfe0: Push((int) 39379)
0xfe1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xfe2: Pop(3)
0xfe3: Return(); Pop(0)

0xfe4: Push((int) 39376)
0xfe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe6: IF (Stack[-1] == 0) GOTO 0xffb; Pop(1)

0xfe7: PushEmpty(string)
0xfe8: Stack[-1] = "Neutral" // @poff=0
0xfe9: Call2 0x8b7

0xfea: Pop(1)
0xfeb: Push((int) 537529)
0xfec: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0xfed: Pop(1)
0xfee: @@@ ClearReplies(); Obj=0 // @poff=274
0xfef: Pop(0)
0xff0: Push((int) 537530)
0xff1: Push((int) -1)
0xff2: Push((int) 39377)
0xff3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xff4: Pop(3)
0xff5: Push((int) 537531)
0xff6: Push((int) -1)
0xff7: Push((int) 39378)
0xff8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0xff9: Pop(3)
0xffa: Return(); Pop(0)

0xffb: Push((int) 39356)
0xffc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xffd: IF (Stack[-1] == 0) GOTO 0x1012; Pop(1)

0xffe: PushEmpty(string)
0xfff: Stack[-1] = "Neutral" // @poff=0
0x1000: Call2 0x8b7

0x1001: Pop(1)
0x1002: Push((int) 537509)
0x1003: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1004: Pop(1)
0x1005: @@@ ClearReplies(); Obj=0 // @poff=274
0x1006: Pop(0)
0x1007: Push((int) 537510)
0x1008: Push((int) 39358)
0x1009: Push((int) 39357)
0x100a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x100b: Pop(3)
0x100c: Push((int) 537520)
0x100d: Push((int) 39368)
0x100e: Push((int) 39367)
0x100f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1010: Pop(3)
0x1011: Return(); Pop(0)

0x1012: Push((int) 39368)
0x1013: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1014: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x1015: PushEmpty(string)
0x1016: Stack[-1] = "Neutral" // @poff=0
0x1017: Call2 0x8b7

0x1018: Pop(1)
0x1019: Push((int) 537521)
0x101a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x101b: Pop(1)
0x101c: @@@ ClearReplies(); Obj=0 // @poff=274
0x101d: Pop(0)
0x101e: Push((int) 537522)
0x101f: Push((int) -1)
0x1020: Push((int) 39369)
0x1021: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1022: Pop(3)
0x1023: Push((int) 537523)
0x1024: Push((int) -1)
0x1025: Push((int) 39370)
0x1026: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1027: Pop(3)
0x1028: Return(); Pop(0)

0x1029: Push((int) 39358)
0x102a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102b: IF (Stack[-1] == 0) GOTO 0x1040; Pop(1)

0x102c: PushEmpty(string)
0x102d: Stack[-1] = "Neutral" // @poff=0
0x102e: Call2 0x8b7

0x102f: Pop(1)
0x1030: Push((int) 537511)
0x1031: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1032: Pop(1)
0x1033: @@@ ClearReplies(); Obj=0 // @poff=274
0x1034: Pop(0)
0x1035: Push((int) 537512)
0x1036: Push((int) 39360)
0x1037: Push((int) 39359)
0x1038: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1039: Pop(3)
0x103a: Push((int) 537519)
0x103b: Push((int) -1)
0x103c: Push((int) 39366)
0x103d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x103e: Pop(3)
0x103f: Return(); Pop(0)

0x1040: Push((int) 39360)
0x1041: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1042: IF (Stack[-1] == 0) GOTO 0x1057; Pop(1)

0x1043: PushEmpty(string)
0x1044: Stack[-1] = "Neutral" // @poff=0
0x1045: Call2 0x8b7

0x1046: Pop(1)
0x1047: Push((int) 537513)
0x1048: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1049: Pop(1)
0x104a: @@@ ClearReplies(); Obj=0 // @poff=274
0x104b: Pop(0)
0x104c: Push((int) 537514)
0x104d: Push((int) 39362)
0x104e: Push((int) 39361)
0x104f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1050: Pop(3)
0x1051: Push((int) 537518)
0x1052: Push((int) -1)
0x1053: Push((int) 39365)
0x1054: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1055: Pop(3)
0x1056: Return(); Pop(0)

0x1057: Push((int) 39362)
0x1058: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1059: IF (Stack[-1] == 0) GOTO 0x106e; Pop(1)

0x105a: PushEmpty(string)
0x105b: Stack[-1] = "Neutral" // @poff=0
0x105c: Call2 0x8b7

0x105d: Pop(1)
0x105e: Push((int) 537515)
0x105f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x1060: Pop(1)
0x1061: @@@ ClearReplies(); Obj=0 // @poff=274
0x1062: Pop(0)
0x1063: Push((int) 537516)
0x1064: Push((int) -1)
0x1065: Push((int) 39363)
0x1066: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x1067: Pop(3)
0x1068: Push((int) 537517)
0x1069: Push((int) -1)
0x106a: Push((int) 39364)
0x106b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x106c: Pop(3)
0x106d: Return(); Pop(0)

0x106e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x106f: PushEmpty(bool)
0x1070: Call2 0x14ea

0x1071: Pop(0)
0x1072: IF (Stack[-1] == 0) GOTO 0x1076; Pop(1)

0x1073: @ lshStopAnimation()
0x1074: Pop(0)
0x1075: GOTO 0x1078

0x1076: @ StopAnimation()
0x1077: Pop(0)
0x1078: Return(); Pop(0)

0x1079: GOTO 0x8ce

0x107a: Return(); Pop(0)

0x107b: PushEmpty(cvector, cvector)
0x107c: @ GetPosition(Stack[-1])
0x107d: Pop(0)
0x107e: Stack[-1] = Stack[-3]
0x107f: Return(); Pop(2)

0x1080: PushEmpty(cvector, cvector, cvector, cvector)
0x1081: @ GetPosition(Stack[-2])
0x1082: Pop(0)
0x1083: @@ GetPosition(Stack[-1]); Obj=5 // @poff=110
0x1084: Pop(0)
0x1085: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1086: Return(); Pop(4)

0x1087: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1088: @ GetPosition(Stack[-3])
0x1089: Pop(0)
0x108a: @@ GetPosition(Stack[-2]); Obj=7 // @poff=110
0x108b: Pop(0)
0x108c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x108d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x108e: Return(); Pop(6)

0x108f: PushEmpty(bool, bool)
0x1090: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1091: Pop(0)
0x1092: Stack[-1] = Stack[-4]
0x1093: Return(); Pop(2)

0x1094: PushEmpty(bool, bool)
0x1095: Push("HasProperty") // @poff=296
0x1096: Push((int) 2)
0x1097: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1098: Pop(1); Push((bool) Stack[-1] == 0)
0x1099: IF (Stack[-1] == 0) GOTO 0x109c; Pop(1)

0x109a: Stack[-5] = (bool) 0
0x109b: Return(); Pop(2)

0x109c: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=320
0x109d: Pop(0)
0x109e: Stack[-1] = Stack[-5]
0x109f: Return(); Pop(2)

0x10a0: PushEmpty(bool, bool)
0x10a1: @@ IsDead(Stack[-1]); Obj=3 // @poff=332
0x10a2: Pop(0)
0x10a3: Stack[-1] = Stack[-4]
0x10a4: Return(); Pop(2)

0x10a5: PushEmpty(object, object, object, object)
0x10a6: Pop(0); PushNull((bool) Stack[-5] == 0)
0x10a7: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a8: Stack[-6] = (bool) 0
0x10a9: Return(); Pop(4)

0x10aa: PushEmpty(bool)
0x10ab: Stack[-1] = (bool) 0
0x10ac: Push("IsDead") // @poff=339
0x10ad: Push((int) 1)
0x10ae: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x10af: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b0: PushEmpty(bool, object)
0x10b1: Stack[-8] = Stack[-1]
0x10b2: Call2 0x10a0

0x10b3: Pop(1)
0x10b4: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b5: Stack[-1] = (bool) 1
0x10b6: IF (Stack[-1] == 0) GOTO 0x10b9; Pop(1)

0x10b7: Stack[-6] = (bool) 0
0x10b8: Return(); Pop(4)

0x10b9: @ GetScene(Stack[-2])
0x10ba: Pop(0)
0x10bb: Pop(0); PushNull((bool) Stack[-2] == 0)
0x10bc: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x10bd: Stack[-6] = (bool) 0
0x10be: Return(); Pop(4)

0x10bf: @@ GetScene(Stack[-1]); Obj=5 // @poff=353
0x10c0: Pop(0)
0x10c1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x10c2: IF (Stack[-1] == 0) GOTO 0x10c5; Pop(1)

0x10c3: Stack[-6] = (bool) 0
0x10c4: Return(); Pop(4)

0x10c5: Stack[-6] = (bool) 1
0x10c6: Return(); Pop(4)

0x10c7: Stack[-1] = 0
0x10c8: Stack[-2] = 0
0x10c9: PushEmpty(int, int)
0x10ca: PushEmpty(bool, object)
0x10cb: Stack[-5] = Stack[-1]
0x10cc: Call2 0x10a5

0x10cd: Pop(1)
0x10ce: Pop(1); Push((bool) Stack[-1] == 0)
0x10cf: IF (Stack[-1] == 0) GOTO 0x10d2; Pop(1)

0x10d0: Stack[-4] = (bool) 0
0x10d1: Return(); Pop(2)

0x10d2: PushEmpty(bool, object, string)
0x10d3: Stack[-6] = Stack[-2]
0x10d4: Stack[-1] = "noaccess" // @poff=362
0x10d5: Call2 0x1094

0x10d6: Pop(2)
0x10d7: Pop(1); Push((bool) Stack[-1] == 0)
0x10d8: IF (Stack[-1] == 0) GOTO 0x10db; Pop(1)

0x10d9: Stack[-4] = (bool) 1
0x10da: Return(); Pop(2)

0x10db: Push("noaccess") // @poff=362
0x10dc: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=380
0x10dd: Pop(1)
0x10de: Push((int) 0)
0x10df: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x10e0: Return(); Pop(2)

0x10e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x10e2: @@ GetPosition(Stack[-3]); Obj=7 // @poff=110
0x10e3: Pop(0)
0x10e4: @ GetPosition(Stack[-2])
0x10e5: Pop(0)
0x10e6: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x10e7: Push(CvectorIndex(Stack[-1], 0))
0x10e8: Push(CvectorIndex(Stack[-2], 2))
0x10e9: @ RotateAsync(Stack[-2], Stack[-1])
0x10ea: Pop(2)
0x10eb: Return(); Pop(6)

0x10ec: PushEmpty(bool, bool)
0x10ed: @ IsLoaded(Stack[-1])
0x10ee: Pop(0)
0x10ef: Stack[-1] = Stack[-3]
0x10f0: Return(); Pop(2)

0x10f1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x10f2: @@ GetPosition(Stack[-8]); Obj=20 // @poff=110
0x10f3: Pop(0)
0x10f4: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=392
0x10f5: Pop(0)
0x10f6: Push(CvectorIndex(Stack[-8], 1))
0x10f7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10f8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x10f9: @ GetPosition(Stack[-7])
0x10fa: Pop(0)
0x10fb: @ GetEyesHeight(Stack[-9])
0x10fc: Pop(0)
0x10fd: Push(CvectorIndex(Stack[-7], 1))
0x10fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x10ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1100: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1101: Push(CvectorIndex(Stack[-6], 1))
0x1102: Stack[-1] = (int) 0
0x1103: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1104: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1105: Pop(1); Push(Sqrt(Stack[-1]))
0x1106: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1107: Stack[-5] = -Stack[-6]; Pop(0);
0x1108: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1109: PushEmpty(cvector, cvector)
0x110a: Push([0.0, 1.0, 0.0])
0x110b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x110c: Call2 0x11c0

0x110d: Pop(1)
0x110e: Push((int) 25)
0x110f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1110: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1111: Push([0.0, 10.0, 0.0])
0x1112: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1113: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1114: @ IsOverrideActive(Stack[-2])
0x1115: Pop(0)
0x1116: Push(Stack[-2])
0x1117: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1118: Stack[-21] = (bool) 0
0x1119: Return(); Pop(18)

0x111a: @ StopWorld()
0x111b: Pop(0)
0x111c: @ CameraTransit(Stack[-3], Stack[-5])
0x111d: Pop(0)
0x111e: Push(CvectorIndex(Stack[-4], 0))
0x111f: Push(CvectorIndex(Stack[-5], 2))
0x1120: @ Rotate(Stack[-2], Stack[-1])
0x1121: Pop(2)
0x1122: PushEmpty(bool)
0x1123: Call2 0x14ea

0x1124: Pop(0)
0x1125: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x1126: GOTO 0x112f

0x1127: Push("head") // @poff=34
0x1128: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1129: Pop(1)
0x112a: Push(Stack[-1])
0x112b: IF (Stack[-1] == 0) GOTO 0x112f; Pop(1)

0x112c: Push("head") // @poff=34
0x112d: @ LookAsyncCamera(Stack[-1])
0x112e: Pop(1)
0x112f: @ CameraWaitForPlayFinish()
0x1130: Pop(0)
0x1131: @ ResumeWorld()
0x1132: Pop(0)
0x1133: Stack[-21] = (bool) 1
0x1134: Return(); Pop(18)

0x1135: PushEmpty(bool, bool)
0x1136: @ CameraSwitchToNormal()
0x1137: Pop(0)
0x1138: PushEmpty(bool)
0x1139: Call2 0x14ea

0x113a: Pop(0)
0x113b: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113c: GOTO 0x1145

0x113d: Push("head") // @poff=34
0x113e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x113f: Pop(1)
0x1140: Push(Stack[-1])
0x1141: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x1142: Push("head") // @poff=34
0x1143: @ UnlookAsync(Stack[-1])
0x1144: Pop(1)
0x1145: Return(); Pop(2)

0x1146: PushEmpty()
0x1147: PushEmpty(bool, object, float)
0x1148: Stack[-4] = Stack[-2]
0x1149: Stack[-1] = (int) 70
0x114a: Call2 0x114e

0x114b: Stack[-3] = Stack[-5]
0x114c: Pop(3)
0x114d: Return(); Pop(0)

0x114e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x114f: @@ GetPosition(Stack[-7]); Obj=18 // @poff=110
0x1150: Pop(0)
0x1151: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=392
0x1152: Pop(0)
0x1153: Push(CvectorIndex(Stack[-7], 1))
0x1154: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1155: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1156: @ GetPosition(Stack[-6])
0x1157: Pop(0)
0x1158: @ GetEyesHeight(Stack[-8])
0x1159: Pop(0)
0x115a: Push(CvectorIndex(Stack[-6], 1))
0x115b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x115c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x115d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x115e: Push(CvectorIndex(Stack[-5], 1))
0x115f: Stack[-1] = (int) 0
0x1160: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1161: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1162: Pop(1); Push(Sqrt(Stack[-1]))
0x1163: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1164: Stack[-4] = -Stack[-5]; Pop(0);
0x1165: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1166: Push([0.0, 10.0, 0.0])
0x1167: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1168: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1169: @ IsOverrideActive(Stack[-1])
0x116a: Pop(0)
0x116b: Push(Stack[-1])
0x116c: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x116d: Stack[-19] = (bool) 0
0x116e: Return(); Pop(16)

0x116f: @ StopWorld()
0x1170: Pop(0)
0x1171: @ CameraTransit(Stack[-2], Stack[-4])
0x1172: Pop(0)
0x1173: Push(CvectorIndex(Stack[-3], 0))
0x1174: Push(CvectorIndex(Stack[-4], 2))
0x1175: @ Rotate(Stack[-2], Stack[-1])
0x1176: Pop(2)
0x1177: @ CameraWaitForPlayFinish()
0x1178: Pop(0)
0x1179: @ ResumeWorld()
0x117a: Pop(0)
0x117b: Stack[-19] = (bool) 1
0x117c: Return(); Pop(16)

0x117d: PushEmpty()
0x117e: @ CameraSwitchToNormal()
0x117f: Pop(0)
0x1180: Return(); Pop(0)

0x1181: PushEmpty(float, float, float, float)
0x1182: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x1183: Pop(0)
0x1184: Push((bool) 0)
0x1185: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1186: Pop(1)
0x1187: Return(); Pop(4)

0x1188: PushEmpty(float, float, float, float)
0x1189: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x118a: Pop(0)
0x118b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x118c: Pop(0)
0x118d: Return(); Pop(4)

0x118e: PushEmpty(float, cvector, float, cvector)
0x118f: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=392
0x1190: Pop(0)
0x1191: Stack[-1] = [0.0, 0.0, 0.0]
0x1192: Push(CvectorIndex(Stack[-1], 1))
0x1193: Stack[-3] = Stack[-1]
0x1194: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1195: Push("head") // @poff=34
0x1196: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1197: Pop(1)
0x1198: Return(); Pop(4)

0x1199: PushEmpty(bool)
0x119a: Call2 0x14ea

0x119b: Pop(0)
0x119c: IF (Stack[-1] == 0) GOTO 0x119f; Pop(1)

0x119d: @ lshStopSpeech()
0x119e: Pop(0)
0x119f: Return(); Pop(0)

0x11a0: PushEmpty(bool, bool)
0x11a1: PushEmpty(bool, int, int)
0x11a2: Stack[-7] = Stack[-2]
0x11a3: Stack[-6] = Stack[-1]
0x11a4: Call2 0x11ca

0x11a5: Pop(2)
0x11a6: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x11a7: Push((int) 0)
0x11a8: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x11a9: Pop(1)
0x11aa: Return(); Pop(2)

0x11ab: PushEmpty(int, bool, int, bool)
0x11ac: PushEmpty(bool, int, int)
0x11ad: Stack[-10] = Stack[-2]
0x11ae: Stack[-9] = Stack[-1]
0x11af: Call2 0x11ca

0x11b0: Pop(2)
0x11b1: IF (Stack[-1] == 0) GOTO 0x11b9; Pop(1)

0x11b2: @ irand(Stack[-2], Stack[-5])
0x11b3: Pop(0)
0x11b4: Push((int) 0)
0x11b5: Push((int) 1)
0x11b6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x11b7: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x11b8: Pop(2)
0x11b9: Return(); Pop(4)

0x11ba: PushEmpty(object, object)
0x11bb: @ self(Stack[-1])
0x11bc: Pop(0)
0x11bd: Stack[-1] = Stack[-3]
0x11be: Return(); Pop(2)

0x11bf: Stack[-1] = 0
0x11c0: PushEmpty(float, float)
0x11c1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11c2: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11c3: Push((float)9.999999974752427e-07)
0x11c4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11c5: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c6: Stack[-4] = [0.0, 0.0, 0.0]
0x11c7: Return(); Pop(2)

0x11c8: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11c9: Return(); Pop(2)

0x11ca: PushEmpty(int, int)
0x11cb: @ irand(Stack[-1], Stack[-3])
0x11cc: Pop(0)
0x11cd: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x11ce: Return(); Pop(2)

0x11cf: PushEmpty()
0x11d0: Pop(0); Push(Stack[-2] | Stack[-1]);
0x11d1: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11d2: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11d4: Pop(1); Push(Sqrt(Stack[-1]))
0x11d5: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11d6: Return(); Pop(0)

0x11d7: PushEmpty()
0x11d8: Push(CvectorIndex(Stack[-2], 0))
0x11d9: Push(CvectorIndex(Stack[-2], 0))
0x11da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11db: Push(CvectorIndex(Stack[-3], 2))
0x11dc: Push(CvectorIndex(Stack[-3], 2))
0x11dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11de: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11df: Return(); Pop(0)

0x11e0: PushEmpty()
0x11e1: Push(CvectorIndex(Stack[-1], 0))
0x11e2: Push(CvectorIndex(Stack[-2], 0))
0x11e3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11e4: Push(CvectorIndex(Stack[-2], 2))
0x11e5: Push(CvectorIndex(Stack[-3], 2))
0x11e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11e7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11e8: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x11e9: Return(); Pop(0)

0x11ea: PushEmpty()
0x11eb: PushEmpty(float, cvector, cvector)
0x11ec: Stack[-5] = Stack[-2]
0x11ed: Stack[-4] = Stack[-1]
0x11ee: Call2 0x11d7

0x11ef: Pop(2)
0x11f0: PushEmpty(float, cvector)
0x11f1: Stack[-5] = Stack[-1]
0x11f2: Call2 0x11e0

0x11f3: Pop(1)
0x11f4: PushEmpty(float, cvector)
0x11f5: Stack[-5] = Stack[-1]
0x11f6: Call2 0x11e0

0x11f7: Pop(1)
0x11f8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11f9: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11fa: Return(); Pop(0)

0x11fb: PushEmpty(int, int)
0x11fc: @ GetVariable(Stack[-3], Stack[-1])
0x11fd: Pop(0)
0x11fe: Stack[-1] = Stack[-4]
0x11ff: Return(); Pop(2)

0x1200: PushEmpty(float, float)
0x1201: @ GetGameTime(Stack[-1])
0x1202: Pop(0)
0x1203: Push((int) 1)
0x1204: PushEmpty(int)
0x1205: Push((int) 24)
0x1206: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1207: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1208: Return(); Pop(2)

0x1209: PushEmpty(float, float)
0x120a: @ GetGameTime(Stack[-1])
0x120b: Pop(0)
0x120c: PushEmpty(int)
0x120d: Stack[-2] = Stack[-1]
0x120e: Push((int) 24)
0x120f: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x1210: Return(); Pop(2)

0x1211: PushEmpty()
0x1212: Return(); Pop(0)

0x1213: PushEmpty()
0x1214: Return(); Pop(0)

0x1215: PushEmpty()
0x1216: Return(); Pop(0)

0x1217: PushEmpty()
0x1218: Return(); Pop(0)

0x1219: PushEmpty()
0x121a: Push("unholster") // @poff=406
0x121b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x121c: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x121d: PushEmpty(bool, object)
0x121e: Stack[-4] = Stack[-1]
0x121f: Call2 0x133c

0x1220: Stack[-2] = Stack[-5]
0x1221: Pop(2)
0x1222: Return(); Pop(0)

0x1223: GOTO 0x1237

0x1224: Push("player_shot") // @poff=426
0x1225: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1226: IF (Stack[-1] == 0) GOTO 0x122e; Pop(1)

0x1227: PushEmpty(bool, object)
0x1228: Stack[-4] = Stack[-1]
0x1229: Call2 0x1349

0x122a: Stack[-2] = Stack[-5]
0x122b: Pop(2)
0x122c: Return(); Pop(0)

0x122d: GOTO 0x1237

0x122e: Push("battle") // @poff=450
0x122f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1230: IF (Stack[-1] == 0) GOTO 0x1237; Pop(1)

0x1231: PushEmpty(bool, object)
0x1232: Stack[-4] = Stack[-1]
0x1233: Call2 0x1360

0x1234: Stack[-2] = Stack[-5]
0x1235: Pop(2)
0x1236: Return(); Pop(0)

0x1237: Stack[-3] = (bool) 0
0x1238: Return(); Pop(0)

0x1239: PushEmpty()
0x123a: Push("unholster") // @poff=406
0x123b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123c: IF (Stack[-1] == 0) GOTO 0x1242; Pop(1)

0x123d: PushEmpty(object)
0x123e: Stack[-3] = Stack[-1]
0x123f: Call2 0x1341

0x1240: Pop(1)
0x1241: GOTO 0x1251

0x1242: Push("player_shot") // @poff=426
0x1243: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1244: IF (Stack[-1] == 0) GOTO 0x124a; Pop(1)

0x1245: PushEmpty(object)
0x1246: Stack[-3] = Stack[-1]
0x1247: Call2 0x1358

0x1248: Pop(1)
0x1249: GOTO 0x1251

0x124a: Push("battle") // @poff=450
0x124b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x124c: IF (Stack[-1] == 0) GOTO 0x1251; Pop(1)

0x124d: PushEmpty(object)
0x124e: Stack[-3] = Stack[-1]
0x124f: Call2 0x1367

0x1250: Pop(1)
0x1251: Return(); Pop(0)

0x1252: PushEmpty(bool, bool)
0x1253: PushEmpty(bool)
0x1254: Stack[-1] = (bool) 0
0x1255: PushEmpty(bool, object)
0x1256: Stack[-6] = Stack[-1]
0x1257: Call2 0x133c

0x1258: Pop(1)
0x1259: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x125a: PushEmpty(bool, object)
0x125b: Stack[-6] = Stack[-1]
0x125c: Call2 0x108f

0x125d: Pop(1)
0x125e: IF (Stack[-1] == 0) GOTO 0x1260; Pop(1)

0x125f: Stack[-1] = (bool) 1
0x1260: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1261: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=464
0x1262: Pop(0)
0x1263: Pop(0); Push((bool) Stack[-1] == 0)
0x1264: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1265: Stack[-4] = (bool) 1
0x1266: Return(); Pop(2)

0x1267: Stack[-4] = (bool) 0
0x1268: Return(); Pop(2)

0x1269: PushEmpty()
0x126a: PushEmpty(object)
0x126b: Stack[-2] = Stack[-1]
0x126c: Call2 0x1341

0x126d: Pop(1)
0x126e: Return(); Pop(0)

0x126f: PushEmpty()
0x1270: PushEmpty(bool, object)
0x1271: Stack[-3] = Stack[-1]
0x1272: Call2 0x108f

0x1273: Pop(1)
0x1274: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1275: PushEmpty(object)
0x1276: Call2 0x11ba

0x1277: Pop(0)
0x1278: Push((float)-0.029999999329447746)
0x1279: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x127a: Pop(2)
0x127b: Return(); Pop(0)

0x127c: PushEmpty(object, object)
0x127d: Push("heal") // @poff=482
0x127e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x127f: IF (Stack[-1] == 0) GOTO 0x128a; Pop(1)

0x1280: Push("player") // @poff=492
0x1281: @ FindActor(Stack[-2], Stack[-1])
0x1282: Pop(1)
0x1283: PushEmpty(bool, object)
0x1284: Stack[-3] = Stack[-1]
0x1285: Call2 0x136d

0x1286: Stack[-2] = Stack[-6]
0x1287: Pop(2)
0x1288: Return(); Pop(2)

0x1289: Stack[-1] = 0
0x128a: Stack[-4] = (bool) 0
0x128b: Return(); Pop(2)

0x128c: PushEmpty(object, object)
0x128d: Push("heal") // @poff=482
0x128e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x128f: IF (Stack[-1] == 0) GOTO 0x1298; Pop(1)

0x1290: Push("player") // @poff=492
0x1291: @ FindActor(Stack[-2], Stack[-1])
0x1292: Pop(1)
0x1293: PushEmpty(object)
0x1294: Stack[-2] = Stack[-1]
0x1295: Call2 0x1370

0x1296: Pop(1)
0x1297: Stack[-1] = 0
0x1298: Return(); Pop(2)

0x1299: PushEmpty(string, string)
0x129a: Stack[-1] = "idle" // @poff=24
0x129b: Push(Stack[-3])
0x129c: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x129d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x129e: Stack[-1] = Stack[-4]
0x129f: Return(); Pop(2)

0x12a0: PushEmpty(int, bool, int, bool)
0x12a1: Stack[-2] = (int) 0
0x12a2: Push("all") // @poff=16
0x12a3: PushEmpty(string, int)
0x12a4: Stack[-5] = Stack[-1]
0x12a5: Call2 0x1299

0x12a6: Pop(1)
0x12a7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12a8: Pop(2)
0x12a9: Pop(0); Push((bool) Stack[-1] == 0)
0x12aa: IF (Stack[-1] == 0) GOTO 0x12ac; Pop(1)

0x12ab: GOTO 0x12af

0x12ac: Push((int) 1)
0x12ad: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12ae: GOTO 0x12a2

0x12af: Stack[-2] = Stack[-5]
0x12b0: Return(); Pop(4)

0x12b1: PushEmpty()
0x12b2: PushEmpty(bool)
0x12b3: Call2 0x151c

0x12b4: Pop(0)
0x12b5: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b6: Stack[-2] = (int) 2
0x12b7: GOTO 0x12b9

0x12b8: Stack[-2] = (int) 0
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty()
0x12bb: PushEmpty(object)
0x12bc: Stack[-2] = Stack[-1]
0x12bd: Push(-1, 1); TaskCall(3)
0x12be: Call2 0x293

0x12bf: Pop(-1, 1); TaskReturn
0x12c0: Pop(1)
0x12c1: Return(); Pop(0)

0x12c2: PushEmpty()
0x12c3: PushEmpty(bool, object)
0x12c4: Stack[-3] = Stack[-1]
0x12c5: Call2 0x10c9

0x12c6: Pop(1)
0x12c7: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12c8: Stack[-2] = (int) 2
0x12c9: GOTO 0x12cb

0x12ca: Stack[-2] = (int) 0
0x12cb: Return(); Pop(0)

0x12cc: PushEmpty()
0x12cd: PushEmpty(object)
0x12ce: Stack[-2] = Stack[-1]
0x12cf: Push(-1, 3); TaskCall(4)
0x12d0: Call2 0x3a6

0x12d1: Pop(-1, 3); TaskReturn
0x12d2: Pop(1)
0x12d3: Return(); Pop(0)

0x12d4: PushEmpty()
0x12d5: PushEmpty(bool, object)
0x12d6: Stack[-4] = Stack[-1]
0x12d7: Call2 0x10c9

0x12d8: Pop(1)
0x12d9: IF (Stack[-1] == 0) GOTO 0x12dc; Pop(1)

0x12da: Stack[-3] = (int) 2
0x12db: GOTO 0x12dd

0x12dc: Stack[-3] = (int) 0
0x12dd: Return(); Pop(0)

0x12de: PushEmpty()
0x12df: PushEmpty(object)
0x12e0: Stack[-2] = Stack[-1]
0x12e1: Push(-1, 3); TaskCall(5)
0x12e2: Call2 0x4a2

0x12e3: Pop(-1, 3); TaskReturn
0x12e4: Pop(1)
0x12e5: Return(); Pop(0)

0x12e6: PushEmpty(string, bool, string, bool)
0x12e7: PushEmpty(bool, object, string)
0x12e8: Stack[-9] = Stack[-2]
0x12e9: Stack[-1] = "class" // @poff=506
0x12ea: Call2 0x1094

0x12eb: Pop(2)
0x12ec: Pop(1); Push((bool) Stack[-1] == 0)
0x12ed: IF (Stack[-1] == 0) GOTO 0x12f0; Pop(1)

0x12ee: Stack[-8] = (bool) 0
0x12ef: Return(); Pop(4)

0x12f0: Push("class") // @poff=506
0x12f1: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=380
0x12f2: Pop(1)
0x12f3: Push("rat") // @poff=518
0x12f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f5: IF (Stack[-1] == 0) GOTO 0x12f9; Pop(1)

0x12f6: Stack[-8] = (bool) 0
0x12f7: Return(); Pop(4)

0x12f8: GOTO 0x1304

0x12f9: Push("rat_big") // @poff=526
0x12fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12fb: IF (Stack[-1] == 0) GOTO 0x12ff; Pop(1)

0x12fc: Stack[-8] = (bool) 0
0x12fd: Return(); Pop(4)

0x12fe: GOTO 0x1304

0x12ff: Push("dog") // @poff=542
0x1300: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1301: IF (Stack[-1] == 0) GOTO 0x1304; Pop(1)

0x1302: Stack[-8] = (bool) 0
0x1303: Return(); Pop(4)

0x1304: @ CanSee(Stack[-1], Stack[-7])
0x1305: Pop(0)
0x1306: PushEmpty(bool)
0x1307: Stack[-1] = (bool) 1
0x1308: Push(Stack[-2])
0x1309: IF (Stack[-1] == 1) GOTO 0x1312; Pop(1)

0x130a: PushEmpty(float, object)
0x130b: Stack[-10] = Stack[-1]
0x130c: Call2 0x1087

0x130d: Pop(1)
0x130e: Pop(0); Push(Stack[-7] * Stack[-7]);
0x130f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1310: IF (Stack[-1] == 1) GOTO 0x1312; Pop(1)

0x1311: Stack[-1] = (bool) 0
0x1312: IF (Stack[-1] == 0) GOTO 0x1315; Pop(1)

0x1313: Stack[-8] = (bool) 1
0x1314: Return(); Pop(4)

0x1315: @ CanSee(Stack[-1], Stack[-6])
0x1316: Pop(0)
0x1317: PushEmpty(bool)
0x1318: Stack[-1] = (bool) 1
0x1319: Push(Stack[-2])
0x131a: IF (Stack[-1] == 1) GOTO 0x1323; Pop(1)

0x131b: PushEmpty(float, object)
0x131c: Stack[-9] = Stack[-1]
0x131d: Call2 0x1087

0x131e: Pop(1)
0x131f: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1320: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1321: IF (Stack[-1] == 1) GOTO 0x1323; Pop(1)

0x1322: Stack[-1] = (bool) 0
0x1323: IF (Stack[-1] == 0) GOTO 0x1326; Pop(1)

0x1324: Stack[-8] = (bool) 1
0x1325: Return(); Pop(4)

0x1326: Stack[-8] = (bool) 0
0x1327: Return(); Pop(4)

0x1328: PushEmpty()
0x1329: Stack[-2] = (int) 2
0x132a: Return(); Pop(0)

0x132b: PushEmpty()
0x132c: PushEmpty(object)
0x132d: Stack[-2] = Stack[-1]
0x132e: Call2 0x14f4

0x132f: Pop(1)
0x1330: Return(); Pop(0)

0x1331: Return(); Pop(0)

0x1332: PushEmpty()
0x1333: Stack[-2] = (int) 0
0x1334: Return(); Pop(0)

0x1335: PushEmpty()
0x1336: Return(); Pop(0)

0x1337: PushEmpty()
0x1338: Stack[-3] = (int) 0
0x1339: Return(); Pop(0)

0x133a: PushEmpty()
0x133b: Return(); Pop(0)

0x133c: PushEmpty(bool, bool)
0x133d: @ CanSee(Stack[-1], Stack[-3])
0x133e: Pop(0)
0x133f: Stack[-1] = Stack[-4]
0x1340: Return(); Pop(2)

0x1341: PushEmpty()
0x1342: PushEmpty(object)
0x1343: Stack[-2] = Stack[-1]
0x1344: Push(-1, 3); TaskCall(6)
0x1345: Call2 0x564

0x1346: Pop(-1, 3); TaskReturn
0x1347: Pop(1)
0x1348: Return(); Pop(0)

0x1349: PushEmpty(bool, bool)
0x134a: @ CanSee(Stack[-1], Stack[-3])
0x134b: Pop(0)
0x134c: Stack[-4] = (bool) 1
0x134d: Push(Stack[-1])
0x134e: IF (Stack[-1] == 1) GOTO 0x1357; Pop(1)

0x134f: PushEmpty(float, object)
0x1350: Stack[-5] = Stack[-1]
0x1351: Call2 0x1087

0x1352: Pop(1)
0x1353: Push((int) 4000000)
0x1354: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1355: IF (Stack[-1] == 1) GOTO 0x1357; Pop(1)

0x1356: Stack[-4] = (bool) 0
0x1357: Return(); Pop(2)

0x1358: PushEmpty()
0x1359: PushEmpty(object)
0x135a: Stack[-2] = Stack[-1]
0x135b: Push(-1, 3); TaskCall(7)
0x135c: Call2 0x626

0x135d: Pop(-1, 3); TaskReturn
0x135e: Pop(1)
0x135f: Return(); Pop(0)

0x1360: PushEmpty()
0x1361: PushEmpty(bool, object)
0x1362: Stack[-3] = Stack[-1]
0x1363: Call2 0x1349

0x1364: Stack[-2] = Stack[-4]
0x1365: Pop(2)
0x1366: Return(); Pop(0)

0x1367: PushEmpty()
0x1368: PushEmpty(object)
0x1369: Stack[-2] = Stack[-1]
0x136a: Call2 0x1358

0x136b: Pop(1)
0x136c: Return(); Pop(0)

0x136d: PushEmpty()
0x136e: Stack[-2] = (bool) 0
0x136f: Return(); Pop(0)

0x1370: PushEmpty()
0x1371: Return(); Pop(0)

0x1372: PushEmpty()
0x1373: Push((int) 1000)
0x1374: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=550
0x1375: Pop(1)
0x1376: Return(); Pop(0)

0x1377: PushEmpty()
0x1378: PushEmpty(int, string)
0x1379: Stack[-1] = "branch" // @poff=565
0x137a: Call2 0x11fb

0x137b: Pop(1)
0x137c: Push((int) 0)
0x137d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x137e: IF (Stack[-1] == 0) GOTO 0x1381; Pop(1)

0x137f: Stack[-2] = (bool) 1
0x1380: Return(); Pop(0)

0x1381: Stack[-2] = (bool) 0
0x1382: Return(); Pop(0)

0x1383: PushEmpty()
0x1384: PushEmpty(bool, object)
0x1385: Stack[-3] = Stack[-1]
0x1386: Call2 0x1405

0x1387: Pop(1)
0x1388: IF (Stack[-1] == 0) GOTO 0x138b; Pop(1)

0x1389: Stack[-2] = (bool) 1
0x138a: Return(); Pop(0)

0x138b: Stack[-2] = (bool) 0
0x138c: Return(); Pop(0)

0x138d: PushEmpty()
0x138e: PushEmpty(bool, object)
0x138f: Stack[-3] = Stack[-1]
0x1390: Call2 0x140c

0x1391: Pop(1)
0x1392: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x1393: Stack[-2] = (bool) 1
0x1394: Return(); Pop(0)

0x1395: Stack[-2] = (bool) 0
0x1396: Return(); Pop(0)

0x1397: PushEmpty()
0x1398: PushEmpty(bool, object)
0x1399: Stack[-3] = Stack[-1]
0x139a: Call2 0x1413

0x139b: Pop(1)
0x139c: IF (Stack[-1] == 0) GOTO 0x139f; Pop(1)

0x139d: Stack[-2] = (bool) 1
0x139e: Return(); Pop(0)

0x139f: Stack[-2] = (bool) 0
0x13a0: Return(); Pop(0)

0x13a1: PushEmpty()
0x13a2: PushEmpty(bool, object)
0x13a3: Stack[-3] = Stack[-1]
0x13a4: Call2 0x141a

0x13a5: Pop(1)
0x13a6: IF (Stack[-1] == 0) GOTO 0x13a9; Pop(1)

0x13a7: Stack[-2] = (bool) 1
0x13a8: Return(); Pop(0)

0x13a9: Stack[-2] = (bool) 0
0x13aa: Return(); Pop(0)

0x13ab: PushEmpty()
0x13ac: PushEmpty(bool, object)
0x13ad: Stack[-3] = Stack[-1]
0x13ae: Call2 0x1421

0x13af: Pop(1)
0x13b0: IF (Stack[-1] == 0) GOTO 0x13b3; Pop(1)

0x13b1: Stack[-2] = (bool) 1
0x13b2: Return(); Pop(0)

0x13b3: Stack[-2] = (bool) 0
0x13b4: Return(); Pop(0)

0x13b5: PushEmpty()
0x13b6: PushEmpty(bool, object)
0x13b7: Stack[-3] = Stack[-1]
0x13b8: Call2 0x1428

0x13b9: Pop(1)
0x13ba: IF (Stack[-1] == 0) GOTO 0x13bd; Pop(1)

0x13bb: Stack[-2] = (bool) 1
0x13bc: Return(); Pop(0)

0x13bd: Stack[-2] = (bool) 0
0x13be: Return(); Pop(0)

0x13bf: PushEmpty()
0x13c0: PushEmpty(bool, object)
0x13c1: Stack[-3] = Stack[-1]
0x13c2: Call2 0x142f

0x13c3: Pop(1)
0x13c4: IF (Stack[-1] == 0) GOTO 0x13c7; Pop(1)

0x13c5: Stack[-2] = (bool) 1
0x13c6: Return(); Pop(0)

0x13c7: Stack[-2] = (bool) 0
0x13c8: Return(); Pop(0)

0x13c9: PushEmpty()
0x13ca: PushEmpty(bool, object)
0x13cb: Stack[-3] = Stack[-1]
0x13cc: Call2 0x1436

0x13cd: Pop(1)
0x13ce: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13cf: Stack[-2] = (bool) 1
0x13d0: Return(); Pop(0)

0x13d1: Stack[-2] = (bool) 0
0x13d2: Return(); Pop(0)

0x13d3: PushEmpty()
0x13d4: PushEmpty(bool, object)
0x13d5: Stack[-3] = Stack[-1]
0x13d6: Call2 0x143d

0x13d7: Pop(1)
0x13d8: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13d9: Stack[-2] = (bool) 1
0x13da: Return(); Pop(0)

0x13db: Stack[-2] = (bool) 0
0x13dc: Return(); Pop(0)

0x13dd: PushEmpty()
0x13de: PushEmpty(bool, object)
0x13df: Stack[-3] = Stack[-1]
0x13e0: Call2 0x1444

0x13e1: Pop(1)
0x13e2: IF (Stack[-1] == 0) GOTO 0x13e5; Pop(1)

0x13e3: Stack[-2] = (bool) 1
0x13e4: Return(); Pop(0)

0x13e5: Stack[-2] = (bool) 0
0x13e6: Return(); Pop(0)

0x13e7: PushEmpty()
0x13e8: PushEmpty(bool, object)
0x13e9: Stack[-3] = Stack[-1]
0x13ea: Call2 0x144b

0x13eb: Pop(1)
0x13ec: IF (Stack[-1] == 0) GOTO 0x13ef; Pop(1)

0x13ed: Stack[-2] = (bool) 1
0x13ee: Return(); Pop(0)

0x13ef: Stack[-2] = (bool) 0
0x13f0: Return(); Pop(0)

0x13f1: PushEmpty()
0x13f2: PushEmpty(bool, object)
0x13f3: Stack[-3] = Stack[-1]
0x13f4: Call2 0x1452

0x13f5: Pop(1)
0x13f6: IF (Stack[-1] == 0) GOTO 0x13f9; Pop(1)

0x13f7: Stack[-2] = (bool) 1
0x13f8: Return(); Pop(0)

0x13f9: Stack[-2] = (bool) 0
0x13fa: Return(); Pop(0)

0x13fb: PushEmpty()
0x13fc: PushEmpty(bool, object)
0x13fd: Stack[-3] = Stack[-1]
0x13fe: Call2 0x1467

0x13ff: Pop(1)
0x1400: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x1401: Stack[-2] = (bool) 1
0x1402: Return(); Pop(0)

0x1403: Stack[-2] = (bool) 0
0x1404: Return(); Pop(0)

0x1405: PushEmpty()
0x1406: PushEmpty(int)
0x1407: Call2 0x1200

0x1408: Pop(0)
0x1409: Push((int) 1)
0x140a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x140b: Return(); Pop(0)

0x140c: PushEmpty()
0x140d: PushEmpty(int)
0x140e: Call2 0x1200

0x140f: Pop(0)
0x1410: Push((int) 2)
0x1411: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1412: Return(); Pop(0)

0x1413: PushEmpty()
0x1414: PushEmpty(int)
0x1415: Call2 0x1200

0x1416: Pop(0)
0x1417: Push((int) 3)
0x1418: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1419: Return(); Pop(0)

0x141a: PushEmpty()
0x141b: PushEmpty(int)
0x141c: Call2 0x1200

0x141d: Pop(0)
0x141e: Push((int) 4)
0x141f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1420: Return(); Pop(0)

0x1421: PushEmpty()
0x1422: PushEmpty(int)
0x1423: Call2 0x1200

0x1424: Pop(0)
0x1425: Push((int) 5)
0x1426: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1427: Return(); Pop(0)

0x1428: PushEmpty()
0x1429: PushEmpty(int)
0x142a: Call2 0x1200

0x142b: Pop(0)
0x142c: Push((int) 6)
0x142d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x142e: Return(); Pop(0)

0x142f: PushEmpty()
0x1430: PushEmpty(int)
0x1431: Call2 0x1200

0x1432: Pop(0)
0x1433: Push((int) 7)
0x1434: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1435: Return(); Pop(0)

0x1436: PushEmpty()
0x1437: PushEmpty(int)
0x1438: Call2 0x1200

0x1439: Pop(0)
0x143a: Push((int) 8)
0x143b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x143c: Return(); Pop(0)

0x143d: PushEmpty()
0x143e: PushEmpty(int)
0x143f: Call2 0x1200

0x1440: Pop(0)
0x1441: Push((int) 9)
0x1442: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1443: Return(); Pop(0)

0x1444: PushEmpty()
0x1445: PushEmpty(int)
0x1446: Call2 0x1200

0x1447: Pop(0)
0x1448: Push((int) 10)
0x1449: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x144a: Return(); Pop(0)

0x144b: PushEmpty()
0x144c: PushEmpty(int)
0x144d: Call2 0x1200

0x144e: Pop(0)
0x144f: Push((int) 11)
0x1450: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1451: Return(); Pop(0)

0x1452: PushEmpty()
0x1453: PushEmpty(bool)
0x1454: Stack[-1] = (bool) 0
0x1455: PushEmpty(int)
0x1456: Call2 0x1209

0x1457: Pop(0)
0x1458: Push((int) 0)
0x1459: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x145a: IF (Stack[-1] == 0) GOTO 0x1462; Pop(1)

0x145b: PushEmpty(int)
0x145c: Call2 0x1209

0x145d: Pop(0)
0x145e: Push((int) 12)
0x145f: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1460: IF (Stack[-1] == 0) GOTO 0x1462; Pop(1)

0x1461: Stack[-1] = (bool) 1
0x1462: IF (Stack[-1] == 0) GOTO 0x1465; Pop(1)

0x1463: Stack[-2] = (bool) 1
0x1464: Return(); Pop(0)

0x1465: Stack[-2] = (bool) 0
0x1466: Return(); Pop(0)

0x1467: PushEmpty()
0x1468: PushEmpty(int)
0x1469: Call2 0x1209

0x146a: Pop(0)
0x146b: Push((int) 12)
0x146c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x146d: IF (Stack[-1] == 0) GOTO 0x1470; Pop(1)

0x146e: Stack[-2] = (bool) 1
0x146f: Return(); Pop(0)

0x1470: Stack[-2] = (bool) 0
0x1471: Return(); Pop(0)

0x1472: PushEmpty(int, int)
0x1473: Push("branch") // @poff=565
0x1474: @ GetVariable(Stack[-1], Stack[-2])
0x1475: Pop(1)
0x1476: Push((int) 0)
0x1477: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1478: IF (Stack[-1] == 0) GOTO 0x147c; Pop(1)

0x1479: Stack[-3] = (int) 1
0x147a: Return(); Pop(2)

0x147b: GOTO 0x1481

0x147c: Push((int) 1)
0x147d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147e: IF (Stack[-1] == 0) GOTO 0x1481; Pop(1)

0x147f: Stack[-3] = (int) 2
0x1480: Return(); Pop(2)

0x1481: Stack[-3] = (int) 3
0x1482: Return(); Pop(2)

0x1483: PushEmpty(int, int)
0x1484: Push("branch") // @poff=565
0x1485: @ GetVariable(Stack[-1], Stack[-2])
0x1486: Pop(1)
0x1487: Stack[-1] = Stack[-3]
0x1488: Return(); Pop(2)

0x1489: PushEmpty()
0x148a: PushEmpty(int)
0x148b: Call2 0x1483

0x148c: Pop(0)
0x148d: Push((int) 1)
0x148e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x148f: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1490: @ WorkWithCorpse(Stack[-1])
0x1491: Pop(0)
0x1492: GOTO 0x1495

0x1493: @ Barter(Stack[-1])
0x1494: Pop(0)
0x1495: Return(); Pop(0)

0x1496: PushEmpty(int, int)
0x1497: Push((int) 0)
0x1498: @ ClearSubContainer(Stack[-1])
0x1499: Pop(1)
0x149a: Push(Stack[-3])
0x149b: IF (Stack[-1] == 0) GOTO 0x14b2; Pop(1)

0x149c: PushEmpty(string, int, int, int)
0x149d: Stack[-4] = "rifle_ammo" // @poff=579
0x149e: Stack[-3] = (int) 1
0x149f: Stack[-2] = (int) 2
0x14a0: Stack[-1] = (int) 2
0x14a1: Call2 0x11ab

0x14a2: Pop(4)
0x14a3: PushEmpty(string, int, int, int)
0x14a4: Stack[-4] = "revolver_ammo" // @poff=601
0x14a5: Stack[-3] = (int) 1
0x14a6: Stack[-2] = (int) 2
0x14a7: Stack[-1] = (int) 2
0x14a8: Call2 0x11ab

0x14a9: Pop(4)
0x14aa: PushEmpty(string, int, int, int)
0x14ab: Stack[-4] = "samopal_ammo" // @poff=629
0x14ac: Stack[-3] = (int) 2
0x14ad: Stack[-2] = (int) 2
0x14ae: Stack[-1] = (int) 2
0x14af: Call2 0x11ab

0x14b0: Pop(4)
0x14b1: GOTO 0x14e1

0x14b2: PushEmpty(string, int, int)
0x14b3: Stack[-3] = "lockpick" // @poff=655
0x14b4: Stack[-2] = (int) 1
0x14b5: Stack[-1] = (int) 4
0x14b6: Call2 0x11a0

0x14b7: Pop(3)
0x14b8: PushEmpty(string, int, int, int)
0x14b9: Stack[-4] = "alpha_pills" // @poff=673
0x14ba: Stack[-3] = (int) 1
0x14bb: Stack[-2] = (int) 2
0x14bc: Stack[-1] = (int) 3
0x14bd: Call2 0x11ab

0x14be: Pop(4)
0x14bf: PushEmpty(string, int, int)
0x14c0: Stack[-3] = "meradorm" // @poff=697
0x14c1: Stack[-2] = (int) 1
0x14c2: Stack[-1] = (int) 2
0x14c3: Call2 0x11a0

0x14c4: Pop(3)
0x14c5: PushEmpty(string, int, int)
0x14c6: Stack[-3] = "powder" // @poff=715
0x14c7: Stack[-2] = (int) 1
0x14c8: Stack[-1] = (int) 15
0x14c9: Call2 0x11a0

0x14ca: Pop(3)
0x14cb: PushEmpty(int)
0x14cc: Call2 0x1200

0x14cd: Stack[-1] = Stack[-2]
0x14ce: Pop(1)
0x14cf: Push((int) 4)
0x14d0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x14d1: IF (Stack[-1] == 0) GOTO 0x14d8; Pop(1)

0x14d2: PushEmpty(string, int, int)
0x14d3: Stack[-3] = "beta_pills" // @poff=729
0x14d4: Stack[-2] = (int) 1
0x14d5: Stack[-1] = (int) 2
0x14d6: Call2 0x11a0

0x14d7: Pop(3)
0x14d8: Push((int) 6)
0x14d9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x14da: IF (Stack[-1] == 0) GOTO 0x14e1; Pop(1)

0x14db: PushEmpty(string, int, int)
0x14dc: Stack[-3] = "gamma_pills" // @poff=751
0x14dd: Stack[-2] = (int) 1
0x14de: Stack[-1] = (int) 7
0x14df: Call2 0x11a0

0x14e0: Pop(3)
0x14e1: Return(); Pop(2)

0x14e2: Stack[-1] = (int) 515560
0x14e3: Return(); Pop(0)

0x14e4: Stack[-1] = (int) 503345
0x14e5: Return(); Pop(0)

0x14e6: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=775
0x14e7: Return(); Pop(0)

0x14e8: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=815
0x14e9: Return(); Pop(0)

0x14ea: Stack[-1] = (bool) 0
0x14eb: Return(); Pop(0)

0x14ec: Push(GlobalVars[0])
0x14ed: Stack[-1] = (bool) 0
0x14ee: GlobalVars[0] = Stack[-1]; Pop(1)
0x14ef: PushEmpty(bool)
0x14f0: Stack[-1] = (bool) 1
0x14f1: Call2 0x1496

0x14f2: Pop(1)
0x14f3: Return(); Pop(0)

0x14f4: PushEmpty(bool, bool)
0x14f5: Push(GlobalVars[0])
0x14f6: IF (Stack[-1] == 0) GOTO 0x1501; Pop(1)

0x14f7: @ IsOverrideActive(Stack[-1])
0x14f8: Pop(0)
0x14f9: Pop(0); Push((bool) Stack[-1] == 0)
0x14fa: IF (Stack[-1] == 0) GOTO 0x14ff; Pop(1)

0x14fb: PushEmpty(object)
0x14fc: Stack[-4] = Stack[-1]
0x14fd: Call2 0x1489

0x14fe: Pop(1)
0x14ff: Return(); Pop(2)

0x1500: GOTO 0x151b

0x1501: Push((int) 1000)
0x1502: PushEmpty(int, object)
0x1503: Stack[-6] = Stack[-1]
0x1504: Push(-2, 1); TaskCall(8)
0x1505: Call2 0x6c3

0x1506: Pop(-2, 1); TaskReturn
0x1507: Pop(1)
0x1508: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1509: IF (Stack[-1] == 0) GOTO 0x151b; Pop(1)

0x150a: PushEmpty(bool, object)
0x150b: Stack[-5] = Stack[-1]
0x150c: Call2 0x1146

0x150d: Pop(1)
0x150e: Pop(1); Push((bool) Stack[-1] == 0)
0x150f: IF (Stack[-1] == 0) GOTO 0x1511; Pop(1)

0x1510: Return(); Pop(2)

0x1511: PushEmpty(object)
0x1512: Stack[-4] = Stack[-1]
0x1513: Push(-1, 1); TaskCall(0)
0x1514: Call2 0x0

0x1515: Pop(-1, 1); TaskReturn
0x1516: Pop(1)
0x1517: PushEmpty(object)
0x1518: Stack[-4] = Stack[-1]
0x1519: Call2 0x117d

0x151a: Pop(1)
0x151b: Return(); Pop(2)

0x151c: Stack[-1] = (bool) 1
0x151d: Return(); Pop(0)

0x151e: PushEmpty()
0x151f: PushEmpty(bool, object, object, float)
0x1520: Stack[-7] = Stack[-3]
0x1521: Stack[-6] = Stack[-2]
0x1522: Stack[-1] = (float) 500.0
0x1523: Call2 0x12e6

0x1524: Pop(3)
0x1525: IF (Stack[-1] == 0) GOTO 0x152c; Pop(1)

0x1526: Push("ToDie") // @poff=859
0x1527: Push((bool) 1)
0x1528: @ SetProperty(Stack[-2], Stack[-1])
0x1529: Pop(2)
0x152a: Stack[-4] = (bool) 1
0x152b: Return(); Pop(0)

0x152c: Stack[-4] = (bool) 0
0x152d: Return(); Pop(0)

