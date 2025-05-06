GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	Neutral
	all
	idle
	head
	attack_on
	attack_stay
	attack_off
	GetPosition
	Can't retreat, distance: 
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	Can't find lsh animation : 
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
	class
	rat
	rat_big
	dog
	SetReturnValue
	branch
	reputation
	alpha_pills
	meradorm
	beta_pills
	monomicin
	lockpick
	rifle_ammo
	revolver_ammo
	samopal_ammo
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	lshHasAnimation (2 args)
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
		EVENT_11 Op = 0x8b6 Vars = (int, int)

Events:
EVENT_16 Op = 0x1303 Vars = (object, string)
EVENT_41 Op = 0x1305 Vars = (object)
EVENT_22 Op = 0x1307 Vars = (object, int, float, float)
EVENT_43 Op = 0x1309 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x160a

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1261

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x160a

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
0x2c: Call2 0x160c

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
0x38: Call2 0x11cc

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x142d

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x1424

0x44: Stack[-3] = Stack[-2]
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
0x50: Stack[-1] = Stack[-4]
0x51: Call2 0x1427

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x1361

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x13b4

0x5c: Stack[-3] = Stack[-2]
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
0x68: Stack[-1] = Stack[-4]
0x69: Call2 0x13be

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x1642

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x13c6

0x78: Stack[-4] = Stack[-3]
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
0x84: Stack[-1] = Stack[-6]
0x85: Call2 0x13d0

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x141a

0x8c: Stack[-3] = Stack[-2]
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
0x98: Stack[-1] = Stack[-4]
0x99: Call2 0x141d

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x130b

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x132b

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x141f

0xb0: Stack[-4] = Stack[-3]
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
0xbc: Stack[-2] = Stack[-5]
0xbd: Stack[-1] = Stack[-6]
0xbe: Call2 0x1422

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x136e

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x137e

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x1344

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x135b

0xdb: Pop(1)
0xdc: GOTO 0xe1

0xdd: PushEmpty(object)
0xde: Stack[-1] = Stack[-2]
0xdf: Call2 0x114

0xe0: Pop(1)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[-2]
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
0xf8: Call2 0x142d

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
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0x1305

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0x11a9

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
0x125: Stack[-1] = Stack[-7]
0x126: Call2 0x13a3

0x127: Stack[-3] = Stack[-2]
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
0x133: Stack[-1] = Stack[-6]
0x134: Call2 0x13ac

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
0x159: Stack[-1] = Stack[-7]
0x15a: Call2 0x193

0x15b: Stack[-4] = Stack[-2]
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
0x17a: Stack[-3] = Stack[-1]
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
0x196: Stack[-4] = Stack[-1]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: PushEmpty(int, object)
0x19b: Stack[-1] = Stack[-5]
0x19c: Call2 0x1424

0x19d: Stack[-3] = Stack[-2]
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
0x1a9: Stack[-1] = Stack[-4]
0x1aa: Call2 0x1427

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x1361

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x13b4

0x1b5: Stack[-3] = Stack[-2]
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
0x1c1: Stack[-1] = Stack[-4]
0x1c2: Call2 0x13be

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x1642

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x13c6

0x1d1: Stack[-4] = Stack[-3]
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
0x1dd: Stack[-1] = Stack[-6]
0x1de: Call2 0x13d0

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x141a

0x1e5: Stack[-3] = Stack[-2]
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
0x1f1: Stack[-1] = Stack[-4]
0x1f2: Call2 0x141d

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x130b

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x132b

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x141f

0x209: Stack[-4] = Stack[-3]
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
0x215: Stack[-2] = Stack[-5]
0x216: Stack[-1] = Stack[-6]
0x217: Call2 0x1422

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x136e

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x137e

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x142d

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x1344

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x135b

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x11cc

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x1392

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x11cc

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
0x260: Push("all")
0x261: PushEmpty(string, int)
0x262: Stack[-1] = Stack[-7]
0x263: Call2 0x138b

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
0x29c: Call2 0x1160

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x12dc

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x11c1

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
0x2b4: Call2 0x11c1

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
0x2c2: Push("head")
0x2c3: @ UnlookAsync(Stack[-1])
0x2c4: Pop(1)
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x1280

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x1424

0x2cf: Stack[-3] = Stack[-2]
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
0x2db: Stack[-1] = Stack[-4]
0x2dc: Call2 0x1427

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x1361

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x13b4

0x2e7: Stack[-3] = Stack[-2]
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
0x2f3: Stack[-1] = Stack[-4]
0x2f4: Call2 0x13be

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x1642

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x13c6

0x303: Stack[-4] = Stack[-3]
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
0x30f: Stack[-1] = Stack[-6]
0x310: Call2 0x13d0

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x141a

0x317: Stack[-3] = Stack[-2]
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
0x323: Stack[-1] = Stack[-4]
0x324: Call2 0x141d

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x130b

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x132b

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x141f

0x33b: Stack[-4] = Stack[-3]
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
0x347: Stack[-2] = Stack[-5]
0x348: Stack[-1] = Stack[-6]
0x349: Call2 0x1422

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x136e

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x137e

0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push("head")
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
0x36a: Stack[-1] = Stack[-2]
0x36b: Call2 0x1305

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x11a9

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
0x381: Call2 0x1160

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x12dc

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x11c1

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x142d

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x1344

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x135b

0x3a4: Pop(1)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ Face(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push("all")
0x3aa: Push("attack_on")
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push("all")
0x3b0: Push("attack_stay")
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: Push("all")
0x3b6: Push("attack_off")
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: @ StopAsync()
0x3bc: Pop(0)
0x3bd: PushEmpty(object)
0x3be: Stack[-1] = Stack[-2]
0x3bf: Call2 0x3e7

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Call2 0x464

0x3c4: Pop(0)
0x3c5: PushEmpty()
0x3c6: Call2 0x142d

0x3c7: Pop(0)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3ca: @ GetPosition(Stack[-6])
0x3cb: Pop(0)
0x3cc: @@ GetPosition(Stack[-5])
0x3cd: Pop(0)
0x3ce: @ GetDirection(Stack[-4])
0x3cf: Pop(0)
0x3d0: PushEmpty(cvector, cvector)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d3: Call2 0x12b2

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x12b2

0x3d9: Stack[-5] = Stack[-2]
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
0x3ea: Stack[-1] = (float) 1.74533
0x3eb: Call2 0x3c9

0x3ec: Stack[-7] = Stack[-2]
0x3ed: Pop(2)
0x3ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ef: Push((float)2500.0)
0x3f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.61799
0x3f4: Call2 0x3c9

0x3f5: Stack[-7] = Stack[-2]
0x3f6: Pop(2)
0x3f7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: Push("Can't retreat, distance: ")
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
0x409: Call2 0x115b

0x40a: Pop(0)
0x40b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x40c: Push((int) 120)
0x40d: Push((float)0.5)
0x40e: @ SetTimer(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x413: Pop(1)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: GOTO 0x42f

0x419: GOTO 0x42d

0x41a: PushEmpty(cvector, float)
0x41b: Stack[-1] = (float) 2.61799
0x41c: Call2 0x3c9

0x41d: Stack[-4] = Stack[-2]
0x41e: Pop(2)
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Push((float)2500.0)
0x421: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x423: PushEmpty(cvector)
0x424: Call2 0x115b

0x425: Pop(0)
0x426: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x427: Push((int) 120)
0x428: Push((float)0.5)
0x429: @ SetTimer(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x42d

0x42c: GOTO 0x42f

0x42d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x42f: Return(); Pop(10)

0x430: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x431: Push((int) 120)
0x432: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(8)

0x435: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x444: Stack[-1] = (float) 1.74533
0x445: Call2 0x3c9

0x446: Stack[-4] = Stack[-2]
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
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x474

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 0
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: @ Stop()
0x45e: Pop(0)
0x45f: PushEmpty(cvector)
0x460: Call2 0x115b

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
0x470: Stack[-1] = Stack[-2]
0x471: Call2 0x1305

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x1160

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x12c1

0x480: Pop(2)
0x481: Push((float)-0.34202)
0x482: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x485: @ GetPosition(Stack[-6])
0x486: Pop(0)
0x487: @@ GetPosition(Stack[-5])
0x488: Pop(0)
0x489: @ GetDirection(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(cvector, cvector)
0x48c: PushEmpty(cvector, cvector)
0x48d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x48e: Call2 0x12b2

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x12b2

0x494: Stack[-5] = Stack[-2]
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
0x4a5: Stack[-1] = (float) 1.74533
0x4a6: Call2 0x484

0x4a7: Stack[-7] = Stack[-2]
0x4a8: Pop(2)
0x4a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4aa: Push((float)2500.0)
0x4ab: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.61799
0x4af: Call2 0x484

0x4b0: Stack[-7] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: Push("Can't retreat, distance: ")
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
0x4c4: Call2 0x115b

0x4c5: Pop(0)
0x4c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4c7: Push((int) 120)
0x4c8: Push((float)0.5)
0x4c9: @ SetTimer(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4cc: Push((int) 1)
0x4cd: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4ce: Pop(1)
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: GOTO 0x4ea

0x4d4: GOTO 0x4e8

0x4d5: PushEmpty(cvector, float)
0x4d6: Stack[-1] = (float) 2.61799
0x4d7: Call2 0x484

0x4d8: Stack[-4] = Stack[-2]
0x4d9: Pop(2)
0x4da: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4db: Push((float)2500.0)
0x4dc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4de: PushEmpty(cvector)
0x4df: Call2 0x115b

0x4e0: Pop(0)
0x4e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e2: Push((int) 120)
0x4e3: Push((float)0.5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: GOTO 0x4ea

0x4e8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ea: Return(); Pop(10)

0x4eb: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ec: Push((int) 120)
0x4ed: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Return(); Pop(8)

0x4f0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x4ff: Stack[-1] = (float) 1.74533
0x500: Call2 0x484

0x501: Stack[-4] = Stack[-2]
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
0x50f: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x510: PushEmpty(bool)
0x511: Call2 0x52f

0x512: Pop(0)
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 1
0x517: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x518: @ Stop()
0x519: Pop(0)
0x51a: PushEmpty(cvector)
0x51b: Call2 0x115b

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
0x52b: Stack[-1] = Stack[-2]
0x52c: Call2 0x1305

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x1160

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x12c1

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x142d

0x544: Pop(0)
0x545: Return(); Pop(0)

0x546: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x547: @ GetPosition(Stack[-6])
0x548: Pop(0)
0x549: @@ GetPosition(Stack[-5])
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-4])
0x54c: Pop(0)
0x54d: PushEmpty(cvector, cvector)
0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x550: Call2 0x12b2

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x12b2

0x556: Stack[-5] = Stack[-2]
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
0x567: Stack[-1] = (float) 1.74533
0x568: Call2 0x546

0x569: Stack[-7] = Stack[-2]
0x56a: Pop(2)
0x56b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x56c: Push((float)2500.0)
0x56d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.61799
0x571: Call2 0x546

0x572: Stack[-7] = Stack[-2]
0x573: Pop(2)
0x574: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: Push("Can't retreat, distance: ")
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
0x586: Call2 0x115b

0x587: Pop(0)
0x588: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x589: Push((int) 120)
0x58a: Push((float)0.5)
0x58b: @ SetTimer(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 1)
0x58f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x590: Pop(1)
0x591: Push(Stack[-3])
0x592: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x593: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: GOTO 0x5ac

0x596: GOTO 0x5aa

0x597: PushEmpty(cvector, float)
0x598: Stack[-1] = (float) 2.61799
0x599: Call2 0x546

0x59a: Stack[-4] = Stack[-2]
0x59b: Pop(2)
0x59c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59d: Push((float)2500.0)
0x59e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a0: PushEmpty(cvector)
0x5a1: Call2 0x115b

0x5a2: Pop(0)
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a4: Push((int) 120)
0x5a5: Push((float)0.5)
0x5a6: @ SetTimer(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: GOTO 0x5aa

0x5a9: GOTO 0x5ac

0x5aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5ae: Push((int) 120)
0x5af: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(8)

0x5b2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x5c1: Stack[-1] = (float) 1.74533
0x5c2: Call2 0x546

0x5c3: Stack[-4] = Stack[-2]
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
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x5f1

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 0
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: PushEmpty(cvector)
0x5dd: Call2 0x115b

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
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0x1305

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x1160

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x12c1

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x142d

0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x609: @ GetPosition(Stack[-6])
0x60a: Pop(0)
0x60b: @@ GetPosition(Stack[-5])
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-4])
0x60e: Pop(0)
0x60f: PushEmpty(cvector, cvector)
0x610: PushEmpty(cvector, cvector)
0x611: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x612: Call2 0x12b2

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x12b2

0x618: Stack[-5] = Stack[-2]
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
0x629: Stack[-1] = (float) 1.74533
0x62a: Call2 0x608

0x62b: Stack[-7] = Stack[-2]
0x62c: Pop(2)
0x62d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62e: Push((float)2500.0)
0x62f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.61799
0x633: Call2 0x608

0x634: Stack[-7] = Stack[-2]
0x635: Pop(2)
0x636: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: Push("Can't retreat, distance: ")
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
0x648: Call2 0x115b

0x649: Pop(0)
0x64a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x64b: Push((int) 120)
0x64c: Push((float)0.5)
0x64d: @ SetTimer(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x655: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: GOTO 0x66e

0x658: GOTO 0x66c

0x659: PushEmpty(cvector, float)
0x65a: Stack[-1] = (float) 2.61799
0x65b: Call2 0x608

0x65c: Stack[-4] = Stack[-2]
0x65d: Pop(2)
0x65e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x65f: Push((float)2500.0)
0x660: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x662: PushEmpty(cvector)
0x663: Call2 0x115b

0x664: Pop(0)
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x666: Push((int) 120)
0x667: Push((float)0.5)
0x668: @ SetTimer(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: GOTO 0x66c

0x66b: GOTO 0x66e

0x66c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x66e: Return(); Pop(10)

0x66f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x670: Push((int) 120)
0x671: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(8)

0x674: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
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
0x683: Stack[-1] = (float) 1.74533
0x684: Call2 0x608

0x685: Stack[-4] = Stack[-2]
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
0x693: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x694: PushEmpty(bool)
0x695: Call2 0x6b3

0x696: Pop(0)
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 0
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: @ Stop()
0x69d: Pop(0)
0x69e: PushEmpty(cvector)
0x69f: Call2 0x115b

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
0x6af: Stack[-1] = Stack[-2]
0x6b0: Call2 0x1305

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x1160

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x12c1

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x11d1

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x1604

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x1602

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x1606

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x1608

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x156c

0x6e6: Pop(0)
0x6e7: @@ SetPlayerName(Stack[-1])
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
0x6f3: Stack[-2] = Stack[-11]
0x6f4: Stack[-1] = Stack[-6]
0x6f5: Push(-2, 4); TaskCall(9)
0x6f6: Call2 0x70d

0x6f7: Pop(-2, 4); TaskReturn
0x6f8: Pop(2)
0x6f9: @@ IsDialogEnd(Stack[-1])
0x6fa: Pop(0)
0x6fb: Pop(0); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fd: @ sync()
0x6fe: Pop(0)
0x6ff: @@ IsDialogEnd(Stack[-1])
0x700: Pop(0)
0x701: GOTO 0x6fb

0x702: PushEmpty(object)
0x703: Stack[-1] = Stack[-10]
0x704: Call2 0x1215

0x705: Pop(1)
0x706: @ StopDialog(Stack[-4])
0x707: Pop(0)
0x708: @@ GetReturnValue(Stack[-2])
0x709: Pop(0)
0x70a: Stack[-10] = Stack[-2]
0x70b: Return(); Pop(8)

0x70c: Stack[-4] = 0
0x70d: PushEmpty()
0x70e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x710: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x882; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x1475

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x8a0

0x71b: Pop(1)
0x71c: Push((int) 543209)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool, object)
0x722: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x723: Call2 0x148b

0x724: Pop(1)
0x725: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x726: Push((int) 543214)
0x727: Push((int) 45672)
0x728: Push((int) 45670)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: PushEmpty(bool)
0x72c: Stack[-1] = (bool) 1
0x72d: PushEmpty(bool)
0x72e: Stack[-1] = (bool) 1
0x72f: PushEmpty(bool)
0x730: Stack[-1] = (bool) 1
0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call2 0x1481

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x736: PushEmpty(bool, object)
0x737: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x738: Call2 0x148b

0x739: Pop(1)
0x73a: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73b: Stack[-1] = (bool) 0
0x73c: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73d: PushEmpty(bool, object)
0x73e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73f: Call2 0x1495

0x740: Pop(1)
0x741: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x742: Stack[-1] = (bool) 0
0x743: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x744: PushEmpty(bool, object)
0x745: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x746: Call2 0x149f

0x747: Pop(1)
0x748: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x749: Stack[-1] = (bool) 0
0x74a: IF (Stack[-1] == 0) GOTO 0x750; Pop(1)

0x74b: Push((int) 543210)
0x74c: Push((int) -1)
0x74d: Push((int) 45666)
0x74e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74f: Pop(3)
0x750: PushEmpty(bool)
0x751: Stack[-1] = (bool) 1
0x752: PushEmpty(bool)
0x753: Stack[-1] = (bool) 1
0x754: PushEmpty(bool, object)
0x755: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x756: Call2 0x14a9

0x757: Pop(1)
0x758: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x759: PushEmpty(bool, object)
0x75a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75b: Call2 0x14b3

0x75c: Pop(1)
0x75d: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 0
0x75f: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x760: PushEmpty(bool, object)
0x761: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x762: Call2 0x14bd

0x763: Pop(1)
0x764: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x765: Stack[-1] = (bool) 0
0x766: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x767: Push((int) 543211)
0x768: Push((int) -1)
0x769: Push((int) 45667)
0x76a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76b: Pop(3)
0x76c: PushEmpty(bool)
0x76d: Stack[-1] = (bool) 1
0x76e: PushEmpty(bool)
0x76f: Stack[-1] = (bool) 1
0x770: PushEmpty(bool)
0x771: Stack[-1] = (bool) 1
0x772: PushEmpty(bool)
0x773: Stack[-1] = (bool) 1
0x774: PushEmpty(bool, object)
0x775: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x776: Call2 0x14c7

0x777: Pop(1)
0x778: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x779: PushEmpty(bool, object)
0x77a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77b: Call2 0x14d1

0x77c: Pop(1)
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: Stack[-1] = (bool) 0
0x77f: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x780: PushEmpty(bool, object)
0x781: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x782: Call2 0x14db

0x783: Pop(1)
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: Stack[-1] = (bool) 0
0x786: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x787: PushEmpty(bool, object)
0x788: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x789: Call2 0x14e5

0x78a: Pop(1)
0x78b: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x78c: Stack[-1] = (bool) 0
0x78d: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x78e: PushEmpty(bool, object)
0x78f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x790: Call2 0x14ef

0x791: Pop(1)
0x792: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x793: Stack[-1] = (bool) 0
0x794: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x795: Push((int) 543212)
0x796: Push((int) -1)
0x797: Push((int) 45668)
0x798: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x799: Pop(3)
0x79a: PushEmpty(bool)
0x79b: Stack[-1] = (bool) 1
0x79c: PushEmpty(bool)
0x79d: Stack[-1] = (bool) 1
0x79e: PushEmpty(bool)
0x79f: Stack[-1] = (bool) 1
0x7a0: PushEmpty(bool)
0x7a1: Stack[-1] = (bool) 1
0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Call2 0x1481

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a7: PushEmpty(bool, object)
0x7a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a9: Call2 0x148b

0x7aa: Pop(1)
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ac: Stack[-1] = (bool) 0
0x7ad: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7ae: PushEmpty(bool, object)
0x7af: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b0: Call2 0x149f

0x7b1: Pop(1)
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b3: Stack[-1] = (bool) 0
0x7b4: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b5: PushEmpty(bool, object)
0x7b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b7: Call2 0x14a9

0x7b8: Pop(1)
0x7b9: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7ba: Stack[-1] = (bool) 0
0x7bb: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7bc: PushEmpty(bool, object)
0x7bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7be: Call2 0x14bd

0x7bf: Pop(1)
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c1: Stack[-1] = (bool) 0
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c3: Push((int) 543213)
0x7c4: Push((int) -1)
0x7c5: Push((int) 45669)
0x7c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c7: Pop(3)
0x7c8: PushEmpty(bool)
0x7c9: Stack[-1] = (bool) 1
0x7ca: PushEmpty(bool)
0x7cb: Stack[-1] = (bool) 1
0x7cc: PushEmpty(bool)
0x7cd: Stack[-1] = (bool) 1
0x7ce: PushEmpty(bool)
0x7cf: Stack[-1] = (bool) 1
0x7d0: PushEmpty(bool)
0x7d1: Stack[-1] = (bool) 1
0x7d2: PushEmpty(bool)
0x7d3: Stack[-1] = (bool) 1
0x7d4: PushEmpty(bool, object)
0x7d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d6: Call2 0x1495

0x7d7: Pop(1)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7d9: PushEmpty(bool, object)
0x7da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7db: Call2 0x14b3

0x7dc: Pop(1)
0x7dd: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7de: Stack[-1] = (bool) 0
0x7df: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e0: PushEmpty(bool, object)
0x7e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e2: Call2 0x14d1

0x7e3: Pop(1)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e5: Stack[-1] = (bool) 0
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e7: PushEmpty(bool, object)
0x7e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e9: Call2 0x14ef

0x7ea: Pop(1)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: Stack[-1] = (bool) 0
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ee: PushEmpty(bool, object)
0x7ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f0: Call2 0x148b

0x7f1: Pop(1)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f3: Stack[-1] = (bool) 0
0x7f4: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f5: PushEmpty(bool, object)
0x7f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f7: Call2 0x14c7

0x7f8: Pop(1)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: Stack[-1] = (bool) 0
0x7fb: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7fc: PushEmpty(bool, object)
0x7fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fe: Call2 0x14db

0x7ff: Pop(1)
0x800: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x801: Stack[-1] = (bool) 0
0x802: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x803: Push((int) 543215)
0x804: Push((int) -1)
0x805: Push((int) 45671)
0x806: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x807: Pop(3)
0x808: PushEmpty(bool)
0x809: Stack[-1] = (bool) 1
0x80a: PushEmpty(bool)
0x80b: Stack[-1] = (bool) 1
0x80c: PushEmpty(bool)
0x80d: Stack[-1] = (bool) 1
0x80e: PushEmpty(bool, object)
0x80f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x810: Call2 0x14e5

0x811: Pop(1)
0x812: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x813: PushEmpty(bool, object)
0x814: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x815: Call2 0x14d1

0x816: Pop(1)
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: Stack[-1] = (bool) 0
0x819: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81a: PushEmpty(bool, object)
0x81b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81c: Call2 0x14c7

0x81d: Pop(1)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Stack[-1] = (bool) 0
0x820: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x821: PushEmpty(bool, object)
0x822: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x823: Call2 0x14bd

0x824: Pop(1)
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: Stack[-1] = (bool) 0
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: Push((int) 543219)
0x829: Push((int) -1)
0x82a: Push((int) 45675)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: GOTO 0x882

0x82e: PushEmpty(string)
0x82f: Stack[-1] = "Neutral"
0x830: Call2 0x8a0

0x831: Pop(1)
0x832: Push((int) 537240)
0x833: @@ SetMessage(Stack[-1])
0x834: Pop(1)
0x835: @@ ClearReplies()
0x836: Pop(0)
0x837: Push((int) 537241)
0x838: Push((int) -1)
0x839: Push((int) 39084)
0x83a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83b: Pop(3)
0x83c: PushEmpty(bool)
0x83d: Stack[-1] = (bool) 0
0x83e: PushEmpty(bool, object)
0x83f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x840: Call2 0x1469

0x841: Pop(1)
0x842: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x843: PushEmpty(bool, object)
0x844: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x845: Call2 0x1481

0x846: Pop(1)
0x847: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x848: Stack[-1] = (bool) 1
0x849: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84a: Push((int) 537242)
0x84b: Push((int) 39086)
0x84c: Push((int) 39085)
0x84d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84e: Pop(3)
0x84f: PushEmpty(bool)
0x850: Stack[-1] = (bool) 0
0x851: PushEmpty(bool, object)
0x852: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x853: Call2 0x1495

0x854: Pop(1)
0x855: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x856: PushEmpty(bool, object)
0x857: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x858: Call2 0x14f9

0x859: Pop(1)
0x85a: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x85b: Stack[-1] = (bool) 1
0x85c: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x85d: Push((int) 537352)
0x85e: Push((int) 39199)
0x85f: Push((int) 39198)
0x860: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x861: Pop(3)
0x862: PushEmpty(bool)
0x863: Stack[-1] = (bool) 0
0x864: PushEmpty(bool, object)
0x865: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x866: Call2 0x149f

0x867: Pop(1)
0x868: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x869: PushEmpty(bool, object)
0x86a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86b: Call2 0x14f9

0x86c: Pop(1)
0x86d: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86e: Stack[-1] = (bool) 1
0x86f: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x870: Push((int) 537380)
0x871: Push((int) 39227)
0x872: Push((int) 39226)
0x873: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x874: Pop(3)
0x875: Push((int) 537503)
0x876: Push((int) -1)
0x877: Push((int) 39350)
0x878: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x879: Pop(3)
0x87a: Push((int) 537504)
0x87b: Push((int) -1)
0x87c: Push((int) 39351)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: GOTO 0x882

0x880: Return(); Pop(0)

0x881: GOTO 0x711

0x882: PushEmpty(bool)
0x883: Call2 0x160a

0x884: Pop(0)
0x885: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x886: @ lshWaitForAnimEnd()
0x887: Pop(0)
0x888: Push( Stack[3 + Tasks[-1].StackPointer] )
0x889: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x88a: GOTO 0x890

0x88b: PushEmpty(string)
0x88c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88d: Call2 0x1261

0x88e: Pop(1)
0x88f: GOTO 0x886

0x890: GOTO 0x89f

0x891: Push("all")
0x892: Push("idle")
0x893: @ PlayAnimation(Stack[-2], Stack[-1])
0x894: Pop(2)
0x895: @ WaitForAnimEnd()
0x896: Pop(0)
0x897: Push( Stack[3 + Tasks[-1].StackPointer] )
0x898: IF (Stack[-1] == 0) GOTO 0x89a; Pop(1)

0x899: GOTO 0x89f

0x89a: Push("all")
0x89b: Push("idle")
0x89c: @ PlayAnimation(Stack[-2], Stack[-1])
0x89d: Pop(2)
0x89e: GOTO 0x895

0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: PushEmpty(bool)
0x8a2: Call2 0x160a

0x8a3: Pop(0)
0x8a4: Pop(1); Push((bool) Stack[-1] == 0)
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x8a6: Return(); Pop(0)

0x8a7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8aa; Pop(1)

0x8a9: Return(); Pop(0)

0x8aa: PushEmpty(string, bool)
0x8ab: Stack[-2] = Stack[-3]
0x8ac: Push("")
0x8ad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8af: Stack[-1] = (bool) 0
0x8b0: GOTO 0x8b2

0x8b1: Stack[-1] = (bool) 1
0x8b2: Call2 0x1271

0x8b3: Pop(2)
0x8b4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8b5: Return(); Pop(0)

0x8b6: PushEmpty()
0x8b7: Push((int) 1)
0x8b8: IF (Stack[-1] == 0) GOTO 0x115a; Pop(1)

0x8b9: PushEmpty()
0x8ba: Call2 0x128b

0x8bb: Pop(0)
0x8bc: Push((int) 45666)
0x8bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8be: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8bf: PushEmpty(object, object)
0x8c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8c2: Call2 0x1464

0x8c3: Pop(2)
0x8c4: Push((int) 45667)
0x8c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c7: PushEmpty(object, object)
0x8c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8ca: Call2 0x1464

0x8cb: Pop(2)
0x8cc: Push((int) 45668)
0x8cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8cf: PushEmpty(object, object)
0x8d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8d2: Call2 0x1464

0x8d3: Pop(2)
0x8d4: Push((int) 39084)
0x8d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d6: IF (Stack[-1] == 0) GOTO 0x8dc; Pop(1)

0x8d7: PushEmpty(object, object)
0x8d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x8da: Call2 0x1464

0x8db: Pop(2)
0x8dc: Push((int) 45665)
0x8dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8de: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0x8df: PushEmpty(bool, object)
0x8e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e1: Call2 0x1475

0x8e2: Pop(1)
0x8e3: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x8e4: PushEmpty(string)
0x8e5: Stack[-1] = "Neutral"
0x8e6: Call2 0x8a0

0x8e7: Pop(1)
0x8e8: Push((int) 543209)
0x8e9: @@ SetMessage(Stack[-1])
0x8ea: Pop(1)
0x8eb: @@ ClearReplies()
0x8ec: Pop(0)
0x8ed: PushEmpty(bool, object)
0x8ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ef: Call2 0x148b

0x8f0: Pop(1)
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f2: Push((int) 543214)
0x8f3: Push((int) 45672)
0x8f4: Push((int) 45670)
0x8f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: PushEmpty(bool)
0x8f8: Stack[-1] = (bool) 1
0x8f9: PushEmpty(bool)
0x8fa: Stack[-1] = (bool) 1
0x8fb: PushEmpty(bool)
0x8fc: Stack[-1] = (bool) 1
0x8fd: PushEmpty(bool, object)
0x8fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ff: Call2 0x1481

0x900: Pop(1)
0x901: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x902: PushEmpty(bool, object)
0x903: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x904: Call2 0x148b

0x905: Pop(1)
0x906: IF (Stack[-1] == 0) GOTO 0x908; Pop(1)

0x907: Stack[-1] = (bool) 0
0x908: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x909: PushEmpty(bool, object)
0x90a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90b: Call2 0x1495

0x90c: Pop(1)
0x90d: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90e: Stack[-1] = (bool) 0
0x90f: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x910: PushEmpty(bool, object)
0x911: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x912: Call2 0x149f

0x913: Pop(1)
0x914: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x915: Stack[-1] = (bool) 0
0x916: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x917: Push((int) 543210)
0x918: Push((int) -1)
0x919: Push((int) 45666)
0x91a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91b: Pop(3)
0x91c: PushEmpty(bool)
0x91d: Stack[-1] = (bool) 1
0x91e: PushEmpty(bool)
0x91f: Stack[-1] = (bool) 1
0x920: PushEmpty(bool, object)
0x921: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x922: Call2 0x14a9

0x923: Pop(1)
0x924: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x925: PushEmpty(bool, object)
0x926: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x927: Call2 0x14b3

0x928: Pop(1)
0x929: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x92a: Stack[-1] = (bool) 0
0x92b: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92c: PushEmpty(bool, object)
0x92d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92e: Call2 0x14bd

0x92f: Pop(1)
0x930: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x931: Stack[-1] = (bool) 0
0x932: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x933: Push((int) 543211)
0x934: Push((int) -1)
0x935: Push((int) 45667)
0x936: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(3)
0x938: PushEmpty(bool)
0x939: Stack[-1] = (bool) 1
0x93a: PushEmpty(bool)
0x93b: Stack[-1] = (bool) 1
0x93c: PushEmpty(bool)
0x93d: Stack[-1] = (bool) 1
0x93e: PushEmpty(bool)
0x93f: Stack[-1] = (bool) 1
0x940: PushEmpty(bool, object)
0x941: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x942: Call2 0x14c7

0x943: Pop(1)
0x944: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x945: PushEmpty(bool, object)
0x946: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x947: Call2 0x14d1

0x948: Pop(1)
0x949: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x94a: Stack[-1] = (bool) 0
0x94b: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x94c: PushEmpty(bool, object)
0x94d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94e: Call2 0x14db

0x94f: Pop(1)
0x950: IF (Stack[-1] == 0) GOTO 0x952; Pop(1)

0x951: Stack[-1] = (bool) 0
0x952: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x953: PushEmpty(bool, object)
0x954: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x955: Call2 0x14e5

0x956: Pop(1)
0x957: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x958: Stack[-1] = (bool) 0
0x959: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95a: PushEmpty(bool, object)
0x95b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95c: Call2 0x14ef

0x95d: Pop(1)
0x95e: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95f: Stack[-1] = (bool) 0
0x960: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x961: Push((int) 543212)
0x962: Push((int) -1)
0x963: Push((int) 45668)
0x964: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x965: Pop(3)
0x966: PushEmpty(bool)
0x967: Stack[-1] = (bool) 1
0x968: PushEmpty(bool)
0x969: Stack[-1] = (bool) 1
0x96a: PushEmpty(bool)
0x96b: Stack[-1] = (bool) 1
0x96c: PushEmpty(bool)
0x96d: Stack[-1] = (bool) 1
0x96e: PushEmpty(bool, object)
0x96f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x970: Call2 0x1481

0x971: Pop(1)
0x972: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x973: PushEmpty(bool, object)
0x974: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x975: Call2 0x148b

0x976: Pop(1)
0x977: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x978: Stack[-1] = (bool) 0
0x979: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97a: PushEmpty(bool, object)
0x97b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97c: Call2 0x149f

0x97d: Pop(1)
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: Stack[-1] = (bool) 0
0x980: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x981: PushEmpty(bool, object)
0x982: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x983: Call2 0x14a9

0x984: Pop(1)
0x985: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x986: Stack[-1] = (bool) 0
0x987: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x988: PushEmpty(bool, object)
0x989: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98a: Call2 0x14bd

0x98b: Pop(1)
0x98c: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98d: Stack[-1] = (bool) 0
0x98e: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x98f: Push((int) 543213)
0x990: Push((int) -1)
0x991: Push((int) 45669)
0x992: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x993: Pop(3)
0x994: PushEmpty(bool)
0x995: Stack[-1] = (bool) 1
0x996: PushEmpty(bool)
0x997: Stack[-1] = (bool) 1
0x998: PushEmpty(bool)
0x999: Stack[-1] = (bool) 1
0x99a: PushEmpty(bool)
0x99b: Stack[-1] = (bool) 1
0x99c: PushEmpty(bool)
0x99d: Stack[-1] = (bool) 1
0x99e: PushEmpty(bool)
0x99f: Stack[-1] = (bool) 1
0x9a0: PushEmpty(bool, object)
0x9a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a2: Call2 0x1495

0x9a3: Pop(1)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a5: PushEmpty(bool, object)
0x9a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a7: Call2 0x14b3

0x9a8: Pop(1)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9aa: Stack[-1] = (bool) 0
0x9ab: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9ac: PushEmpty(bool, object)
0x9ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ae: Call2 0x14d1

0x9af: Pop(1)
0x9b0: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9b1: Stack[-1] = (bool) 0
0x9b2: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b3: PushEmpty(bool, object)
0x9b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b5: Call2 0x14ef

0x9b6: Pop(1)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9b9; Pop(1)

0x9b8: Stack[-1] = (bool) 0
0x9b9: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9ba: PushEmpty(bool, object)
0x9bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9bc: Call2 0x148b

0x9bd: Pop(1)
0x9be: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9bf: Stack[-1] = (bool) 0
0x9c0: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c1: PushEmpty(bool, object)
0x9c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c3: Call2 0x14c7

0x9c4: Pop(1)
0x9c5: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c6: Stack[-1] = (bool) 0
0x9c7: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9c8: PushEmpty(bool, object)
0x9c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ca: Call2 0x14db

0x9cb: Pop(1)
0x9cc: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cd: Stack[-1] = (bool) 0
0x9ce: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9cf: Push((int) 543215)
0x9d0: Push((int) -1)
0x9d1: Push((int) 45671)
0x9d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d3: Pop(3)
0x9d4: PushEmpty(bool)
0x9d5: Stack[-1] = (bool) 1
0x9d6: PushEmpty(bool)
0x9d7: Stack[-1] = (bool) 1
0x9d8: PushEmpty(bool)
0x9d9: Stack[-1] = (bool) 1
0x9da: PushEmpty(bool, object)
0x9db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9dc: Call2 0x14e5

0x9dd: Pop(1)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9df: PushEmpty(bool, object)
0x9e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e1: Call2 0x14d1

0x9e2: Pop(1)
0x9e3: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e4: Stack[-1] = (bool) 0
0x9e5: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9e6: PushEmpty(bool, object)
0x9e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Call2 0x14c7

0x9e9: Pop(1)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9eb: Stack[-1] = (bool) 0
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9ed: PushEmpty(bool, object)
0x9ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ef: Call2 0x14bd

0x9f0: Pop(1)
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f2: Stack[-1] = (bool) 0
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f9; Pop(1)

0x9f4: Push((int) 543219)
0x9f5: Push((int) -1)
0x9f6: Push((int) 45675)
0x9f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f8: Pop(3)
0x9f9: Return(); Pop(0)

0x9fa: PushEmpty(string)
0x9fb: Stack[-1] = "Neutral"
0x9fc: Call2 0x8a0

0x9fd: Pop(1)
0x9fe: Push((int) 537240)
0x9ff: @@ SetMessage(Stack[-1])
0xa00: Pop(1)
0xa01: @@ ClearReplies()
0xa02: Pop(0)
0xa03: Push((int) 537241)
0xa04: Push((int) -1)
0xa05: Push((int) 39084)
0xa06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa07: Pop(3)
0xa08: PushEmpty(bool)
0xa09: Stack[-1] = (bool) 0
0xa0a: PushEmpty(bool, object)
0xa0b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0c: Call2 0x1469

0xa0d: Pop(1)
0xa0e: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa0f: PushEmpty(bool, object)
0xa10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa11: Call2 0x1481

0xa12: Pop(1)
0xa13: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa14: Stack[-1] = (bool) 1
0xa15: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa16: Push((int) 537242)
0xa17: Push((int) 39086)
0xa18: Push((int) 39085)
0xa19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1a: Pop(3)
0xa1b: PushEmpty(bool)
0xa1c: Stack[-1] = (bool) 0
0xa1d: PushEmpty(bool, object)
0xa1e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1f: Call2 0x1495

0xa20: Pop(1)
0xa21: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa22: PushEmpty(bool, object)
0xa23: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa24: Call2 0x14f9

0xa25: Pop(1)
0xa26: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa27: Stack[-1] = (bool) 1
0xa28: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa29: Push((int) 537352)
0xa2a: Push((int) 39199)
0xa2b: Push((int) 39198)
0xa2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(3)
0xa2e: PushEmpty(bool)
0xa2f: Stack[-1] = (bool) 0
0xa30: PushEmpty(bool, object)
0xa31: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa32: Call2 0x149f

0xa33: Pop(1)
0xa34: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa35: PushEmpty(bool, object)
0xa36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa37: Call2 0x14f9

0xa38: Pop(1)
0xa39: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa3a: Stack[-1] = (bool) 1
0xa3b: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3c: Push((int) 537380)
0xa3d: Push((int) 39227)
0xa3e: Push((int) 39226)
0xa3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(3)
0xa41: Push((int) 537503)
0xa42: Push((int) -1)
0xa43: Push((int) 39350)
0xa44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa45: Pop(3)
0xa46: Push((int) 537504)
0xa47: Push((int) -1)
0xa48: Push((int) 39351)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Return(); Pop(0)

0xa4c: Push((int) 39341)
0xa4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa4e: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4f: Push((int) 39347)
0xa50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa51: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa52: PushEmpty(string)
0xa53: Stack[-1] = "Neutral"
0xa54: Call2 0x8a0

0xa55: Pop(1)
0xa56: Push((int) 537500)
0xa57: @@ SetMessage(Stack[-1])
0xa58: Pop(1)
0xa59: @@ ClearReplies()
0xa5a: Pop(0)
0xa5b: Push((int) 537501)
0xa5c: Push((int) -1)
0xa5d: Push((int) 39348)
0xa5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5f: Pop(3)
0xa60: PushEmpty(bool, object)
0xa61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa62: Call2 0x1469

0xa63: Pop(1)
0xa64: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa65: Push((int) 537502)
0xa66: Push((int) -1)
0xa67: Push((int) 39349)
0xa68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa69: Pop(3)
0xa6a: Return(); Pop(0)

0xa6b: Push((int) 39343)
0xa6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa6e: PushEmpty(string)
0xa6f: Stack[-1] = "Neutral"
0xa70: Call2 0x8a0

0xa71: Pop(1)
0xa72: Push((int) 537496)
0xa73: @@ SetMessage(Stack[-1])
0xa74: Pop(1)
0xa75: @@ ClearReplies()
0xa76: Pop(0)
0xa77: Push((int) 537497)
0xa78: Push((int) -1)
0xa79: Push((int) 39344)
0xa7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7b: Pop(3)
0xa7c: Push((int) 537498)
0xa7d: Push((int) -1)
0xa7e: Push((int) 39345)
0xa7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa80: Pop(3)
0xa81: Return(); Pop(0)

0xa82: Push((int) 39331)
0xa83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa85; Pop(1)

0xa85: Push((int) 39333)
0xa86: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa87: IF (Stack[-1] == 0) GOTO 0xaa1; Pop(1)

0xa88: PushEmpty(string)
0xa89: Stack[-1] = "Neutral"
0xa8a: Call2 0x8a0

0xa8b: Pop(1)
0xa8c: Push((int) 537486)
0xa8d: @@ SetMessage(Stack[-1])
0xa8e: Pop(1)
0xa8f: @@ ClearReplies()
0xa90: Pop(0)
0xa91: Push((int) 537487)
0xa92: Push((int) 39335)
0xa93: Push((int) 39334)
0xa94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa95: Pop(3)
0xa96: PushEmpty(bool, object)
0xa97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa98: Call2 0x1469

0xa99: Pop(1)
0xa9a: IF (Stack[-1] == 0) GOTO 0xaa0; Pop(1)

0xa9b: Push((int) 537491)
0xa9c: Push((int) -1)
0xa9d: Push((int) 39338)
0xa9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9f: Pop(3)
0xaa0: Return(); Pop(0)

0xaa1: Push((int) 39335)
0xaa2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa3: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xaa4: PushEmpty(string)
0xaa5: Stack[-1] = "Neutral"
0xaa6: Call2 0x8a0

0xaa7: Pop(1)
0xaa8: Push((int) 537488)
0xaa9: @@ SetMessage(Stack[-1])
0xaaa: Pop(1)
0xaab: @@ ClearReplies()
0xaac: Pop(0)
0xaad: Push((int) 537489)
0xaae: Push((int) -1)
0xaaf: Push((int) 39336)
0xab0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab1: Pop(3)
0xab2: Push((int) 537490)
0xab3: Push((int) -1)
0xab4: Push((int) 39337)
0xab5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab6: Pop(3)
0xab7: Return(); Pop(0)

0xab8: Push((int) 39321)
0xab9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaba: IF (Stack[-1] == 0) GOTO 0xabb; Pop(1)

0xabb: Push((int) 39323)
0xabc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabd: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xabe: PushEmpty(string)
0xabf: Stack[-1] = "Neutral"
0xac0: Call2 0x8a0

0xac1: Pop(1)
0xac2: Push((int) 537476)
0xac3: @@ SetMessage(Stack[-1])
0xac4: Pop(1)
0xac5: @@ ClearReplies()
0xac6: Pop(0)
0xac7: Push((int) 537477)
0xac8: Push((int) 39325)
0xac9: Push((int) 39324)
0xaca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacb: Pop(3)
0xacc: Push((int) 537481)
0xacd: Push((int) -1)
0xace: Push((int) 39328)
0xacf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad0: Pop(3)
0xad1: Return(); Pop(0)

0xad2: Push((int) 39325)
0xad3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad4: IF (Stack[-1] == 0) GOTO 0xae9; Pop(1)

0xad5: PushEmpty(string)
0xad6: Stack[-1] = "Neutral"
0xad7: Call2 0x8a0

0xad8: Pop(1)
0xad9: Push((int) 537478)
0xada: @@ SetMessage(Stack[-1])
0xadb: Pop(1)
0xadc: @@ ClearReplies()
0xadd: Pop(0)
0xade: Push((int) 537479)
0xadf: Push((int) -1)
0xae0: Push((int) 39326)
0xae1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae2: Pop(3)
0xae3: Push((int) 537480)
0xae4: Push((int) -1)
0xae5: Push((int) 39327)
0xae6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae7: Pop(3)
0xae8: Return(); Pop(0)

0xae9: Push((int) 39308)
0xaea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaeb: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xaec: Push((int) 39310)
0xaed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaee: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xaef: PushEmpty(string)
0xaf0: Stack[-1] = "Neutral"
0xaf1: Call2 0x8a0

0xaf2: Pop(1)
0xaf3: Push((int) 537463)
0xaf4: @@ SetMessage(Stack[-1])
0xaf5: Pop(1)
0xaf6: @@ ClearReplies()
0xaf7: Pop(0)
0xaf8: Push((int) 537464)
0xaf9: Push((int) 39312)
0xafa: Push((int) 39311)
0xafb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafc: Pop(3)
0xafd: Push((int) 537471)
0xafe: Push((int) -1)
0xaff: Push((int) 39318)
0xb00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb01: Pop(3)
0xb02: Return(); Pop(0)

0xb03: Push((int) 39312)
0xb04: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb05: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb06: PushEmpty(string)
0xb07: Stack[-1] = "Neutral"
0xb08: Call2 0x8a0

0xb09: Pop(1)
0xb0a: Push((int) 537465)
0xb0b: @@ SetMessage(Stack[-1])
0xb0c: Pop(1)
0xb0d: @@ ClearReplies()
0xb0e: Pop(0)
0xb0f: Push((int) 537466)
0xb10: Push((int) 39314)
0xb11: Push((int) 39313)
0xb12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb13: Pop(3)
0xb14: Push((int) 537470)
0xb15: Push((int) -1)
0xb16: Push((int) 39317)
0xb17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb18: Pop(3)
0xb19: Return(); Pop(0)

0xb1a: Push((int) 39314)
0xb1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb1c: IF (Stack[-1] == 0) GOTO 0xb31; Pop(1)

0xb1d: PushEmpty(string)
0xb1e: Stack[-1] = "Neutral"
0xb1f: Call2 0x8a0

0xb20: Pop(1)
0xb21: Push((int) 537467)
0xb22: @@ SetMessage(Stack[-1])
0xb23: Pop(1)
0xb24: @@ ClearReplies()
0xb25: Pop(0)
0xb26: Push((int) 537468)
0xb27: Push((int) -1)
0xb28: Push((int) 39315)
0xb29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2a: Pop(3)
0xb2b: Push((int) 537469)
0xb2c: Push((int) -1)
0xb2d: Push((int) 39316)
0xb2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2f: Pop(3)
0xb30: Return(); Pop(0)

0xb31: Push((int) 39299)
0xb32: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb33: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb34: Push((int) 39301)
0xb35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb36: IF (Stack[-1] == 0) GOTO 0xb46; Pop(1)

0xb37: PushEmpty(string)
0xb38: Stack[-1] = "Neutral"
0xb39: Call2 0x8a0

0xb3a: Pop(1)
0xb3b: Push((int) 537454)
0xb3c: @@ SetMessage(Stack[-1])
0xb3d: Pop(1)
0xb3e: @@ ClearReplies()
0xb3f: Pop(0)
0xb40: Push((int) 537455)
0xb41: Push((int) 39303)
0xb42: Push((int) 39302)
0xb43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb44: Pop(3)
0xb45: Return(); Pop(0)

0xb46: Push((int) 39303)
0xb47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb48: IF (Stack[-1] == 0) GOTO 0xb5d; Pop(1)

0xb49: PushEmpty(string)
0xb4a: Stack[-1] = "Neutral"
0xb4b: Call2 0x8a0

0xb4c: Pop(1)
0xb4d: Push((int) 537456)
0xb4e: @@ SetMessage(Stack[-1])
0xb4f: Pop(1)
0xb50: @@ ClearReplies()
0xb51: Pop(0)
0xb52: Push((int) 537457)
0xb53: Push((int) -1)
0xb54: Push((int) 39304)
0xb55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb56: Pop(3)
0xb57: Push((int) 537458)
0xb58: Push((int) -1)
0xb59: Push((int) 39305)
0xb5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5b: Pop(3)
0xb5c: Return(); Pop(0)

0xb5d: Push((int) 39280)
0xb5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb5f: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb60: Push((int) 39294)
0xb61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb62: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb63: PushEmpty(string)
0xb64: Stack[-1] = "Neutral"
0xb65: Call2 0x8a0

0xb66: Pop(1)
0xb67: Push((int) 537448)
0xb68: @@ SetMessage(Stack[-1])
0xb69: Pop(1)
0xb6a: @@ ClearReplies()
0xb6b: Pop(0)
0xb6c: Push((int) 537449)
0xb6d: Push((int) 39284)
0xb6e: Push((int) 39295)
0xb6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb70: Pop(3)
0xb71: Push((int) 537450)
0xb72: Push((int) -1)
0xb73: Push((int) 39297)
0xb74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb75: Pop(3)
0xb76: Return(); Pop(0)

0xb77: Push((int) 39282)
0xb78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb79: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb7a: PushEmpty(string)
0xb7b: Stack[-1] = "Neutral"
0xb7c: Call2 0x8a0

0xb7d: Pop(1)
0xb7e: Push((int) 537436)
0xb7f: @@ SetMessage(Stack[-1])
0xb80: Pop(1)
0xb81: @@ ClearReplies()
0xb82: Pop(0)
0xb83: Push((int) 537437)
0xb84: Push((int) 39284)
0xb85: Push((int) 39283)
0xb86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb87: Pop(3)
0xb88: Return(); Pop(0)

0xb89: Push((int) 39284)
0xb8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8b: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb8c: PushEmpty(string)
0xb8d: Stack[-1] = "Neutral"
0xb8e: Call2 0x8a0

0xb8f: Pop(1)
0xb90: Push((int) 537438)
0xb91: @@ SetMessage(Stack[-1])
0xb92: Pop(1)
0xb93: @@ ClearReplies()
0xb94: Pop(0)
0xb95: Push((int) 537439)
0xb96: Push((int) 39286)
0xb97: Push((int) 39285)
0xb98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb99: Pop(3)
0xb9a: Push((int) 537442)
0xb9b: Push((int) 39289)
0xb9c: Push((int) 39288)
0xb9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9e: Pop(3)
0xb9f: Return(); Pop(0)

0xba0: Push((int) 39289)
0xba1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xba3: PushEmpty(string)
0xba4: Stack[-1] = "Neutral"
0xba5: Call2 0x8a0

0xba6: Pop(1)
0xba7: Push((int) 537443)
0xba8: @@ SetMessage(Stack[-1])
0xba9: Pop(1)
0xbaa: @@ ClearReplies()
0xbab: Pop(0)
0xbac: Push((int) 537444)
0xbad: Push((int) 39291)
0xbae: Push((int) 39290)
0xbaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(3)
0xbb1: Return(); Pop(0)

0xbb2: Push((int) 39291)
0xbb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbb5: PushEmpty(string)
0xbb6: Stack[-1] = "Neutral"
0xbb7: Call2 0x8a0

0xbb8: Pop(1)
0xbb9: Push((int) 537445)
0xbba: @@ SetMessage(Stack[-1])
0xbbb: Pop(1)
0xbbc: @@ ClearReplies()
0xbbd: Pop(0)
0xbbe: Push((int) 537446)
0xbbf: Push((int) -1)
0xbc0: Push((int) 39292)
0xbc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc2: Pop(3)
0xbc3: Return(); Pop(0)

0xbc4: Push((int) 39286)
0xbc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbc7: PushEmpty(string)
0xbc8: Stack[-1] = "Neutral"
0xbc9: Call2 0x8a0

0xbca: Pop(1)
0xbcb: Push((int) 537440)
0xbcc: @@ SetMessage(Stack[-1])
0xbcd: Pop(1)
0xbce: @@ ClearReplies()
0xbcf: Pop(0)
0xbd0: Push((int) 537441)
0xbd1: Push((int) -1)
0xbd2: Push((int) 39287)
0xbd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(3)
0xbd5: Return(); Pop(0)

0xbd6: Push((int) 39270)
0xbd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd8: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd9: Push((int) 39272)
0xbda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbdb: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbdc: PushEmpty(string)
0xbdd: Stack[-1] = "Neutral"
0xbde: Call2 0x8a0

0xbdf: Pop(1)
0xbe0: Push((int) 537426)
0xbe1: @@ SetMessage(Stack[-1])
0xbe2: Pop(1)
0xbe3: @@ ClearReplies()
0xbe4: Pop(0)
0xbe5: Push((int) 537427)
0xbe6: Push((int) 39274)
0xbe7: Push((int) 39273)
0xbe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe9: Pop(3)
0xbea: Push((int) 537431)
0xbeb: Push((int) -1)
0xbec: Push((int) 39277)
0xbed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbee: Pop(3)
0xbef: Return(); Pop(0)

0xbf0: Push((int) 39274)
0xbf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf2: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xbf3: PushEmpty(string)
0xbf4: Stack[-1] = "Neutral"
0xbf5: Call2 0x8a0

0xbf6: Pop(1)
0xbf7: Push((int) 537428)
0xbf8: @@ SetMessage(Stack[-1])
0xbf9: Pop(1)
0xbfa: @@ ClearReplies()
0xbfb: Pop(0)
0xbfc: Push((int) 537429)
0xbfd: Push((int) -1)
0xbfe: Push((int) 39275)
0xbff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc00: Pop(3)
0xc01: Push((int) 537430)
0xc02: Push((int) -1)
0xc03: Push((int) 39276)
0xc04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc05: Pop(3)
0xc06: Return(); Pop(0)

0xc07: Push((int) 39247)
0xc08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc09: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc0a: Push((int) 39265)
0xc0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc0d: PushEmpty(string)
0xc0e: Stack[-1] = "Neutral"
0xc0f: Call2 0x8a0

0xc10: Pop(1)
0xc11: Push((int) 537419)
0xc12: @@ SetMessage(Stack[-1])
0xc13: Pop(1)
0xc14: @@ ClearReplies()
0xc15: Pop(0)
0xc16: Push((int) 537420)
0xc17: Push((int) -1)
0xc18: Push((int) 39266)
0xc19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1a: Pop(3)
0xc1b: Push((int) 537421)
0xc1c: Push((int) -1)
0xc1d: Push((int) 39267)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Return(); Pop(0)

0xc21: Push((int) 39249)
0xc22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = "Neutral"
0xc26: Call2 0x8a0

0xc27: Pop(1)
0xc28: Push((int) 537403)
0xc29: @@ SetMessage(Stack[-1])
0xc2a: Pop(1)
0xc2b: @@ ClearReplies()
0xc2c: Pop(0)
0xc2d: Push((int) 537404)
0xc2e: Push((int) 39251)
0xc2f: Push((int) 39250)
0xc30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc31: Pop(3)
0xc32: Push((int) 537417)
0xc33: Push((int) -1)
0xc34: Push((int) 39263)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Return(); Pop(0)

0xc38: Push((int) 39251)
0xc39: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3a: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc3b: PushEmpty(string)
0xc3c: Stack[-1] = "Neutral"
0xc3d: Call2 0x8a0

0xc3e: Pop(1)
0xc3f: Push((int) 537405)
0xc40: @@ SetMessage(Stack[-1])
0xc41: Pop(1)
0xc42: @@ ClearReplies()
0xc43: Pop(0)
0xc44: Push((int) 537406)
0xc45: Push((int) 39253)
0xc46: Push((int) 39252)
0xc47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc48: Pop(3)
0xc49: PushEmpty(bool, object)
0xc4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc4b: Call2 0x1469

0xc4c: Pop(1)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc53; Pop(1)

0xc4e: Push((int) 537416)
0xc4f: Push((int) -1)
0xc50: Push((int) 39262)
0xc51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(3)
0xc53: Return(); Pop(0)

0xc54: Push((int) 39253)
0xc55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc57: PushEmpty(string)
0xc58: Stack[-1] = "Neutral"
0xc59: Call2 0x8a0

0xc5a: Pop(1)
0xc5b: Push((int) 537407)
0xc5c: @@ SetMessage(Stack[-1])
0xc5d: Pop(1)
0xc5e: @@ ClearReplies()
0xc5f: Pop(0)
0xc60: Push((int) 537408)
0xc61: Push((int) 39255)
0xc62: Push((int) 39254)
0xc63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc64: Pop(3)
0xc65: Push((int) 537415)
0xc66: Push((int) -1)
0xc67: Push((int) 39261)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Return(); Pop(0)

0xc6b: Push((int) 39255)
0xc6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc6e: PushEmpty(string)
0xc6f: Stack[-1] = "Neutral"
0xc70: Call2 0x8a0

0xc71: Pop(1)
0xc72: Push((int) 537409)
0xc73: @@ SetMessage(Stack[-1])
0xc74: Pop(1)
0xc75: @@ ClearReplies()
0xc76: Pop(0)
0xc77: Push((int) 537410)
0xc78: Push((int) 39257)
0xc79: Push((int) 39256)
0xc7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7b: Pop(3)
0xc7c: Push((int) 537414)
0xc7d: Push((int) -1)
0xc7e: Push((int) 39260)
0xc7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc80: Pop(3)
0xc81: Return(); Pop(0)

0xc82: Push((int) 39257)
0xc83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc99; Pop(1)

0xc85: PushEmpty(string)
0xc86: Stack[-1] = "Neutral"
0xc87: Call2 0x8a0

0xc88: Pop(1)
0xc89: Push((int) 537411)
0xc8a: @@ SetMessage(Stack[-1])
0xc8b: Pop(1)
0xc8c: @@ ClearReplies()
0xc8d: Pop(0)
0xc8e: Push((int) 537412)
0xc8f: Push((int) -1)
0xc90: Push((int) 39258)
0xc91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: Push((int) 537413)
0xc94: Push((int) -1)
0xc95: Push((int) 39259)
0xc96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc97: Pop(3)
0xc98: Return(); Pop(0)

0xc99: Push((int) 39237)
0xc9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xc9c; Pop(1)

0xc9c: Push((int) 39244)
0xc9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9e: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xc9f: PushEmpty(string)
0xca0: Stack[-1] = "Neutral"
0xca1: Call2 0x8a0

0xca2: Pop(1)
0xca3: Push((int) 537398)
0xca4: @@ SetMessage(Stack[-1])
0xca5: Pop(1)
0xca6: @@ ClearReplies()
0xca7: Pop(0)
0xca8: Push((int) 537399)
0xca9: Push((int) -1)
0xcaa: Push((int) 39245)
0xcab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcac: Pop(3)
0xcad: Return(); Pop(0)

0xcae: Push((int) 39239)
0xcaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcc0; Pop(1)

0xcb1: PushEmpty(string)
0xcb2: Stack[-1] = "Neutral"
0xcb3: Call2 0x8a0

0xcb4: Pop(1)
0xcb5: Push((int) 537393)
0xcb6: @@ SetMessage(Stack[-1])
0xcb7: Pop(1)
0xcb8: @@ ClearReplies()
0xcb9: Pop(0)
0xcba: Push((int) 537394)
0xcbb: Push((int) 39241)
0xcbc: Push((int) 39240)
0xcbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbe: Pop(3)
0xcbf: Return(); Pop(0)

0xcc0: Push((int) 39241)
0xcc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc2: IF (Stack[-1] == 0) GOTO 0xcd2; Pop(1)

0xcc3: PushEmpty(string)
0xcc4: Stack[-1] = "Neutral"
0xcc5: Call2 0x8a0

0xcc6: Pop(1)
0xcc7: Push((int) 537395)
0xcc8: @@ SetMessage(Stack[-1])
0xcc9: Pop(1)
0xcca: @@ ClearReplies()
0xccb: Pop(0)
0xccc: Push((int) 537396)
0xccd: Push((int) -1)
0xcce: Push((int) 39242)
0xccf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd0: Pop(3)
0xcd1: Return(); Pop(0)

0xcd2: Push((int) 39227)
0xcd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd4: IF (Stack[-1] == 0) GOTO 0xcee; Pop(1)

0xcd5: PushEmpty(string)
0xcd6: Stack[-1] = "Neutral"
0xcd7: Call2 0x8a0

0xcd8: Pop(1)
0xcd9: Push((int) 537381)
0xcda: @@ SetMessage(Stack[-1])
0xcdb: Pop(1)
0xcdc: @@ ClearReplies()
0xcdd: Pop(0)
0xcde: Push((int) 537382)
0xcdf: Push((int) 39229)
0xce0: Push((int) 39228)
0xce1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce2: Pop(3)
0xce3: Push((int) 537386)
0xce4: Push((int) 39233)
0xce5: Push((int) 39232)
0xce6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce7: Pop(3)
0xce8: Push((int) 537389)
0xce9: Push((int) -1)
0xcea: Push((int) 39235)
0xceb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcec: Pop(3)
0xced: Return(); Pop(0)

0xcee: Push((int) 39233)
0xcef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf0: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcf1: PushEmpty(string)
0xcf2: Stack[-1] = "Neutral"
0xcf3: Call2 0x8a0

0xcf4: Pop(1)
0xcf5: Push((int) 537387)
0xcf6: @@ SetMessage(Stack[-1])
0xcf7: Pop(1)
0xcf8: @@ ClearReplies()
0xcf9: Pop(0)
0xcfa: Push((int) 537388)
0xcfb: Push((int) -1)
0xcfc: Push((int) 39234)
0xcfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfe: Pop(3)
0xcff: Return(); Pop(0)

0xd00: Push((int) 39229)
0xd01: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd02: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd03: PushEmpty(string)
0xd04: Stack[-1] = "Neutral"
0xd05: Call2 0x8a0

0xd06: Pop(1)
0xd07: Push((int) 537383)
0xd08: @@ SetMessage(Stack[-1])
0xd09: Pop(1)
0xd0a: @@ ClearReplies()
0xd0b: Pop(0)
0xd0c: Push((int) 537384)
0xd0d: Push((int) -1)
0xd0e: Push((int) 39230)
0xd0f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd10: Pop(3)
0xd11: Push((int) 537385)
0xd12: Push((int) -1)
0xd13: Push((int) 39231)
0xd14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd15: Pop(3)
0xd16: Return(); Pop(0)

0xd17: Push((int) 39206)
0xd18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd19: IF (Stack[-1] == 0) GOTO 0xd1a; Pop(1)

0xd1a: Push((int) 39223)
0xd1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd1d: PushEmpty(string)
0xd1e: Stack[-1] = "Neutral"
0xd1f: Call2 0x8a0

0xd20: Pop(1)
0xd21: Push((int) 537377)
0xd22: @@ SetMessage(Stack[-1])
0xd23: Pop(1)
0xd24: @@ ClearReplies()
0xd25: Pop(0)
0xd26: Push((int) 537378)
0xd27: Push((int) -1)
0xd28: Push((int) 39224)
0xd29: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2a: Pop(3)
0xd2b: Return(); Pop(0)

0xd2c: Push((int) 39208)
0xd2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2e: IF (Stack[-1] == 0) GOTO 0xd43; Pop(1)

0xd2f: PushEmpty(string)
0xd30: Stack[-1] = "Neutral"
0xd31: Call2 0x8a0

0xd32: Pop(1)
0xd33: Push((int) 537362)
0xd34: @@ SetMessage(Stack[-1])
0xd35: Pop(1)
0xd36: @@ ClearReplies()
0xd37: Pop(0)
0xd38: Push((int) 537363)
0xd39: Push((int) 39210)
0xd3a: Push((int) 39209)
0xd3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3c: Pop(3)
0xd3d: Push((int) 537369)
0xd3e: Push((int) 39216)
0xd3f: Push((int) 39215)
0xd40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd41: Pop(3)
0xd42: Return(); Pop(0)

0xd43: Push((int) 39216)
0xd44: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd45: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd46: PushEmpty(string)
0xd47: Stack[-1] = "Neutral"
0xd48: Call2 0x8a0

0xd49: Pop(1)
0xd4a: Push((int) 537370)
0xd4b: @@ SetMessage(Stack[-1])
0xd4c: Pop(1)
0xd4d: @@ ClearReplies()
0xd4e: Pop(0)
0xd4f: Push((int) 537371)
0xd50: Push((int) 39218)
0xd51: Push((int) 39217)
0xd52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd53: Pop(3)
0xd54: Push((int) 537375)
0xd55: Push((int) -1)
0xd56: Push((int) 39221)
0xd57: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd58: Pop(3)
0xd59: Return(); Pop(0)

0xd5a: Push((int) 39218)
0xd5b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5c: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd5d: PushEmpty(string)
0xd5e: Stack[-1] = "Neutral"
0xd5f: Call2 0x8a0

0xd60: Pop(1)
0xd61: Push((int) 537372)
0xd62: @@ SetMessage(Stack[-1])
0xd63: Pop(1)
0xd64: @@ ClearReplies()
0xd65: Pop(0)
0xd66: Push((int) 537373)
0xd67: Push((int) -1)
0xd68: Push((int) 39219)
0xd69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6a: Pop(3)
0xd6b: Push((int) 537374)
0xd6c: Push((int) -1)
0xd6d: Push((int) 39220)
0xd6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6f: Pop(3)
0xd70: Return(); Pop(0)

0xd71: Push((int) 39210)
0xd72: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd73: IF (Stack[-1] == 0) GOTO 0xd83; Pop(1)

0xd74: PushEmpty(string)
0xd75: Stack[-1] = "Neutral"
0xd76: Call2 0x8a0

0xd77: Pop(1)
0xd78: Push((int) 537364)
0xd79: @@ SetMessage(Stack[-1])
0xd7a: Pop(1)
0xd7b: @@ ClearReplies()
0xd7c: Pop(0)
0xd7d: Push((int) 537365)
0xd7e: Push((int) 39212)
0xd7f: Push((int) 39211)
0xd80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd81: Pop(3)
0xd82: Return(); Pop(0)

0xd83: Push((int) 39212)
0xd84: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd85: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd86: PushEmpty(string)
0xd87: Stack[-1] = "Neutral"
0xd88: Call2 0x8a0

0xd89: Pop(1)
0xd8a: Push((int) 537366)
0xd8b: @@ SetMessage(Stack[-1])
0xd8c: Pop(1)
0xd8d: @@ ClearReplies()
0xd8e: Pop(0)
0xd8f: Push((int) 537367)
0xd90: Push((int) -1)
0xd91: Push((int) 39213)
0xd92: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd93: Pop(3)
0xd94: Push((int) 537368)
0xd95: Push((int) -1)
0xd96: Push((int) 39214)
0xd97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd98: Pop(3)
0xd99: Return(); Pop(0)

0xd9a: Push((int) 39199)
0xd9b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9c: IF (Stack[-1] == 0) GOTO 0xdb1; Pop(1)

0xd9d: PushEmpty(string)
0xd9e: Stack[-1] = "Neutral"
0xd9f: Call2 0x8a0

0xda0: Pop(1)
0xda1: Push((int) 537353)
0xda2: @@ SetMessage(Stack[-1])
0xda3: Pop(1)
0xda4: @@ ClearReplies()
0xda5: Pop(0)
0xda6: Push((int) 537354)
0xda7: Push((int) 39201)
0xda8: Push((int) 39200)
0xda9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaa: Pop(3)
0xdab: Push((int) 537358)
0xdac: Push((int) -1)
0xdad: Push((int) 39204)
0xdae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdaf: Pop(3)
0xdb0: Return(); Pop(0)

0xdb1: Push((int) 39201)
0xdb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb3: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdb4: PushEmpty(string)
0xdb5: Stack[-1] = "Neutral"
0xdb6: Call2 0x8a0

0xdb7: Pop(1)
0xdb8: Push((int) 537355)
0xdb9: @@ SetMessage(Stack[-1])
0xdba: Pop(1)
0xdbb: @@ ClearReplies()
0xdbc: Pop(0)
0xdbd: Push((int) 537356)
0xdbe: Push((int) -1)
0xdbf: Push((int) 39202)
0xdc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc1: Pop(3)
0xdc2: Push((int) 537357)
0xdc3: Push((int) -1)
0xdc4: Push((int) 39203)
0xdc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc6: Pop(3)
0xdc7: Return(); Pop(0)

0xdc8: Push((int) 39176)
0xdc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdca: IF (Stack[-1] == 0) GOTO 0xdcb; Pop(1)

0xdcb: Push((int) 39188)
0xdcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdcd: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xdce: PushEmpty(string)
0xdcf: Stack[-1] = "Neutral"
0xdd0: Call2 0x8a0

0xdd1: Pop(1)
0xdd2: Push((int) 537342)
0xdd3: @@ SetMessage(Stack[-1])
0xdd4: Pop(1)
0xdd5: @@ ClearReplies()
0xdd6: Pop(0)
0xdd7: Push((int) 537343)
0xdd8: Push((int) 39190)
0xdd9: Push((int) 39189)
0xdda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddb: Pop(3)
0xddc: Push((int) 537349)
0xddd: Push((int) -1)
0xdde: Push((int) 39195)
0xddf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde0: Pop(3)
0xde1: Return(); Pop(0)

0xde2: Push((int) 39190)
0xde3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xdf9; Pop(1)

0xde5: PushEmpty(string)
0xde6: Stack[-1] = "Neutral"
0xde7: Call2 0x8a0

0xde8: Pop(1)
0xde9: Push((int) 537344)
0xdea: @@ SetMessage(Stack[-1])
0xdeb: Pop(1)
0xdec: @@ ClearReplies()
0xded: Pop(0)
0xdee: Push((int) 537345)
0xdef: Push((int) 39192)
0xdf0: Push((int) 39191)
0xdf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf2: Pop(3)
0xdf3: Push((int) 537348)
0xdf4: Push((int) -1)
0xdf5: Push((int) 39194)
0xdf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf7: Pop(3)
0xdf8: Return(); Pop(0)

0xdf9: Push((int) 39192)
0xdfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdfb: IF (Stack[-1] == 0) GOTO 0xe0b; Pop(1)

0xdfc: PushEmpty(string)
0xdfd: Stack[-1] = "Neutral"
0xdfe: Call2 0x8a0

0xdff: Pop(1)
0xe00: Push((int) 537346)
0xe01: @@ SetMessage(Stack[-1])
0xe02: Pop(1)
0xe03: @@ ClearReplies()
0xe04: Pop(0)
0xe05: Push((int) 537347)
0xe06: Push((int) -1)
0xe07: Push((int) 39193)
0xe08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe09: Pop(3)
0xe0a: Return(); Pop(0)

0xe0b: Push((int) 39178)
0xe0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0d: IF (Stack[-1] == 0) GOTO 0xe22; Pop(1)

0xe0e: PushEmpty(string)
0xe0f: Stack[-1] = "Neutral"
0xe10: Call2 0x8a0

0xe11: Pop(1)
0xe12: Push((int) 537332)
0xe13: @@ SetMessage(Stack[-1])
0xe14: Pop(1)
0xe15: @@ ClearReplies()
0xe16: Pop(0)
0xe17: Push((int) 537333)
0xe18: Push((int) 39180)
0xe19: Push((int) 39179)
0xe1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1b: Pop(3)
0xe1c: Push((int) 537336)
0xe1d: Push((int) 39183)
0xe1e: Push((int) 39182)
0xe1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe20: Pop(3)
0xe21: Return(); Pop(0)

0xe22: Push((int) 39183)
0xe23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe24: IF (Stack[-1] == 0) GOTO 0xe34; Pop(1)

0xe25: PushEmpty(string)
0xe26: Stack[-1] = "Neutral"
0xe27: Call2 0x8a0

0xe28: Pop(1)
0xe29: Push((int) 537337)
0xe2a: @@ SetMessage(Stack[-1])
0xe2b: Pop(1)
0xe2c: @@ ClearReplies()
0xe2d: Pop(0)
0xe2e: Push((int) 537338)
0xe2f: Push((int) 39185)
0xe30: Push((int) 39184)
0xe31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe32: Pop(3)
0xe33: Return(); Pop(0)

0xe34: Push((int) 39185)
0xe35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe36: IF (Stack[-1] == 0) GOTO 0xe46; Pop(1)

0xe37: PushEmpty(string)
0xe38: Stack[-1] = "Neutral"
0xe39: Call2 0x8a0

0xe3a: Pop(1)
0xe3b: Push((int) 537339)
0xe3c: @@ SetMessage(Stack[-1])
0xe3d: Pop(1)
0xe3e: @@ ClearReplies()
0xe3f: Pop(0)
0xe40: Push((int) 537340)
0xe41: Push((int) 43752)
0xe42: Push((int) 39186)
0xe43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe44: Pop(3)
0xe45: Return(); Pop(0)

0xe46: Push((int) 43752)
0xe47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe48: IF (Stack[-1] == 0) GOTO 0xe58; Pop(1)

0xe49: PushEmpty(string)
0xe4a: Stack[-1] = "Neutral"
0xe4b: Call2 0x8a0

0xe4c: Pop(1)
0xe4d: Push((int) 541583)
0xe4e: @@ SetMessage(Stack[-1])
0xe4f: Pop(1)
0xe50: @@ ClearReplies()
0xe51: Pop(0)
0xe52: Push((int) 541584)
0xe53: Push((int) -1)
0xe54: Push((int) 43753)
0xe55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe56: Pop(3)
0xe57: Return(); Pop(0)

0xe58: Push((int) 39180)
0xe59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5a: IF (Stack[-1] == 0) GOTO 0xe6a; Pop(1)

0xe5b: PushEmpty(string)
0xe5c: Stack[-1] = "Neutral"
0xe5d: Call2 0x8a0

0xe5e: Pop(1)
0xe5f: Push((int) 537334)
0xe60: @@ SetMessage(Stack[-1])
0xe61: Pop(1)
0xe62: @@ ClearReplies()
0xe63: Pop(0)
0xe64: Push((int) 537335)
0xe65: Push((int) -1)
0xe66: Push((int) 39181)
0xe67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe68: Pop(3)
0xe69: Return(); Pop(0)

0xe6a: Push((int) 39122)
0xe6b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6c: IF (Stack[-1] == 0) GOTO 0xe6d; Pop(1)

0xe6d: Push((int) 39151)
0xe6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6f: IF (Stack[-1] == 0) GOTO 0xe84; Pop(1)

0xe70: PushEmpty(string)
0xe71: Stack[-1] = "Neutral"
0xe72: Call2 0x8a0

0xe73: Pop(1)
0xe74: Push((int) 537305)
0xe75: @@ SetMessage(Stack[-1])
0xe76: Pop(1)
0xe77: @@ ClearReplies()
0xe78: Pop(0)
0xe79: Push((int) 537306)
0xe7a: Push((int) 39153)
0xe7b: Push((int) 39152)
0xe7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7d: Pop(3)
0xe7e: Push((int) 537318)
0xe7f: Push((int) 39165)
0xe80: Push((int) 39164)
0xe81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe82: Pop(3)
0xe83: Return(); Pop(0)

0xe84: Push((int) 39165)
0xe85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe86: IF (Stack[-1] == 0) GOTO 0xe9b; Pop(1)

0xe87: PushEmpty(string)
0xe88: Stack[-1] = "Neutral"
0xe89: Call2 0x8a0

0xe8a: Pop(1)
0xe8b: Push((int) 537319)
0xe8c: @@ SetMessage(Stack[-1])
0xe8d: Pop(1)
0xe8e: @@ ClearReplies()
0xe8f: Pop(0)
0xe90: Push((int) 537320)
0xe91: Push((int) -1)
0xe92: Push((int) 39166)
0xe93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe94: Pop(3)
0xe95: Push((int) 537321)
0xe96: Push((int) 39168)
0xe97: Push((int) 39167)
0xe98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe99: Pop(3)
0xe9a: Return(); Pop(0)

0xe9b: Push((int) 39168)
0xe9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9d: IF (Stack[-1] == 0) GOTO 0xeb2; Pop(1)

0xe9e: PushEmpty(string)
0xe9f: Stack[-1] = "Neutral"
0xea0: Call2 0x8a0

0xea1: Pop(1)
0xea2: Push((int) 537322)
0xea3: @@ SetMessage(Stack[-1])
0xea4: Pop(1)
0xea5: @@ ClearReplies()
0xea6: Pop(0)
0xea7: Push((int) 537323)
0xea8: Push((int) -1)
0xea9: Push((int) 39169)
0xeaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeab: Pop(3)
0xeac: Push((int) 537324)
0xead: Push((int) 39171)
0xeae: Push((int) 39170)
0xeaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb0: Pop(3)
0xeb1: Return(); Pop(0)

0xeb2: Push((int) 39171)
0xeb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb4: IF (Stack[-1] == 0) GOTO 0xec4; Pop(1)

0xeb5: PushEmpty(string)
0xeb6: Stack[-1] = "Neutral"
0xeb7: Call2 0x8a0

0xeb8: Pop(1)
0xeb9: Push((int) 537325)
0xeba: @@ SetMessage(Stack[-1])
0xebb: Pop(1)
0xebc: @@ ClearReplies()
0xebd: Pop(0)
0xebe: Push((int) 537326)
0xebf: Push((int) -1)
0xec0: Push((int) 39172)
0xec1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec2: Pop(3)
0xec3: Return(); Pop(0)

0xec4: Push((int) 39153)
0xec5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec6: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xec7: PushEmpty(string)
0xec8: Stack[-1] = "Neutral"
0xec9: Call2 0x8a0

0xeca: Pop(1)
0xecb: Push((int) 537307)
0xecc: @@ SetMessage(Stack[-1])
0xecd: Pop(1)
0xece: @@ ClearReplies()
0xecf: Pop(0)
0xed0: Push((int) 537308)
0xed1: Push((int) 39155)
0xed2: Push((int) 39154)
0xed3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed4: Pop(3)
0xed5: Push((int) 537317)
0xed6: Push((int) -1)
0xed7: Push((int) 39163)
0xed8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed9: Pop(3)
0xeda: Return(); Pop(0)

0xedb: Push((int) 39155)
0xedc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xedd: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xede: PushEmpty(string)
0xedf: Stack[-1] = "Neutral"
0xee0: Call2 0x8a0

0xee1: Pop(1)
0xee2: Push((int) 537309)
0xee3: @@ SetMessage(Stack[-1])
0xee4: Pop(1)
0xee5: @@ ClearReplies()
0xee6: Pop(0)
0xee7: Push((int) 537310)
0xee8: Push((int) 39157)
0xee9: Push((int) 39156)
0xeea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeeb: Pop(3)
0xeec: Push((int) 537313)
0xeed: Push((int) 39160)
0xeee: Push((int) 39159)
0xeef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef0: Pop(3)
0xef1: Return(); Pop(0)

0xef2: Push((int) 39160)
0xef3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef4: IF (Stack[-1] == 0) GOTO 0xf09; Pop(1)

0xef5: PushEmpty(string)
0xef6: Stack[-1] = "Neutral"
0xef7: Call2 0x8a0

0xef8: Pop(1)
0xef9: Push((int) 537314)
0xefa: @@ SetMessage(Stack[-1])
0xefb: Pop(1)
0xefc: @@ ClearReplies()
0xefd: Pop(0)
0xefe: Push((int) 537315)
0xeff: Push((int) -1)
0xf00: Push((int) 39161)
0xf01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf02: Pop(3)
0xf03: Push((int) 537316)
0xf04: Push((int) -1)
0xf05: Push((int) 39162)
0xf06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf07: Pop(3)
0xf08: Return(); Pop(0)

0xf09: Push((int) 39157)
0xf0a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0b: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf0c: PushEmpty(string)
0xf0d: Stack[-1] = "Neutral"
0xf0e: Call2 0x8a0

0xf0f: Pop(1)
0xf10: Push((int) 537311)
0xf11: @@ SetMessage(Stack[-1])
0xf12: Pop(1)
0xf13: @@ ClearReplies()
0xf14: Pop(0)
0xf15: Push((int) 537312)
0xf16: Push((int) -1)
0xf17: Push((int) 39158)
0xf18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf19: Pop(3)
0xf1a: Return(); Pop(0)

0xf1b: Push((int) 39140)
0xf1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1d: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf1e: PushEmpty(string)
0xf1f: Stack[-1] = "Neutral"
0xf20: Call2 0x8a0

0xf21: Pop(1)
0xf22: Push((int) 537294)
0xf23: @@ SetMessage(Stack[-1])
0xf24: Pop(1)
0xf25: @@ ClearReplies()
0xf26: Pop(0)
0xf27: Push((int) 537295)
0xf28: Push((int) 39142)
0xf29: Push((int) 39141)
0xf2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(3)
0xf2c: Push((int) 537301)
0xf2d: Push((int) 39148)
0xf2e: Push((int) 39147)
0xf2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf30: Pop(3)
0xf31: Return(); Pop(0)

0xf32: Push((int) 39148)
0xf33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf34: IF (Stack[-1] == 0) GOTO 0xf44; Pop(1)

0xf35: PushEmpty(string)
0xf36: Stack[-1] = "Neutral"
0xf37: Call2 0x8a0

0xf38: Pop(1)
0xf39: Push((int) 537302)
0xf3a: @@ SetMessage(Stack[-1])
0xf3b: Pop(1)
0xf3c: @@ ClearReplies()
0xf3d: Pop(0)
0xf3e: Push((int) 537303)
0xf3f: Push((int) -1)
0xf40: Push((int) 39149)
0xf41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf42: Pop(3)
0xf43: Return(); Pop(0)

0xf44: Push((int) 39142)
0xf45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf46: IF (Stack[-1] == 0) GOTO 0xf56; Pop(1)

0xf47: PushEmpty(string)
0xf48: Stack[-1] = "Neutral"
0xf49: Call2 0x8a0

0xf4a: Pop(1)
0xf4b: Push((int) 537296)
0xf4c: @@ SetMessage(Stack[-1])
0xf4d: Pop(1)
0xf4e: @@ ClearReplies()
0xf4f: Pop(0)
0xf50: Push((int) 537297)
0xf51: Push((int) 39144)
0xf52: Push((int) 39143)
0xf53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf54: Pop(3)
0xf55: Return(); Pop(0)

0xf56: Push((int) 39144)
0xf57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf58: IF (Stack[-1] == 0) GOTO 0xf6d; Pop(1)

0xf59: PushEmpty(string)
0xf5a: Stack[-1] = "Neutral"
0xf5b: Call2 0x8a0

0xf5c: Pop(1)
0xf5d: Push((int) 537298)
0xf5e: @@ SetMessage(Stack[-1])
0xf5f: Pop(1)
0xf60: @@ ClearReplies()
0xf61: Pop(0)
0xf62: Push((int) 537299)
0xf63: Push((int) -1)
0xf64: Push((int) 39145)
0xf65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf66: Pop(3)
0xf67: Push((int) 537300)
0xf68: Push((int) -1)
0xf69: Push((int) 39146)
0xf6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6b: Pop(3)
0xf6c: Return(); Pop(0)

0xf6d: Push((int) 39124)
0xf6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6f: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf70: PushEmpty(string)
0xf71: Stack[-1] = "Neutral"
0xf72: Call2 0x8a0

0xf73: Pop(1)
0xf74: Push((int) 537280)
0xf75: @@ SetMessage(Stack[-1])
0xf76: Pop(1)
0xf77: @@ ClearReplies()
0xf78: Pop(0)
0xf79: Push((int) 537281)
0xf7a: Push((int) 39126)
0xf7b: Push((int) 39125)
0xf7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7d: Pop(3)
0xf7e: Push((int) 537288)
0xf7f: Push((int) 39133)
0xf80: Push((int) 39132)
0xf81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf82: Pop(3)
0xf83: Return(); Pop(0)

0xf84: Push((int) 39133)
0xf85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf86: IF (Stack[-1] == 0) GOTO 0xf9b; Pop(1)

0xf87: PushEmpty(string)
0xf88: Stack[-1] = "Neutral"
0xf89: Call2 0x8a0

0xf8a: Pop(1)
0xf8b: Push((int) 537289)
0xf8c: @@ SetMessage(Stack[-1])
0xf8d: Pop(1)
0xf8e: @@ ClearReplies()
0xf8f: Pop(0)
0xf90: Push((int) 537290)
0xf91: Push((int) 39126)
0xf92: Push((int) 39134)
0xf93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf94: Pop(3)
0xf95: Push((int) 537291)
0xf96: Push((int) -1)
0xf97: Push((int) 39136)
0xf98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf99: Pop(3)
0xf9a: Return(); Pop(0)

0xf9b: Push((int) 39126)
0xf9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9d: IF (Stack[-1] == 0) GOTO 0xfb2; Pop(1)

0xf9e: PushEmpty(string)
0xf9f: Stack[-1] = "Neutral"
0xfa0: Call2 0x8a0

0xfa1: Pop(1)
0xfa2: Push((int) 537282)
0xfa3: @@ SetMessage(Stack[-1])
0xfa4: Pop(1)
0xfa5: @@ ClearReplies()
0xfa6: Pop(0)
0xfa7: Push((int) 537283)
0xfa8: Push((int) 39128)
0xfa9: Push((int) 39127)
0xfaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfab: Pop(3)
0xfac: Push((int) 537287)
0xfad: Push((int) -1)
0xfae: Push((int) 39131)
0xfaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb0: Pop(3)
0xfb1: Return(); Pop(0)

0xfb2: Push((int) 39128)
0xfb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb4: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfb5: PushEmpty(string)
0xfb6: Stack[-1] = "Neutral"
0xfb7: Call2 0x8a0

0xfb8: Pop(1)
0xfb9: Push((int) 537284)
0xfba: @@ SetMessage(Stack[-1])
0xfbb: Pop(1)
0xfbc: @@ ClearReplies()
0xfbd: Pop(0)
0xfbe: Push((int) 537285)
0xfbf: Push((int) -1)
0xfc0: Push((int) 39129)
0xfc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc2: Pop(3)
0xfc3: Push((int) 537286)
0xfc4: Push((int) -1)
0xfc5: Push((int) 39130)
0xfc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc7: Pop(3)
0xfc8: Return(); Pop(0)

0xfc9: Push((int) 39086)
0xfca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcb: IF (Stack[-1] == 0) GOTO 0xfef; Pop(1)

0xfcc: PushEmpty(string)
0xfcd: Stack[-1] = "Neutral"
0xfce: Call2 0x8a0

0xfcf: Pop(1)
0xfd0: Push((int) 537243)
0xfd1: @@ SetMessage(Stack[-1])
0xfd2: Pop(1)
0xfd3: @@ ClearReplies()
0xfd4: Pop(0)
0xfd5: Push((int) 537244)
0xfd6: Push((int) 39088)
0xfd7: Push((int) 39087)
0xfd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd9: Pop(3)
0xfda: Push((int) 537254)
0xfdb: Push((int) 39099)
0xfdc: Push((int) 39098)
0xfdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfde: Pop(3)
0xfdf: Push((int) 537264)
0xfe0: Push((int) 39109)
0xfe1: Push((int) 39108)
0xfe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe3: Pop(3)
0xfe4: Push((int) 537275)
0xfe5: Push((int) -1)
0xfe6: Push((int) 39119)
0xfe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe8: Pop(3)
0xfe9: Push((int) 537276)
0xfea: Push((int) -1)
0xfeb: Push((int) 39120)
0xfec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfed: Pop(3)
0xfee: Return(); Pop(0)

0xfef: Push((int) 39109)
0xff0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff1: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0xff2: PushEmpty(string)
0xff3: Stack[-1] = "Neutral"
0xff4: Call2 0x8a0

0xff5: Pop(1)
0xff6: Push((int) 537265)
0xff7: @@ SetMessage(Stack[-1])
0xff8: Pop(1)
0xff9: @@ ClearReplies()
0xffa: Pop(0)
0xffb: Push((int) 537266)
0xffc: Push((int) 44319)
0xffd: Push((int) 39110)
0xffe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfff: Pop(3)
0x1000: Push((int) 537267)
0x1001: Push((int) 39112)
0x1002: Push((int) 39111)
0x1003: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1004: Pop(3)
0x1005: Return(); Pop(0)

0x1006: Push((int) 39112)
0x1007: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1008: IF (Stack[-1] == 0) GOTO 0x101d; Pop(1)

0x1009: PushEmpty(string)
0x100a: Stack[-1] = "Neutral"
0x100b: Call2 0x8a0

0x100c: Pop(1)
0x100d: Push((int) 537268)
0x100e: @@ SetMessage(Stack[-1])
0x100f: Pop(1)
0x1010: @@ ClearReplies()
0x1011: Pop(0)
0x1012: Push((int) 537269)
0x1013: Push((int) 39114)
0x1014: Push((int) 39113)
0x1015: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1016: Pop(3)
0x1017: Push((int) 537273)
0x1018: Push((int) -1)
0x1019: Push((int) 39117)
0x101a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101b: Pop(3)
0x101c: Return(); Pop(0)

0x101d: Push((int) 39114)
0x101e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101f: IF (Stack[-1] == 0) GOTO 0x1034; Pop(1)

0x1020: PushEmpty(string)
0x1021: Stack[-1] = "Neutral"
0x1022: Call2 0x8a0

0x1023: Pop(1)
0x1024: Push((int) 537270)
0x1025: @@ SetMessage(Stack[-1])
0x1026: Pop(1)
0x1027: @@ ClearReplies()
0x1028: Pop(0)
0x1029: Push((int) 537271)
0x102a: Push((int) -1)
0x102b: Push((int) 39115)
0x102c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102d: Pop(3)
0x102e: Push((int) 537272)
0x102f: Push((int) -1)
0x1030: Push((int) 39116)
0x1031: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1032: Pop(3)
0x1033: Return(); Pop(0)

0x1034: Push((int) 44319)
0x1035: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1036: IF (Stack[-1] == 0) GOTO 0x104b; Pop(1)

0x1037: PushEmpty(string)
0x1038: Stack[-1] = "Neutral"
0x1039: Call2 0x8a0

0x103a: Pop(1)
0x103b: Push((int) 542040)
0x103c: @@ SetMessage(Stack[-1])
0x103d: Pop(1)
0x103e: @@ ClearReplies()
0x103f: Pop(0)
0x1040: Push((int) 542041)
0x1041: Push((int) -1)
0x1042: Push((int) 44320)
0x1043: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1044: Pop(3)
0x1045: Push((int) 542042)
0x1046: Push((int) -1)
0x1047: Push((int) 44321)
0x1048: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1049: Pop(3)
0x104a: Return(); Pop(0)

0x104b: Push((int) 39099)
0x104c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104d: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x104e: PushEmpty(string)
0x104f: Stack[-1] = "Neutral"
0x1050: Call2 0x8a0

0x1051: Pop(1)
0x1052: Push((int) 537255)
0x1053: @@ SetMessage(Stack[-1])
0x1054: Pop(1)
0x1055: @@ ClearReplies()
0x1056: Pop(0)
0x1057: Push((int) 537256)
0x1058: Push((int) 39101)
0x1059: Push((int) 39100)
0x105a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105b: Pop(3)
0x105c: Push((int) 537260)
0x105d: Push((int) 39105)
0x105e: Push((int) 39104)
0x105f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1060: Pop(3)
0x1061: Return(); Pop(0)

0x1062: Push((int) 39105)
0x1063: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1065: PushEmpty(string)
0x1066: Stack[-1] = "Neutral"
0x1067: Call2 0x8a0

0x1068: Pop(1)
0x1069: Push((int) 537261)
0x106a: @@ SetMessage(Stack[-1])
0x106b: Pop(1)
0x106c: @@ ClearReplies()
0x106d: Pop(0)
0x106e: Push((int) 537262)
0x106f: Push((int) -1)
0x1070: Push((int) 39106)
0x1071: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1072: Pop(3)
0x1073: Push((int) 537263)
0x1074: Push((int) -1)
0x1075: Push((int) 39107)
0x1076: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1077: Pop(3)
0x1078: Return(); Pop(0)

0x1079: Push((int) 39101)
0x107a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107b: IF (Stack[-1] == 0) GOTO 0x1090; Pop(1)

0x107c: PushEmpty(string)
0x107d: Stack[-1] = "Neutral"
0x107e: Call2 0x8a0

0x107f: Pop(1)
0x1080: Push((int) 537257)
0x1081: @@ SetMessage(Stack[-1])
0x1082: Pop(1)
0x1083: @@ ClearReplies()
0x1084: Pop(0)
0x1085: Push((int) 537258)
0x1086: Push((int) -1)
0x1087: Push((int) 39102)
0x1088: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1089: Pop(3)
0x108a: Push((int) 537259)
0x108b: Push((int) -1)
0x108c: Push((int) 39103)
0x108d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108e: Pop(3)
0x108f: Return(); Pop(0)

0x1090: Push((int) 39088)
0x1091: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1092: IF (Stack[-1] == 0) GOTO 0x10a7; Pop(1)

0x1093: PushEmpty(string)
0x1094: Stack[-1] = "Neutral"
0x1095: Call2 0x8a0

0x1096: Pop(1)
0x1097: Push((int) 537245)
0x1098: @@ SetMessage(Stack[-1])
0x1099: Pop(1)
0x109a: @@ ClearReplies()
0x109b: Pop(0)
0x109c: Push((int) 537246)
0x109d: Push((int) 39090)
0x109e: Push((int) 39089)
0x109f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a0: Pop(3)
0x10a1: Push((int) 537253)
0x10a2: Push((int) 39090)
0x10a3: Push((int) 39096)
0x10a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a5: Pop(3)
0x10a6: Return(); Pop(0)

0x10a7: Push((int) 39090)
0x10a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a9: IF (Stack[-1] == 0) GOTO 0x10be; Pop(1)

0x10aa: PushEmpty(string)
0x10ab: Stack[-1] = "Neutral"
0x10ac: Call2 0x8a0

0x10ad: Pop(1)
0x10ae: Push((int) 537247)
0x10af: @@ SetMessage(Stack[-1])
0x10b0: Pop(1)
0x10b1: @@ ClearReplies()
0x10b2: Pop(0)
0x10b3: Push((int) 537248)
0x10b4: Push((int) 39092)
0x10b5: Push((int) 39091)
0x10b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b7: Pop(3)
0x10b8: Push((int) 537252)
0x10b9: Push((int) -1)
0x10ba: Push((int) 39095)
0x10bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10bc: Pop(3)
0x10bd: Return(); Pop(0)

0x10be: Push((int) 39092)
0x10bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c0: IF (Stack[-1] == 0) GOTO 0x10d5; Pop(1)

0x10c1: PushEmpty(string)
0x10c2: Stack[-1] = "Neutral"
0x10c3: Call2 0x8a0

0x10c4: Pop(1)
0x10c5: Push((int) 537249)
0x10c6: @@ SetMessage(Stack[-1])
0x10c7: Pop(1)
0x10c8: @@ ClearReplies()
0x10c9: Pop(0)
0x10ca: Push((int) 537250)
0x10cb: Push((int) -1)
0x10cc: Push((int) 39093)
0x10cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ce: Pop(3)
0x10cf: Push((int) 537251)
0x10d0: Push((int) -1)
0x10d1: Push((int) 39094)
0x10d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d3: Pop(3)
0x10d4: Return(); Pop(0)

0x10d5: Push((int) 45672)
0x10d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d7: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10d8: PushEmpty(string)
0x10d9: Stack[-1] = "Neutral"
0x10da: Call2 0x8a0

0x10db: Pop(1)
0x10dc: Push((int) 543216)
0x10dd: @@ SetMessage(Stack[-1])
0x10de: Pop(1)
0x10df: @@ ClearReplies()
0x10e0: Pop(0)
0x10e1: Push((int) 543220)
0x10e2: Push((int) -1)
0x10e3: Push((int) 45676)
0x10e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e5: Pop(3)
0x10e6: Push((int) 543221)
0x10e7: Push((int) 45678)
0x10e8: Push((int) 45677)
0x10e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ea: Pop(3)
0x10eb: Return(); Pop(0)

0x10ec: Push((int) 45678)
0x10ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ee: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x10ef: PushEmpty(string)
0x10f0: Stack[-1] = "Neutral"
0x10f1: Call2 0x8a0

0x10f2: Pop(1)
0x10f3: Push((int) 543222)
0x10f4: @@ SetMessage(Stack[-1])
0x10f5: Pop(1)
0x10f6: @@ ClearReplies()
0x10f7: Pop(0)
0x10f8: Push((int) 543223)
0x10f9: Push((int) -1)
0x10fa: Push((int) 45679)
0x10fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fc: Pop(3)
0x10fd: Push((int) 543225)
0x10fe: Push((int) 45682)
0x10ff: Push((int) 45681)
0x1100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1101: Pop(3)
0x1102: Return(); Pop(0)

0x1103: Push((int) 45682)
0x1104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1105: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1106: PushEmpty(string)
0x1107: Stack[-1] = "Neutral"
0x1108: Call2 0x8a0

0x1109: Pop(1)
0x110a: Push((int) 543226)
0x110b: @@ SetMessage(Stack[-1])
0x110c: Pop(1)
0x110d: @@ ClearReplies()
0x110e: Pop(0)
0x110f: Push((int) 543227)
0x1110: Push((int) -1)
0x1111: Push((int) 45683)
0x1112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1113: Pop(3)
0x1114: Push((int) 543228)
0x1115: Push((int) 45686)
0x1116: Push((int) 45684)
0x1117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1118: Pop(3)
0x1119: Return(); Pop(0)

0x111a: Push((int) 45686)
0x111b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111c: IF (Stack[-1] == 0) GOTO 0x1131; Pop(1)

0x111d: PushEmpty(string)
0x111e: Stack[-1] = "Neutral"
0x111f: Call2 0x8a0

0x1120: Pop(1)
0x1121: Push((int) 543230)
0x1122: @@ SetMessage(Stack[-1])
0x1123: Pop(1)
0x1124: @@ ClearReplies()
0x1125: Pop(0)
0x1126: Push((int) 543231)
0x1127: Push((int) -1)
0x1128: Push((int) 45687)
0x1129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112a: Pop(3)
0x112b: Push((int) 543232)
0x112c: Push((int) -1)
0x112d: Push((int) 45688)
0x112e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112f: Pop(3)
0x1130: Return(); Pop(0)

0x1131: Push((int) 45690)
0x1132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1133: IF (Stack[-1] == 0) GOTO 0x1134; Pop(1)

0x1134: Push((int) 45697)
0x1135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1136: IF (Stack[-1] == 0) GOTO 0x1137; Pop(1)

0x1137: Push((int) 45700)
0x1138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1139: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x113a: PushEmpty(string)
0x113b: Stack[-1] = "Neutral"
0x113c: Call2 0x8a0

0x113d: Pop(1)
0x113e: Push((int) 543244)
0x113f: @@ SetMessage(Stack[-1])
0x1140: Pop(1)
0x1141: @@ ClearReplies()
0x1142: Pop(0)
0x1143: Push((int) 543245)
0x1144: Push((int) -1)
0x1145: Push((int) 45701)
0x1146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1147: Pop(3)
0x1148: Push((int) 543246)
0x1149: Push((int) -1)
0x114a: Push((int) 45702)
0x114b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114c: Pop(3)
0x114d: Return(); Pop(0)

0x114e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x114f: PushEmpty(bool)
0x1150: Call2 0x160a

0x1151: Pop(0)
0x1152: IF (Stack[-1] == 0) GOTO 0x1156; Pop(1)

0x1153: @ lshStopAnimation()
0x1154: Pop(0)
0x1155: GOTO 0x1158

0x1156: @ StopAnimation()
0x1157: Pop(0)
0x1158: Return(); Pop(0)

0x1159: GOTO 0x8b7

0x115a: Return(); Pop(0)

0x115b: PushEmpty(cvector, cvector)
0x115c: @ GetPosition(Stack[-1])
0x115d: Pop(0)
0x115e: Stack[-3] = Stack[-1]
0x115f: Return(); Pop(2)

0x1160: PushEmpty(cvector, cvector, cvector, cvector)
0x1161: @ GetPosition(Stack[-2])
0x1162: Pop(0)
0x1163: @@ GetPosition(Stack[-1])
0x1164: Pop(0)
0x1165: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1166: Return(); Pop(4)

0x1167: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1168: @ GetPosition(Stack[-3])
0x1169: Pop(0)
0x116a: @@ GetPosition(Stack[-2])
0x116b: Pop(0)
0x116c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x116d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x116e: Return(); Pop(6)

0x116f: PushEmpty(bool, bool)
0x1170: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1171: Pop(0)
0x1172: Stack[-4] = Stack[-1]
0x1173: Return(); Pop(2)

0x1174: PushEmpty(bool, bool)
0x1175: Push("HasProperty")
0x1176: Push((int) 2)
0x1177: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1178: Pop(1); Push((bool) Stack[-1] == 0)
0x1179: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x117a: Stack[-5] = (bool) 0
0x117b: Return(); Pop(2)

0x117c: @@ HasProperty(Stack[-3], Stack[-1])
0x117d: Pop(0)
0x117e: Stack[-5] = Stack[-1]
0x117f: Return(); Pop(2)

0x1180: PushEmpty(bool, bool)
0x1181: @@ IsDead(Stack[-1])
0x1182: Pop(0)
0x1183: Stack[-4] = Stack[-1]
0x1184: Return(); Pop(2)

0x1185: PushEmpty(object, object, object, object)
0x1186: Pop(0); Push((bool) Stack[-5] == 0)
0x1187: IF (Stack[-1] == 0) GOTO 0x118a; Pop(1)

0x1188: Stack[-6] = (bool) 0
0x1189: Return(); Pop(4)

0x118a: PushEmpty(bool)
0x118b: Stack[-1] = (bool) 0
0x118c: Push("IsDead")
0x118d: Push((int) 1)
0x118e: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x118f: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x1190: PushEmpty(bool, object)
0x1191: Stack[-1] = Stack[-8]
0x1192: Call2 0x1180

0x1193: Pop(1)
0x1194: IF (Stack[-1] == 0) GOTO 0x1196; Pop(1)

0x1195: Stack[-1] = (bool) 1
0x1196: IF (Stack[-1] == 0) GOTO 0x1199; Pop(1)

0x1197: Stack[-6] = (bool) 0
0x1198: Return(); Pop(4)

0x1199: @ GetScene(Stack[-2])
0x119a: Pop(0)
0x119b: Pop(0); Push((bool) Stack[-2] == 0)
0x119c: IF (Stack[-1] == 0) GOTO 0x119f; Pop(1)

0x119d: Stack[-6] = (bool) 0
0x119e: Return(); Pop(4)

0x119f: @@ GetScene(Stack[-1])
0x11a0: Pop(0)
0x11a1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x11a2: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x11a3: Stack[-6] = (bool) 0
0x11a4: Return(); Pop(4)

0x11a5: Stack[-6] = (bool) 1
0x11a6: Return(); Pop(4)

0x11a7: Stack[-1] = 0
0x11a8: Stack[-2] = 0
0x11a9: PushEmpty(int, int)
0x11aa: PushEmpty(bool, object)
0x11ab: Stack[-1] = Stack[-5]
0x11ac: Call2 0x1185

0x11ad: Pop(1)
0x11ae: Pop(1); Push((bool) Stack[-1] == 0)
0x11af: IF (Stack[-1] == 0) GOTO 0x11b2; Pop(1)

0x11b0: Stack[-4] = (bool) 0
0x11b1: Return(); Pop(2)

0x11b2: PushEmpty(bool, object, string)
0x11b3: Stack[-2] = Stack[-6]
0x11b4: Stack[-1] = "noaccess"
0x11b5: Call2 0x1174

0x11b6: Pop(2)
0x11b7: Pop(1); Push((bool) Stack[-1] == 0)
0x11b8: IF (Stack[-1] == 0) GOTO 0x11bb; Pop(1)

0x11b9: Stack[-4] = (bool) 1
0x11ba: Return(); Pop(2)

0x11bb: Push("noaccess")
0x11bc: @@ GetProperty(Stack[-1], Stack[-2])
0x11bd: Pop(1)
0x11be: Push((int) 0)
0x11bf: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x11c0: Return(); Pop(2)

0x11c1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x11c2: @@ GetPosition(Stack[-3])
0x11c3: Pop(0)
0x11c4: @ GetPosition(Stack[-2])
0x11c5: Pop(0)
0x11c6: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x11c7: Push(CvectorIndex(Stack[-1], 0))
0x11c8: Push(CvectorIndex(Stack[-2], 2))
0x11c9: @ RotateAsync(Stack[-2], Stack[-1])
0x11ca: Pop(2)
0x11cb: Return(); Pop(6)

0x11cc: PushEmpty(bool, bool)
0x11cd: @ IsLoaded(Stack[-1])
0x11ce: Pop(0)
0x11cf: Stack[-3] = Stack[-1]
0x11d0: Return(); Pop(2)

0x11d1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x11d2: @@ GetPosition(Stack[-8])
0x11d3: Pop(0)
0x11d4: @@ GetEyesHeight(Stack[-9])
0x11d5: Pop(0)
0x11d6: Push(CvectorIndex(Stack[-8], 1))
0x11d7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11d8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x11d9: @ GetPosition(Stack[-7])
0x11da: Pop(0)
0x11db: @ GetEyesHeight(Stack[-9])
0x11dc: Pop(0)
0x11dd: Push(CvectorIndex(Stack[-7], 1))
0x11de: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x11df: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x11e0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x11e1: Push(CvectorIndex(Stack[-6], 1))
0x11e2: Stack[-1] = (int) 0
0x11e3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x11e4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x11e5: Pop(1); Push(Sqrt(Stack[-1]))
0x11e6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x11e7: Stack[-5] = -Stack[-6]; Pop(0);
0x11e8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x11e9: PushEmpty(cvector, cvector)
0x11ea: Push(CVector(0.0, 1.0, 0.0))
0x11eb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x11ec: Call2 0x12b2

0x11ed: Pop(1)
0x11ee: Push((int) 25)
0x11ef: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11f0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f1: Push(CVector(0.0, 10.0, 0.0))
0x11f2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x11f3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x11f4: @ IsOverrideActive(Stack[-2])
0x11f5: Pop(0)
0x11f6: Push(Stack[-2])
0x11f7: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f8: Stack[-21] = (bool) 0
0x11f9: Return(); Pop(18)

0x11fa: @ StopWorld()
0x11fb: Pop(0)
0x11fc: @ CameraTransit(Stack[-3], Stack[-5])
0x11fd: Pop(0)
0x11fe: Push(CvectorIndex(Stack[-4], 0))
0x11ff: Push(CvectorIndex(Stack[-5], 2))
0x1200: @ Rotate(Stack[-2], Stack[-1])
0x1201: Pop(2)
0x1202: PushEmpty(bool)
0x1203: Call2 0x160a

0x1204: Pop(0)
0x1205: IF (Stack[-1] == 0) GOTO 0x1207; Pop(1)

0x1206: GOTO 0x120f

0x1207: Push("head")
0x1208: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1209: Pop(1)
0x120a: Push(Stack[-1])
0x120b: IF (Stack[-1] == 0) GOTO 0x120f; Pop(1)

0x120c: Push("head")
0x120d: @ LookAsyncCamera(Stack[-1])
0x120e: Pop(1)
0x120f: @ CameraWaitForPlayFinish()
0x1210: Pop(0)
0x1211: @ ResumeWorld()
0x1212: Pop(0)
0x1213: Stack[-21] = (bool) 1
0x1214: Return(); Pop(18)

0x1215: PushEmpty(bool, bool)
0x1216: @ CameraSwitchToNormal()
0x1217: Pop(0)
0x1218: PushEmpty(bool)
0x1219: Call2 0x160a

0x121a: Pop(0)
0x121b: IF (Stack[-1] == 0) GOTO 0x121d; Pop(1)

0x121c: GOTO 0x1225

0x121d: Push("head")
0x121e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x121f: Pop(1)
0x1220: Push(Stack[-1])
0x1221: IF (Stack[-1] == 0) GOTO 0x1225; Pop(1)

0x1222: Push("head")
0x1223: @ UnlookAsync(Stack[-1])
0x1224: Pop(1)
0x1225: Return(); Pop(2)

0x1226: PushEmpty()
0x1227: PushEmpty(bool, object, float)
0x1228: Stack[-2] = Stack[-4]
0x1229: Stack[-1] = (int) 70
0x122a: Call2 0x122e

0x122b: Stack[-5] = Stack[-3]
0x122c: Pop(3)
0x122d: Return(); Pop(0)

0x122e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x122f: @@ GetPosition(Stack[-7])
0x1230: Pop(0)
0x1231: @@ GetEyesHeight(Stack[-8])
0x1232: Pop(0)
0x1233: Push(CvectorIndex(Stack[-7], 1))
0x1234: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1235: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1236: @ GetPosition(Stack[-6])
0x1237: Pop(0)
0x1238: @ GetEyesHeight(Stack[-8])
0x1239: Pop(0)
0x123a: Push(CvectorIndex(Stack[-6], 1))
0x123b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x123c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x123d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x123e: Push(CvectorIndex(Stack[-5], 1))
0x123f: Stack[-1] = (int) 0
0x1240: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1241: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1242: Pop(1); Push(Sqrt(Stack[-1]))
0x1243: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1244: Stack[-4] = -Stack[-5]; Pop(0);
0x1245: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1246: Push(CVector(0.0, 10.0, 0.0))
0x1247: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1248: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1249: @ IsOverrideActive(Stack[-1])
0x124a: Pop(0)
0x124b: Push(Stack[-1])
0x124c: IF (Stack[-1] == 0) GOTO 0x124f; Pop(1)

0x124d: Stack[-19] = (bool) 0
0x124e: Return(); Pop(16)

0x124f: @ StopWorld()
0x1250: Pop(0)
0x1251: @ CameraTransit(Stack[-2], Stack[-4])
0x1252: Pop(0)
0x1253: Push(CvectorIndex(Stack[-3], 0))
0x1254: Push(CvectorIndex(Stack[-4], 2))
0x1255: @ Rotate(Stack[-2], Stack[-1])
0x1256: Pop(2)
0x1257: @ CameraWaitForPlayFinish()
0x1258: Pop(0)
0x1259: @ ResumeWorld()
0x125a: Pop(0)
0x125b: Stack[-19] = (bool) 1
0x125c: Return(); Pop(16)

0x125d: PushEmpty()
0x125e: @ CameraSwitchToNormal()
0x125f: Pop(0)
0x1260: Return(); Pop(0)

0x1261: PushEmpty(bool, float, float, bool, float, float)
0x1262: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1263: Pop(0)
0x1264: Push(Stack[-3])
0x1265: IF (Stack[-1] == 0) GOTO 0x126c; Pop(1)

0x1266: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1267: Pop(0)
0x1268: Push((bool) 0)
0x1269: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x126a: Pop(1)
0x126b: GOTO 0x1270

0x126c: Push("Can't find lsh animation : ")
0x126d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x126e: @ Trace(Stack[-1])
0x126f: Pop(1)
0x1270: Return(); Pop(6)

0x1271: PushEmpty(bool, float, float, bool, float, float)
0x1272: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1273: Pop(0)
0x1274: Push(Stack[-3])
0x1275: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1276: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1277: Pop(0)
0x1278: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1279: Pop(0)
0x127a: GOTO 0x127f

0x127b: Push("Can't find lsh animation : ")
0x127c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x127d: @ Trace(Stack[-1])
0x127e: Pop(1)
0x127f: Return(); Pop(6)

0x1280: PushEmpty(float, cvector, float, cvector)
0x1281: @@ GetEyesHeight(Stack[-2])
0x1282: Pop(0)
0x1283: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1284: Push(CvectorIndex(Stack[-1], 1))
0x1285: Stack[-1] = Stack[-3]
0x1286: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1287: Push("head")
0x1288: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1289: Pop(1)
0x128a: Return(); Pop(4)

0x128b: PushEmpty(bool)
0x128c: Call2 0x160a

0x128d: Pop(0)
0x128e: IF (Stack[-1] == 0) GOTO 0x1291; Pop(1)

0x128f: @ lshStopSpeech()
0x1290: Pop(0)
0x1291: Return(); Pop(0)

0x1292: PushEmpty(bool, bool)
0x1293: PushEmpty(bool, int, int)
0x1294: Stack[-2] = Stack[-7]
0x1295: Stack[-1] = Stack[-6]
0x1296: Call2 0x12bc

0x1297: Pop(2)
0x1298: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x1299: Push((int) 0)
0x129a: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x129b: Pop(1)
0x129c: Return(); Pop(2)

0x129d: PushEmpty(int, bool, int, bool)
0x129e: PushEmpty(bool, int, int)
0x129f: Stack[-2] = Stack[-10]
0x12a0: Stack[-1] = Stack[-9]
0x12a1: Call2 0x12bc

0x12a2: Pop(2)
0x12a3: IF (Stack[-1] == 0) GOTO 0x12ab; Pop(1)

0x12a4: @ irand(Stack[-2], Stack[-5])
0x12a5: Pop(0)
0x12a6: Push((int) 0)
0x12a7: Push((int) 1)
0x12a8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x12a9: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x12aa: Pop(2)
0x12ab: Return(); Pop(4)

0x12ac: PushEmpty(object, object)
0x12ad: @ self(Stack[-1])
0x12ae: Pop(0)
0x12af: Stack[-3] = Stack[-1]
0x12b0: Return(); Pop(2)

0x12b1: Stack[-1] = 0
0x12b2: PushEmpty(float, float)
0x12b3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12b4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12b5: Push((float)0.0)
0x12b6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b7: IF (Stack[-1] == 0) GOTO 0x12ba; Pop(1)

0x12b8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12b9: Return(); Pop(2)

0x12ba: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12bb: Return(); Pop(2)

0x12bc: PushEmpty(int, int)
0x12bd: @ irand(Stack[-1], Stack[-3])
0x12be: Pop(0)
0x12bf: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x12c0: Return(); Pop(2)

0x12c1: PushEmpty()
0x12c2: Pop(0); Push(Stack[-2] | Stack[-1]);
0x12c3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12c4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12c6: Pop(1); Push(Sqrt(Stack[-1]))
0x12c7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12c8: Return(); Pop(0)

0x12c9: PushEmpty()
0x12ca: Push(CvectorIndex(Stack[-2], 0))
0x12cb: Push(CvectorIndex(Stack[-2], 0))
0x12cc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12cd: Push(CvectorIndex(Stack[-3], 2))
0x12ce: Push(CvectorIndex(Stack[-3], 2))
0x12cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12d1: Return(); Pop(0)

0x12d2: PushEmpty()
0x12d3: Push(CvectorIndex(Stack[-1], 0))
0x12d4: Push(CvectorIndex(Stack[-2], 0))
0x12d5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d6: Push(CvectorIndex(Stack[-2], 2))
0x12d7: Push(CvectorIndex(Stack[-3], 2))
0x12d8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12d9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12da: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x12db: Return(); Pop(0)

0x12dc: PushEmpty()
0x12dd: PushEmpty(float, cvector, cvector)
0x12de: Stack[-2] = Stack[-5]
0x12df: Stack[-1] = Stack[-4]
0x12e0: Call2 0x12c9

0x12e1: Pop(2)
0x12e2: PushEmpty(float, cvector)
0x12e3: Stack[-1] = Stack[-5]
0x12e4: Call2 0x12d2

0x12e5: Pop(1)
0x12e6: PushEmpty(float, cvector)
0x12e7: Stack[-1] = Stack[-5]
0x12e8: Call2 0x12d2

0x12e9: Pop(1)
0x12ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x12eb: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x12ec: Return(); Pop(0)

0x12ed: PushEmpty(int, int)
0x12ee: @ GetVariable(Stack[-3], Stack[-1])
0x12ef: Pop(0)
0x12f0: Stack[-4] = Stack[-1]
0x12f1: Return(); Pop(2)

0x12f2: PushEmpty(float, float)
0x12f3: @ GetGameTime(Stack[-1])
0x12f4: Pop(0)
0x12f5: Push((int) 1)
0x12f6: PushEmpty(int)
0x12f7: Push((int) 24)
0x12f8: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x12f9: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x12fa: Return(); Pop(2)

0x12fb: PushEmpty(float, float)
0x12fc: @ GetGameTime(Stack[-1])
0x12fd: Pop(0)
0x12fe: PushEmpty(int)
0x12ff: Stack[-1] = Stack[-2]
0x1300: Push((int) 24)
0x1301: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x1302: Return(); Pop(2)

0x1303: PushEmpty()
0x1304: Return(); Pop(0)

0x1305: PushEmpty()
0x1306: Return(); Pop(0)

0x1307: PushEmpty()
0x1308: Return(); Pop(0)

0x1309: PushEmpty()
0x130a: Return(); Pop(0)

0x130b: PushEmpty()
0x130c: Push("unholster")
0x130d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130e: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x130f: PushEmpty(bool, object)
0x1310: Stack[-1] = Stack[-4]
0x1311: Call2 0x142e

0x1312: Stack[-5] = Stack[-2]
0x1313: Pop(2)
0x1314: Return(); Pop(0)

0x1315: GOTO 0x1329

0x1316: Push("player_shot")
0x1317: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1318: IF (Stack[-1] == 0) GOTO 0x1320; Pop(1)

0x1319: PushEmpty(bool, object)
0x131a: Stack[-1] = Stack[-4]
0x131b: Call2 0x143b

0x131c: Stack[-5] = Stack[-2]
0x131d: Pop(2)
0x131e: Return(); Pop(0)

0x131f: GOTO 0x1329

0x1320: Push("battle")
0x1321: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1322: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1323: PushEmpty(bool, object)
0x1324: Stack[-1] = Stack[-4]
0x1325: Call2 0x1452

0x1326: Stack[-5] = Stack[-2]
0x1327: Pop(2)
0x1328: Return(); Pop(0)

0x1329: Stack[-3] = (bool) 0
0x132a: Return(); Pop(0)

0x132b: PushEmpty()
0x132c: Push("unholster")
0x132d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x132e: IF (Stack[-1] == 0) GOTO 0x1334; Pop(1)

0x132f: PushEmpty(object)
0x1330: Stack[-1] = Stack[-3]
0x1331: Call2 0x1433

0x1332: Pop(1)
0x1333: GOTO 0x1343

0x1334: Push("player_shot")
0x1335: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1336: IF (Stack[-1] == 0) GOTO 0x133c; Pop(1)

0x1337: PushEmpty(object)
0x1338: Stack[-1] = Stack[-3]
0x1339: Call2 0x144a

0x133a: Pop(1)
0x133b: GOTO 0x1343

0x133c: Push("battle")
0x133d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133e: IF (Stack[-1] == 0) GOTO 0x1343; Pop(1)

0x133f: PushEmpty(object)
0x1340: Stack[-1] = Stack[-3]
0x1341: Call2 0x1459

0x1342: Pop(1)
0x1343: Return(); Pop(0)

0x1344: PushEmpty(bool, bool)
0x1345: PushEmpty(bool)
0x1346: Stack[-1] = (bool) 0
0x1347: PushEmpty(bool, object)
0x1348: Stack[-1] = Stack[-6]
0x1349: Call2 0x142e

0x134a: Pop(1)
0x134b: IF (Stack[-1] == 0) GOTO 0x1352; Pop(1)

0x134c: PushEmpty(bool, object)
0x134d: Stack[-1] = Stack[-6]
0x134e: Call2 0x116f

0x134f: Pop(1)
0x1350: IF (Stack[-1] == 0) GOTO 0x1352; Pop(1)

0x1351: Stack[-1] = (bool) 1
0x1352: IF (Stack[-1] == 0) GOTO 0x1359; Pop(1)

0x1353: @@ IsWeaponHolstered(Stack[-1])
0x1354: Pop(0)
0x1355: Pop(0); Push((bool) Stack[-1] == 0)
0x1356: IF (Stack[-1] == 0) GOTO 0x1359; Pop(1)

0x1357: Stack[-4] = (bool) 1
0x1358: Return(); Pop(2)

0x1359: Stack[-4] = (bool) 0
0x135a: Return(); Pop(2)

0x135b: PushEmpty()
0x135c: PushEmpty(object)
0x135d: Stack[-1] = Stack[-2]
0x135e: Call2 0x1433

0x135f: Pop(1)
0x1360: Return(); Pop(0)

0x1361: PushEmpty()
0x1362: PushEmpty(bool, object)
0x1363: Stack[-1] = Stack[-3]
0x1364: Call2 0x116f

0x1365: Pop(1)
0x1366: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x1367: PushEmpty(object)
0x1368: Call2 0x12ac

0x1369: Pop(0)
0x136a: Push((float)-0.05)
0x136b: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x136c: Pop(2)
0x136d: Return(); Pop(0)

0x136e: PushEmpty(object, object)
0x136f: Push("heal")
0x1370: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1371: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x1372: Push("player")
0x1373: @ FindActor(Stack[-2], Stack[-1])
0x1374: Pop(1)
0x1375: PushEmpty(bool, object)
0x1376: Stack[-1] = Stack[-3]
0x1377: Call2 0x145f

0x1378: Stack[-6] = Stack[-2]
0x1379: Pop(2)
0x137a: Return(); Pop(2)

0x137b: Stack[-1] = 0
0x137c: Stack[-4] = (bool) 0
0x137d: Return(); Pop(2)

0x137e: PushEmpty(object, object)
0x137f: Push("heal")
0x1380: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1381: IF (Stack[-1] == 0) GOTO 0x138a; Pop(1)

0x1382: Push("player")
0x1383: @ FindActor(Stack[-2], Stack[-1])
0x1384: Pop(1)
0x1385: PushEmpty(object)
0x1386: Stack[-1] = Stack[-2]
0x1387: Call2 0x1462

0x1388: Pop(1)
0x1389: Stack[-1] = 0
0x138a: Return(); Pop(2)

0x138b: PushEmpty(string, string)
0x138c: Stack[-1] = "idle"
0x138d: Push(Stack[-3])
0x138e: IF (Stack[-1] == 0) GOTO 0x1390; Pop(1)

0x138f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1390: Stack[-4] = Stack[-1]
0x1391: Return(); Pop(2)

0x1392: PushEmpty(int, bool, int, bool)
0x1393: Stack[-2] = (int) 0
0x1394: Push("all")
0x1395: PushEmpty(string, int)
0x1396: Stack[-1] = Stack[-5]
0x1397: Call2 0x138b

0x1398: Pop(1)
0x1399: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x139a: Pop(2)
0x139b: Pop(0); Push((bool) Stack[-1] == 0)
0x139c: IF (Stack[-1] == 0) GOTO 0x139e; Pop(1)

0x139d: GOTO 0x13a1

0x139e: Push((int) 1)
0x139f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x13a0: GOTO 0x1394

0x13a1: Stack[-5] = Stack[-2]
0x13a2: Return(); Pop(4)

0x13a3: PushEmpty()
0x13a4: PushEmpty(bool)
0x13a5: Call2 0x163c

0x13a6: Pop(0)
0x13a7: IF (Stack[-1] == 0) GOTO 0x13aa; Pop(1)

0x13a8: Stack[-2] = (int) 2
0x13a9: GOTO 0x13ab

0x13aa: Stack[-2] = (int) 0
0x13ab: Return(); Pop(0)

0x13ac: PushEmpty()
0x13ad: PushEmpty(object)
0x13ae: Stack[-1] = Stack[-2]
0x13af: Push(-1, 1); TaskCall(3)
0x13b0: Call2 0x293

0x13b1: Pop(-1, 1); TaskReturn
0x13b2: Pop(1)
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty()
0x13b5: PushEmpty(bool, object)
0x13b6: Stack[-1] = Stack[-3]
0x13b7: Call2 0x11a9

0x13b8: Pop(1)
0x13b9: IF (Stack[-1] == 0) GOTO 0x13bc; Pop(1)

0x13ba: Stack[-2] = (int) 2
0x13bb: GOTO 0x13bd

0x13bc: Stack[-2] = (int) 0
0x13bd: Return(); Pop(0)

0x13be: PushEmpty()
0x13bf: PushEmpty(object)
0x13c0: Stack[-1] = Stack[-2]
0x13c1: Push(-1, 3); TaskCall(4)
0x13c2: Call2 0x3a6

0x13c3: Pop(-1, 3); TaskReturn
0x13c4: Pop(1)
0x13c5: Return(); Pop(0)

0x13c6: PushEmpty()
0x13c7: PushEmpty(bool, object)
0x13c8: Stack[-1] = Stack[-4]
0x13c9: Call2 0x11a9

0x13ca: Pop(1)
0x13cb: IF (Stack[-1] == 0) GOTO 0x13ce; Pop(1)

0x13cc: Stack[-3] = (int) 2
0x13cd: GOTO 0x13cf

0x13ce: Stack[-3] = (int) 0
0x13cf: Return(); Pop(0)

0x13d0: PushEmpty()
0x13d1: PushEmpty(object)
0x13d2: Stack[-1] = Stack[-2]
0x13d3: Push(-1, 3); TaskCall(5)
0x13d4: Call2 0x4a2

0x13d5: Pop(-1, 3); TaskReturn
0x13d6: Pop(1)
0x13d7: Return(); Pop(0)

0x13d8: PushEmpty(string, bool, string, bool)
0x13d9: PushEmpty(bool, object, string)
0x13da: Stack[-2] = Stack[-9]
0x13db: Stack[-1] = "class"
0x13dc: Call2 0x1174

0x13dd: Pop(2)
0x13de: Pop(1); Push((bool) Stack[-1] == 0)
0x13df: IF (Stack[-1] == 0) GOTO 0x13e2; Pop(1)

0x13e0: Stack[-8] = (bool) 0
0x13e1: Return(); Pop(4)

0x13e2: Push("class")
0x13e3: @@ GetProperty(Stack[-1], Stack[-3])
0x13e4: Pop(1)
0x13e5: Push("rat")
0x13e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e7: IF (Stack[-1] == 0) GOTO 0x13eb; Pop(1)

0x13e8: Stack[-8] = (bool) 0
0x13e9: Return(); Pop(4)

0x13ea: GOTO 0x13f6

0x13eb: Push("rat_big")
0x13ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ed: IF (Stack[-1] == 0) GOTO 0x13f1; Pop(1)

0x13ee: Stack[-8] = (bool) 0
0x13ef: Return(); Pop(4)

0x13f0: GOTO 0x13f6

0x13f1: Push("dog")
0x13f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f3: IF (Stack[-1] == 0) GOTO 0x13f6; Pop(1)

0x13f4: Stack[-8] = (bool) 0
0x13f5: Return(); Pop(4)

0x13f6: @ CanSee(Stack[-1], Stack[-7])
0x13f7: Pop(0)
0x13f8: PushEmpty(bool)
0x13f9: Stack[-1] = (bool) 1
0x13fa: Push(Stack[-2])
0x13fb: IF (Stack[-1] == 0) GOTO 0x1404; Pop(1)

0x13fc: PushEmpty(float, object)
0x13fd: Stack[-1] = Stack[-10]
0x13fe: Call2 0x1167

0x13ff: Pop(1)
0x1400: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1401: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1402: IF (Stack[-1] == 0) GOTO 0x1404; Pop(1)

0x1403: Stack[-1] = (bool) 0
0x1404: IF (Stack[-1] == 0) GOTO 0x1407; Pop(1)

0x1405: Stack[-8] = (bool) 1
0x1406: Return(); Pop(4)

0x1407: @ CanSee(Stack[-1], Stack[-6])
0x1408: Pop(0)
0x1409: PushEmpty(bool)
0x140a: Stack[-1] = (bool) 1
0x140b: Push(Stack[-2])
0x140c: IF (Stack[-1] == 0) GOTO 0x1415; Pop(1)

0x140d: PushEmpty(float, object)
0x140e: Stack[-1] = Stack[-9]
0x140f: Call2 0x1167

0x1410: Pop(1)
0x1411: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1412: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1413: IF (Stack[-1] == 0) GOTO 0x1415; Pop(1)

0x1414: Stack[-1] = (bool) 0
0x1415: IF (Stack[-1] == 0) GOTO 0x1418; Pop(1)

0x1416: Stack[-8] = (bool) 1
0x1417: Return(); Pop(4)

0x1418: Stack[-8] = (bool) 0
0x1419: Return(); Pop(4)

0x141a: PushEmpty()
0x141b: Stack[-2] = (int) 0
0x141c: Return(); Pop(0)

0x141d: PushEmpty()
0x141e: Return(); Pop(0)

0x141f: PushEmpty()
0x1420: Stack[-3] = (int) 0
0x1421: Return(); Pop(0)

0x1422: PushEmpty()
0x1423: Return(); Pop(0)

0x1424: PushEmpty()
0x1425: Stack[-2] = (int) 2
0x1426: Return(); Pop(0)

0x1427: PushEmpty()
0x1428: PushEmpty(object)
0x1429: Stack[-1] = Stack[-2]
0x142a: Call2 0x1614

0x142b: Pop(1)
0x142c: Return(); Pop(0)

0x142d: Return(); Pop(0)

0x142e: PushEmpty(bool, bool)
0x142f: @ CanSee(Stack[-1], Stack[-3])
0x1430: Pop(0)
0x1431: Stack[-4] = Stack[-1]
0x1432: Return(); Pop(2)

0x1433: PushEmpty()
0x1434: PushEmpty(object)
0x1435: Stack[-1] = Stack[-2]
0x1436: Push(-1, 3); TaskCall(6)
0x1437: Call2 0x564

0x1438: Pop(-1, 3); TaskReturn
0x1439: Pop(1)
0x143a: Return(); Pop(0)

0x143b: PushEmpty(bool, bool)
0x143c: @ CanSee(Stack[-1], Stack[-3])
0x143d: Pop(0)
0x143e: Stack[-4] = (bool) 1
0x143f: Push(Stack[-1])
0x1440: IF (Stack[-1] == 0) GOTO 0x1449; Pop(1)

0x1441: PushEmpty(float, object)
0x1442: Stack[-1] = Stack[-5]
0x1443: Call2 0x1167

0x1444: Pop(1)
0x1445: Push((int) 4000000)
0x1446: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1447: IF (Stack[-1] == 0) GOTO 0x1449; Pop(1)

0x1448: Stack[-4] = (bool) 0
0x1449: Return(); Pop(2)

0x144a: PushEmpty()
0x144b: PushEmpty(object)
0x144c: Stack[-1] = Stack[-2]
0x144d: Push(-1, 3); TaskCall(7)
0x144e: Call2 0x626

0x144f: Pop(-1, 3); TaskReturn
0x1450: Pop(1)
0x1451: Return(); Pop(0)

0x1452: PushEmpty()
0x1453: PushEmpty(bool, object)
0x1454: Stack[-1] = Stack[-3]
0x1455: Call2 0x143b

0x1456: Stack[-4] = Stack[-2]
0x1457: Pop(2)
0x1458: Return(); Pop(0)

0x1459: PushEmpty()
0x145a: PushEmpty(object)
0x145b: Stack[-1] = Stack[-2]
0x145c: Call2 0x144a

0x145d: Pop(1)
0x145e: Return(); Pop(0)

0x145f: PushEmpty()
0x1460: Stack[-2] = (bool) 0
0x1461: Return(); Pop(0)

0x1462: PushEmpty()
0x1463: Return(); Pop(0)

0x1464: PushEmpty()
0x1465: Push((int) 1000)
0x1466: @@ SetReturnValue(Stack[-1])
0x1467: Pop(1)
0x1468: Return(); Pop(0)

0x1469: PushEmpty()
0x146a: PushEmpty(int, string)
0x146b: Stack[-1] = "branch"
0x146c: Call2 0x12ed

0x146d: Pop(1)
0x146e: Push((int) 0)
0x146f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1470: IF (Stack[-1] == 0) GOTO 0x1473; Pop(1)

0x1471: Stack[-2] = (bool) 1
0x1472: Return(); Pop(0)

0x1473: Stack[-2] = (bool) 0
0x1474: Return(); Pop(0)

0x1475: PushEmpty()
0x1476: PushEmpty(int, string)
0x1477: Stack[-1] = "branch"
0x1478: Call2 0x12ed

0x1479: Pop(1)
0x147a: Push((int) 2)
0x147b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x147c: IF (Stack[-1] == 0) GOTO 0x147f; Pop(1)

0x147d: Stack[-2] = (bool) 1
0x147e: Return(); Pop(0)

0x147f: Stack[-2] = (bool) 0
0x1480: Return(); Pop(0)

0x1481: PushEmpty()
0x1482: PushEmpty(bool, object)
0x1483: Stack[-1] = Stack[-3]
0x1484: Call2 0x1503

0x1485: Pop(1)
0x1486: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1487: Stack[-2] = (bool) 1
0x1488: Return(); Pop(0)

0x1489: Stack[-2] = (bool) 0
0x148a: Return(); Pop(0)

0x148b: PushEmpty()
0x148c: PushEmpty(bool, object)
0x148d: Stack[-1] = Stack[-3]
0x148e: Call2 0x150a

0x148f: Pop(1)
0x1490: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1491: Stack[-2] = (bool) 1
0x1492: Return(); Pop(0)

0x1493: Stack[-2] = (bool) 0
0x1494: Return(); Pop(0)

0x1495: PushEmpty()
0x1496: PushEmpty(bool, object)
0x1497: Stack[-1] = Stack[-3]
0x1498: Call2 0x1511

0x1499: Pop(1)
0x149a: IF (Stack[-1] == 0) GOTO 0x149d; Pop(1)

0x149b: Stack[-2] = (bool) 1
0x149c: Return(); Pop(0)

0x149d: Stack[-2] = (bool) 0
0x149e: Return(); Pop(0)

0x149f: PushEmpty()
0x14a0: PushEmpty(bool, object)
0x14a1: Stack[-1] = Stack[-3]
0x14a2: Call2 0x1518

0x14a3: Pop(1)
0x14a4: IF (Stack[-1] == 0) GOTO 0x14a7; Pop(1)

0x14a5: Stack[-2] = (bool) 1
0x14a6: Return(); Pop(0)

0x14a7: Stack[-2] = (bool) 0
0x14a8: Return(); Pop(0)

0x14a9: PushEmpty()
0x14aa: PushEmpty(bool, object)
0x14ab: Stack[-1] = Stack[-3]
0x14ac: Call2 0x151f

0x14ad: Pop(1)
0x14ae: IF (Stack[-1] == 0) GOTO 0x14b1; Pop(1)

0x14af: Stack[-2] = (bool) 1
0x14b0: Return(); Pop(0)

0x14b1: Stack[-2] = (bool) 0
0x14b2: Return(); Pop(0)

0x14b3: PushEmpty()
0x14b4: PushEmpty(bool, object)
0x14b5: Stack[-1] = Stack[-3]
0x14b6: Call2 0x1526

0x14b7: Pop(1)
0x14b8: IF (Stack[-1] == 0) GOTO 0x14bb; Pop(1)

0x14b9: Stack[-2] = (bool) 1
0x14ba: Return(); Pop(0)

0x14bb: Stack[-2] = (bool) 0
0x14bc: Return(); Pop(0)

0x14bd: PushEmpty()
0x14be: PushEmpty(bool, object)
0x14bf: Stack[-1] = Stack[-3]
0x14c0: Call2 0x152d

0x14c1: Pop(1)
0x14c2: IF (Stack[-1] == 0) GOTO 0x14c5; Pop(1)

0x14c3: Stack[-2] = (bool) 1
0x14c4: Return(); Pop(0)

0x14c5: Stack[-2] = (bool) 0
0x14c6: Return(); Pop(0)

0x14c7: PushEmpty()
0x14c8: PushEmpty(bool, object)
0x14c9: Stack[-1] = Stack[-3]
0x14ca: Call2 0x1534

0x14cb: Pop(1)
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-2] = (bool) 1
0x14ce: Return(); Pop(0)

0x14cf: Stack[-2] = (bool) 0
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: PushEmpty(bool, object)
0x14d3: Stack[-1] = Stack[-3]
0x14d4: Call2 0x153b

0x14d5: Pop(1)
0x14d6: IF (Stack[-1] == 0) GOTO 0x14d9; Pop(1)

0x14d7: Stack[-2] = (bool) 1
0x14d8: Return(); Pop(0)

0x14d9: Stack[-2] = (bool) 0
0x14da: Return(); Pop(0)

0x14db: PushEmpty()
0x14dc: PushEmpty(bool, object)
0x14dd: Stack[-1] = Stack[-3]
0x14de: Call2 0x1542

0x14df: Pop(1)
0x14e0: IF (Stack[-1] == 0) GOTO 0x14e3; Pop(1)

0x14e1: Stack[-2] = (bool) 1
0x14e2: Return(); Pop(0)

0x14e3: Stack[-2] = (bool) 0
0x14e4: Return(); Pop(0)

0x14e5: PushEmpty()
0x14e6: PushEmpty(bool, object)
0x14e7: Stack[-1] = Stack[-3]
0x14e8: Call2 0x1549

0x14e9: Pop(1)
0x14ea: IF (Stack[-1] == 0) GOTO 0x14ed; Pop(1)

0x14eb: Stack[-2] = (bool) 1
0x14ec: Return(); Pop(0)

0x14ed: Stack[-2] = (bool) 0
0x14ee: Return(); Pop(0)

0x14ef: PushEmpty()
0x14f0: PushEmpty(bool, object)
0x14f1: Stack[-1] = Stack[-3]
0x14f2: Call2 0x1550

0x14f3: Pop(1)
0x14f4: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14f5: Stack[-2] = (bool) 1
0x14f6: Return(); Pop(0)

0x14f7: Stack[-2] = (bool) 0
0x14f8: Return(); Pop(0)

0x14f9: PushEmpty()
0x14fa: PushEmpty(bool, object)
0x14fb: Stack[-1] = Stack[-3]
0x14fc: Call2 0x1557

0x14fd: Pop(1)
0x14fe: IF (Stack[-1] == 0) GOTO 0x1501; Pop(1)

0x14ff: Stack[-2] = (bool) 1
0x1500: Return(); Pop(0)

0x1501: Stack[-2] = (bool) 0
0x1502: Return(); Pop(0)

0x1503: PushEmpty()
0x1504: PushEmpty(int)
0x1505: Call2 0x12f2

0x1506: Pop(0)
0x1507: Push((int) 1)
0x1508: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1509: Return(); Pop(0)

0x150a: PushEmpty()
0x150b: PushEmpty(int)
0x150c: Call2 0x12f2

0x150d: Pop(0)
0x150e: Push((int) 2)
0x150f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1510: Return(); Pop(0)

0x1511: PushEmpty()
0x1512: PushEmpty(int)
0x1513: Call2 0x12f2

0x1514: Pop(0)
0x1515: Push((int) 3)
0x1516: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1517: Return(); Pop(0)

0x1518: PushEmpty()
0x1519: PushEmpty(int)
0x151a: Call2 0x12f2

0x151b: Pop(0)
0x151c: Push((int) 4)
0x151d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x151e: Return(); Pop(0)

0x151f: PushEmpty()
0x1520: PushEmpty(int)
0x1521: Call2 0x12f2

0x1522: Pop(0)
0x1523: Push((int) 5)
0x1524: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1525: Return(); Pop(0)

0x1526: PushEmpty()
0x1527: PushEmpty(int)
0x1528: Call2 0x12f2

0x1529: Pop(0)
0x152a: Push((int) 6)
0x152b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x152c: Return(); Pop(0)

0x152d: PushEmpty()
0x152e: PushEmpty(int)
0x152f: Call2 0x12f2

0x1530: Pop(0)
0x1531: Push((int) 7)
0x1532: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1533: Return(); Pop(0)

0x1534: PushEmpty()
0x1535: PushEmpty(int)
0x1536: Call2 0x12f2

0x1537: Pop(0)
0x1538: Push((int) 8)
0x1539: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x153a: Return(); Pop(0)

0x153b: PushEmpty()
0x153c: PushEmpty(int)
0x153d: Call2 0x12f2

0x153e: Pop(0)
0x153f: Push((int) 9)
0x1540: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1541: Return(); Pop(0)

0x1542: PushEmpty()
0x1543: PushEmpty(int)
0x1544: Call2 0x12f2

0x1545: Pop(0)
0x1546: Push((int) 10)
0x1547: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1548: Return(); Pop(0)

0x1549: PushEmpty()
0x154a: PushEmpty(int)
0x154b: Call2 0x12f2

0x154c: Pop(0)
0x154d: Push((int) 11)
0x154e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x154f: Return(); Pop(0)

0x1550: PushEmpty()
0x1551: PushEmpty(int)
0x1552: Call2 0x12f2

0x1553: Pop(0)
0x1554: Push((int) 12)
0x1555: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1556: Return(); Pop(0)

0x1557: PushEmpty()
0x1558: PushEmpty(bool)
0x1559: Stack[-1] = (bool) 0
0x155a: PushEmpty(int)
0x155b: Call2 0x12fb

0x155c: Pop(0)
0x155d: Push((int) 0)
0x155e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x155f: IF (Stack[-1] == 0) GOTO 0x1567; Pop(1)

0x1560: PushEmpty(int)
0x1561: Call2 0x12fb

0x1562: Pop(0)
0x1563: Push((int) 12)
0x1564: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1565: IF (Stack[-1] == 0) GOTO 0x1567; Pop(1)

0x1566: Stack[-1] = (bool) 1
0x1567: IF (Stack[-1] == 0) GOTO 0x156a; Pop(1)

0x1568: Stack[-2] = (bool) 1
0x1569: Return(); Pop(0)

0x156a: Stack[-2] = (bool) 0
0x156b: Return(); Pop(0)

0x156c: PushEmpty(int, int)
0x156d: Push("branch")
0x156e: @ GetVariable(Stack[-1], Stack[-2])
0x156f: Pop(1)
0x1570: Push((int) 0)
0x1571: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1572: IF (Stack[-1] == 0) GOTO 0x1576; Pop(1)

0x1573: Stack[-3] = (int) 1
0x1574: Return(); Pop(2)

0x1575: GOTO 0x157b

0x1576: Push((int) 1)
0x1577: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1578: IF (Stack[-1] == 0) GOTO 0x157b; Pop(1)

0x1579: Stack[-3] = (int) 2
0x157a: Return(); Pop(2)

0x157b: Stack[-3] = (int) 3
0x157c: Return(); Pop(2)

0x157d: PushEmpty(int, int)
0x157e: Push("branch")
0x157f: @ GetVariable(Stack[-1], Stack[-2])
0x1580: Pop(1)
0x1581: Stack[-3] = Stack[-1]
0x1582: Return(); Pop(2)

0x1583: PushEmpty(object, float, object, float)
0x1584: Push("player")
0x1585: @ FindActor(Stack[-3], Stack[-1])
0x1586: Pop(1)
0x1587: Pop(0); Push((bool) Stack[-2] == 0)
0x1588: IF (Stack[-1] == 0) GOTO 0x158b; Pop(1)

0x1589: Stack[-5] = (int) 0
0x158a: Return(); Pop(4)

0x158b: Push("reputation")
0x158c: @@ GetProperty(Stack[-1], Stack[-2])
0x158d: Pop(1)
0x158e: Stack[-5] = Stack[-1]
0x158f: Return(); Pop(4)

0x1590: Stack[-2] = 0
0x1591: PushEmpty()
0x1592: PushEmpty(int)
0x1593: Call2 0x157d

0x1594: Pop(0)
0x1595: Push((int) 1)
0x1596: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1597: IF (Stack[-1] == 0) GOTO 0x159b; Pop(1)

0x1598: @ WorkWithCorpse(Stack[-1])
0x1599: Pop(0)
0x159a: GOTO 0x159d

0x159b: @ Barter(Stack[-1])
0x159c: Pop(0)
0x159d: Return(); Pop(0)

0x159e: PushEmpty(int, bool, int, int, bool, int)
0x159f: Push((int) 0)
0x15a0: @ ClearSubContainer(Stack[-1])
0x15a1: Pop(1)
0x15a2: PushEmpty(int)
0x15a3: Call2 0x12f2

0x15a4: Stack[-2] = Stack[-1]
0x15a5: Pop(1)
0x15a6: Push(Stack[-7])
0x15a7: IF (Stack[-1] == 0) GOTO 0x15d4; Pop(1)

0x15a8: PushEmpty(string, int, int, int)
0x15a9: Stack[-4] = "alpha_pills"
0x15aa: Stack[-3] = (int) 1
0x15ab: Stack[-2] = (int) 2
0x15ac: Stack[-1] = (int) 4
0x15ad: Call2 0x129d

0x15ae: Pop(4)
0x15af: PushEmpty(string, int, int, int)
0x15b0: Stack[-4] = "meradorm"
0x15b1: Stack[-3] = (int) 2
0x15b2: Stack[-2] = (int) 3
0x15b3: Stack[-1] = (int) 3
0x15b4: Call2 0x129d

0x15b5: Pop(4)
0x15b6: Push((int) 3)
0x15b7: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15b8: IF (Stack[-1] == 0) GOTO 0x15bf; Pop(1)

0x15b9: PushEmpty(string, int, int)
0x15ba: Stack[-3] = "beta_pills"
0x15bb: Stack[-2] = (int) 1
0x15bc: Stack[-1] = (int) 4
0x15bd: Call2 0x1292

0x15be: Pop(3)
0x15bf: Push((int) 8)
0x15c0: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15c1: IF (Stack[-1] == 0) GOTO 0x15ca; Pop(1)

0x15c2: PushEmpty(string, int, int, int)
0x15c3: Stack[-4] = "monomicin"
0x15c4: Stack[-3] = (int) 1
0x15c5: Stack[-2] = (int) 2
0x15c6: Stack[-1] = (int) 2
0x15c7: Call2 0x129d

0x15c8: Pop(4)
0x15c9: GOTO 0x15d3

0x15ca: Push((int) 4)
0x15cb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15cc: IF (Stack[-1] == 0) GOTO 0x15d3; Pop(1)

0x15cd: PushEmpty(string, int, int)
0x15ce: Stack[-3] = "monomicin"
0x15cf: Stack[-2] = (int) 1
0x15d0: Stack[-1] = (int) 2
0x15d1: Call2 0x1292

0x15d2: Pop(3)
0x15d3: GOTO 0x1601

0x15d4: PushEmpty(string, int, int)
0x15d5: Stack[-3] = "lockpick"
0x15d6: Stack[-2] = (int) 1
0x15d7: Stack[-1] = (int) 4
0x15d8: Call2 0x1292

0x15d9: Pop(3)
0x15da: PushEmpty(string, int, int)
0x15db: Stack[-3] = "rifle_ammo"
0x15dc: Stack[-2] = (int) 1
0x15dd: Stack[-1] = (int) 2
0x15de: Call2 0x1292

0x15df: Pop(3)
0x15e0: PushEmpty(string, int, int)
0x15e1: Stack[-3] = "revolver_ammo"
0x15e2: Stack[-2] = (int) 1
0x15e3: Stack[-1] = (int) 2
0x15e4: Call2 0x1292

0x15e5: Pop(3)
0x15e6: PushEmpty(string, int, int, int)
0x15e7: Stack[-4] = "samopal_ammo"
0x15e8: Stack[-3] = (int) 1
0x15e9: Stack[-2] = (int) 2
0x15ea: Stack[-1] = (int) 2
0x15eb: Call2 0x129d

0x15ec: Pop(4)
0x15ed: Push((int) 8)
0x15ee: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15ef: IF (Stack[-1] == 0) GOTO 0x15f8; Pop(1)

0x15f0: PushEmpty(string, int, int, int)
0x15f1: Stack[-4] = "monomicin"
0x15f2: Stack[-3] = (int) 1
0x15f3: Stack[-2] = (int) 2
0x15f4: Stack[-1] = (int) 2
0x15f5: Call2 0x129d

0x15f6: Pop(4)
0x15f7: GOTO 0x1601

0x15f8: Push((int) 4)
0x15f9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x15fa: IF (Stack[-1] == 0) GOTO 0x1601; Pop(1)

0x15fb: PushEmpty(string, int, int)
0x15fc: Stack[-3] = "monomicin"
0x15fd: Stack[-2] = (int) 1
0x15fe: Stack[-1] = (int) 2
0x15ff: Call2 0x1292

0x1600: Pop(3)
0x1601: Return(); Pop(6)

0x1602: Stack[-1] = (int) 515559
0x1603: Return(); Pop(0)

0x1604: Stack[-1] = (int) 503344
0x1605: Return(); Pop(0)

0x1606: Stack[-1] = "ui/NPC_Citizen1.png"
0x1607: Return(); Pop(0)

0x1608: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x1609: Return(); Pop(0)

0x160a: Stack[-1] = (bool) 0
0x160b: Return(); Pop(0)

0x160c: Push(GlobalVars[0])
0x160d: Stack[-1] = (bool) 0
0x160e: GlobalVars[0] = Stack[-1]; Pop(1)
0x160f: PushEmpty(bool)
0x1610: Stack[-1] = (bool) 0
0x1611: Call2 0x159e

0x1612: Pop(1)
0x1613: Return(); Pop(0)

0x1614: PushEmpty(bool, bool)
0x1615: Push(GlobalVars[0])
0x1616: IF (Stack[-1] == 0) GOTO 0x1621; Pop(1)

0x1617: @ IsOverrideActive(Stack[-1])
0x1618: Pop(0)
0x1619: Pop(0); Push((bool) Stack[-1] == 0)
0x161a: IF (Stack[-1] == 0) GOTO 0x161f; Pop(1)

0x161b: PushEmpty(object)
0x161c: Stack[-1] = Stack[-4]
0x161d: Call2 0x1591

0x161e: Pop(1)
0x161f: Return(); Pop(2)

0x1620: GOTO 0x163b

0x1621: Push((int) 1000)
0x1622: PushEmpty(int, object)
0x1623: Stack[-1] = Stack[-6]
0x1624: Push(-2, 1); TaskCall(8)
0x1625: Call2 0x6c3

0x1626: Pop(-2, 1); TaskReturn
0x1627: Pop(1)
0x1628: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1629: IF (Stack[-1] == 0) GOTO 0x163b; Pop(1)

0x162a: PushEmpty(bool, object)
0x162b: Stack[-1] = Stack[-5]
0x162c: Call2 0x1226

0x162d: Pop(1)
0x162e: Pop(1); Push((bool) Stack[-1] == 0)
0x162f: IF (Stack[-1] == 0) GOTO 0x1631; Pop(1)

0x1630: Return(); Pop(2)

0x1631: PushEmpty(object)
0x1632: Stack[-1] = Stack[-4]
0x1633: Push(-1, 1); TaskCall(0)
0x1634: Call2 0x0

0x1635: Pop(-1, 1); TaskReturn
0x1636: Pop(1)
0x1637: PushEmpty(object)
0x1638: Stack[-1] = Stack[-4]
0x1639: Call2 0x125d

0x163a: Pop(1)
0x163b: Return(); Pop(2)

0x163c: PushEmpty(float)
0x163d: Call2 0x1583

0x163e: Pop(0)
0x163f: Push((float)0.6)
0x1640: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1641: Return(); Pop(0)

0x1642: PushEmpty()
0x1643: PushEmpty(bool, object, object, float)
0x1644: Stack[-3] = Stack[-7]
0x1645: Stack[-2] = Stack[-6]
0x1646: Stack[-1] = (float) 700.0
0x1647: Call2 0x13d8

0x1648: Stack[-8] = Stack[-4]
0x1649: Pop(4)
0x164a: Return(); Pop(0)

