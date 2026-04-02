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
	W:ui/NPC_Citizen1.png
	W:ui/NPC_Citizen1_b.png
	W:ToDie
// @pool_raw:4e00650075007400720061006c00000061006c006c000000690064006c006500000068006500610064000000610074007400610063006b005f006f006e000000610074007400610063006b005f0073007400610079000000610074007400610063006b005f006f00660066000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565005365744d65737361676500436c6561725265706c696573004164645265706c7900480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f706572747900476574457965734865696768740075006e0068006f006c007300740065007200000070006c0061007900650072005f00730068006f007400000062006100740074006c00650000004973576561706f6e486f6c737465726564006800650061006c00000070006c006100790065007200000063006c00610073007300000072006100740000007200610074005f00620069006700000064006f006700000053657452657475726e56616c7565006200720061006e006300680000007200690066006c0065005f0061006d006d006f0000007200650076006f006c007600650072005f0061006d006d006f000000730061006d006f00700061006c005f0061006d006d006f0000006c006f0063006b007000690063006b00000061006c007000680061005f00700069006c006c00730000006d0065007200610064006f0072006d00000070006f007700640065007200000062006500740061005f00700069006c006c0073000000670061006d006d0061005f00700069006c006c0073000000750069002f004e00500043005f0043006900740069007a0065006e0031002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0031005f0062002e0070006e006700000054006f004400690065000000

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
		EVENT_11 Op = 0x7bd Vars = (int, int)

Events:
EVENT_16 Op = 0xb83 Vars = (object, string)
EVENT_41 Op = 0xb85 Vars = (object)
EVENT_22 Op = 0xb87 Vars = (object, int, float, float)
EVENT_43 Op = 0xb89 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xdc3

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral" // @poff=0
0xa: Call2 0xaf3

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
0x1c: Call2 0xdc3

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
0x2c: Call2 0xdc5

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
0x38: Call2 0xa5e

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0xca3

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-5] = Stack[-1]
0x43: Call2 0xc9a

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
0x51: Call2 0xc9d

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-4] = Stack[-1]
0x57: Call2 0xbe1

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-5] = Stack[-1]
0x5b: Call2 0xc34

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
0x69: Call2 0xc3e

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-9] = Stack[-3]
0x6f: Stack[-8] = Stack[-2]
0x70: Stack[-7] = Stack[-1]
0x71: Call2 0xdf7

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-8] = Stack[-2]
0x76: Stack[-6] = Stack[-1]
0x77: Call2 0xc46

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
0x85: Call2 0xc50

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-5] = Stack[-1]
0x8b: Call2 0xca4

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
0x99: Call2 0xca7

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-7] = Stack[-2]
0x9f: Stack[-6] = Stack[-1]
0xa0: Call2 0xb8b

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-6] = Stack[-2]
0xa8: Stack[-5] = Stack[-1]
0xa9: Call2 0xbab

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-6] = Stack[-2]
0xae: Stack[-7] = Stack[-1]
0xaf: Call2 0xca9

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
0xbe: Call2 0xcac

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-3] = Stack[-1]
0xc4: Call2 0xbee

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-2] = Stack[-1]
0xcc: Call2 0xbfe

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-3] = Stack[-1]
0xd2: Call2 0xbc4

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-2] = Stack[-1]
0xda: Call2 0xbdb

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
0xf8: Call2 0xca3

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
0x111: Call2 0xb85

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-7] = Stack[-1]
0x117: Call2 0xa3b

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
0x126: Call2 0xc23

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
0x134: Call2 0xc2c

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
0x19c: Call2 0xc9a

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
0x1aa: Call2 0xc9d

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-4] = Stack[-1]
0x1b0: Call2 0xbe1

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-5] = Stack[-1]
0x1b4: Call2 0xc34

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
0x1c2: Call2 0xc3e

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-9] = Stack[-3]
0x1c8: Stack[-8] = Stack[-2]
0x1c9: Stack[-7] = Stack[-1]
0x1ca: Call2 0xdf7

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-8] = Stack[-2]
0x1cf: Stack[-6] = Stack[-1]
0x1d0: Call2 0xc46

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
0x1de: Call2 0xc50

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-5] = Stack[-1]
0x1e4: Call2 0xca4

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
0x1f2: Call2 0xca7

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-7] = Stack[-2]
0x1f8: Stack[-6] = Stack[-1]
0x1f9: Call2 0xb8b

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-6] = Stack[-2]
0x201: Stack[-5] = Stack[-1]
0x202: Call2 0xbab

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-6] = Stack[-2]
0x207: Stack[-7] = Stack[-1]
0x208: Call2 0xca9

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
0x217: Call2 0xcac

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-3] = Stack[-1]
0x21d: Call2 0xbee

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-2] = Stack[-1]
0x225: Call2 0xbfe

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0xca3

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-3] = Stack[-1]
0x232: Call2 0xbc4

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-2] = Stack[-1]
0x23a: Call2 0xbdb

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0xa5e

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0xc12

0x248: Stack[-1] = Stack[-8]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0xa5e

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
0x263: Call2 0xc0b

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
0x29c: Call2 0x9f2

0x29d: Stack[-2] = Stack[-4]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-6] = Stack[-2]
0x2a1: Stack[-5] = Stack[-1]
0x2a2: Call2 0xb5c

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0xa53

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
0x2b4: Call2 0xa53

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
0x2c8: Call2 0xb00

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-5] = Stack[-1]
0x2ce: Call2 0xc9a

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
0x2dc: Call2 0xc9d

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-4] = Stack[-1]
0x2e2: Call2 0xbe1

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-5] = Stack[-1]
0x2e6: Call2 0xc34

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
0x2f4: Call2 0xc3e

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-9] = Stack[-3]
0x2fa: Stack[-8] = Stack[-2]
0x2fb: Stack[-7] = Stack[-1]
0x2fc: Call2 0xdf7

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-8] = Stack[-2]
0x301: Stack[-6] = Stack[-1]
0x302: Call2 0xc46

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
0x310: Call2 0xc50

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-5] = Stack[-1]
0x316: Call2 0xca4

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
0x324: Call2 0xca7

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-7] = Stack[-2]
0x32a: Stack[-6] = Stack[-1]
0x32b: Call2 0xb8b

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-6] = Stack[-2]
0x333: Stack[-5] = Stack[-1]
0x334: Call2 0xbab

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-6] = Stack[-2]
0x339: Stack[-7] = Stack[-1]
0x33a: Call2 0xca9

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
0x349: Call2 0xcac

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-3] = Stack[-1]
0x34f: Call2 0xbee

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-2] = Stack[-1]
0x357: Call2 0xbfe

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
0x36b: Call2 0xb85

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0xa3b

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
0x381: Call2 0x9f2

0x382: Stack[-2] = Stack[-3]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-5] = Stack[-2]
0x386: Stack[-4] = Stack[-1]
0x387: Call2 0xb5c

0x388: Pop(2)
0x389: Push((float)0.4999999701976776)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0xa53

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0xca3

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-3] = Stack[-1]
0x39b: Call2 0xbc4

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-2] = Stack[-1]
0x3a3: Call2 0xbdb

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
0x3c6: Call2 0xca3

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
0x3d3: Call2 0xb32

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0xb32

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
0x409: Call2 0x9ed

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
0x424: Call2 0x9ed

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
0x460: Call2 0x9ed

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
0x471: Call2 0xb85

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x9f2

0x47a: Stack[-2] = Stack[-3]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-5] = Stack[-2]
0x47e: Stack[-4] = Stack[-1]
0x47f: Call2 0xb41

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
0x48e: Call2 0xb32

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0xb32

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
0x4c4: Call2 0x9ed

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
0x4df: Call2 0x9ed

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
0x51b: Call2 0x9ed

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
0x52c: Call2 0xb85

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x9f2

0x535: Stack[-2] = Stack[-3]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-5] = Stack[-2]
0x539: Stack[-4] = Stack[-1]
0x53a: Call2 0xb41

0x53b: Pop(2)
0x53c: Push((float)-0.3420201241970062)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0xca3

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
0x550: Call2 0xb32

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0xb32

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
0x586: Call2 0x9ed

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
0x5a1: Call2 0x9ed

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
0x5dd: Call2 0x9ed

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
0x5ee: Call2 0xb85

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x9f2

0x5f7: Stack[-2] = Stack[-3]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-5] = Stack[-2]
0x5fb: Stack[-4] = Stack[-1]
0x5fc: Call2 0xb41

0x5fd: Pop(2)
0x5fe: Push((float)-0.3420201241970062)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0xca3

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
0x612: Call2 0xb32

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0xb32

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
0x648: Call2 0x9ed

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
0x663: Call2 0x9ed

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
0x69f: Call2 0x9ed

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
0x6b0: Call2 0xb85

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x9f2

0x6b9: Stack[-2] = Stack[-3]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-5] = Stack[-2]
0x6bd: Stack[-4] = Stack[-1]
0x6be: Call2 0xb41

0x6bf: Pop(2)
0x6c0: Push((float)-0.3420201241970062)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-12] = Stack[-2]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0xa63

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0xdbd

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=174
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0xdbb

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=185
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0xdbf

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=203
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0xdc1

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=212
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0xd4b

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
0x704: Call2 0xaa7

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
0x712: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x713: PushEmpty(string)
0x714: Stack[-1] = "Neutral" // @poff=0
0x715: Call2 0x7a7

0x716: Pop(1)
0x717: Push((int) 537723)
0x718: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x719: Pop(1)
0x71a: @@@ ClearReplies(); Obj=0 // @poff=274
0x71b: Pop(0)
0x71c: PushEmpty(bool, object)
0x71d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71e: Call2 0xce9

0x71f: Pop(1)
0x720: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x721: Push((int) 537724)
0x722: Push((int) 39573)
0x723: Push((int) 39572)
0x724: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x725: Pop(3)
0x726: PushEmpty(bool, object)
0x727: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x728: Call2 0xce9

0x729: Pop(1)
0x72a: Pop(1); Push((bool) Stack[-1] == 0)
0x72b: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72c: Push((int) 537728)
0x72d: Push((int) -1)
0x72e: Push((int) 39576)
0x72f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x730: Pop(3)
0x731: PushEmpty(bool)
0x732: Stack[-1] = (bool) 0
0x733: PushEmpty(bool)
0x734: Stack[-1] = (bool) 0
0x735: PushEmpty(bool, object)
0x736: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x737: Call2 0xce9

0x738: Pop(1)
0x739: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call2 0xcf5

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73f: Stack[-1] = (bool) 1
0x740: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0xd09

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x746: Stack[-1] = (bool) 1
0x747: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x748: Push((int) 537729)
0x749: Push((int) 39578)
0x74a: Push((int) 39577)
0x74b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x74c: Pop(3)
0x74d: PushEmpty(bool)
0x74e: Stack[-1] = (bool) 0
0x74f: PushEmpty(bool)
0x750: Stack[-1] = (bool) 0
0x751: PushEmpty(bool, object)
0x752: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x753: Call2 0xce9

0x754: Pop(1)
0x755: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x756: PushEmpty(bool, object)
0x757: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x758: Call2 0xcf5

0x759: Pop(1)
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: Stack[-1] = (bool) 1
0x75c: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x75d: PushEmpty(bool, object)
0x75e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75f: Call2 0xd13

0x760: Pop(1)
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: Stack[-1] = (bool) 1
0x763: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x764: Push((int) 537740)
0x765: Push((int) 39589)
0x766: Push((int) 39588)
0x767: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x768: Pop(3)
0x769: PushEmpty(bool)
0x76a: Stack[-1] = (bool) 0
0x76b: PushEmpty(bool, object)
0x76c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76d: Call2 0xce9

0x76e: Pop(1)
0x76f: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x770: PushEmpty(bool, object)
0x771: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x772: Call2 0xcff

0x773: Pop(1)
0x774: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x775: Stack[-1] = (bool) 1
0x776: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x777: Push((int) 537755)
0x778: Push((int) 39604)
0x779: Push((int) 39603)
0x77a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x77b: Pop(3)
0x77c: Push((int) 537783)
0x77d: Push((int) -1)
0x77e: Push((int) 39634)
0x77f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x780: Pop(3)
0x781: Push((int) 537784)
0x782: Push((int) -1)
0x783: Push((int) 39635)
0x784: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x785: Pop(3)
0x786: GOTO 0x789

0x787: Return(); Pop(0)

0x788: GOTO 0x711

0x789: PushEmpty(bool)
0x78a: Call2 0xdc3

0x78b: Pop(0)
0x78c: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x78d: @ lshWaitForAnimEnd()
0x78e: Pop(0)
0x78f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x790: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x791: GOTO 0x797

0x792: PushEmpty(string)
0x793: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x794: Call2 0xaf3

0x795: Pop(1)
0x796: GOTO 0x78d

0x797: GOTO 0x7a6

0x798: Push("all") // @poff=16
0x799: Push("idle") // @poff=24
0x79a: @ PlayAnimation(Stack[-2], Stack[-1])
0x79b: Pop(2)
0x79c: @ WaitForAnimEnd()
0x79d: Pop(0)
0x79e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: GOTO 0x7a6

0x7a1: Push("all") // @poff=16
0x7a2: Push("idle") // @poff=24
0x7a3: @ PlayAnimation(Stack[-2], Stack[-1])
0x7a4: Pop(2)
0x7a5: GOTO 0x79c

0x7a6: Return(); Pop(0)

0x7a7: PushEmpty()
0x7a8: PushEmpty(bool)
0x7a9: Call2 0xdc3

0x7aa: Pop(0)
0x7ab: Pop(1); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ad: Return(); Pop(0)

0x7ae: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7b0: Return(); Pop(0)

0x7b1: PushEmpty(string, bool)
0x7b2: Stack[-3] = Stack[-2]
0x7b3: Push("") // @poff=13
0x7b4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-1] = (bool) 0
0x7b7: GOTO 0x7b9

0x7b8: Stack[-1] = (bool) 1
0x7b9: Call2 0xafa

0x7ba: Pop(2)
0x7bb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7bc: Return(); Pop(0)

0x7bd: PushEmpty()
0x7be: Push((int) 1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x7c0: PushEmpty()
0x7c1: Call2 0xb0b

0x7c2: Pop(0)
0x7c3: Push((int) 39574)
0x7c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c5: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x7c6: PushEmpty(object, object)
0x7c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c9: Call2 0xce4

0x7ca: Pop(2)
0x7cb: Push((int) 39576)
0x7cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7ce: PushEmpty(object, object)
0x7cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d1: Call2 0xce4

0x7d2: Pop(2)
0x7d3: Push((int) 39571)
0x7d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x7d6: PushEmpty(string)
0x7d7: Stack[-1] = "Neutral" // @poff=0
0x7d8: Call2 0x7a7

0x7d9: Pop(1)
0x7da: Push((int) 537723)
0x7db: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x7dc: Pop(1)
0x7dd: @@@ ClearReplies(); Obj=0 // @poff=274
0x7de: Pop(0)
0x7df: PushEmpty(bool, object)
0x7e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e1: Call2 0xce9

0x7e2: Pop(1)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e4: Push((int) 537724)
0x7e5: Push((int) 39573)
0x7e6: Push((int) 39572)
0x7e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7e8: Pop(3)
0x7e9: PushEmpty(bool, object)
0x7ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7eb: Call2 0xce9

0x7ec: Pop(1)
0x7ed: Pop(1); Push((bool) Stack[-1] == 0)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ef: Push((int) 537728)
0x7f0: Push((int) -1)
0x7f1: Push((int) 39576)
0x7f2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x7f3: Pop(3)
0x7f4: PushEmpty(bool)
0x7f5: Stack[-1] = (bool) 0
0x7f6: PushEmpty(bool)
0x7f7: Stack[-1] = (bool) 0
0x7f8: PushEmpty(bool, object)
0x7f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fa: Call2 0xce9

0x7fb: Pop(1)
0x7fc: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x7fd: PushEmpty(bool, object)
0x7fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ff: Call2 0xcf5

0x800: Pop(1)
0x801: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x802: Stack[-1] = (bool) 1
0x803: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x804: PushEmpty(bool, object)
0x805: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x806: Call2 0xd09

0x807: Pop(1)
0x808: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x809: Stack[-1] = (bool) 1
0x80a: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80b: Push((int) 537729)
0x80c: Push((int) 39578)
0x80d: Push((int) 39577)
0x80e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x80f: Pop(3)
0x810: PushEmpty(bool)
0x811: Stack[-1] = (bool) 0
0x812: PushEmpty(bool)
0x813: Stack[-1] = (bool) 0
0x814: PushEmpty(bool, object)
0x815: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x816: Call2 0xce9

0x817: Pop(1)
0x818: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x819: PushEmpty(bool, object)
0x81a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81b: Call2 0xcf5

0x81c: Pop(1)
0x81d: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81e: Stack[-1] = (bool) 1
0x81f: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x820: PushEmpty(bool, object)
0x821: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x822: Call2 0xd13

0x823: Pop(1)
0x824: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x825: Stack[-1] = (bool) 1
0x826: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x827: Push((int) 537740)
0x828: Push((int) 39589)
0x829: Push((int) 39588)
0x82a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x82b: Pop(3)
0x82c: PushEmpty(bool)
0x82d: Stack[-1] = (bool) 0
0x82e: PushEmpty(bool, object)
0x82f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x830: Call2 0xce9

0x831: Pop(1)
0x832: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x833: PushEmpty(bool, object)
0x834: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x835: Call2 0xcff

0x836: Pop(1)
0x837: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x838: Stack[-1] = (bool) 1
0x839: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83a: Push((int) 537755)
0x83b: Push((int) 39604)
0x83c: Push((int) 39603)
0x83d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x83e: Pop(3)
0x83f: Push((int) 537783)
0x840: Push((int) -1)
0x841: Push((int) 39634)
0x842: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x843: Pop(3)
0x844: Push((int) 537784)
0x845: Push((int) -1)
0x846: Push((int) 39635)
0x847: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x848: Pop(3)
0x849: Return(); Pop(0)

0x84a: Push((int) 39604)
0x84b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x84d: PushEmpty(string)
0x84e: Stack[-1] = "Neutral" // @poff=0
0x84f: Call2 0x7a7

0x850: Pop(1)
0x851: Push((int) 537756)
0x852: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x853: Pop(1)
0x854: @@@ ClearReplies(); Obj=0 // @poff=274
0x855: Pop(0)
0x856: Push((int) 537757)
0x857: Push((int) 39606)
0x858: Push((int) 39605)
0x859: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x85a: Pop(3)
0x85b: Push((int) 537766)
0x85c: Push((int) 39615)
0x85d: Push((int) 39614)
0x85e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x85f: Pop(3)
0x860: Push((int) 537782)
0x861: Push((int) -1)
0x862: Push((int) 39633)
0x863: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x864: Pop(3)
0x865: Return(); Pop(0)

0x866: Push((int) 39615)
0x867: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x868: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x869: PushEmpty(string)
0x86a: Stack[-1] = "Neutral" // @poff=0
0x86b: Call2 0x7a7

0x86c: Pop(1)
0x86d: Push((int) 537767)
0x86e: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x86f: Pop(1)
0x870: @@@ ClearReplies(); Obj=0 // @poff=274
0x871: Pop(0)
0x872: Push((int) 537768)
0x873: Push((int) 39617)
0x874: Push((int) 39616)
0x875: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x876: Pop(3)
0x877: Push((int) 537781)
0x878: Push((int) -1)
0x879: Push((int) 39632)
0x87a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x87b: Pop(3)
0x87c: Return(); Pop(0)

0x87d: Push((int) 39617)
0x87e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x87f: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x880: PushEmpty(string)
0x881: Stack[-1] = "Neutral" // @poff=0
0x882: Call2 0x7a7

0x883: Pop(1)
0x884: Push((int) 537769)
0x885: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x886: Pop(1)
0x887: @@@ ClearReplies(); Obj=0 // @poff=274
0x888: Pop(0)
0x889: Push((int) 537770)
0x88a: Push((int) 39608)
0x88b: Push((int) 39618)
0x88c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x88d: Pop(3)
0x88e: Push((int) 537771)
0x88f: Push((int) 39621)
0x890: Push((int) 39620)
0x891: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x892: Pop(3)
0x893: Return(); Pop(0)

0x894: Push((int) 39621)
0x895: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x897: PushEmpty(string)
0x898: Stack[-1] = "Neutral" // @poff=0
0x899: Call2 0x7a7

0x89a: Pop(1)
0x89b: Push((int) 537772)
0x89c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x89d: Pop(1)
0x89e: @@@ ClearReplies(); Obj=0 // @poff=274
0x89f: Pop(0)
0x8a0: Push((int) 537773)
0x8a1: Push((int) 39623)
0x8a2: Push((int) 39622)
0x8a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8a4: Pop(3)
0x8a5: Push((int) 537777)
0x8a6: Push((int) 39628)
0x8a7: Push((int) 39627)
0x8a8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8a9: Pop(3)
0x8aa: Return(); Pop(0)

0x8ab: Push((int) 39628)
0x8ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8ae: PushEmpty(string)
0x8af: Stack[-1] = "Neutral" // @poff=0
0x8b0: Call2 0x7a7

0x8b1: Pop(1)
0x8b2: Push((int) 537778)
0x8b3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8b4: Pop(1)
0x8b5: @@@ ClearReplies(); Obj=0 // @poff=274
0x8b6: Pop(0)
0x8b7: Push((int) 537779)
0x8b8: Push((int) 39608)
0x8b9: Push((int) 39629)
0x8ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8bb: Pop(3)
0x8bc: Push((int) 537780)
0x8bd: Push((int) -1)
0x8be: Push((int) 39631)
0x8bf: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8c0: Pop(3)
0x8c1: Return(); Pop(0)

0x8c2: Push((int) 39623)
0x8c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8c5: PushEmpty(string)
0x8c6: Stack[-1] = "Neutral" // @poff=0
0x8c7: Call2 0x7a7

0x8c8: Pop(1)
0x8c9: Push((int) 537774)
0x8ca: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8cb: Pop(1)
0x8cc: @@@ ClearReplies(); Obj=0 // @poff=274
0x8cd: Pop(0)
0x8ce: Push((int) 537775)
0x8cf: Push((int) 39608)
0x8d0: Push((int) 39624)
0x8d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8d2: Pop(3)
0x8d3: Push((int) 537776)
0x8d4: Push((int) -1)
0x8d5: Push((int) 39626)
0x8d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8d7: Pop(3)
0x8d8: Return(); Pop(0)

0x8d9: Push((int) 39606)
0x8da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8dc: PushEmpty(string)
0x8dd: Stack[-1] = "Neutral" // @poff=0
0x8de: Call2 0x7a7

0x8df: Pop(1)
0x8e0: Push((int) 537758)
0x8e1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8e2: Pop(1)
0x8e3: @@@ ClearReplies(); Obj=0 // @poff=274
0x8e4: Pop(0)
0x8e5: Push((int) 537759)
0x8e6: Push((int) 39608)
0x8e7: Push((int) 39607)
0x8e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8e9: Pop(3)
0x8ea: Return(); Pop(0)

0x8eb: Push((int) 39608)
0x8ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral" // @poff=0
0x8f0: Call2 0x7a7

0x8f1: Pop(1)
0x8f2: Push((int) 537760)
0x8f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x8f4: Pop(1)
0x8f5: @@@ ClearReplies(); Obj=0 // @poff=274
0x8f6: Pop(0)
0x8f7: Push((int) 537761)
0x8f8: Push((int) 39610)
0x8f9: Push((int) 39609)
0x8fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x8fb: Pop(3)
0x8fc: Push((int) 537765)
0x8fd: Push((int) -1)
0x8fe: Push((int) 39613)
0x8ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x900: Pop(3)
0x901: Return(); Pop(0)

0x902: Push((int) 39610)
0x903: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x905: PushEmpty(string)
0x906: Stack[-1] = "Neutral" // @poff=0
0x907: Call2 0x7a7

0x908: Pop(1)
0x909: Push((int) 537762)
0x90a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x90b: Pop(1)
0x90c: @@@ ClearReplies(); Obj=0 // @poff=274
0x90d: Pop(0)
0x90e: Push((int) 537763)
0x90f: Push((int) -1)
0x910: Push((int) 39611)
0x911: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x912: Pop(3)
0x913: Push((int) 537764)
0x914: Push((int) -1)
0x915: Push((int) 39612)
0x916: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x917: Pop(3)
0x918: Return(); Pop(0)

0x919: Push((int) 39589)
0x91a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x91c: PushEmpty(string)
0x91d: Stack[-1] = "Neutral" // @poff=0
0x91e: Call2 0x7a7

0x91f: Pop(1)
0x920: Push((int) 537741)
0x921: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x922: Pop(1)
0x923: @@@ ClearReplies(); Obj=0 // @poff=274
0x924: Pop(0)
0x925: Push((int) 537742)
0x926: Push((int) 39591)
0x927: Push((int) 39590)
0x928: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x929: Pop(3)
0x92a: Push((int) 537747)
0x92b: Push((int) 39596)
0x92c: Push((int) 39595)
0x92d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x92e: Pop(3)
0x92f: Push((int) 537754)
0x930: Push((int) -1)
0x931: Push((int) 39602)
0x932: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x933: Pop(3)
0x934: Return(); Pop(0)

0x935: Push((int) 39596)
0x936: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x938: PushEmpty(string)
0x939: Stack[-1] = "Neutral" // @poff=0
0x93a: Call2 0x7a7

0x93b: Pop(1)
0x93c: Push((int) 537748)
0x93d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x93e: Pop(1)
0x93f: @@@ ClearReplies(); Obj=0 // @poff=274
0x940: Pop(0)
0x941: Push((int) 537749)
0x942: Push((int) 39598)
0x943: Push((int) 39597)
0x944: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x945: Pop(3)
0x946: Push((int) 537753)
0x947: Push((int) -1)
0x948: Push((int) 39601)
0x949: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x94a: Pop(3)
0x94b: Return(); Pop(0)

0x94c: Push((int) 39598)
0x94d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x94f: PushEmpty(string)
0x950: Stack[-1] = "Neutral" // @poff=0
0x951: Call2 0x7a7

0x952: Pop(1)
0x953: Push((int) 537750)
0x954: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x955: Pop(1)
0x956: @@@ ClearReplies(); Obj=0 // @poff=274
0x957: Pop(0)
0x958: Push((int) 537751)
0x959: Push((int) -1)
0x95a: Push((int) 39599)
0x95b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x95c: Pop(3)
0x95d: Push((int) 537752)
0x95e: Push((int) -1)
0x95f: Push((int) 39600)
0x960: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x961: Pop(3)
0x962: Return(); Pop(0)

0x963: Push((int) 39591)
0x964: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x965: IF (Stack[-1] == 0) GOTO 0x97f; Pop(1)

0x966: PushEmpty(string)
0x967: Stack[-1] = "Neutral" // @poff=0
0x968: Call2 0x7a7

0x969: Pop(1)
0x96a: Push((int) 537743)
0x96b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x96c: Pop(1)
0x96d: @@@ ClearReplies(); Obj=0 // @poff=274
0x96e: Pop(0)
0x96f: Push((int) 537744)
0x970: Push((int) -1)
0x971: Push((int) 39592)
0x972: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x973: Pop(3)
0x974: Push((int) 537745)
0x975: Push((int) -1)
0x976: Push((int) 39593)
0x977: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x978: Pop(3)
0x979: Push((int) 537746)
0x97a: Push((int) -1)
0x97b: Push((int) 39594)
0x97c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x97d: Pop(3)
0x97e: Return(); Pop(0)

0x97f: Push((int) 39578)
0x980: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x981: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x982: PushEmpty(string)
0x983: Stack[-1] = "Neutral" // @poff=0
0x984: Call2 0x7a7

0x985: Pop(1)
0x986: Push((int) 537730)
0x987: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x988: Pop(1)
0x989: @@@ ClearReplies(); Obj=0 // @poff=274
0x98a: Pop(0)
0x98b: Push((int) 537731)
0x98c: Push((int) 39580)
0x98d: Push((int) 39579)
0x98e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x98f: Pop(3)
0x990: Push((int) 537738)
0x991: Push((int) -1)
0x992: Push((int) 39586)
0x993: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x994: Pop(3)
0x995: Push((int) 537739)
0x996: Push((int) -1)
0x997: Push((int) 39587)
0x998: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x999: Pop(3)
0x99a: Return(); Pop(0)

0x99b: Push((int) 39580)
0x99c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x99d: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x99e: PushEmpty(string)
0x99f: Stack[-1] = "Neutral" // @poff=0
0x9a0: Call2 0x7a7

0x9a1: Pop(1)
0x9a2: Push((int) 537732)
0x9a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x9a4: Pop(1)
0x9a5: @@@ ClearReplies(); Obj=0 // @poff=274
0x9a6: Pop(0)
0x9a7: Push((int) 537733)
0x9a8: Push((int) 39582)
0x9a9: Push((int) 39581)
0x9aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9ab: Pop(3)
0x9ac: Push((int) 537737)
0x9ad: Push((int) -1)
0x9ae: Push((int) 39585)
0x9af: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9b0: Pop(3)
0x9b1: Return(); Pop(0)

0x9b2: Push((int) 39582)
0x9b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b4: IF (Stack[-1] == 0) GOTO 0x9c9; Pop(1)

0x9b5: PushEmpty(string)
0x9b6: Stack[-1] = "Neutral" // @poff=0
0x9b7: Call2 0x7a7

0x9b8: Pop(1)
0x9b9: Push((int) 537734)
0x9ba: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x9bb: Pop(1)
0x9bc: @@@ ClearReplies(); Obj=0 // @poff=274
0x9bd: Pop(0)
0x9be: Push((int) 537735)
0x9bf: Push((int) -1)
0x9c0: Push((int) 39583)
0x9c1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9c2: Pop(3)
0x9c3: Push((int) 537736)
0x9c4: Push((int) -1)
0x9c5: Push((int) 39584)
0x9c6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9c7: Pop(3)
0x9c8: Return(); Pop(0)

0x9c9: Push((int) 39573)
0x9ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cb: IF (Stack[-1] == 0) GOTO 0x9e0; Pop(1)

0x9cc: PushEmpty(string)
0x9cd: Stack[-1] = "Neutral" // @poff=0
0x9ce: Call2 0x7a7

0x9cf: Pop(1)
0x9d0: Push((int) 537725)
0x9d1: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=263
0x9d2: Pop(1)
0x9d3: @@@ ClearReplies(); Obj=0 // @poff=274
0x9d4: Pop(0)
0x9d5: Push((int) 537726)
0x9d6: Push((int) -1)
0x9d7: Push((int) 39574)
0x9d8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9d9: Pop(3)
0x9da: Push((int) 537727)
0x9db: Push((int) -1)
0x9dc: Push((int) 39575)
0x9dd: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=287
0x9de: Pop(3)
0x9df: Return(); Pop(0)

0x9e0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9e1: PushEmpty(bool)
0x9e2: Call2 0xdc3

0x9e3: Pop(0)
0x9e4: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e5: @ lshStopAnimation()
0x9e6: Pop(0)
0x9e7: GOTO 0x9ea

0x9e8: @ StopAnimation()
0x9e9: Pop(0)
0x9ea: Return(); Pop(0)

0x9eb: GOTO 0x7be

0x9ec: Return(); Pop(0)

0x9ed: PushEmpty(cvector, cvector)
0x9ee: @ GetPosition(Stack[-1])
0x9ef: Pop(0)
0x9f0: Stack[-1] = Stack[-3]
0x9f1: Return(); Pop(2)

0x9f2: PushEmpty(cvector, cvector, cvector, cvector)
0x9f3: @ GetPosition(Stack[-2])
0x9f4: Pop(0)
0x9f5: @@ GetPosition(Stack[-1]); Obj=5 // @poff=110
0x9f6: Pop(0)
0x9f7: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x9f8: Return(); Pop(4)

0x9f9: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9fa: @ GetPosition(Stack[-3])
0x9fb: Pop(0)
0x9fc: @@ GetPosition(Stack[-2]); Obj=7 // @poff=110
0x9fd: Pop(0)
0x9fe: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9ff: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xa00: Return(); Pop(6)

0xa01: PushEmpty(bool, bool)
0xa02: @ IsPlayerActor(Stack[-3], Stack[-1])
0xa03: Pop(0)
0xa04: Stack[-1] = Stack[-4]
0xa05: Return(); Pop(2)

0xa06: PushEmpty(bool, bool)
0xa07: Push("HasProperty") // @poff=296
0xa08: Push((int) 2)
0xa09: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xa0a: Pop(1); Push((bool) Stack[-1] == 0)
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0c: Stack[-5] = (bool) 0
0xa0d: Return(); Pop(2)

0xa0e: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=320
0xa0f: Pop(0)
0xa10: Stack[-1] = Stack[-5]
0xa11: Return(); Pop(2)

0xa12: PushEmpty(bool, bool)
0xa13: @@ IsDead(Stack[-1]); Obj=3 // @poff=332
0xa14: Pop(0)
0xa15: Stack[-1] = Stack[-4]
0xa16: Return(); Pop(2)

0xa17: PushEmpty(object, object, object, object)
0xa18: Pop(0); PushNull((bool) Stack[-5] == 0)
0xa19: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa1a: Stack[-6] = (bool) 0
0xa1b: Return(); Pop(4)

0xa1c: PushEmpty(bool)
0xa1d: Stack[-1] = (bool) 0
0xa1e: Push("IsDead") // @poff=339
0xa1f: Push((int) 1)
0xa20: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xa21: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa22: PushEmpty(bool, object)
0xa23: Stack[-8] = Stack[-1]
0xa24: Call2 0xa12

0xa25: Pop(1)
0xa26: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa27: Stack[-1] = (bool) 1
0xa28: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0xa29: Stack[-6] = (bool) 0
0xa2a: Return(); Pop(4)

0xa2b: @ GetScene(Stack[-2])
0xa2c: Pop(0)
0xa2d: Pop(0); PushNull((bool) Stack[-2] == 0)
0xa2e: IF (Stack[-1] == 0) GOTO 0xa31; Pop(1)

0xa2f: Stack[-6] = (bool) 0
0xa30: Return(); Pop(4)

0xa31: @@ GetScene(Stack[-1]); Obj=5 // @poff=353
0xa32: Pop(0)
0xa33: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa35: Stack[-6] = (bool) 0
0xa36: Return(); Pop(4)

0xa37: Stack[-6] = (bool) 1
0xa38: Return(); Pop(4)

0xa39: Stack[-1] = 0
0xa3a: Stack[-2] = 0
0xa3b: PushEmpty(int, int)
0xa3c: PushEmpty(bool, object)
0xa3d: Stack[-5] = Stack[-1]
0xa3e: Call2 0xa17

0xa3f: Pop(1)
0xa40: Pop(1); Push((bool) Stack[-1] == 0)
0xa41: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa42: Stack[-4] = (bool) 0
0xa43: Return(); Pop(2)

0xa44: PushEmpty(bool, object, string)
0xa45: Stack[-6] = Stack[-2]
0xa46: Stack[-1] = "noaccess" // @poff=362
0xa47: Call2 0xa06

0xa48: Pop(2)
0xa49: Pop(1); Push((bool) Stack[-1] == 0)
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa4b: Stack[-4] = (bool) 1
0xa4c: Return(); Pop(2)

0xa4d: Push("noaccess") // @poff=362
0xa4e: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=380
0xa4f: Pop(1)
0xa50: Push((int) 0)
0xa51: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa52: Return(); Pop(2)

0xa53: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa54: @@ GetPosition(Stack[-3]); Obj=7 // @poff=110
0xa55: Pop(0)
0xa56: @ GetPosition(Stack[-2])
0xa57: Pop(0)
0xa58: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xa59: Push(CvectorIndex(Stack[-1], 0))
0xa5a: Push(CvectorIndex(Stack[-2], 2))
0xa5b: @ RotateAsync(Stack[-2], Stack[-1])
0xa5c: Pop(2)
0xa5d: Return(); Pop(6)

0xa5e: PushEmpty(bool, bool)
0xa5f: @ IsLoaded(Stack[-1])
0xa60: Pop(0)
0xa61: Stack[-1] = Stack[-3]
0xa62: Return(); Pop(2)

0xa63: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa64: @@ GetPosition(Stack[-8]); Obj=20 // @poff=110
0xa65: Pop(0)
0xa66: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=392
0xa67: Pop(0)
0xa68: Push(CvectorIndex(Stack[-8], 1))
0xa69: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa6a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa6b: @ GetPosition(Stack[-7])
0xa6c: Pop(0)
0xa6d: @ GetEyesHeight(Stack[-9])
0xa6e: Pop(0)
0xa6f: Push(CvectorIndex(Stack[-7], 1))
0xa70: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa71: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa72: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa73: Push(CvectorIndex(Stack[-6], 1))
0xa74: Stack[-1] = (int) 0
0xa75: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa76: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa77: Pop(1); Push(Sqrt(Stack[-1]))
0xa78: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa79: Stack[-5] = -Stack[-6]; Pop(0);
0xa7a: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa7b: PushEmpty(cvector, cvector)
0xa7c: Push([0.0, 1.0, 0.0])
0xa7d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa7e: Call2 0xb32

0xa7f: Pop(1)
0xa80: Push((int) 25)
0xa81: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa82: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa83: Push([0.0, 10.0, 0.0])
0xa84: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa85: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa86: @ IsOverrideActive(Stack[-2])
0xa87: Pop(0)
0xa88: Push(Stack[-2])
0xa89: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa8a: Stack[-21] = (bool) 0
0xa8b: Return(); Pop(18)

0xa8c: @ StopWorld()
0xa8d: Pop(0)
0xa8e: @ CameraTransit(Stack[-3], Stack[-5])
0xa8f: Pop(0)
0xa90: Push(CvectorIndex(Stack[-4], 0))
0xa91: Push(CvectorIndex(Stack[-5], 2))
0xa92: @ Rotate(Stack[-2], Stack[-1])
0xa93: Pop(2)
0xa94: PushEmpty(bool)
0xa95: Call2 0xdc3

0xa96: Pop(0)
0xa97: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa98: GOTO 0xaa1

0xa99: Push("head") // @poff=34
0xa9a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa9b: Pop(1)
0xa9c: Push(Stack[-1])
0xa9d: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa9e: Push("head") // @poff=34
0xa9f: @ LookAsyncCamera(Stack[-1])
0xaa0: Pop(1)
0xaa1: @ CameraWaitForPlayFinish()
0xaa2: Pop(0)
0xaa3: @ ResumeWorld()
0xaa4: Pop(0)
0xaa5: Stack[-21] = (bool) 1
0xaa6: Return(); Pop(18)

0xaa7: PushEmpty(bool, bool)
0xaa8: @ CameraSwitchToNormal()
0xaa9: Pop(0)
0xaaa: PushEmpty(bool)
0xaab: Call2 0xdc3

0xaac: Pop(0)
0xaad: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaae: GOTO 0xab7

0xaaf: Push("head") // @poff=34
0xab0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xab1: Pop(1)
0xab2: Push(Stack[-1])
0xab3: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xab4: Push("head") // @poff=34
0xab5: @ UnlookAsync(Stack[-1])
0xab6: Pop(1)
0xab7: Return(); Pop(2)

0xab8: PushEmpty()
0xab9: PushEmpty(bool, object, float)
0xaba: Stack[-4] = Stack[-2]
0xabb: Stack[-1] = (int) 70
0xabc: Call2 0xac0

0xabd: Stack[-3] = Stack[-5]
0xabe: Pop(3)
0xabf: Return(); Pop(0)

0xac0: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xac1: @@ GetPosition(Stack[-7]); Obj=18 // @poff=110
0xac2: Pop(0)
0xac3: @@ GetEyesHeight(Stack[-8]); Obj=18 // @poff=392
0xac4: Pop(0)
0xac5: Push(CvectorIndex(Stack[-7], 1))
0xac6: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xac7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xac8: @ GetPosition(Stack[-6])
0xac9: Pop(0)
0xaca: @ GetEyesHeight(Stack[-8])
0xacb: Pop(0)
0xacc: Push(CvectorIndex(Stack[-6], 1))
0xacd: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xace: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xacf: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xad0: Push(CvectorIndex(Stack[-5], 1))
0xad1: Stack[-1] = (int) 0
0xad2: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xad3: Pop(0); Push(Stack[-5] | Stack[-5]);
0xad4: Pop(1); Push(Sqrt(Stack[-1]))
0xad5: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xad6: Stack[-4] = -Stack[-5]; Pop(0);
0xad7: Pop(0); Push(Stack[-5] * Stack[-17]);
0xad8: Push([0.0, 10.0, 0.0])
0xad9: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xada: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xadb: @ IsOverrideActive(Stack[-1])
0xadc: Pop(0)
0xadd: Push(Stack[-1])
0xade: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xadf: Stack[-19] = (bool) 0
0xae0: Return(); Pop(16)

0xae1: @ StopWorld()
0xae2: Pop(0)
0xae3: @ CameraTransit(Stack[-2], Stack[-4])
0xae4: Pop(0)
0xae5: Push(CvectorIndex(Stack[-3], 0))
0xae6: Push(CvectorIndex(Stack[-4], 2))
0xae7: @ Rotate(Stack[-2], Stack[-1])
0xae8: Pop(2)
0xae9: @ CameraWaitForPlayFinish()
0xaea: Pop(0)
0xaeb: @ ResumeWorld()
0xaec: Pop(0)
0xaed: Stack[-19] = (bool) 1
0xaee: Return(); Pop(16)

0xaef: PushEmpty()
0xaf0: @ CameraSwitchToNormal()
0xaf1: Pop(0)
0xaf2: Return(); Pop(0)

0xaf3: PushEmpty(float, float, float, float)
0xaf4: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0xaf5: Pop(0)
0xaf6: Push((bool) 0)
0xaf7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xaf8: Pop(1)
0xaf9: Return(); Pop(4)

0xafa: PushEmpty(float, float, float, float)
0xafb: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0xafc: Pop(0)
0xafd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0xafe: Pop(0)
0xaff: Return(); Pop(4)

0xb00: PushEmpty(float, cvector, float, cvector)
0xb01: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=392
0xb02: Pop(0)
0xb03: Stack[-1] = [0.0, 0.0, 0.0]
0xb04: Push(CvectorIndex(Stack[-1], 1))
0xb05: Stack[-3] = Stack[-1]
0xb06: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xb07: Push("head") // @poff=34
0xb08: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xb09: Pop(1)
0xb0a: Return(); Pop(4)

0xb0b: PushEmpty(bool)
0xb0c: Call2 0xdc3

0xb0d: Pop(0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: @ lshStopSpeech()
0xb10: Pop(0)
0xb11: Return(); Pop(0)

0xb12: PushEmpty(bool, bool)
0xb13: PushEmpty(bool, int, int)
0xb14: Stack[-7] = Stack[-2]
0xb15: Stack[-6] = Stack[-1]
0xb16: Call2 0xb3c

0xb17: Pop(2)
0xb18: IF (Stack[-1] == 0) GOTO 0xb1c; Pop(1)

0xb19: Push((int) 0)
0xb1a: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb1b: Pop(1)
0xb1c: Return(); Pop(2)

0xb1d: PushEmpty(int, bool, int, bool)
0xb1e: PushEmpty(bool, int, int)
0xb1f: Stack[-10] = Stack[-2]
0xb20: Stack[-9] = Stack[-1]
0xb21: Call2 0xb3c

0xb22: Pop(2)
0xb23: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb24: @ irand(Stack[-2], Stack[-5])
0xb25: Pop(0)
0xb26: Push((int) 0)
0xb27: Push((int) 1)
0xb28: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb29: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb2a: Pop(2)
0xb2b: Return(); Pop(4)

0xb2c: PushEmpty(object, object)
0xb2d: @ self(Stack[-1])
0xb2e: Pop(0)
0xb2f: Stack[-1] = Stack[-3]
0xb30: Return(); Pop(2)

0xb31: Stack[-1] = 0
0xb32: PushEmpty(float, float)
0xb33: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb34: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb35: Push((float)9.999999974752427e-07)
0xb36: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb37: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb38: Stack[-4] = [0.0, 0.0, 0.0]
0xb39: Return(); Pop(2)

0xb3a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb3b: Return(); Pop(2)

0xb3c: PushEmpty(int, int)
0xb3d: @ irand(Stack[-1], Stack[-3])
0xb3e: Pop(0)
0xb3f: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb40: Return(); Pop(2)

0xb41: PushEmpty()
0xb42: Pop(0); Push(Stack[-2] | Stack[-1]);
0xb43: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb44: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb45: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb46: Pop(1); Push(Sqrt(Stack[-1]))
0xb47: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb48: Return(); Pop(0)

0xb49: PushEmpty()
0xb4a: Push(CvectorIndex(Stack[-2], 0))
0xb4b: Push(CvectorIndex(Stack[-2], 0))
0xb4c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb4d: Push(CvectorIndex(Stack[-3], 2))
0xb4e: Push(CvectorIndex(Stack[-3], 2))
0xb4f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb50: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb51: Return(); Pop(0)

0xb52: PushEmpty()
0xb53: Push(CvectorIndex(Stack[-1], 0))
0xb54: Push(CvectorIndex(Stack[-2], 0))
0xb55: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb56: Push(CvectorIndex(Stack[-2], 2))
0xb57: Push(CvectorIndex(Stack[-3], 2))
0xb58: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb59: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb5a: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb5b: Return(); Pop(0)

0xb5c: PushEmpty()
0xb5d: PushEmpty(float, cvector, cvector)
0xb5e: Stack[-5] = Stack[-2]
0xb5f: Stack[-4] = Stack[-1]
0xb60: Call2 0xb49

0xb61: Pop(2)
0xb62: PushEmpty(float, cvector)
0xb63: Stack[-5] = Stack[-1]
0xb64: Call2 0xb52

0xb65: Pop(1)
0xb66: PushEmpty(float, cvector)
0xb67: Stack[-5] = Stack[-1]
0xb68: Call2 0xb52

0xb69: Pop(1)
0xb6a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb6b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb6c: Return(); Pop(0)

0xb6d: PushEmpty(int, int)
0xb6e: @ GetVariable(Stack[-3], Stack[-1])
0xb6f: Pop(0)
0xb70: Stack[-1] = Stack[-4]
0xb71: Return(); Pop(2)

0xb72: PushEmpty(float, float)
0xb73: @ GetGameTime(Stack[-1])
0xb74: Pop(0)
0xb75: Push((int) 1)
0xb76: PushEmpty(int)
0xb77: Push((int) 24)
0xb78: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb79: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb7a: Return(); Pop(2)

0xb7b: PushEmpty(float, float)
0xb7c: @ GetGameTime(Stack[-1])
0xb7d: Pop(0)
0xb7e: PushEmpty(int)
0xb7f: Stack[-2] = Stack[-1]
0xb80: Push((int) 24)
0xb81: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xb82: Return(); Pop(2)

0xb83: PushEmpty()
0xb84: Return(); Pop(0)

0xb85: PushEmpty()
0xb86: Return(); Pop(0)

0xb87: PushEmpty()
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: Return(); Pop(0)

0xb8b: PushEmpty()
0xb8c: Push("unholster") // @poff=406
0xb8d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8e: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb8f: PushEmpty(bool, object)
0xb90: Stack[-4] = Stack[-1]
0xb91: Call2 0xcae

0xb92: Stack[-2] = Stack[-5]
0xb93: Pop(2)
0xb94: Return(); Pop(0)

0xb95: GOTO 0xba9

0xb96: Push("player_shot") // @poff=426
0xb97: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb98: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb99: PushEmpty(bool, object)
0xb9a: Stack[-4] = Stack[-1]
0xb9b: Call2 0xcbb

0xb9c: Stack[-2] = Stack[-5]
0xb9d: Pop(2)
0xb9e: Return(); Pop(0)

0xb9f: GOTO 0xba9

0xba0: Push("battle") // @poff=450
0xba1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xba9; Pop(1)

0xba3: PushEmpty(bool, object)
0xba4: Stack[-4] = Stack[-1]
0xba5: Call2 0xcd2

0xba6: Stack[-2] = Stack[-5]
0xba7: Pop(2)
0xba8: Return(); Pop(0)

0xba9: Stack[-3] = (bool) 0
0xbaa: Return(); Pop(0)

0xbab: PushEmpty()
0xbac: Push("unholster") // @poff=406
0xbad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbae: IF (Stack[-1] == 0) GOTO 0xbb4; Pop(1)

0xbaf: PushEmpty(object)
0xbb0: Stack[-3] = Stack[-1]
0xbb1: Call2 0xcb3

0xbb2: Pop(1)
0xbb3: GOTO 0xbc3

0xbb4: Push("player_shot") // @poff=426
0xbb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb6: IF (Stack[-1] == 0) GOTO 0xbbc; Pop(1)

0xbb7: PushEmpty(object)
0xbb8: Stack[-3] = Stack[-1]
0xbb9: Call2 0xcca

0xbba: Pop(1)
0xbbb: GOTO 0xbc3

0xbbc: Push("battle") // @poff=450
0xbbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbbf: PushEmpty(object)
0xbc0: Stack[-3] = Stack[-1]
0xbc1: Call2 0xcd9

0xbc2: Pop(1)
0xbc3: Return(); Pop(0)

0xbc4: PushEmpty(bool, bool)
0xbc5: PushEmpty(bool)
0xbc6: Stack[-1] = (bool) 0
0xbc7: PushEmpty(bool, object)
0xbc8: Stack[-6] = Stack[-1]
0xbc9: Call2 0xcae

0xbca: Pop(1)
0xbcb: IF (Stack[-1] == 0) GOTO 0xbd2; Pop(1)

0xbcc: PushEmpty(bool, object)
0xbcd: Stack[-6] = Stack[-1]
0xbce: Call2 0xa01

0xbcf: Pop(1)
0xbd0: IF (Stack[-1] == 0) GOTO 0xbd2; Pop(1)

0xbd1: Stack[-1] = (bool) 1
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd3: @@ IsWeaponHolstered(Stack[-1]); Obj=3 // @poff=464
0xbd4: Pop(0)
0xbd5: Pop(0); Push((bool) Stack[-1] == 0)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd7: Stack[-4] = (bool) 1
0xbd8: Return(); Pop(2)

0xbd9: Stack[-4] = (bool) 0
0xbda: Return(); Pop(2)

0xbdb: PushEmpty()
0xbdc: PushEmpty(object)
0xbdd: Stack[-2] = Stack[-1]
0xbde: Call2 0xcb3

0xbdf: Pop(1)
0xbe0: Return(); Pop(0)

0xbe1: PushEmpty()
0xbe2: PushEmpty(bool, object)
0xbe3: Stack[-3] = Stack[-1]
0xbe4: Call2 0xa01

0xbe5: Pop(1)
0xbe6: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbe7: PushEmpty(object)
0xbe8: Call2 0xb2c

0xbe9: Pop(0)
0xbea: Push((float)-0.029999999329447746)
0xbeb: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xbec: Pop(2)
0xbed: Return(); Pop(0)

0xbee: PushEmpty(object, object)
0xbef: Push("heal") // @poff=482
0xbf0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbf1: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbf2: Push("player") // @poff=492
0xbf3: @ FindActor(Stack[-2], Stack[-1])
0xbf4: Pop(1)
0xbf5: PushEmpty(bool, object)
0xbf6: Stack[-3] = Stack[-1]
0xbf7: Call2 0xcdf

0xbf8: Stack[-2] = Stack[-6]
0xbf9: Pop(2)
0xbfa: Return(); Pop(2)

0xbfb: Stack[-1] = 0
0xbfc: Stack[-4] = (bool) 0
0xbfd: Return(); Pop(2)

0xbfe: PushEmpty(object, object)
0xbff: Push("heal") // @poff=482
0xc00: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc02: Push("player") // @poff=492
0xc03: @ FindActor(Stack[-2], Stack[-1])
0xc04: Pop(1)
0xc05: PushEmpty(object)
0xc06: Stack[-2] = Stack[-1]
0xc07: Call2 0xce2

0xc08: Pop(1)
0xc09: Stack[-1] = 0
0xc0a: Return(); Pop(2)

0xc0b: PushEmpty(string, string)
0xc0c: Stack[-1] = "idle" // @poff=24
0xc0d: Push(Stack[-3])
0xc0e: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xc10: Stack[-1] = Stack[-4]
0xc11: Return(); Pop(2)

0xc12: PushEmpty(int, bool, int, bool)
0xc13: Stack[-2] = (int) 0
0xc14: Push("all") // @poff=16
0xc15: PushEmpty(string, int)
0xc16: Stack[-5] = Stack[-1]
0xc17: Call2 0xc0b

0xc18: Pop(1)
0xc19: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc1a: Pop(2)
0xc1b: Pop(0); Push((bool) Stack[-1] == 0)
0xc1c: IF (Stack[-1] == 0) GOTO 0xc1e; Pop(1)

0xc1d: GOTO 0xc21

0xc1e: Push((int) 1)
0xc1f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc20: GOTO 0xc14

0xc21: Stack[-2] = Stack[-5]
0xc22: Return(); Pop(4)

0xc23: PushEmpty()
0xc24: PushEmpty(bool)
0xc25: Call2 0xdf5

0xc26: Pop(0)
0xc27: IF (Stack[-1] == 0) GOTO 0xc2a; Pop(1)

0xc28: Stack[-2] = (int) 2
0xc29: GOTO 0xc2b

0xc2a: Stack[-2] = (int) 0
0xc2b: Return(); Pop(0)

0xc2c: PushEmpty()
0xc2d: PushEmpty(object)
0xc2e: Stack[-2] = Stack[-1]
0xc2f: Push(-1, 1); TaskCall(3)
0xc30: Call2 0x293

0xc31: Pop(-1, 1); TaskReturn
0xc32: Pop(1)
0xc33: Return(); Pop(0)

0xc34: PushEmpty()
0xc35: PushEmpty(bool, object)
0xc36: Stack[-3] = Stack[-1]
0xc37: Call2 0xa3b

0xc38: Pop(1)
0xc39: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc3a: Stack[-2] = (int) 2
0xc3b: GOTO 0xc3d

0xc3c: Stack[-2] = (int) 0
0xc3d: Return(); Pop(0)

0xc3e: PushEmpty()
0xc3f: PushEmpty(object)
0xc40: Stack[-2] = Stack[-1]
0xc41: Push(-1, 3); TaskCall(4)
0xc42: Call2 0x3a6

0xc43: Pop(-1, 3); TaskReturn
0xc44: Pop(1)
0xc45: Return(); Pop(0)

0xc46: PushEmpty()
0xc47: PushEmpty(bool, object)
0xc48: Stack[-4] = Stack[-1]
0xc49: Call2 0xa3b

0xc4a: Pop(1)
0xc4b: IF (Stack[-1] == 0) GOTO 0xc4e; Pop(1)

0xc4c: Stack[-3] = (int) 2
0xc4d: GOTO 0xc4f

0xc4e: Stack[-3] = (int) 0
0xc4f: Return(); Pop(0)

0xc50: PushEmpty()
0xc51: PushEmpty(object)
0xc52: Stack[-2] = Stack[-1]
0xc53: Push(-1, 3); TaskCall(5)
0xc54: Call2 0x4a2

0xc55: Pop(-1, 3); TaskReturn
0xc56: Pop(1)
0xc57: Return(); Pop(0)

0xc58: PushEmpty(string, bool, string, bool)
0xc59: PushEmpty(bool, object, string)
0xc5a: Stack[-9] = Stack[-2]
0xc5b: Stack[-1] = "class" // @poff=506
0xc5c: Call2 0xa06

0xc5d: Pop(2)
0xc5e: Pop(1); Push((bool) Stack[-1] == 0)
0xc5f: IF (Stack[-1] == 0) GOTO 0xc62; Pop(1)

0xc60: Stack[-8] = (bool) 0
0xc61: Return(); Pop(4)

0xc62: Push("class") // @poff=506
0xc63: @@ GetProperty(Stack[-1], Stack[-3]); Obj=7 // @poff=380
0xc64: Pop(1)
0xc65: Push("rat") // @poff=518
0xc66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc67: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc68: Stack[-8] = (bool) 0
0xc69: Return(); Pop(4)

0xc6a: GOTO 0xc76

0xc6b: Push("rat_big") // @poff=526
0xc6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6e: Stack[-8] = (bool) 0
0xc6f: Return(); Pop(4)

0xc70: GOTO 0xc76

0xc71: Push("dog") // @poff=542
0xc72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc73: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc74: Stack[-8] = (bool) 0
0xc75: Return(); Pop(4)

0xc76: @ CanSee(Stack[-1], Stack[-7])
0xc77: Pop(0)
0xc78: PushEmpty(bool)
0xc79: Stack[-1] = (bool) 1
0xc7a: Push(Stack[-2])
0xc7b: IF (Stack[-1] == 1) GOTO 0xc84; Pop(1)

0xc7c: PushEmpty(float, object)
0xc7d: Stack[-10] = Stack[-1]
0xc7e: Call2 0x9f9

0xc7f: Pop(1)
0xc80: Pop(0); Push(Stack[-7] * Stack[-7]);
0xc81: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xc82: IF (Stack[-1] == 1) GOTO 0xc84; Pop(1)

0xc83: Stack[-1] = (bool) 0
0xc84: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc85: Stack[-8] = (bool) 1
0xc86: Return(); Pop(4)

0xc87: @ CanSee(Stack[-1], Stack[-6])
0xc88: Pop(0)
0xc89: PushEmpty(bool)
0xc8a: Stack[-1] = (bool) 1
0xc8b: Push(Stack[-2])
0xc8c: IF (Stack[-1] == 1) GOTO 0xc95; Pop(1)

0xc8d: PushEmpty(float, object)
0xc8e: Stack[-9] = Stack[-1]
0xc8f: Call2 0x9f9

0xc90: Pop(1)
0xc91: Pop(0); Push(Stack[-7] * Stack[-7]);
0xc92: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xc93: IF (Stack[-1] == 1) GOTO 0xc95; Pop(1)

0xc94: Stack[-1] = (bool) 0
0xc95: IF (Stack[-1] == 0) GOTO 0xc98; Pop(1)

0xc96: Stack[-8] = (bool) 1
0xc97: Return(); Pop(4)

0xc98: Stack[-8] = (bool) 0
0xc99: Return(); Pop(4)

0xc9a: PushEmpty()
0xc9b: Stack[-2] = (int) 2
0xc9c: Return(); Pop(0)

0xc9d: PushEmpty()
0xc9e: PushEmpty(object)
0xc9f: Stack[-2] = Stack[-1]
0xca0: Call2 0xdcd

0xca1: Pop(1)
0xca2: Return(); Pop(0)

0xca3: Return(); Pop(0)

0xca4: PushEmpty()
0xca5: Stack[-2] = (int) 0
0xca6: Return(); Pop(0)

0xca7: PushEmpty()
0xca8: Return(); Pop(0)

0xca9: PushEmpty()
0xcaa: Stack[-3] = (int) 0
0xcab: Return(); Pop(0)

0xcac: PushEmpty()
0xcad: Return(); Pop(0)

0xcae: PushEmpty(bool, bool)
0xcaf: @ CanSee(Stack[-1], Stack[-3])
0xcb0: Pop(0)
0xcb1: Stack[-1] = Stack[-4]
0xcb2: Return(); Pop(2)

0xcb3: PushEmpty()
0xcb4: PushEmpty(object)
0xcb5: Stack[-2] = Stack[-1]
0xcb6: Push(-1, 3); TaskCall(6)
0xcb7: Call2 0x564

0xcb8: Pop(-1, 3); TaskReturn
0xcb9: Pop(1)
0xcba: Return(); Pop(0)

0xcbb: PushEmpty(bool, bool)
0xcbc: @ CanSee(Stack[-1], Stack[-3])
0xcbd: Pop(0)
0xcbe: Stack[-4] = (bool) 1
0xcbf: Push(Stack[-1])
0xcc0: IF (Stack[-1] == 1) GOTO 0xcc9; Pop(1)

0xcc1: PushEmpty(float, object)
0xcc2: Stack[-5] = Stack[-1]
0xcc3: Call2 0x9f9

0xcc4: Pop(1)
0xcc5: Push((int) 4000000)
0xcc6: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xcc7: IF (Stack[-1] == 1) GOTO 0xcc9; Pop(1)

0xcc8: Stack[-4] = (bool) 0
0xcc9: Return(); Pop(2)

0xcca: PushEmpty()
0xccb: PushEmpty(object)
0xccc: Stack[-2] = Stack[-1]
0xccd: Push(-1, 3); TaskCall(7)
0xcce: Call2 0x626

0xccf: Pop(-1, 3); TaskReturn
0xcd0: Pop(1)
0xcd1: Return(); Pop(0)

0xcd2: PushEmpty()
0xcd3: PushEmpty(bool, object)
0xcd4: Stack[-3] = Stack[-1]
0xcd5: Call2 0xcbb

0xcd6: Stack[-2] = Stack[-4]
0xcd7: Pop(2)
0xcd8: Return(); Pop(0)

0xcd9: PushEmpty()
0xcda: PushEmpty(object)
0xcdb: Stack[-2] = Stack[-1]
0xcdc: Call2 0xcca

0xcdd: Pop(1)
0xcde: Return(); Pop(0)

0xcdf: PushEmpty()
0xce0: Stack[-2] = (bool) 0
0xce1: Return(); Pop(0)

0xce2: PushEmpty()
0xce3: Return(); Pop(0)

0xce4: PushEmpty()
0xce5: Push((int) 1000)
0xce6: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=550
0xce7: Pop(1)
0xce8: Return(); Pop(0)

0xce9: PushEmpty()
0xcea: PushEmpty(int, string)
0xceb: Stack[-1] = "branch" // @poff=565
0xcec: Call2 0xb6d

0xced: Pop(1)
0xcee: Push((int) 0)
0xcef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcf0: IF (Stack[-1] == 0) GOTO 0xcf3; Pop(1)

0xcf1: Stack[-2] = (bool) 1
0xcf2: Return(); Pop(0)

0xcf3: Stack[-2] = (bool) 0
0xcf4: Return(); Pop(0)

0xcf5: PushEmpty()
0xcf6: PushEmpty(bool, object)
0xcf7: Stack[-3] = Stack[-1]
0xcf8: Call2 0xd1d

0xcf9: Pop(1)
0xcfa: IF (Stack[-1] == 0) GOTO 0xcfd; Pop(1)

0xcfb: Stack[-2] = (bool) 1
0xcfc: Return(); Pop(0)

0xcfd: Stack[-2] = (bool) 0
0xcfe: Return(); Pop(0)

0xcff: PushEmpty()
0xd00: PushEmpty(bool, object)
0xd01: Stack[-3] = Stack[-1]
0xd02: Call2 0xd24

0xd03: Pop(1)
0xd04: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd05: Stack[-2] = (bool) 1
0xd06: Return(); Pop(0)

0xd07: Stack[-2] = (bool) 0
0xd08: Return(); Pop(0)

0xd09: PushEmpty()
0xd0a: PushEmpty(bool, object)
0xd0b: Stack[-3] = Stack[-1]
0xd0c: Call2 0xd2b

0xd0d: Pop(1)
0xd0e: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd0f: Stack[-2] = (bool) 1
0xd10: Return(); Pop(0)

0xd11: Stack[-2] = (bool) 0
0xd12: Return(); Pop(0)

0xd13: PushEmpty()
0xd14: PushEmpty(bool, object)
0xd15: Stack[-3] = Stack[-1]
0xd16: Call2 0xd40

0xd17: Pop(1)
0xd18: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd19: Stack[-2] = (bool) 1
0xd1a: Return(); Pop(0)

0xd1b: Stack[-2] = (bool) 0
0xd1c: Return(); Pop(0)

0xd1d: PushEmpty()
0xd1e: PushEmpty(int)
0xd1f: Call2 0xb72

0xd20: Pop(0)
0xd21: Push((int) 1)
0xd22: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd23: Return(); Pop(0)

0xd24: PushEmpty()
0xd25: PushEmpty(int)
0xd26: Call2 0xb72

0xd27: Pop(0)
0xd28: Push((int) 5)
0xd29: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xd2a: Return(); Pop(0)

0xd2b: PushEmpty()
0xd2c: PushEmpty(bool)
0xd2d: Stack[-1] = (bool) 0
0xd2e: PushEmpty(int)
0xd2f: Call2 0xb7b

0xd30: Pop(0)
0xd31: Push((int) 0)
0xd32: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd33: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd34: PushEmpty(int)
0xd35: Call2 0xb7b

0xd36: Pop(0)
0xd37: Push((int) 12)
0xd38: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xd39: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd3a: Stack[-1] = (bool) 1
0xd3b: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd3c: Stack[-2] = (bool) 1
0xd3d: Return(); Pop(0)

0xd3e: Stack[-2] = (bool) 0
0xd3f: Return(); Pop(0)

0xd40: PushEmpty()
0xd41: PushEmpty(int)
0xd42: Call2 0xb7b

0xd43: Pop(0)
0xd44: Push((int) 12)
0xd45: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xd46: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd47: Stack[-2] = (bool) 1
0xd48: Return(); Pop(0)

0xd49: Stack[-2] = (bool) 0
0xd4a: Return(); Pop(0)

0xd4b: PushEmpty(int, int)
0xd4c: Push("branch") // @poff=565
0xd4d: @ GetVariable(Stack[-1], Stack[-2])
0xd4e: Pop(1)
0xd4f: Push((int) 0)
0xd50: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd52: Stack[-3] = (int) 1
0xd53: Return(); Pop(2)

0xd54: GOTO 0xd5a

0xd55: Push((int) 1)
0xd56: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd57: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd58: Stack[-3] = (int) 2
0xd59: Return(); Pop(2)

0xd5a: Stack[-3] = (int) 3
0xd5b: Return(); Pop(2)

0xd5c: PushEmpty(int, int)
0xd5d: Push("branch") // @poff=565
0xd5e: @ GetVariable(Stack[-1], Stack[-2])
0xd5f: Pop(1)
0xd60: Stack[-1] = Stack[-3]
0xd61: Return(); Pop(2)

0xd62: PushEmpty()
0xd63: PushEmpty(int)
0xd64: Call2 0xd5c

0xd65: Pop(0)
0xd66: Push((int) 1)
0xd67: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd68: IF (Stack[-1] == 0) GOTO 0xd6c; Pop(1)

0xd69: @ WorkWithCorpse(Stack[-1])
0xd6a: Pop(0)
0xd6b: GOTO 0xd6e

0xd6c: @ Barter(Stack[-1])
0xd6d: Pop(0)
0xd6e: Return(); Pop(0)

0xd6f: PushEmpty(int, int)
0xd70: Push((int) 0)
0xd71: @ ClearSubContainer(Stack[-1])
0xd72: Pop(1)
0xd73: Push(Stack[-3])
0xd74: IF (Stack[-1] == 0) GOTO 0xd8b; Pop(1)

0xd75: PushEmpty(string, int, int, int)
0xd76: Stack[-4] = "rifle_ammo" // @poff=579
0xd77: Stack[-3] = (int) 1
0xd78: Stack[-2] = (int) 2
0xd79: Stack[-1] = (int) 2
0xd7a: Call2 0xb1d

0xd7b: Pop(4)
0xd7c: PushEmpty(string, int, int, int)
0xd7d: Stack[-4] = "revolver_ammo" // @poff=601
0xd7e: Stack[-3] = (int) 1
0xd7f: Stack[-2] = (int) 2
0xd80: Stack[-1] = (int) 2
0xd81: Call2 0xb1d

0xd82: Pop(4)
0xd83: PushEmpty(string, int, int, int)
0xd84: Stack[-4] = "samopal_ammo" // @poff=629
0xd85: Stack[-3] = (int) 2
0xd86: Stack[-2] = (int) 2
0xd87: Stack[-1] = (int) 2
0xd88: Call2 0xb1d

0xd89: Pop(4)
0xd8a: GOTO 0xdba

0xd8b: PushEmpty(string, int, int)
0xd8c: Stack[-3] = "lockpick" // @poff=655
0xd8d: Stack[-2] = (int) 1
0xd8e: Stack[-1] = (int) 4
0xd8f: Call2 0xb12

0xd90: Pop(3)
0xd91: PushEmpty(string, int, int, int)
0xd92: Stack[-4] = "alpha_pills" // @poff=673
0xd93: Stack[-3] = (int) 1
0xd94: Stack[-2] = (int) 2
0xd95: Stack[-1] = (int) 3
0xd96: Call2 0xb1d

0xd97: Pop(4)
0xd98: PushEmpty(string, int, int)
0xd99: Stack[-3] = "meradorm" // @poff=697
0xd9a: Stack[-2] = (int) 1
0xd9b: Stack[-1] = (int) 2
0xd9c: Call2 0xb12

0xd9d: Pop(3)
0xd9e: PushEmpty(string, int, int)
0xd9f: Stack[-3] = "powder" // @poff=715
0xda0: Stack[-2] = (int) 1
0xda1: Stack[-1] = (int) 15
0xda2: Call2 0xb12

0xda3: Pop(3)
0xda4: PushEmpty(int)
0xda5: Call2 0xb72

0xda6: Stack[-1] = Stack[-2]
0xda7: Pop(1)
0xda8: Push((int) 4)
0xda9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xdaa: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xdab: PushEmpty(string, int, int)
0xdac: Stack[-3] = "beta_pills" // @poff=729
0xdad: Stack[-2] = (int) 1
0xdae: Stack[-1] = (int) 2
0xdaf: Call2 0xb12

0xdb0: Pop(3)
0xdb1: Push((int) 6)
0xdb2: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb4: PushEmpty(string, int, int)
0xdb5: Stack[-3] = "gamma_pills" // @poff=751
0xdb6: Stack[-2] = (int) 1
0xdb7: Stack[-1] = (int) 7
0xdb8: Call2 0xb12

0xdb9: Pop(3)
0xdba: Return(); Pop(2)

0xdbb: Stack[-1] = (int) 515561
0xdbc: Return(); Pop(0)

0xdbd: Stack[-1] = (int) 503346
0xdbe: Return(); Pop(0)

0xdbf: Stack[-1] = "ui/NPC_Citizen1.png" // @poff=775
0xdc0: Return(); Pop(0)

0xdc1: Stack[-1] = "ui/NPC_Citizen1_b.png" // @poff=815
0xdc2: Return(); Pop(0)

0xdc3: Stack[-1] = (bool) 0
0xdc4: Return(); Pop(0)

0xdc5: Push(GlobalVars[0])
0xdc6: Stack[-1] = (bool) 0
0xdc7: GlobalVars[0] = Stack[-1]; Pop(1)
0xdc8: PushEmpty(bool)
0xdc9: Stack[-1] = (bool) 0
0xdca: Call2 0xd6f

0xdcb: Pop(1)
0xdcc: Return(); Pop(0)

0xdcd: PushEmpty(bool, bool)
0xdce: Push(GlobalVars[0])
0xdcf: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd0: @ IsOverrideActive(Stack[-1])
0xdd1: Pop(0)
0xdd2: Pop(0); Push((bool) Stack[-1] == 0)
0xdd3: IF (Stack[-1] == 0) GOTO 0xdd8; Pop(1)

0xdd4: PushEmpty(object)
0xdd5: Stack[-4] = Stack[-1]
0xdd6: Call2 0xd62

0xdd7: Pop(1)
0xdd8: Return(); Pop(2)

0xdd9: GOTO 0xdf4

0xdda: Push((int) 1000)
0xddb: PushEmpty(int, object)
0xddc: Stack[-6] = Stack[-1]
0xddd: Push(-2, 1); TaskCall(8)
0xdde: Call2 0x6c3

0xddf: Pop(-2, 1); TaskReturn
0xde0: Pop(1)
0xde1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xde2: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xde3: PushEmpty(bool, object)
0xde4: Stack[-5] = Stack[-1]
0xde5: Call2 0xab8

0xde6: Pop(1)
0xde7: Pop(1); Push((bool) Stack[-1] == 0)
0xde8: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xde9: Return(); Pop(2)

0xdea: PushEmpty(object)
0xdeb: Stack[-4] = Stack[-1]
0xdec: Push(-1, 1); TaskCall(0)
0xded: Call2 0x0

0xdee: Pop(-1, 1); TaskReturn
0xdef: Pop(1)
0xdf0: PushEmpty(object)
0xdf1: Stack[-4] = Stack[-1]
0xdf2: Call2 0xaef

0xdf3: Pop(1)
0xdf4: Return(); Pop(2)

0xdf5: Stack[-1] = (bool) 1
0xdf6: Return(); Pop(0)

0xdf7: PushEmpty()
0xdf8: PushEmpty(bool, object, object, float)
0xdf9: Stack[-7] = Stack[-3]
0xdfa: Stack[-6] = Stack[-2]
0xdfb: Stack[-1] = (float) 500.0
0xdfc: Call2 0xc58

0xdfd: Pop(3)
0xdfe: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdff: Push("ToDie") // @poff=859
0xe00: Push((bool) 1)
0xe01: @ SetProperty(Stack[-2], Stack[-1])
0xe02: Pop(2)
0xe03: Stack[-4] = (bool) 1
0xe04: Return(); Pop(0)

0xe05: Stack[-4] = (bool) 0
0xe06: Return(); Pop(0)

