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
	rifle_ammo
	revolver_ammo
	samopal_ammo
	lockpick
	alpha_pills
	meradorm
	powder
	beta_pills
	gamma_pills
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
		EVENT_11 Op = 0x87b Vars = (int, int)

Events:
EVENT_16 Op = 0x10f6 Vars = (object, string)
EVENT_41 Op = 0x10f8 Vars = (object)
EVENT_22 Op = 0x10fa Vars = (object, int, float, float)
EVENT_43 Op = 0x10fc Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x13e5

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1054

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
0x1c: Call2 0x13e5

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
0x2c: Call2 0x13e7

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
0x38: Call2 0xfbf

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x1220

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x1217

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
0x51: Call2 0x121a

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x1154

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x11a7

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
0x69: Call2 0x11b1

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x141d

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x11b9

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
0x85: Call2 0x11c3

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x120d

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
0x99: Call2 0x1210

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x10fe

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x111e

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x1212

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
0xbe: Call2 0x1215

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x1161

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x1171

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x1137

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x114e

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
0xf8: Call2 0x1220

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
0x111: Call2 0x10f8

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0xf9c

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
0x126: Call2 0x1196

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
0x134: Call2 0x119f

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
0x19c: Call2 0x1217

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
0x1aa: Call2 0x121a

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x1154

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x11a7

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
0x1c2: Call2 0x11b1

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x141d

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x11b9

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
0x1de: Call2 0x11c3

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x120d

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
0x1f2: Call2 0x1210

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x10fe

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x111e

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x1212

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
0x217: Call2 0x1215

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x1161

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x1171

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x1220

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x1137

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x114e

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0xfbf

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x1185

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0xfbf

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
0x263: Call2 0x117e

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
0x29c: Call2 0xf53

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x10cf

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0xfb4

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
0x2b4: Call2 0xfb4

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
0x2c8: Call2 0x1073

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x1217

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
0x2dc: Call2 0x121a

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x1154

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x11a7

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
0x2f4: Call2 0x11b1

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x141d

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x11b9

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
0x310: Call2 0x11c3

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x120d

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
0x324: Call2 0x1210

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x10fe

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x111e

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x1212

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
0x349: Call2 0x1215

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x1161

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x1171

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
0x36b: Call2 0x10f8

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0xf9c

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
0x381: Call2 0xf53

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x10cf

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0xfb4

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x1220

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x1137

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x114e

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
0x3c6: Call2 0x1220

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
0x3d3: Call2 0x10a5

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x10a5

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
0x409: Call2 0xf4e

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
0x424: Call2 0xf4e

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
0x460: Call2 0xf4e

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
0x471: Call2 0x10f8

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0xf53

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x10b4

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
0x48e: Call2 0x10a5

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x10a5

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
0x4c4: Call2 0xf4e

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
0x4df: Call2 0xf4e

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
0x51b: Call2 0xf4e

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
0x52c: Call2 0x10f8

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0xf53

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x10b4

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x1220

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
0x550: Call2 0x10a5

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x10a5

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
0x586: Call2 0xf4e

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
0x5a1: Call2 0xf4e

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
0x5dd: Call2 0xf4e

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
0x5ee: Call2 0x10f8

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0xf53

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x10b4

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x1220

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
0x612: Call2 0x10a5

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x10a5

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
0x648: Call2 0xf4e

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
0x663: Call2 0xf4e

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
0x69f: Call2 0xf4e

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
0x6b0: Call2 0x10f8

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0xf53

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x10b4

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0xfc4

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x13df

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x13dd

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x13e1

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x13e3

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x135f

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
0x704: Call2 0x1008

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
0x712: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x1268

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x865

0x71b: Pop(1)
0x71c: Push((int) 543247)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 1
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 1
0x725: PushEmpty(bool)
0x726: Stack[-1] = (bool) 1
0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x729: Call2 0x1274

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x72c: PushEmpty(bool, object)
0x72d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72e: Call2 0x127e

0x72f: Pop(1)
0x730: IF (Stack[-1] == 0) GOTO 0x732; Pop(1)

0x731: Stack[-1] = (bool) 0
0x732: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x733: PushEmpty(bool, object)
0x734: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x735: Call2 0x1288

0x736: Pop(1)
0x737: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x738: Stack[-1] = (bool) 0
0x739: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call2 0x1292

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73f: Stack[-1] = (bool) 0
0x740: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x741: Push((int) 543250)
0x742: Push((int) -1)
0x743: Push((int) 45706)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: PushEmpty(bool)
0x747: Stack[-1] = (bool) 1
0x748: PushEmpty(bool)
0x749: Stack[-1] = (bool) 1
0x74a: PushEmpty(bool)
0x74b: Stack[-1] = (bool) 1
0x74c: PushEmpty(bool, object)
0x74d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74e: Call2 0x129c

0x74f: Pop(1)
0x750: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x751: PushEmpty(bool, object)
0x752: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x753: Call2 0x12a6

0x754: Pop(1)
0x755: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x756: Stack[-1] = (bool) 0
0x757: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x758: PushEmpty(bool, object)
0x759: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75a: Call2 0x12b0

0x75b: Pop(1)
0x75c: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75d: Stack[-1] = (bool) 0
0x75e: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x75f: PushEmpty(bool, object)
0x760: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x761: Call2 0x12ba

0x762: Pop(1)
0x763: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x764: Stack[-1] = (bool) 0
0x765: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x766: Push((int) 543262)
0x767: Push((int) -1)
0x768: Push((int) 45718)
0x769: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76a: Pop(3)
0x76b: PushEmpty(bool)
0x76c: Stack[-1] = (bool) 1
0x76d: PushEmpty(bool)
0x76e: Stack[-1] = (bool) 1
0x76f: PushEmpty(bool)
0x770: Stack[-1] = (bool) 1
0x771: PushEmpty(bool, object)
0x772: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x773: Call2 0x12c4

0x774: Pop(1)
0x775: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x776: PushEmpty(bool, object)
0x777: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x778: Call2 0x12ce

0x779: Pop(1)
0x77a: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77b: Stack[-1] = (bool) 0
0x77c: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77d: PushEmpty(bool, object)
0x77e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77f: Call2 0x12d8

0x780: Pop(1)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: Stack[-1] = (bool) 0
0x783: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x784: PushEmpty(bool, object)
0x785: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x786: Call2 0x12e2

0x787: Pop(1)
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: Stack[-1] = (bool) 0
0x78a: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78b: Push((int) 543276)
0x78c: Push((int) -1)
0x78d: Push((int) 45732)
0x78e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78f: Pop(3)
0x790: PushEmpty(bool)
0x791: Stack[-1] = (bool) 1
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 1
0x794: PushEmpty(bool)
0x795: Stack[-1] = (bool) 1
0x796: PushEmpty(bool, object)
0x797: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x798: Call2 0x1274

0x799: Pop(1)
0x79a: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x79b: PushEmpty(bool, object)
0x79c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79d: Call2 0x1288

0x79e: Pop(1)
0x79f: IF (Stack[-1] == 0) GOTO 0x7a1; Pop(1)

0x7a0: Stack[-1] = (bool) 0
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a2: PushEmpty(bool, object)
0x7a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Call2 0x1292

0x7a5: Pop(1)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a7: Stack[-1] = (bool) 0
0x7a8: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7a9: PushEmpty(bool, object)
0x7aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ab: Call2 0x12b0

0x7ac: Pop(1)
0x7ad: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ae: Stack[-1] = (bool) 0
0x7af: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b0: Push((int) 543248)
0x7b1: Push((int) -1)
0x7b2: Push((int) 45704)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: PushEmpty(bool)
0x7b6: Stack[-1] = (bool) 1
0x7b7: PushEmpty(bool)
0x7b8: Stack[-1] = (bool) 1
0x7b9: PushEmpty(bool)
0x7ba: Stack[-1] = (bool) 1
0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bd: Call2 0x12a6

0x7be: Pop(1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c0: PushEmpty(bool, object)
0x7c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c2: Call2 0x129c

0x7c3: Pop(1)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c5: Stack[-1] = (bool) 0
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c9: Call2 0x12ba

0x7ca: Pop(1)
0x7cb: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cc: Stack[-1] = (bool) 0
0x7cd: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7ce: PushEmpty(bool, object)
0x7cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d0: Call2 0x127e

0x7d1: Pop(1)
0x7d2: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d3: Stack[-1] = (bool) 0
0x7d4: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7d5: Push((int) 543252)
0x7d6: Push((int) -1)
0x7d7: Push((int) 45708)
0x7d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d9: Pop(3)
0x7da: PushEmpty(bool)
0x7db: Stack[-1] = (bool) 1
0x7dc: PushEmpty(bool, object)
0x7dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7de: Call2 0x12d8

0x7df: Pop(1)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e1: PushEmpty(bool, object)
0x7e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e3: Call2 0x12e2

0x7e4: Pop(1)
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e6: Stack[-1] = (bool) 0
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e8: Push((int) 543281)
0x7e9: Push((int) -1)
0x7ea: Push((int) 45737)
0x7eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ec: Pop(3)
0x7ed: PushEmpty(bool)
0x7ee: Stack[-1] = (bool) 1
0x7ef: PushEmpty(bool, object)
0x7f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f1: Call2 0x12c4

0x7f2: Pop(1)
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f4: PushEmpty(bool, object)
0x7f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Call2 0x12ce

0x7f7: Pop(1)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f9: Stack[-1] = (bool) 0
0x7fa: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fb: Push((int) 543275)
0x7fc: Push((int) -1)
0x7fd: Push((int) 45731)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: GOTO 0x847

0x801: PushEmpty(string)
0x802: Stack[-1] = "Neutral"
0x803: Call2 0x865

0x804: Pop(1)
0x805: Push((int) 537506)
0x806: @@ SetMessage(Stack[-1])
0x807: Pop(1)
0x808: @@ ClearReplies()
0x809: Pop(0)
0x80a: Push((int) 537507)
0x80b: Push((int) -1)
0x80c: Push((int) 39354)
0x80d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80e: Pop(3)
0x80f: PushEmpty(bool)
0x810: Stack[-1] = (bool) 0
0x811: PushEmpty(bool, object)
0x812: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x813: Call2 0x125c

0x814: Pop(1)
0x815: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x816: PushEmpty(bool, object)
0x817: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x818: Call2 0x1288

0x819: Pop(1)
0x81a: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x81b: Stack[-1] = (bool) 1
0x81c: IF (Stack[-1] == 0) GOTO 0x822; Pop(1)

0x81d: Push((int) 537549)
0x81e: Push((int) 39397)
0x81f: Push((int) 39396)
0x820: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x821: Pop(3)
0x822: PushEmpty(bool, object)
0x823: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x824: Call2 0x1274

0x825: Pop(1)
0x826: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x827: Push((int) 537671)
0x828: Push((int) 39520)
0x829: Push((int) 39519)
0x82a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82b: Pop(3)
0x82c: PushEmpty(bool)
0x82d: Stack[-1] = (bool) 0
0x82e: PushEmpty(bool, object)
0x82f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x830: Call2 0x1274

0x831: Pop(1)
0x832: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x833: PushEmpty(bool, object)
0x834: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x835: Call2 0x12ec

0x836: Pop(1)
0x837: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x838: Stack[-1] = (bool) 1
0x839: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83a: Push((int) 537702)
0x83b: Push((int) 39551)
0x83c: Push((int) 39550)
0x83d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83e: Pop(3)
0x83f: Push((int) 537721)
0x840: Push((int) -1)
0x841: Push((int) 39569)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: GOTO 0x847

0x845: Return(); Pop(0)

0x846: GOTO 0x711

0x847: PushEmpty(bool)
0x848: Call2 0x13e5

0x849: Pop(0)
0x84a: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x84b: @ lshWaitForAnimEnd()
0x84c: Pop(0)
0x84d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84e: IF (Stack[-1] == 0) GOTO 0x850; Pop(1)

0x84f: GOTO 0x855

0x850: PushEmpty(string)
0x851: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x852: Call2 0x1054

0x853: Pop(1)
0x854: GOTO 0x84b

0x855: GOTO 0x864

0x856: Push("all")
0x857: Push("idle")
0x858: @ PlayAnimation(Stack[-2], Stack[-1])
0x859: Pop(2)
0x85a: @ WaitForAnimEnd()
0x85b: Pop(0)
0x85c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: GOTO 0x864

0x85f: Push("all")
0x860: Push("idle")
0x861: @ PlayAnimation(Stack[-2], Stack[-1])
0x862: Pop(2)
0x863: GOTO 0x85a

0x864: Return(); Pop(0)

0x865: PushEmpty()
0x866: PushEmpty(bool)
0x867: Call2 0x13e5

0x868: Pop(0)
0x869: Pop(1); Push((bool) Stack[-1] == 0)
0x86a: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86b: Return(); Pop(0)

0x86c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x86d: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86e: Return(); Pop(0)

0x86f: PushEmpty(string, bool)
0x870: Stack[-2] = Stack[-3]
0x871: Push("")
0x872: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-1] = (bool) 0
0x875: GOTO 0x877

0x876: Stack[-1] = (bool) 1
0x877: Call2 0x1064

0x878: Pop(2)
0x879: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x87a: Return(); Pop(0)

0x87b: PushEmpty()
0x87c: Push((int) 1)
0x87d: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0x87e: PushEmpty()
0x87f: Call2 0x107e

0x880: Pop(0)
0x881: Push((int) 45706)
0x882: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x883: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x884: PushEmpty(object, object)
0x885: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x886: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x887: Call2 0x1257

0x888: Pop(2)
0x889: Push((int) 45718)
0x88a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88b: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88c: PushEmpty(object, object)
0x88d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88f: Call2 0x1257

0x890: Pop(2)
0x891: Push((int) 45732)
0x892: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x893: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x894: PushEmpty(object, object)
0x895: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x896: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x897: Call2 0x1257

0x898: Pop(2)
0x899: Push((int) 39354)
0x89a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x89c: PushEmpty(object, object)
0x89d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x89e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89f: Call2 0x1257

0x8a0: Pop(2)
0x8a1: Push((int) 45703)
0x8a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x8a4: PushEmpty(bool, object)
0x8a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a6: Call2 0x1268

0x8a7: Pop(1)
0x8a8: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x8a9: PushEmpty(string)
0x8aa: Stack[-1] = "Neutral"
0x8ab: Call2 0x865

0x8ac: Pop(1)
0x8ad: Push((int) 543247)
0x8ae: @@ SetMessage(Stack[-1])
0x8af: Pop(1)
0x8b0: @@ ClearReplies()
0x8b1: Pop(0)
0x8b2: PushEmpty(bool)
0x8b3: Stack[-1] = (bool) 1
0x8b4: PushEmpty(bool)
0x8b5: Stack[-1] = (bool) 1
0x8b6: PushEmpty(bool)
0x8b7: Stack[-1] = (bool) 1
0x8b8: PushEmpty(bool, object)
0x8b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ba: Call2 0x1274

0x8bb: Pop(1)
0x8bc: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8bd: PushEmpty(bool, object)
0x8be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8bf: Call2 0x127e

0x8c0: Pop(1)
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c3; Pop(1)

0x8c2: Stack[-1] = (bool) 0
0x8c3: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c4: PushEmpty(bool, object)
0x8c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c6: Call2 0x1288

0x8c7: Pop(1)
0x8c8: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c9: Stack[-1] = (bool) 0
0x8ca: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8cb: PushEmpty(bool, object)
0x8cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8cd: Call2 0x1292

0x8ce: Pop(1)
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8d0: Stack[-1] = (bool) 0
0x8d1: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d2: Push((int) 543250)
0x8d3: Push((int) -1)
0x8d4: Push((int) 45706)
0x8d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d6: Pop(3)
0x8d7: PushEmpty(bool)
0x8d8: Stack[-1] = (bool) 1
0x8d9: PushEmpty(bool)
0x8da: Stack[-1] = (bool) 1
0x8db: PushEmpty(bool)
0x8dc: Stack[-1] = (bool) 1
0x8dd: PushEmpty(bool, object)
0x8de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8df: Call2 0x129c

0x8e0: Pop(1)
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e2: PushEmpty(bool, object)
0x8e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e4: Call2 0x12a6

0x8e5: Pop(1)
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e7: Stack[-1] = (bool) 0
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8e9: PushEmpty(bool, object)
0x8ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8eb: Call2 0x12b0

0x8ec: Pop(1)
0x8ed: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ee: Stack[-1] = (bool) 0
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f0: PushEmpty(bool, object)
0x8f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f2: Call2 0x12ba

0x8f3: Pop(1)
0x8f4: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f5: Stack[-1] = (bool) 0
0x8f6: IF (Stack[-1] == 0) GOTO 0x8fc; Pop(1)

0x8f7: Push((int) 543262)
0x8f8: Push((int) -1)
0x8f9: Push((int) 45718)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: PushEmpty(bool)
0x8fd: Stack[-1] = (bool) 1
0x8fe: PushEmpty(bool)
0x8ff: Stack[-1] = (bool) 1
0x900: PushEmpty(bool)
0x901: Stack[-1] = (bool) 1
0x902: PushEmpty(bool, object)
0x903: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x904: Call2 0x12c4

0x905: Pop(1)
0x906: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x907: PushEmpty(bool, object)
0x908: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x909: Call2 0x12ce

0x90a: Pop(1)
0x90b: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90c: Stack[-1] = (bool) 0
0x90d: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90e: PushEmpty(bool, object)
0x90f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x910: Call2 0x12d8

0x911: Pop(1)
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: Stack[-1] = (bool) 0
0x914: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x915: PushEmpty(bool, object)
0x916: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x917: Call2 0x12e2

0x918: Pop(1)
0x919: IF (Stack[-1] == 0) GOTO 0x91b; Pop(1)

0x91a: Stack[-1] = (bool) 0
0x91b: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91c: Push((int) 543276)
0x91d: Push((int) -1)
0x91e: Push((int) 45732)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: PushEmpty(bool)
0x922: Stack[-1] = (bool) 1
0x923: PushEmpty(bool)
0x924: Stack[-1] = (bool) 1
0x925: PushEmpty(bool)
0x926: Stack[-1] = (bool) 1
0x927: PushEmpty(bool, object)
0x928: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x929: Call2 0x1274

0x92a: Pop(1)
0x92b: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x92c: PushEmpty(bool, object)
0x92d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92e: Call2 0x1288

0x92f: Pop(1)
0x930: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x931: Stack[-1] = (bool) 0
0x932: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x933: PushEmpty(bool, object)
0x934: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x935: Call2 0x1292

0x936: Pop(1)
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: Stack[-1] = (bool) 0
0x939: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93a: PushEmpty(bool, object)
0x93b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x93c: Call2 0x12b0

0x93d: Pop(1)
0x93e: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93f: Stack[-1] = (bool) 0
0x940: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x941: Push((int) 543248)
0x942: Push((int) -1)
0x943: Push((int) 45704)
0x944: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x945: Pop(3)
0x946: PushEmpty(bool)
0x947: Stack[-1] = (bool) 1
0x948: PushEmpty(bool)
0x949: Stack[-1] = (bool) 1
0x94a: PushEmpty(bool)
0x94b: Stack[-1] = (bool) 1
0x94c: PushEmpty(bool, object)
0x94d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94e: Call2 0x12a6

0x94f: Pop(1)
0x950: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x951: PushEmpty(bool, object)
0x952: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x953: Call2 0x129c

0x954: Pop(1)
0x955: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x956: Stack[-1] = (bool) 0
0x957: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x958: PushEmpty(bool, object)
0x959: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95a: Call2 0x12ba

0x95b: Pop(1)
0x95c: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95d: Stack[-1] = (bool) 0
0x95e: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x95f: PushEmpty(bool, object)
0x960: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x961: Call2 0x127e

0x962: Pop(1)
0x963: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x964: Stack[-1] = (bool) 0
0x965: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x966: Push((int) 543252)
0x967: Push((int) -1)
0x968: Push((int) 45708)
0x969: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96a: Pop(3)
0x96b: PushEmpty(bool)
0x96c: Stack[-1] = (bool) 1
0x96d: PushEmpty(bool, object)
0x96e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96f: Call2 0x12d8

0x970: Pop(1)
0x971: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x972: PushEmpty(bool, object)
0x973: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x974: Call2 0x12e2

0x975: Pop(1)
0x976: IF (Stack[-1] == 0) GOTO 0x978; Pop(1)

0x977: Stack[-1] = (bool) 0
0x978: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x979: Push((int) 543281)
0x97a: Push((int) -1)
0x97b: Push((int) 45737)
0x97c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97d: Pop(3)
0x97e: PushEmpty(bool)
0x97f: Stack[-1] = (bool) 1
0x980: PushEmpty(bool, object)
0x981: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x982: Call2 0x12c4

0x983: Pop(1)
0x984: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x985: PushEmpty(bool, object)
0x986: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x987: Call2 0x12ce

0x988: Pop(1)
0x989: IF (Stack[-1] == 0) GOTO 0x98b; Pop(1)

0x98a: Stack[-1] = (bool) 0
0x98b: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98c: Push((int) 543275)
0x98d: Push((int) -1)
0x98e: Push((int) 45731)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: Return(); Pop(0)

0x992: PushEmpty(string)
0x993: Stack[-1] = "Neutral"
0x994: Call2 0x865

0x995: Pop(1)
0x996: Push((int) 537506)
0x997: @@ SetMessage(Stack[-1])
0x998: Pop(1)
0x999: @@ ClearReplies()
0x99a: Pop(0)
0x99b: Push((int) 537507)
0x99c: Push((int) -1)
0x99d: Push((int) 39354)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: PushEmpty(bool)
0x9a1: Stack[-1] = (bool) 0
0x9a2: PushEmpty(bool, object)
0x9a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a4: Call2 0x125c

0x9a5: Pop(1)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a7: PushEmpty(bool, object)
0x9a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a9: Call2 0x1288

0x9aa: Pop(1)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: Stack[-1] = (bool) 1
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ae: Push((int) 537549)
0x9af: Push((int) 39397)
0x9b0: Push((int) 39396)
0x9b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b2: Pop(3)
0x9b3: PushEmpty(bool, object)
0x9b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b5: Call2 0x1274

0x9b6: Pop(1)
0x9b7: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9b8: Push((int) 537671)
0x9b9: Push((int) 39520)
0x9ba: Push((int) 39519)
0x9bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bc: Pop(3)
0x9bd: PushEmpty(bool)
0x9be: Stack[-1] = (bool) 0
0x9bf: PushEmpty(bool, object)
0x9c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c1: Call2 0x1274

0x9c2: Pop(1)
0x9c3: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c4: PushEmpty(bool, object)
0x9c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c6: Call2 0x12ec

0x9c7: Pop(1)
0x9c8: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9c9: Stack[-1] = (bool) 1
0x9ca: IF (Stack[-1] == 0) GOTO 0x9d0; Pop(1)

0x9cb: Push((int) 537702)
0x9cc: Push((int) 39551)
0x9cd: Push((int) 39550)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Push((int) 537721)
0x9d1: Push((int) -1)
0x9d2: Push((int) 39569)
0x9d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(3)
0x9d5: Return(); Pop(0)

0x9d6: Push((int) 39551)
0x9d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9d9: PushEmpty(string)
0x9da: Stack[-1] = "Neutral"
0x9db: Call2 0x865

0x9dc: Pop(1)
0x9dd: Push((int) 537703)
0x9de: @@ SetMessage(Stack[-1])
0x9df: Pop(1)
0x9e0: @@ ClearReplies()
0x9e1: Pop(0)
0x9e2: Push((int) 537704)
0x9e3: Push((int) 39553)
0x9e4: Push((int) 39552)
0x9e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e6: Pop(3)
0x9e7: Return(); Pop(0)

0x9e8: Push((int) 39553)
0x9e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9eb: PushEmpty(string)
0x9ec: Stack[-1] = "Neutral"
0x9ed: Call2 0x865

0x9ee: Pop(1)
0x9ef: Push((int) 537705)
0x9f0: @@ SetMessage(Stack[-1])
0x9f1: Pop(1)
0x9f2: @@ ClearReplies()
0x9f3: Pop(0)
0x9f4: Push((int) 537706)
0x9f5: Push((int) 39555)
0x9f6: Push((int) 39554)
0x9f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f8: Pop(3)
0x9f9: Push((int) 537717)
0x9fa: Push((int) 39566)
0x9fb: Push((int) 39565)
0x9fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fd: Pop(3)
0x9fe: Return(); Pop(0)

0x9ff: Push((int) 39566)
0xa00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa1b; Pop(1)

0xa02: PushEmpty(string)
0xa03: Stack[-1] = "Neutral"
0xa04: Call2 0x865

0xa05: Pop(1)
0xa06: Push((int) 537718)
0xa07: @@ SetMessage(Stack[-1])
0xa08: Pop(1)
0xa09: @@ ClearReplies()
0xa0a: Pop(0)
0xa0b: Push((int) 537719)
0xa0c: Push((int) -1)
0xa0d: Push((int) 39567)
0xa0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0f: Pop(3)
0xa10: PushEmpty(bool, object)
0xa11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa12: Call2 0x125c

0xa13: Pop(1)
0xa14: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa15: Push((int) 537720)
0xa16: Push((int) -1)
0xa17: Push((int) 39568)
0xa18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa19: Pop(3)
0xa1a: Return(); Pop(0)

0xa1b: Push((int) 39555)
0xa1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa32; Pop(1)

0xa1e: PushEmpty(string)
0xa1f: Stack[-1] = "Neutral"
0xa20: Call2 0x865

0xa21: Pop(1)
0xa22: Push((int) 537707)
0xa23: @@ SetMessage(Stack[-1])
0xa24: Pop(1)
0xa25: @@ ClearReplies()
0xa26: Pop(0)
0xa27: Push((int) 537708)
0xa28: Push((int) 39557)
0xa29: Push((int) 39556)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: Push((int) 537711)
0xa2d: Push((int) 39560)
0xa2e: Push((int) 39559)
0xa2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa30: Pop(3)
0xa31: Return(); Pop(0)

0xa32: Push((int) 39560)
0xa33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa34: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa35: PushEmpty(string)
0xa36: Stack[-1] = "Neutral"
0xa37: Call2 0x865

0xa38: Pop(1)
0xa39: Push((int) 537712)
0xa3a: @@ SetMessage(Stack[-1])
0xa3b: Pop(1)
0xa3c: @@ ClearReplies()
0xa3d: Pop(0)
0xa3e: PushEmpty(bool, object)
0xa3f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa40: Call2 0x125c

0xa41: Pop(1)
0xa42: IF (Stack[-1] == 0) GOTO 0xa48; Pop(1)

0xa43: Push((int) 537713)
0xa44: Push((int) -1)
0xa45: Push((int) 39561)
0xa46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa47: Pop(3)
0xa48: Push((int) 537714)
0xa49: Push((int) 39563)
0xa4a: Push((int) 39562)
0xa4b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4c: Pop(3)
0xa4d: Return(); Pop(0)

0xa4e: Push((int) 39563)
0xa4f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa51: PushEmpty(string)
0xa52: Stack[-1] = "Neutral"
0xa53: Call2 0x865

0xa54: Pop(1)
0xa55: Push((int) 537715)
0xa56: @@ SetMessage(Stack[-1])
0xa57: Pop(1)
0xa58: @@ ClearReplies()
0xa59: Pop(0)
0xa5a: Push((int) 537716)
0xa5b: Push((int) -1)
0xa5c: Push((int) 39564)
0xa5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5e: Pop(3)
0xa5f: Return(); Pop(0)

0xa60: Push((int) 39557)
0xa61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa62: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa63: PushEmpty(string)
0xa64: Stack[-1] = "Neutral"
0xa65: Call2 0x865

0xa66: Pop(1)
0xa67: Push((int) 537709)
0xa68: @@ SetMessage(Stack[-1])
0xa69: Pop(1)
0xa6a: @@ ClearReplies()
0xa6b: Pop(0)
0xa6c: Push((int) 537710)
0xa6d: Push((int) -1)
0xa6e: Push((int) 39558)
0xa6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa70: Pop(3)
0xa71: Return(); Pop(0)

0xa72: Push((int) 39538)
0xa73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa75: Push((int) 39540)
0xa76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa78: PushEmpty(string)
0xa79: Stack[-1] = "Neutral"
0xa7a: Call2 0x865

0xa7b: Pop(1)
0xa7c: Push((int) 537692)
0xa7d: @@ SetMessage(Stack[-1])
0xa7e: Pop(1)
0xa7f: @@ ClearReplies()
0xa80: Pop(0)
0xa81: Push((int) 537693)
0xa82: Push((int) 39542)
0xa83: Push((int) 39541)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: Push((int) 537696)
0xa87: Push((int) 39545)
0xa88: Push((int) 39544)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: Return(); Pop(0)

0xa8c: Push((int) 39545)
0xa8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8e: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa8f: PushEmpty(string)
0xa90: Stack[-1] = "Neutral"
0xa91: Call2 0x865

0xa92: Pop(1)
0xa93: Push((int) 537697)
0xa94: @@ SetMessage(Stack[-1])
0xa95: Pop(1)
0xa96: @@ ClearReplies()
0xa97: Pop(0)
0xa98: Push((int) 537698)
0xa99: Push((int) 39547)
0xa9a: Push((int) 39546)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: Return(); Pop(0)

0xa9e: Push((int) 39547)
0xa9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa0: IF (Stack[-1] == 0) GOTO 0xab0; Pop(1)

0xaa1: PushEmpty(string)
0xaa2: Stack[-1] = "Neutral"
0xaa3: Call2 0x865

0xaa4: Pop(1)
0xaa5: Push((int) 537699)
0xaa6: @@ SetMessage(Stack[-1])
0xaa7: Pop(1)
0xaa8: @@ ClearReplies()
0xaa9: Pop(0)
0xaaa: Push((int) 537700)
0xaab: Push((int) -1)
0xaac: Push((int) 39548)
0xaad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaae: Pop(3)
0xaaf: Return(); Pop(0)

0xab0: Push((int) 39542)
0xab1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab2: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xab3: PushEmpty(string)
0xab4: Stack[-1] = "Neutral"
0xab5: Call2 0x865

0xab6: Pop(1)
0xab7: Push((int) 537694)
0xab8: @@ SetMessage(Stack[-1])
0xab9: Pop(1)
0xaba: @@ ClearReplies()
0xabb: Pop(0)
0xabc: Push((int) 537695)
0xabd: Push((int) -1)
0xabe: Push((int) 39543)
0xabf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac0: Pop(3)
0xac1: Return(); Pop(0)

0xac2: Push((int) 39520)
0xac3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac4: IF (Stack[-1] == 0) GOTO 0xad9; Pop(1)

0xac5: PushEmpty(string)
0xac6: Stack[-1] = "Neutral"
0xac7: Call2 0x865

0xac8: Pop(1)
0xac9: Push((int) 537672)
0xaca: @@ SetMessage(Stack[-1])
0xacb: Pop(1)
0xacc: @@ ClearReplies()
0xacd: Pop(0)
0xace: Push((int) 537673)
0xacf: Push((int) 39522)
0xad0: Push((int) 39521)
0xad1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad2: Pop(3)
0xad3: Push((int) 537678)
0xad4: Push((int) 39527)
0xad5: Push((int) 39526)
0xad6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad7: Pop(3)
0xad8: Return(); Pop(0)

0xad9: Push((int) 39527)
0xada: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xadb: IF (Stack[-1] == 0) GOTO 0xaeb; Pop(1)

0xadc: PushEmpty(string)
0xadd: Stack[-1] = "Neutral"
0xade: Call2 0x865

0xadf: Pop(1)
0xae0: Push((int) 537679)
0xae1: @@ SetMessage(Stack[-1])
0xae2: Pop(1)
0xae3: @@ ClearReplies()
0xae4: Pop(0)
0xae5: Push((int) 537680)
0xae6: Push((int) 39529)
0xae7: Push((int) 39528)
0xae8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae9: Pop(3)
0xaea: Return(); Pop(0)

0xaeb: Push((int) 39529)
0xaec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaed: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xaee: PushEmpty(string)
0xaef: Stack[-1] = "Neutral"
0xaf0: Call2 0x865

0xaf1: Pop(1)
0xaf2: Push((int) 537681)
0xaf3: @@ SetMessage(Stack[-1])
0xaf4: Pop(1)
0xaf5: @@ ClearReplies()
0xaf6: Pop(0)
0xaf7: PushEmpty(bool, object)
0xaf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf9: Call2 0x125c

0xafa: Pop(1)
0xafb: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xafc: Push((int) 537682)
0xafd: Push((int) 39531)
0xafe: Push((int) 39530)
0xaff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb00: Pop(3)
0xb01: Push((int) 537688)
0xb02: Push((int) -1)
0xb03: Push((int) 39536)
0xb04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb05: Pop(3)
0xb06: Return(); Pop(0)

0xb07: Push((int) 39531)
0xb08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb09: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb0a: PushEmpty(string)
0xb0b: Stack[-1] = "Neutral"
0xb0c: Call2 0x865

0xb0d: Pop(1)
0xb0e: Push((int) 537683)
0xb0f: @@ SetMessage(Stack[-1])
0xb10: Pop(1)
0xb11: @@ ClearReplies()
0xb12: Pop(0)
0xb13: Push((int) 537684)
0xb14: Push((int) 39533)
0xb15: Push((int) 39532)
0xb16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb17: Pop(3)
0xb18: Push((int) 537687)
0xb19: Push((int) -1)
0xb1a: Push((int) 39535)
0xb1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1c: Pop(3)
0xb1d: Return(); Pop(0)

0xb1e: Push((int) 39533)
0xb1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb20: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb21: PushEmpty(string)
0xb22: Stack[-1] = "Neutral"
0xb23: Call2 0x865

0xb24: Pop(1)
0xb25: Push((int) 537685)
0xb26: @@ SetMessage(Stack[-1])
0xb27: Pop(1)
0xb28: @@ ClearReplies()
0xb29: Pop(0)
0xb2a: Push((int) 537686)
0xb2b: Push((int) -1)
0xb2c: Push((int) 39534)
0xb2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2e: Pop(3)
0xb2f: Return(); Pop(0)

0xb30: Push((int) 39522)
0xb31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb33: PushEmpty(string)
0xb34: Stack[-1] = "Neutral"
0xb35: Call2 0x865

0xb36: Pop(1)
0xb37: Push((int) 537674)
0xb38: @@ SetMessage(Stack[-1])
0xb39: Pop(1)
0xb3a: @@ ClearReplies()
0xb3b: Pop(0)
0xb3c: Push((int) 537675)
0xb3d: Push((int) 39524)
0xb3e: Push((int) 39523)
0xb3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb40: Pop(3)
0xb41: Return(); Pop(0)

0xb42: Push((int) 39524)
0xb43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb45: PushEmpty(string)
0xb46: Stack[-1] = "Neutral"
0xb47: Call2 0x865

0xb48: Pop(1)
0xb49: Push((int) 537676)
0xb4a: @@ SetMessage(Stack[-1])
0xb4b: Pop(1)
0xb4c: @@ ClearReplies()
0xb4d: Pop(0)
0xb4e: Push((int) 537677)
0xb4f: Push((int) -1)
0xb50: Push((int) 39525)
0xb51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb52: Pop(3)
0xb53: Return(); Pop(0)

0xb54: Push((int) 39514)
0xb55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb56: IF (Stack[-1] == 0) GOTO 0xb57; Pop(1)

0xb57: Push((int) 39516)
0xb58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb59: IF (Stack[-1] == 0) GOTO 0xb69; Pop(1)

0xb5a: PushEmpty(string)
0xb5b: Stack[-1] = "Neutral"
0xb5c: Call2 0x865

0xb5d: Pop(1)
0xb5e: Push((int) 537668)
0xb5f: @@ SetMessage(Stack[-1])
0xb60: Pop(1)
0xb61: @@ ClearReplies()
0xb62: Pop(0)
0xb63: Push((int) 537669)
0xb64: Push((int) -1)
0xb65: Push((int) 39517)
0xb66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb67: Pop(3)
0xb68: Return(); Pop(0)

0xb69: Push((int) 39508)
0xb6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6b: IF (Stack[-1] == 0) GOTO 0xb6c; Pop(1)

0xb6c: Push((int) 39510)
0xb6d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6e: IF (Stack[-1] == 0) GOTO 0xb7e; Pop(1)

0xb6f: PushEmpty(string)
0xb70: Stack[-1] = "Neutral"
0xb71: Call2 0x865

0xb72: Pop(1)
0xb73: Push((int) 537662)
0xb74: @@ SetMessage(Stack[-1])
0xb75: Pop(1)
0xb76: @@ ClearReplies()
0xb77: Pop(0)
0xb78: Push((int) 537663)
0xb79: Push((int) -1)
0xb7a: Push((int) 39511)
0xb7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7c: Pop(3)
0xb7d: Return(); Pop(0)

0xb7e: Push((int) 39496)
0xb7f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb80: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb81: Push((int) 39498)
0xb82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb84: PushEmpty(string)
0xb85: Stack[-1] = "Neutral"
0xb86: Call2 0x865

0xb87: Pop(1)
0xb88: Push((int) 537650)
0xb89: @@ SetMessage(Stack[-1])
0xb8a: Pop(1)
0xb8b: @@ ClearReplies()
0xb8c: Pop(0)
0xb8d: Push((int) 537651)
0xb8e: Push((int) 39500)
0xb8f: Push((int) 39499)
0xb90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb91: Pop(3)
0xb92: Push((int) 537657)
0xb93: Push((int) -1)
0xb94: Push((int) 39505)
0xb95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb96: Pop(3)
0xb97: Return(); Pop(0)

0xb98: Push((int) 39500)
0xb99: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9a: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xb9b: PushEmpty(string)
0xb9c: Stack[-1] = "Neutral"
0xb9d: Call2 0x865

0xb9e: Pop(1)
0xb9f: Push((int) 537652)
0xba0: @@ SetMessage(Stack[-1])
0xba1: Pop(1)
0xba2: @@ ClearReplies()
0xba3: Pop(0)
0xba4: Push((int) 537653)
0xba5: Push((int) -1)
0xba6: Push((int) 39501)
0xba7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba8: Pop(3)
0xba9: Push((int) 537654)
0xbaa: Push((int) 39503)
0xbab: Push((int) 39502)
0xbac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbad: Pop(3)
0xbae: Return(); Pop(0)

0xbaf: Push((int) 39503)
0xbb0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb1: IF (Stack[-1] == 0) GOTO 0xbc1; Pop(1)

0xbb2: PushEmpty(string)
0xbb3: Stack[-1] = "Neutral"
0xbb4: Call2 0x865

0xbb5: Pop(1)
0xbb6: Push((int) 537655)
0xbb7: @@ SetMessage(Stack[-1])
0xbb8: Pop(1)
0xbb9: @@ ClearReplies()
0xbba: Pop(0)
0xbbb: Push((int) 537656)
0xbbc: Push((int) -1)
0xbbd: Push((int) 39504)
0xbbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbf: Pop(3)
0xbc0: Return(); Pop(0)

0xbc1: Push((int) 39489)
0xbc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbc4: Push((int) 39491)
0xbc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc6: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbc7: PushEmpty(string)
0xbc8: Stack[-1] = "Neutral"
0xbc9: Call2 0x865

0xbca: Pop(1)
0xbcb: Push((int) 537643)
0xbcc: @@ SetMessage(Stack[-1])
0xbcd: Pop(1)
0xbce: @@ ClearReplies()
0xbcf: Pop(0)
0xbd0: Push((int) 537644)
0xbd1: Push((int) -1)
0xbd2: Push((int) 39492)
0xbd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd4: Pop(3)
0xbd5: PushEmpty(bool, object)
0xbd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd7: Call2 0x125c

0xbd8: Pop(1)
0xbd9: IF (Stack[-1] == 0) GOTO 0xbdf; Pop(1)

0xbda: Push((int) 537645)
0xbdb: Push((int) -1)
0xbdc: Push((int) 39493)
0xbdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbde: Pop(3)
0xbdf: Return(); Pop(0)

0xbe0: Push((int) 39482)
0xbe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe2: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe3: Push((int) 39484)
0xbe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe5: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbe6: PushEmpty(string)
0xbe7: Stack[-1] = "Neutral"
0xbe8: Call2 0x865

0xbe9: Pop(1)
0xbea: Push((int) 537636)
0xbeb: @@ SetMessage(Stack[-1])
0xbec: Pop(1)
0xbed: @@ ClearReplies()
0xbee: Pop(0)
0xbef: Push((int) 537637)
0xbf0: Push((int) -1)
0xbf1: Push((int) 39485)
0xbf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf3: Pop(3)
0xbf4: Push((int) 537638)
0xbf5: Push((int) -1)
0xbf6: Push((int) 39486)
0xbf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf8: Pop(3)
0xbf9: Return(); Pop(0)

0xbfa: Push((int) 39470)
0xbfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfc: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbfd: Push((int) 39472)
0xbfe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbff: IF (Stack[-1] == 0) GOTO 0xc0f; Pop(1)

0xc00: PushEmpty(string)
0xc01: Stack[-1] = "Neutral"
0xc02: Call2 0x865

0xc03: Pop(1)
0xc04: Push((int) 537624)
0xc05: @@ SetMessage(Stack[-1])
0xc06: Pop(1)
0xc07: @@ ClearReplies()
0xc08: Pop(0)
0xc09: Push((int) 537625)
0xc0a: Push((int) 39474)
0xc0b: Push((int) 39473)
0xc0c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0d: Pop(3)
0xc0e: Return(); Pop(0)

0xc0f: Push((int) 39474)
0xc10: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc11: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc12: PushEmpty(string)
0xc13: Stack[-1] = "Neutral"
0xc14: Call2 0x865

0xc15: Pop(1)
0xc16: Push((int) 537626)
0xc17: @@ SetMessage(Stack[-1])
0xc18: Pop(1)
0xc19: @@ ClearReplies()
0xc1a: Pop(0)
0xc1b: Push((int) 537627)
0xc1c: Push((int) -1)
0xc1d: Push((int) 39475)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Push((int) 537628)
0xc21: Push((int) 39477)
0xc22: Push((int) 39476)
0xc23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc24: Pop(3)
0xc25: Return(); Pop(0)

0xc26: Push((int) 39477)
0xc27: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc28: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc29: PushEmpty(string)
0xc2a: Stack[-1] = "Neutral"
0xc2b: Call2 0x865

0xc2c: Pop(1)
0xc2d: Push((int) 537629)
0xc2e: @@ SetMessage(Stack[-1])
0xc2f: Pop(1)
0xc30: @@ ClearReplies()
0xc31: Pop(0)
0xc32: Push((int) 537630)
0xc33: Push((int) -1)
0xc34: Push((int) 39478)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Push((int) 537631)
0xc38: Push((int) -1)
0xc39: Push((int) 39479)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Return(); Pop(0)

0xc3d: Push((int) 39452)
0xc3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc40: Push((int) 39461)
0xc41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc43: PushEmpty(string)
0xc44: Stack[-1] = "Neutral"
0xc45: Call2 0x865

0xc46: Pop(1)
0xc47: Push((int) 537613)
0xc48: @@ SetMessage(Stack[-1])
0xc49: Pop(1)
0xc4a: @@ ClearReplies()
0xc4b: Pop(0)
0xc4c: Push((int) 537614)
0xc4d: Push((int) 39463)
0xc4e: Push((int) 39462)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Push((int) 537620)
0xc52: Push((int) -1)
0xc53: Push((int) 39468)
0xc54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc55: Pop(3)
0xc56: Return(); Pop(0)

0xc57: Push((int) 39463)
0xc58: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc59: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc5a: PushEmpty(string)
0xc5b: Stack[-1] = "Neutral"
0xc5c: Call2 0x865

0xc5d: Pop(1)
0xc5e: Push((int) 537615)
0xc5f: @@ SetMessage(Stack[-1])
0xc60: Pop(1)
0xc61: @@ ClearReplies()
0xc62: Pop(0)
0xc63: Push((int) 537616)
0xc64: Push((int) 39465)
0xc65: Push((int) 39464)
0xc66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc67: Pop(3)
0xc68: Return(); Pop(0)

0xc69: Push((int) 39465)
0xc6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc6c: PushEmpty(string)
0xc6d: Stack[-1] = "Neutral"
0xc6e: Call2 0x865

0xc6f: Pop(1)
0xc70: Push((int) 537617)
0xc71: @@ SetMessage(Stack[-1])
0xc72: Pop(1)
0xc73: @@ ClearReplies()
0xc74: Pop(0)
0xc75: Push((int) 537618)
0xc76: Push((int) -1)
0xc77: Push((int) 39466)
0xc78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: Push((int) 537619)
0xc7b: Push((int) -1)
0xc7c: Push((int) 39467)
0xc7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7e: Pop(3)
0xc7f: Return(); Pop(0)

0xc80: Push((int) 39454)
0xc81: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc82: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc83: PushEmpty(string)
0xc84: Stack[-1] = "Neutral"
0xc85: Call2 0x865

0xc86: Pop(1)
0xc87: Push((int) 537606)
0xc88: @@ SetMessage(Stack[-1])
0xc89: Pop(1)
0xc8a: @@ ClearReplies()
0xc8b: Pop(0)
0xc8c: Push((int) 537607)
0xc8d: Push((int) 39456)
0xc8e: Push((int) 39455)
0xc8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc90: Pop(3)
0xc91: Push((int) 537611)
0xc92: Push((int) -1)
0xc93: Push((int) 39459)
0xc94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc95: Pop(3)
0xc96: Return(); Pop(0)

0xc97: Push((int) 39456)
0xc98: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc99: IF (Stack[-1] == 0) GOTO 0xcae; Pop(1)

0xc9a: PushEmpty(string)
0xc9b: Stack[-1] = "Neutral"
0xc9c: Call2 0x865

0xc9d: Pop(1)
0xc9e: Push((int) 537608)
0xc9f: @@ SetMessage(Stack[-1])
0xca0: Pop(1)
0xca1: @@ ClearReplies()
0xca2: Pop(0)
0xca3: Push((int) 537609)
0xca4: Push((int) -1)
0xca5: Push((int) 39457)
0xca6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca7: Pop(3)
0xca8: Push((int) 537610)
0xca9: Push((int) -1)
0xcaa: Push((int) 39458)
0xcab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcac: Pop(3)
0xcad: Return(); Pop(0)

0xcae: Push((int) 39442)
0xcaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb1; Pop(1)

0xcb1: Push((int) 39444)
0xcb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb3: IF (Stack[-1] == 0) GOTO 0xcc8; Pop(1)

0xcb4: PushEmpty(string)
0xcb5: Stack[-1] = "Neutral"
0xcb6: Call2 0x865

0xcb7: Pop(1)
0xcb8: Push((int) 537596)
0xcb9: @@ SetMessage(Stack[-1])
0xcba: Pop(1)
0xcbb: @@ ClearReplies()
0xcbc: Pop(0)
0xcbd: Push((int) 537597)
0xcbe: Push((int) 39446)
0xcbf: Push((int) 39445)
0xcc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc1: Pop(3)
0xcc2: Push((int) 537601)
0xcc3: Push((int) -1)
0xcc4: Push((int) 39449)
0xcc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc6: Pop(3)
0xcc7: Return(); Pop(0)

0xcc8: Push((int) 39446)
0xcc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcca: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xccb: PushEmpty(string)
0xccc: Stack[-1] = "Neutral"
0xccd: Call2 0x865

0xcce: Pop(1)
0xccf: Push((int) 537598)
0xcd0: @@ SetMessage(Stack[-1])
0xcd1: Pop(1)
0xcd2: @@ ClearReplies()
0xcd3: Pop(0)
0xcd4: Push((int) 537599)
0xcd5: Push((int) -1)
0xcd6: Push((int) 39447)
0xcd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd8: Pop(3)
0xcd9: Push((int) 537600)
0xcda: Push((int) -1)
0xcdb: Push((int) 39448)
0xcdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdd: Pop(3)
0xcde: Return(); Pop(0)

0xcdf: Push((int) 39419)
0xce0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce1: IF (Stack[-1] == 0) GOTO 0xce2; Pop(1)

0xce2: Push((int) 39437)
0xce3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce4: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xce5: PushEmpty(string)
0xce6: Stack[-1] = "Neutral"
0xce7: Call2 0x865

0xce8: Pop(1)
0xce9: Push((int) 537589)
0xcea: @@ SetMessage(Stack[-1])
0xceb: Pop(1)
0xcec: @@ ClearReplies()
0xced: Pop(0)
0xcee: Push((int) 537590)
0xcef: Push((int) -1)
0xcf0: Push((int) 39438)
0xcf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf2: Pop(3)
0xcf3: Push((int) 537591)
0xcf4: Push((int) -1)
0xcf5: Push((int) 39439)
0xcf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf7: Pop(3)
0xcf8: Return(); Pop(0)

0xcf9: Push((int) 39426)
0xcfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfb: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xcfc: PushEmpty(string)
0xcfd: Stack[-1] = "Neutral"
0xcfe: Call2 0x865

0xcff: Pop(1)
0xd00: Push((int) 537579)
0xd01: @@ SetMessage(Stack[-1])
0xd02: Pop(1)
0xd03: @@ ClearReplies()
0xd04: Pop(0)
0xd05: Push((int) 537580)
0xd06: Push((int) 39421)
0xd07: Push((int) 39427)
0xd08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd09: Pop(3)
0xd0a: Push((int) 537581)
0xd0b: Push((int) 39430)
0xd0c: Push((int) 39429)
0xd0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: Return(); Pop(0)

0xd10: Push((int) 39430)
0xd11: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd12: IF (Stack[-1] == 0) GOTO 0xd27; Pop(1)

0xd13: PushEmpty(string)
0xd14: Stack[-1] = "Neutral"
0xd15: Call2 0x865

0xd16: Pop(1)
0xd17: Push((int) 537582)
0xd18: @@ SetMessage(Stack[-1])
0xd19: Pop(1)
0xd1a: @@ ClearReplies()
0xd1b: Pop(0)
0xd1c: Push((int) 537583)
0xd1d: Push((int) 39432)
0xd1e: Push((int) 39431)
0xd1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd20: Pop(3)
0xd21: Push((int) 537587)
0xd22: Push((int) -1)
0xd23: Push((int) 39435)
0xd24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd25: Pop(3)
0xd26: Return(); Pop(0)

0xd27: Push((int) 39432)
0xd28: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd29: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd2a: PushEmpty(string)
0xd2b: Stack[-1] = "Neutral"
0xd2c: Call2 0x865

0xd2d: Pop(1)
0xd2e: Push((int) 537584)
0xd2f: @@ SetMessage(Stack[-1])
0xd30: Pop(1)
0xd31: @@ ClearReplies()
0xd32: Pop(0)
0xd33: Push((int) 537585)
0xd34: Push((int) -1)
0xd35: Push((int) 39433)
0xd36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd37: Pop(3)
0xd38: Push((int) 537586)
0xd39: Push((int) -1)
0xd3a: Push((int) 39434)
0xd3b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3c: Pop(3)
0xd3d: Return(); Pop(0)

0xd3e: Push((int) 39421)
0xd3f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd40: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd41: PushEmpty(string)
0xd42: Stack[-1] = "Neutral"
0xd43: Call2 0x865

0xd44: Pop(1)
0xd45: Push((int) 537574)
0xd46: @@ SetMessage(Stack[-1])
0xd47: Pop(1)
0xd48: @@ ClearReplies()
0xd49: Pop(0)
0xd4a: Push((int) 537575)
0xd4b: Push((int) 39423)
0xd4c: Push((int) 39422)
0xd4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4e: Pop(3)
0xd4f: Return(); Pop(0)

0xd50: Push((int) 39423)
0xd51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd52: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd53: PushEmpty(string)
0xd54: Stack[-1] = "Neutral"
0xd55: Call2 0x865

0xd56: Pop(1)
0xd57: Push((int) 537576)
0xd58: @@ SetMessage(Stack[-1])
0xd59: Pop(1)
0xd5a: @@ ClearReplies()
0xd5b: Pop(0)
0xd5c: Push((int) 537577)
0xd5d: Push((int) -1)
0xd5e: Push((int) 39424)
0xd5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd60: Pop(3)
0xd61: Return(); Pop(0)

0xd62: Push((int) 39407)
0xd63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd64: IF (Stack[-1] == 0) GOTO 0xd65; Pop(1)

0xd65: Push((int) 39409)
0xd66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd67: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd68: PushEmpty(string)
0xd69: Stack[-1] = "Neutral"
0xd6a: Call2 0x865

0xd6b: Pop(1)
0xd6c: Push((int) 537562)
0xd6d: @@ SetMessage(Stack[-1])
0xd6e: Pop(1)
0xd6f: @@ ClearReplies()
0xd70: Pop(0)
0xd71: Push((int) 537563)
0xd72: Push((int) 39411)
0xd73: Push((int) 39410)
0xd74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd75: Pop(3)
0xd76: Push((int) 537567)
0xd77: Push((int) 39415)
0xd78: Push((int) 39414)
0xd79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7a: Pop(3)
0xd7b: Return(); Pop(0)

0xd7c: Push((int) 39415)
0xd7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7e: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd7f: PushEmpty(string)
0xd80: Stack[-1] = "Neutral"
0xd81: Call2 0x865

0xd82: Pop(1)
0xd83: Push((int) 537568)
0xd84: @@ SetMessage(Stack[-1])
0xd85: Pop(1)
0xd86: @@ ClearReplies()
0xd87: Pop(0)
0xd88: Push((int) 537569)
0xd89: Push((int) -1)
0xd8a: Push((int) 39416)
0xd8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(3)
0xd8d: Return(); Pop(0)

0xd8e: Push((int) 39411)
0xd8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xd91: PushEmpty(string)
0xd92: Stack[-1] = "Neutral"
0xd93: Call2 0x865

0xd94: Pop(1)
0xd95: Push((int) 537564)
0xd96: @@ SetMessage(Stack[-1])
0xd97: Pop(1)
0xd98: @@ ClearReplies()
0xd99: Pop(0)
0xd9a: Push((int) 537565)
0xd9b: Push((int) -1)
0xd9c: Push((int) 39412)
0xd9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9e: Pop(3)
0xd9f: Push((int) 537566)
0xda0: Push((int) -1)
0xda1: Push((int) 39413)
0xda2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda3: Pop(3)
0xda4: Return(); Pop(0)

0xda5: Push((int) 39397)
0xda6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda7: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xda8: PushEmpty(string)
0xda9: Stack[-1] = "Neutral"
0xdaa: Call2 0x865

0xdab: Pop(1)
0xdac: Push((int) 537550)
0xdad: @@ SetMessage(Stack[-1])
0xdae: Pop(1)
0xdaf: @@ ClearReplies()
0xdb0: Pop(0)
0xdb1: Push((int) 537551)
0xdb2: Push((int) 39399)
0xdb3: Push((int) 39398)
0xdb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb5: Pop(3)
0xdb6: Push((int) 537558)
0xdb7: Push((int) -1)
0xdb8: Push((int) 39405)
0xdb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdba: Pop(3)
0xdbb: Return(); Pop(0)

0xdbc: Push((int) 39399)
0xdbd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdbe: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdbf: PushEmpty(string)
0xdc0: Stack[-1] = "Neutral"
0xdc1: Call2 0x865

0xdc2: Pop(1)
0xdc3: Push((int) 537552)
0xdc4: @@ SetMessage(Stack[-1])
0xdc5: Pop(1)
0xdc6: @@ ClearReplies()
0xdc7: Pop(0)
0xdc8: Push((int) 537553)
0xdc9: Push((int) 39401)
0xdca: Push((int) 39400)
0xdcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcc: Pop(3)
0xdcd: Push((int) 537557)
0xdce: Push((int) -1)
0xdcf: Push((int) 39404)
0xdd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd1: Pop(3)
0xdd2: Return(); Pop(0)

0xdd3: Push((int) 39401)
0xdd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd5: IF (Stack[-1] == 0) GOTO 0xdea; Pop(1)

0xdd6: PushEmpty(string)
0xdd7: Stack[-1] = "Neutral"
0xdd8: Call2 0x865

0xdd9: Pop(1)
0xdda: Push((int) 537554)
0xddb: @@ SetMessage(Stack[-1])
0xddc: Pop(1)
0xddd: @@ ClearReplies()
0xdde: Pop(0)
0xddf: Push((int) 537555)
0xde0: Push((int) -1)
0xde1: Push((int) 39402)
0xde2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde3: Pop(3)
0xde4: Push((int) 537556)
0xde5: Push((int) -1)
0xde6: Push((int) 39403)
0xde7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde8: Pop(3)
0xde9: Return(); Pop(0)

0xdea: Push((int) 39382)
0xdeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdec: IF (Stack[-1] == 0) GOTO 0xded; Pop(1)

0xded: Push((int) 39384)
0xdee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdef: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xdf0: PushEmpty(string)
0xdf1: Stack[-1] = "Neutral"
0xdf2: Call2 0x865

0xdf3: Pop(1)
0xdf4: Push((int) 537537)
0xdf5: @@ SetMessage(Stack[-1])
0xdf6: Pop(1)
0xdf7: @@ ClearReplies()
0xdf8: Pop(0)
0xdf9: Push((int) 537538)
0xdfa: Push((int) 39386)
0xdfb: Push((int) 39385)
0xdfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfd: Pop(3)
0xdfe: Push((int) 537548)
0xdff: Push((int) -1)
0xe00: Push((int) 39395)
0xe01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe02: Pop(3)
0xe03: Return(); Pop(0)

0xe04: Push((int) 39386)
0xe05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe06: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe07: PushEmpty(string)
0xe08: Stack[-1] = "Neutral"
0xe09: Call2 0x865

0xe0a: Pop(1)
0xe0b: Push((int) 537539)
0xe0c: @@ SetMessage(Stack[-1])
0xe0d: Pop(1)
0xe0e: @@ ClearReplies()
0xe0f: Pop(0)
0xe10: Push((int) 537540)
0xe11: Push((int) 39388)
0xe12: Push((int) 39387)
0xe13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe14: Pop(3)
0xe15: Push((int) 537543)
0xe16: Push((int) -1)
0xe17: Push((int) 39390)
0xe18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe19: Pop(3)
0xe1a: Push((int) 537544)
0xe1b: Push((int) 39392)
0xe1c: Push((int) 39391)
0xe1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1e: Pop(3)
0xe1f: Return(); Pop(0)

0xe20: Push((int) 39392)
0xe21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe37; Pop(1)

0xe23: PushEmpty(string)
0xe24: Stack[-1] = "Neutral"
0xe25: Call2 0x865

0xe26: Pop(1)
0xe27: Push((int) 537545)
0xe28: @@ SetMessage(Stack[-1])
0xe29: Pop(1)
0xe2a: @@ ClearReplies()
0xe2b: Pop(0)
0xe2c: Push((int) 537546)
0xe2d: Push((int) -1)
0xe2e: Push((int) 39393)
0xe2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe30: Pop(3)
0xe31: Push((int) 537547)
0xe32: Push((int) -1)
0xe33: Push((int) 39394)
0xe34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe35: Pop(3)
0xe36: Return(); Pop(0)

0xe37: Push((int) 39388)
0xe38: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe39: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xe3a: PushEmpty(string)
0xe3b: Stack[-1] = "Neutral"
0xe3c: Call2 0x865

0xe3d: Pop(1)
0xe3e: Push((int) 537541)
0xe3f: @@ SetMessage(Stack[-1])
0xe40: Pop(1)
0xe41: @@ ClearReplies()
0xe42: Pop(0)
0xe43: Push((int) 537542)
0xe44: Push((int) -1)
0xe45: Push((int) 39389)
0xe46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe47: Pop(3)
0xe48: Return(); Pop(0)

0xe49: Push((int) 39372)
0xe4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe4c; Pop(1)

0xe4c: Push((int) 39374)
0xe4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4e: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe4f: PushEmpty(string)
0xe50: Stack[-1] = "Neutral"
0xe51: Call2 0x865

0xe52: Pop(1)
0xe53: Push((int) 537527)
0xe54: @@ SetMessage(Stack[-1])
0xe55: Pop(1)
0xe56: @@ ClearReplies()
0xe57: Pop(0)
0xe58: Push((int) 537528)
0xe59: Push((int) 39376)
0xe5a: Push((int) 39375)
0xe5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5c: Pop(3)
0xe5d: Push((int) 537532)
0xe5e: Push((int) -1)
0xe5f: Push((int) 39379)
0xe60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe61: Pop(3)
0xe62: Return(); Pop(0)

0xe63: Push((int) 39376)
0xe64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe65: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe66: PushEmpty(string)
0xe67: Stack[-1] = "Neutral"
0xe68: Call2 0x865

0xe69: Pop(1)
0xe6a: Push((int) 537529)
0xe6b: @@ SetMessage(Stack[-1])
0xe6c: Pop(1)
0xe6d: @@ ClearReplies()
0xe6e: Pop(0)
0xe6f: Push((int) 537530)
0xe70: Push((int) -1)
0xe71: Push((int) 39377)
0xe72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe73: Pop(3)
0xe74: Push((int) 537531)
0xe75: Push((int) -1)
0xe76: Push((int) 39378)
0xe77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe78: Pop(3)
0xe79: Return(); Pop(0)

0xe7a: Push((int) 39356)
0xe7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7c: IF (Stack[-1] == 0) GOTO 0xe7d; Pop(1)

0xe7d: Push((int) 39368)
0xe7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7f: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe80: PushEmpty(string)
0xe81: Stack[-1] = "Neutral"
0xe82: Call2 0x865

0xe83: Pop(1)
0xe84: Push((int) 537521)
0xe85: @@ SetMessage(Stack[-1])
0xe86: Pop(1)
0xe87: @@ ClearReplies()
0xe88: Pop(0)
0xe89: Push((int) 537522)
0xe8a: Push((int) -1)
0xe8b: Push((int) 39369)
0xe8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8d: Pop(3)
0xe8e: Push((int) 537523)
0xe8f: Push((int) -1)
0xe90: Push((int) 39370)
0xe91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe92: Pop(3)
0xe93: Return(); Pop(0)

0xe94: Push((int) 39358)
0xe95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe96: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xe97: PushEmpty(string)
0xe98: Stack[-1] = "Neutral"
0xe99: Call2 0x865

0xe9a: Pop(1)
0xe9b: Push((int) 537511)
0xe9c: @@ SetMessage(Stack[-1])
0xe9d: Pop(1)
0xe9e: @@ ClearReplies()
0xe9f: Pop(0)
0xea0: Push((int) 537512)
0xea1: Push((int) 39360)
0xea2: Push((int) 39359)
0xea3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea4: Pop(3)
0xea5: Push((int) 537519)
0xea6: Push((int) -1)
0xea7: Push((int) 39366)
0xea8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea9: Pop(3)
0xeaa: Return(); Pop(0)

0xeab: Push((int) 39360)
0xeac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xead: IF (Stack[-1] == 0) GOTO 0xec2; Pop(1)

0xeae: PushEmpty(string)
0xeaf: Stack[-1] = "Neutral"
0xeb0: Call2 0x865

0xeb1: Pop(1)
0xeb2: Push((int) 537513)
0xeb3: @@ SetMessage(Stack[-1])
0xeb4: Pop(1)
0xeb5: @@ ClearReplies()
0xeb6: Pop(0)
0xeb7: Push((int) 537514)
0xeb8: Push((int) 39362)
0xeb9: Push((int) 39361)
0xeba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebb: Pop(3)
0xebc: Push((int) 537518)
0xebd: Push((int) -1)
0xebe: Push((int) 39365)
0xebf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec0: Pop(3)
0xec1: Return(); Pop(0)

0xec2: Push((int) 39362)
0xec3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec4: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xec5: PushEmpty(string)
0xec6: Stack[-1] = "Neutral"
0xec7: Call2 0x865

0xec8: Pop(1)
0xec9: Push((int) 537515)
0xeca: @@ SetMessage(Stack[-1])
0xecb: Pop(1)
0xecc: @@ ClearReplies()
0xecd: Pop(0)
0xece: Push((int) 537516)
0xecf: Push((int) -1)
0xed0: Push((int) 39363)
0xed1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed2: Pop(3)
0xed3: Push((int) 537517)
0xed4: Push((int) -1)
0xed5: Push((int) 39364)
0xed6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed7: Pop(3)
0xed8: Return(); Pop(0)

0xed9: Push((int) 45739)
0xeda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xedb: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xedc: Push((int) 45734)
0xedd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xede: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xedf: Push((int) 45719)
0xee0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee1: IF (Stack[-1] == 0) GOTO 0xee2; Pop(1)

0xee2: Push((int) 45723)
0xee3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee4: IF (Stack[-1] == 0) GOTO 0xefe; Pop(1)

0xee5: PushEmpty(string)
0xee6: Stack[-1] = "Neutral"
0xee7: Call2 0x865

0xee8: Pop(1)
0xee9: Push((int) 543267)
0xeea: @@ SetMessage(Stack[-1])
0xeeb: Pop(1)
0xeec: @@ ClearReplies()
0xeed: Pop(0)
0xeee: Push((int) 543268)
0xeef: Push((int) 45727)
0xef0: Push((int) 45724)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: Push((int) 543269)
0xef4: Push((int) -1)
0xef5: Push((int) 45725)
0xef6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef7: Pop(3)
0xef8: Push((int) 543270)
0xef9: Push((int) -1)
0xefa: Push((int) 45726)
0xefb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefc: Pop(3)
0xefd: Return(); Pop(0)

0xefe: Push((int) 45727)
0xeff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf00: IF (Stack[-1] == 0) GOTO 0xf1a; Pop(1)

0xf01: PushEmpty(string)
0xf02: Stack[-1] = "Neutral"
0xf03: Call2 0x865

0xf04: Pop(1)
0xf05: Push((int) 543271)
0xf06: @@ SetMessage(Stack[-1])
0xf07: Pop(1)
0xf08: @@ ClearReplies()
0xf09: Pop(0)
0xf0a: Push((int) 543272)
0xf0b: Push((int) -1)
0xf0c: Push((int) 45728)
0xf0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0e: Pop(3)
0xf0f: Push((int) 543273)
0xf10: Push((int) -1)
0xf11: Push((int) 45729)
0xf12: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf13: Pop(3)
0xf14: Push((int) 543274)
0xf15: Push((int) -1)
0xf16: Push((int) 45730)
0xf17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf18: Pop(3)
0xf19: Return(); Pop(0)

0xf1a: Push((int) 45709)
0xf1b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1c: IF (Stack[-1] == 0) GOTO 0xf1d; Pop(1)

0xf1d: Push((int) 45716)
0xf1e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1f: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf20: PushEmpty(string)
0xf21: Stack[-1] = "Neutral"
0xf22: Call2 0x865

0xf23: Pop(1)
0xf24: Push((int) 543260)
0xf25: @@ SetMessage(Stack[-1])
0xf26: Pop(1)
0xf27: @@ ClearReplies()
0xf28: Pop(0)
0xf29: Push((int) 543261)
0xf2a: Push((int) -1)
0xf2b: Push((int) 45717)
0xf2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2d: Pop(3)
0xf2e: Return(); Pop(0)

0xf2f: Push((int) 45714)
0xf30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf31: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf32: PushEmpty(string)
0xf33: Stack[-1] = "Neutral"
0xf34: Call2 0x865

0xf35: Pop(1)
0xf36: Push((int) 543258)
0xf37: @@ SetMessage(Stack[-1])
0xf38: Pop(1)
0xf39: @@ ClearReplies()
0xf3a: Pop(0)
0xf3b: Push((int) 543259)
0xf3c: Push((int) -1)
0xf3d: Push((int) 45715)
0xf3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3f: Pop(3)
0xf40: Return(); Pop(0)

0xf41: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf42: PushEmpty(bool)
0xf43: Call2 0x13e5

0xf44: Pop(0)
0xf45: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xf46: @ lshStopAnimation()
0xf47: Pop(0)
0xf48: GOTO 0xf4b

0xf49: @ StopAnimation()
0xf4a: Pop(0)
0xf4b: Return(); Pop(0)

0xf4c: GOTO 0x87c

0xf4d: Return(); Pop(0)

0xf4e: PushEmpty(cvector, cvector)
0xf4f: @ GetPosition(Stack[-1])
0xf50: Pop(0)
0xf51: Stack[-3] = Stack[-1]
0xf52: Return(); Pop(2)

0xf53: PushEmpty(cvector, cvector, cvector, cvector)
0xf54: @ GetPosition(Stack[-2])
0xf55: Pop(0)
0xf56: @@ GetPosition(Stack[-1])
0xf57: Pop(0)
0xf58: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xf59: Return(); Pop(4)

0xf5a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xf5b: @ GetPosition(Stack[-3])
0xf5c: Pop(0)
0xf5d: @@ GetPosition(Stack[-2])
0xf5e: Pop(0)
0xf5f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xf60: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xf61: Return(); Pop(6)

0xf62: PushEmpty(bool, bool)
0xf63: @ IsPlayerActor(Stack[-3], Stack[-1])
0xf64: Pop(0)
0xf65: Stack[-4] = Stack[-1]
0xf66: Return(); Pop(2)

0xf67: PushEmpty(bool, bool)
0xf68: Push("HasProperty")
0xf69: Push((int) 2)
0xf6a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xf6b: Pop(1); Push((bool) Stack[-1] == 0)
0xf6c: IF (Stack[-1] == 0) GOTO 0xf6f; Pop(1)

0xf6d: Stack[-5] = (bool) 0
0xf6e: Return(); Pop(2)

0xf6f: @@ HasProperty(Stack[-3], Stack[-1])
0xf70: Pop(0)
0xf71: Stack[-5] = Stack[-1]
0xf72: Return(); Pop(2)

0xf73: PushEmpty(bool, bool)
0xf74: @@ IsDead(Stack[-1])
0xf75: Pop(0)
0xf76: Stack[-4] = Stack[-1]
0xf77: Return(); Pop(2)

0xf78: PushEmpty(object, object, object, object)
0xf79: Pop(0); Push((bool) Stack[-5] == 0)
0xf7a: IF (Stack[-1] == 0) GOTO 0xf7d; Pop(1)

0xf7b: Stack[-6] = (bool) 0
0xf7c: Return(); Pop(4)

0xf7d: PushEmpty(bool)
0xf7e: Stack[-1] = (bool) 0
0xf7f: Push("IsDead")
0xf80: Push((int) 1)
0xf81: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xf82: IF (Stack[-1] == 0) GOTO 0xf89; Pop(1)

0xf83: PushEmpty(bool, object)
0xf84: Stack[-1] = Stack[-8]
0xf85: Call2 0xf73

0xf86: Pop(1)
0xf87: IF (Stack[-1] == 0) GOTO 0xf89; Pop(1)

0xf88: Stack[-1] = (bool) 1
0xf89: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf8a: Stack[-6] = (bool) 0
0xf8b: Return(); Pop(4)

0xf8c: @ GetScene(Stack[-2])
0xf8d: Pop(0)
0xf8e: Pop(0); Push((bool) Stack[-2] == 0)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf90: Stack[-6] = (bool) 0
0xf91: Return(); Pop(4)

0xf92: @@ GetScene(Stack[-1])
0xf93: Pop(0)
0xf94: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xf95: IF (Stack[-1] == 0) GOTO 0xf98; Pop(1)

0xf96: Stack[-6] = (bool) 0
0xf97: Return(); Pop(4)

0xf98: Stack[-6] = (bool) 1
0xf99: Return(); Pop(4)

0xf9a: Stack[-1] = 0
0xf9b: Stack[-2] = 0
0xf9c: PushEmpty(int, int)
0xf9d: PushEmpty(bool, object)
0xf9e: Stack[-1] = Stack[-5]
0xf9f: Call2 0xf78

0xfa0: Pop(1)
0xfa1: Pop(1); Push((bool) Stack[-1] == 0)
0xfa2: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xfa3: Stack[-4] = (bool) 0
0xfa4: Return(); Pop(2)

0xfa5: PushEmpty(bool, object, string)
0xfa6: Stack[-2] = Stack[-6]
0xfa7: Stack[-1] = "noaccess"
0xfa8: Call2 0xf67

0xfa9: Pop(2)
0xfaa: Pop(1); Push((bool) Stack[-1] == 0)
0xfab: IF (Stack[-1] == 0) GOTO 0xfae; Pop(1)

0xfac: Stack[-4] = (bool) 1
0xfad: Return(); Pop(2)

0xfae: Push("noaccess")
0xfaf: @@ GetProperty(Stack[-1], Stack[-2])
0xfb0: Pop(1)
0xfb1: Push((int) 0)
0xfb2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xfb3: Return(); Pop(2)

0xfb4: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xfb5: @@ GetPosition(Stack[-3])
0xfb6: Pop(0)
0xfb7: @ GetPosition(Stack[-2])
0xfb8: Pop(0)
0xfb9: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xfba: Push(CvectorIndex(Stack[-1], 0))
0xfbb: Push(CvectorIndex(Stack[-2], 2))
0xfbc: @ RotateAsync(Stack[-2], Stack[-1])
0xfbd: Pop(2)
0xfbe: Return(); Pop(6)

0xfbf: PushEmpty(bool, bool)
0xfc0: @ IsLoaded(Stack[-1])
0xfc1: Pop(0)
0xfc2: Stack[-3] = Stack[-1]
0xfc3: Return(); Pop(2)

0xfc4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xfc5: @@ GetPosition(Stack[-8])
0xfc6: Pop(0)
0xfc7: @@ GetEyesHeight(Stack[-9])
0xfc8: Pop(0)
0xfc9: Push(CvectorIndex(Stack[-8], 1))
0xfca: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfcb: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xfcc: @ GetPosition(Stack[-7])
0xfcd: Pop(0)
0xfce: @ GetEyesHeight(Stack[-9])
0xfcf: Pop(0)
0xfd0: Push(CvectorIndex(Stack[-7], 1))
0xfd1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfd2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xfd3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xfd4: Push(CvectorIndex(Stack[-6], 1))
0xfd5: Stack[-1] = (int) 0
0xfd6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xfd7: Pop(0); Push(Stack[-6] | Stack[-6]);
0xfd8: Pop(1); Push(Sqrt(Stack[-1]))
0xfd9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xfda: Stack[-5] = -Stack[-6]; Pop(0);
0xfdb: Pop(0); Push(Stack[-6] * Stack[-19]);
0xfdc: PushEmpty(cvector, cvector)
0xfdd: Push(CVector(0.0, 1.0, 0.0))
0xfde: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xfdf: Call2 0x10a5

0xfe0: Pop(1)
0xfe1: Push((int) 25)
0xfe2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfe4: Push(CVector(0.0, 10.0, 0.0))
0xfe5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xfe6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xfe7: @ IsOverrideActive(Stack[-2])
0xfe8: Pop(0)
0xfe9: Push(Stack[-2])
0xfea: IF (Stack[-1] == 0) GOTO 0xfed; Pop(1)

0xfeb: Stack[-21] = (bool) 0
0xfec: Return(); Pop(18)

0xfed: @ StopWorld()
0xfee: Pop(0)
0xfef: @ CameraTransit(Stack[-3], Stack[-5])
0xff0: Pop(0)
0xff1: Push(CvectorIndex(Stack[-4], 0))
0xff2: Push(CvectorIndex(Stack[-5], 2))
0xff3: @ Rotate(Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: PushEmpty(bool)
0xff6: Call2 0x13e5

0xff7: Pop(0)
0xff8: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xff9: GOTO 0x1002

0xffa: Push("head")
0xffb: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xffc: Pop(1)
0xffd: Push(Stack[-1])
0xffe: IF (Stack[-1] == 0) GOTO 0x1002; Pop(1)

0xfff: Push("head")
0x1000: @ LookAsyncCamera(Stack[-1])
0x1001: Pop(1)
0x1002: @ CameraWaitForPlayFinish()
0x1003: Pop(0)
0x1004: @ ResumeWorld()
0x1005: Pop(0)
0x1006: Stack[-21] = (bool) 1
0x1007: Return(); Pop(18)

0x1008: PushEmpty(bool, bool)
0x1009: @ CameraSwitchToNormal()
0x100a: Pop(0)
0x100b: PushEmpty(bool)
0x100c: Call2 0x13e5

0x100d: Pop(0)
0x100e: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100f: GOTO 0x1018

0x1010: Push("head")
0x1011: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1012: Pop(1)
0x1013: Push(Stack[-1])
0x1014: IF (Stack[-1] == 0) GOTO 0x1018; Pop(1)

0x1015: Push("head")
0x1016: @ UnlookAsync(Stack[-1])
0x1017: Pop(1)
0x1018: Return(); Pop(2)

0x1019: PushEmpty()
0x101a: PushEmpty(bool, object, float)
0x101b: Stack[-2] = Stack[-4]
0x101c: Stack[-1] = (int) 70
0x101d: Call2 0x1021

0x101e: Stack[-5] = Stack[-3]
0x101f: Pop(3)
0x1020: Return(); Pop(0)

0x1021: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1022: @@ GetPosition(Stack[-7])
0x1023: Pop(0)
0x1024: @@ GetEyesHeight(Stack[-8])
0x1025: Pop(0)
0x1026: Push(CvectorIndex(Stack[-7], 1))
0x1027: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1028: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1029: @ GetPosition(Stack[-6])
0x102a: Pop(0)
0x102b: @ GetEyesHeight(Stack[-8])
0x102c: Pop(0)
0x102d: Push(CvectorIndex(Stack[-6], 1))
0x102e: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x102f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1030: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1031: Push(CvectorIndex(Stack[-5], 1))
0x1032: Stack[-1] = (int) 0
0x1033: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1034: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1035: Pop(1); Push(Sqrt(Stack[-1]))
0x1036: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1037: Stack[-4] = -Stack[-5]; Pop(0);
0x1038: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1039: Push(CVector(0.0, 10.0, 0.0))
0x103a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x103b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x103c: @ IsOverrideActive(Stack[-1])
0x103d: Pop(0)
0x103e: Push(Stack[-1])
0x103f: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x1040: Stack[-19] = (bool) 0
0x1041: Return(); Pop(16)

0x1042: @ StopWorld()
0x1043: Pop(0)
0x1044: @ CameraTransit(Stack[-2], Stack[-4])
0x1045: Pop(0)
0x1046: Push(CvectorIndex(Stack[-3], 0))
0x1047: Push(CvectorIndex(Stack[-4], 2))
0x1048: @ Rotate(Stack[-2], Stack[-1])
0x1049: Pop(2)
0x104a: @ CameraWaitForPlayFinish()
0x104b: Pop(0)
0x104c: @ ResumeWorld()
0x104d: Pop(0)
0x104e: Stack[-19] = (bool) 1
0x104f: Return(); Pop(16)

0x1050: PushEmpty()
0x1051: @ CameraSwitchToNormal()
0x1052: Pop(0)
0x1053: Return(); Pop(0)

0x1054: PushEmpty(bool, float, float, bool, float, float)
0x1055: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1056: Pop(0)
0x1057: Push(Stack[-3])
0x1058: IF (Stack[-1] == 0) GOTO 0x105f; Pop(1)

0x1059: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x105a: Pop(0)
0x105b: Push((bool) 0)
0x105c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x105d: Pop(1)
0x105e: GOTO 0x1063

0x105f: Push("Can't find lsh animation : ")
0x1060: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1061: @ Trace(Stack[-1])
0x1062: Pop(1)
0x1063: Return(); Pop(6)

0x1064: PushEmpty(bool, float, float, bool, float, float)
0x1065: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1066: Pop(0)
0x1067: Push(Stack[-3])
0x1068: IF (Stack[-1] == 0) GOTO 0x106e; Pop(1)

0x1069: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x106a: Pop(0)
0x106b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x106c: Pop(0)
0x106d: GOTO 0x1072

0x106e: Push("Can't find lsh animation : ")
0x106f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1070: @ Trace(Stack[-1])
0x1071: Pop(1)
0x1072: Return(); Pop(6)

0x1073: PushEmpty(float, cvector, float, cvector)
0x1074: @@ GetEyesHeight(Stack[-2])
0x1075: Pop(0)
0x1076: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1077: Push(CvectorIndex(Stack[-1], 1))
0x1078: Stack[-1] = Stack[-3]
0x1079: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x107a: Push("head")
0x107b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x107c: Pop(1)
0x107d: Return(); Pop(4)

0x107e: PushEmpty(bool)
0x107f: Call2 0x13e5

0x1080: Pop(0)
0x1081: IF (Stack[-1] == 0) GOTO 0x1084; Pop(1)

0x1082: @ lshStopSpeech()
0x1083: Pop(0)
0x1084: Return(); Pop(0)

0x1085: PushEmpty(bool, bool)
0x1086: PushEmpty(bool, int, int)
0x1087: Stack[-2] = Stack[-7]
0x1088: Stack[-1] = Stack[-6]
0x1089: Call2 0x10af

0x108a: Pop(2)
0x108b: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x108c: Push((int) 0)
0x108d: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x108e: Pop(1)
0x108f: Return(); Pop(2)

0x1090: PushEmpty(int, bool, int, bool)
0x1091: PushEmpty(bool, int, int)
0x1092: Stack[-2] = Stack[-10]
0x1093: Stack[-1] = Stack[-9]
0x1094: Call2 0x10af

0x1095: Pop(2)
0x1096: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x1097: @ irand(Stack[-2], Stack[-5])
0x1098: Pop(0)
0x1099: Push((int) 0)
0x109a: Push((int) 1)
0x109b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x109c: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x109d: Pop(2)
0x109e: Return(); Pop(4)

0x109f: PushEmpty(object, object)
0x10a0: @ self(Stack[-1])
0x10a1: Pop(0)
0x10a2: Stack[-3] = Stack[-1]
0x10a3: Return(); Pop(2)

0x10a4: Stack[-1] = 0
0x10a5: PushEmpty(float, float)
0x10a6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x10a7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x10a8: Push((float)0.0)
0x10a9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x10aa: IF (Stack[-1] == 0) GOTO 0x10ad; Pop(1)

0x10ab: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x10ac: Return(); Pop(2)

0x10ad: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x10ae: Return(); Pop(2)

0x10af: PushEmpty(int, int)
0x10b0: @ irand(Stack[-1], Stack[-3])
0x10b1: Pop(0)
0x10b2: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x10b3: Return(); Pop(2)

0x10b4: PushEmpty()
0x10b5: Pop(0); Push(Stack[-2] | Stack[-1]);
0x10b6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x10b7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x10b8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10b9: Pop(1); Push(Sqrt(Stack[-1]))
0x10ba: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x10bb: Return(); Pop(0)

0x10bc: PushEmpty()
0x10bd: Push(CvectorIndex(Stack[-2], 0))
0x10be: Push(CvectorIndex(Stack[-2], 0))
0x10bf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10c0: Push(CvectorIndex(Stack[-3], 2))
0x10c1: Push(CvectorIndex(Stack[-3], 2))
0x10c2: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10c3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x10c4: Return(); Pop(0)

0x10c5: PushEmpty()
0x10c6: Push(CvectorIndex(Stack[-1], 0))
0x10c7: Push(CvectorIndex(Stack[-2], 0))
0x10c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10c9: Push(CvectorIndex(Stack[-2], 2))
0x10ca: Push(CvectorIndex(Stack[-3], 2))
0x10cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10cc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10cd: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x10ce: Return(); Pop(0)

0x10cf: PushEmpty()
0x10d0: PushEmpty(float, cvector, cvector)
0x10d1: Stack[-2] = Stack[-5]
0x10d2: Stack[-1] = Stack[-4]
0x10d3: Call2 0x10bc

0x10d4: Pop(2)
0x10d5: PushEmpty(float, cvector)
0x10d6: Stack[-1] = Stack[-5]
0x10d7: Call2 0x10c5

0x10d8: Pop(1)
0x10d9: PushEmpty(float, cvector)
0x10da: Stack[-1] = Stack[-5]
0x10db: Call2 0x10c5

0x10dc: Pop(1)
0x10dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x10de: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x10df: Return(); Pop(0)

0x10e0: PushEmpty(int, int)
0x10e1: @ GetVariable(Stack[-3], Stack[-1])
0x10e2: Pop(0)
0x10e3: Stack[-4] = Stack[-1]
0x10e4: Return(); Pop(2)

0x10e5: PushEmpty(float, float)
0x10e6: @ GetGameTime(Stack[-1])
0x10e7: Pop(0)
0x10e8: Push((int) 1)
0x10e9: PushEmpty(int)
0x10ea: Push((int) 24)
0x10eb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x10ec: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x10ed: Return(); Pop(2)

0x10ee: PushEmpty(float, float)
0x10ef: @ GetGameTime(Stack[-1])
0x10f0: Pop(0)
0x10f1: PushEmpty(int)
0x10f2: Stack[-1] = Stack[-2]
0x10f3: Push((int) 24)
0x10f4: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x10f5: Return(); Pop(2)

0x10f6: PushEmpty()
0x10f7: Return(); Pop(0)

0x10f8: PushEmpty()
0x10f9: Return(); Pop(0)

0x10fa: PushEmpty()
0x10fb: Return(); Pop(0)

0x10fc: PushEmpty()
0x10fd: Return(); Pop(0)

0x10fe: PushEmpty()
0x10ff: Push("unholster")
0x1100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1101: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x1102: PushEmpty(bool, object)
0x1103: Stack[-1] = Stack[-4]
0x1104: Call2 0x1221

0x1105: Stack[-5] = Stack[-2]
0x1106: Pop(2)
0x1107: Return(); Pop(0)

0x1108: GOTO 0x111c

0x1109: Push("player_shot")
0x110a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x110b: IF (Stack[-1] == 0) GOTO 0x1113; Pop(1)

0x110c: PushEmpty(bool, object)
0x110d: Stack[-1] = Stack[-4]
0x110e: Call2 0x122e

0x110f: Stack[-5] = Stack[-2]
0x1110: Pop(2)
0x1111: Return(); Pop(0)

0x1112: GOTO 0x111c

0x1113: Push("battle")
0x1114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1115: IF (Stack[-1] == 0) GOTO 0x111c; Pop(1)

0x1116: PushEmpty(bool, object)
0x1117: Stack[-1] = Stack[-4]
0x1118: Call2 0x1245

0x1119: Stack[-5] = Stack[-2]
0x111a: Pop(2)
0x111b: Return(); Pop(0)

0x111c: Stack[-3] = (bool) 0
0x111d: Return(); Pop(0)

0x111e: PushEmpty()
0x111f: Push("unholster")
0x1120: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1121: IF (Stack[-1] == 0) GOTO 0x1127; Pop(1)

0x1122: PushEmpty(object)
0x1123: Stack[-1] = Stack[-3]
0x1124: Call2 0x1226

0x1125: Pop(1)
0x1126: GOTO 0x1136

0x1127: Push("player_shot")
0x1128: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1129: IF (Stack[-1] == 0) GOTO 0x112f; Pop(1)

0x112a: PushEmpty(object)
0x112b: Stack[-1] = Stack[-3]
0x112c: Call2 0x123d

0x112d: Pop(1)
0x112e: GOTO 0x1136

0x112f: Push("battle")
0x1130: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1131: IF (Stack[-1] == 0) GOTO 0x1136; Pop(1)

0x1132: PushEmpty(object)
0x1133: Stack[-1] = Stack[-3]
0x1134: Call2 0x124c

0x1135: Pop(1)
0x1136: Return(); Pop(0)

0x1137: PushEmpty(bool, bool)
0x1138: PushEmpty(bool)
0x1139: Stack[-1] = (bool) 0
0x113a: PushEmpty(bool, object)
0x113b: Stack[-1] = Stack[-6]
0x113c: Call2 0x1221

0x113d: Pop(1)
0x113e: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x113f: PushEmpty(bool, object)
0x1140: Stack[-1] = Stack[-6]
0x1141: Call2 0xf62

0x1142: Pop(1)
0x1143: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x1144: Stack[-1] = (bool) 1
0x1145: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x1146: @@ IsWeaponHolstered(Stack[-1])
0x1147: Pop(0)
0x1148: Pop(0); Push((bool) Stack[-1] == 0)
0x1149: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x114a: Stack[-4] = (bool) 1
0x114b: Return(); Pop(2)

0x114c: Stack[-4] = (bool) 0
0x114d: Return(); Pop(2)

0x114e: PushEmpty()
0x114f: PushEmpty(object)
0x1150: Stack[-1] = Stack[-2]
0x1151: Call2 0x1226

0x1152: Pop(1)
0x1153: Return(); Pop(0)

0x1154: PushEmpty()
0x1155: PushEmpty(bool, object)
0x1156: Stack[-1] = Stack[-3]
0x1157: Call2 0xf62

0x1158: Pop(1)
0x1159: IF (Stack[-1] == 0) GOTO 0x1160; Pop(1)

0x115a: PushEmpty(object)
0x115b: Call2 0x109f

0x115c: Pop(0)
0x115d: Push((float)-0.03)
0x115e: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x115f: Pop(2)
0x1160: Return(); Pop(0)

0x1161: PushEmpty(object, object)
0x1162: Push("heal")
0x1163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1164: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x1165: Push("player")
0x1166: @ FindActor(Stack[-2], Stack[-1])
0x1167: Pop(1)
0x1168: PushEmpty(bool, object)
0x1169: Stack[-1] = Stack[-3]
0x116a: Call2 0x1252

0x116b: Stack[-6] = Stack[-2]
0x116c: Pop(2)
0x116d: Return(); Pop(2)

0x116e: Stack[-1] = 0
0x116f: Stack[-4] = (bool) 0
0x1170: Return(); Pop(2)

0x1171: PushEmpty(object, object)
0x1172: Push("heal")
0x1173: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1174: IF (Stack[-1] == 0) GOTO 0x117d; Pop(1)

0x1175: Push("player")
0x1176: @ FindActor(Stack[-2], Stack[-1])
0x1177: Pop(1)
0x1178: PushEmpty(object)
0x1179: Stack[-1] = Stack[-2]
0x117a: Call2 0x1255

0x117b: Pop(1)
0x117c: Stack[-1] = 0
0x117d: Return(); Pop(2)

0x117e: PushEmpty(string, string)
0x117f: Stack[-1] = "idle"
0x1180: Push(Stack[-3])
0x1181: IF (Stack[-1] == 0) GOTO 0x1183; Pop(1)

0x1182: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1183: Stack[-4] = Stack[-1]
0x1184: Return(); Pop(2)

0x1185: PushEmpty(int, bool, int, bool)
0x1186: Stack[-2] = (int) 0
0x1187: Push("all")
0x1188: PushEmpty(string, int)
0x1189: Stack[-1] = Stack[-5]
0x118a: Call2 0x117e

0x118b: Pop(1)
0x118c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x118d: Pop(2)
0x118e: Pop(0); Push((bool) Stack[-1] == 0)
0x118f: IF (Stack[-1] == 0) GOTO 0x1191; Pop(1)

0x1190: GOTO 0x1194

0x1191: Push((int) 1)
0x1192: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1193: GOTO 0x1187

0x1194: Stack[-5] = Stack[-2]
0x1195: Return(); Pop(4)

0x1196: PushEmpty()
0x1197: PushEmpty(bool)
0x1198: Call2 0x1417

0x1199: Pop(0)
0x119a: IF (Stack[-1] == 0) GOTO 0x119d; Pop(1)

0x119b: Stack[-2] = (int) 2
0x119c: GOTO 0x119e

0x119d: Stack[-2] = (int) 0
0x119e: Return(); Pop(0)

0x119f: PushEmpty()
0x11a0: PushEmpty(object)
0x11a1: Stack[-1] = Stack[-2]
0x11a2: Push(-1, 1); TaskCall(3)
0x11a3: Call2 0x293

0x11a4: Pop(-1, 1); TaskReturn
0x11a5: Pop(1)
0x11a6: Return(); Pop(0)

0x11a7: PushEmpty()
0x11a8: PushEmpty(bool, object)
0x11a9: Stack[-1] = Stack[-3]
0x11aa: Call2 0xf9c

0x11ab: Pop(1)
0x11ac: IF (Stack[-1] == 0) GOTO 0x11af; Pop(1)

0x11ad: Stack[-2] = (int) 2
0x11ae: GOTO 0x11b0

0x11af: Stack[-2] = (int) 0
0x11b0: Return(); Pop(0)

0x11b1: PushEmpty()
0x11b2: PushEmpty(object)
0x11b3: Stack[-1] = Stack[-2]
0x11b4: Push(-1, 3); TaskCall(4)
0x11b5: Call2 0x3a6

0x11b6: Pop(-1, 3); TaskReturn
0x11b7: Pop(1)
0x11b8: Return(); Pop(0)

0x11b9: PushEmpty()
0x11ba: PushEmpty(bool, object)
0x11bb: Stack[-1] = Stack[-4]
0x11bc: Call2 0xf9c

0x11bd: Pop(1)
0x11be: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11bf: Stack[-3] = (int) 2
0x11c0: GOTO 0x11c2

0x11c1: Stack[-3] = (int) 0
0x11c2: Return(); Pop(0)

0x11c3: PushEmpty()
0x11c4: PushEmpty(object)
0x11c5: Stack[-1] = Stack[-2]
0x11c6: Push(-1, 3); TaskCall(5)
0x11c7: Call2 0x4a2

0x11c8: Pop(-1, 3); TaskReturn
0x11c9: Pop(1)
0x11ca: Return(); Pop(0)

0x11cb: PushEmpty(string, bool, string, bool)
0x11cc: PushEmpty(bool, object, string)
0x11cd: Stack[-2] = Stack[-9]
0x11ce: Stack[-1] = "class"
0x11cf: Call2 0xf67

0x11d0: Pop(2)
0x11d1: Pop(1); Push((bool) Stack[-1] == 0)
0x11d2: IF (Stack[-1] == 0) GOTO 0x11d5; Pop(1)

0x11d3: Stack[-8] = (bool) 0
0x11d4: Return(); Pop(4)

0x11d5: Push("class")
0x11d6: @@ GetProperty(Stack[-1], Stack[-3])
0x11d7: Pop(1)
0x11d8: Push("rat")
0x11d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11da: IF (Stack[-1] == 0) GOTO 0x11de; Pop(1)

0x11db: Stack[-8] = (bool) 0
0x11dc: Return(); Pop(4)

0x11dd: GOTO 0x11e9

0x11de: Push("rat_big")
0x11df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e0: IF (Stack[-1] == 0) GOTO 0x11e4; Pop(1)

0x11e1: Stack[-8] = (bool) 0
0x11e2: Return(); Pop(4)

0x11e3: GOTO 0x11e9

0x11e4: Push("dog")
0x11e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e6: IF (Stack[-1] == 0) GOTO 0x11e9; Pop(1)

0x11e7: Stack[-8] = (bool) 0
0x11e8: Return(); Pop(4)

0x11e9: @ CanSee(Stack[-1], Stack[-7])
0x11ea: Pop(0)
0x11eb: PushEmpty(bool)
0x11ec: Stack[-1] = (bool) 1
0x11ed: Push(Stack[-2])
0x11ee: IF (Stack[-1] == 0) GOTO 0x11f7; Pop(1)

0x11ef: PushEmpty(float, object)
0x11f0: Stack[-1] = Stack[-10]
0x11f1: Call2 0xf5a

0x11f2: Pop(1)
0x11f3: Pop(0); Push(Stack[-7] * Stack[-7]);
0x11f4: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x11f5: IF (Stack[-1] == 0) GOTO 0x11f7; Pop(1)

0x11f6: Stack[-1] = (bool) 0
0x11f7: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f8: Stack[-8] = (bool) 1
0x11f9: Return(); Pop(4)

0x11fa: @ CanSee(Stack[-1], Stack[-6])
0x11fb: Pop(0)
0x11fc: PushEmpty(bool)
0x11fd: Stack[-1] = (bool) 1
0x11fe: Push(Stack[-2])
0x11ff: IF (Stack[-1] == 0) GOTO 0x1208; Pop(1)

0x1200: PushEmpty(float, object)
0x1201: Stack[-1] = Stack[-9]
0x1202: Call2 0xf5a

0x1203: Pop(1)
0x1204: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1205: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1206: IF (Stack[-1] == 0) GOTO 0x1208; Pop(1)

0x1207: Stack[-1] = (bool) 0
0x1208: IF (Stack[-1] == 0) GOTO 0x120b; Pop(1)

0x1209: Stack[-8] = (bool) 1
0x120a: Return(); Pop(4)

0x120b: Stack[-8] = (bool) 0
0x120c: Return(); Pop(4)

0x120d: PushEmpty()
0x120e: Stack[-2] = (int) 0
0x120f: Return(); Pop(0)

0x1210: PushEmpty()
0x1211: Return(); Pop(0)

0x1212: PushEmpty()
0x1213: Stack[-3] = (int) 0
0x1214: Return(); Pop(0)

0x1215: PushEmpty()
0x1216: Return(); Pop(0)

0x1217: PushEmpty()
0x1218: Stack[-2] = (int) 2
0x1219: Return(); Pop(0)

0x121a: PushEmpty()
0x121b: PushEmpty(object)
0x121c: Stack[-1] = Stack[-2]
0x121d: Call2 0x13ef

0x121e: Pop(1)
0x121f: Return(); Pop(0)

0x1220: Return(); Pop(0)

0x1221: PushEmpty(bool, bool)
0x1222: @ CanSee(Stack[-1], Stack[-3])
0x1223: Pop(0)
0x1224: Stack[-4] = Stack[-1]
0x1225: Return(); Pop(2)

0x1226: PushEmpty()
0x1227: PushEmpty(object)
0x1228: Stack[-1] = Stack[-2]
0x1229: Push(-1, 3); TaskCall(6)
0x122a: Call2 0x564

0x122b: Pop(-1, 3); TaskReturn
0x122c: Pop(1)
0x122d: Return(); Pop(0)

0x122e: PushEmpty(bool, bool)
0x122f: @ CanSee(Stack[-1], Stack[-3])
0x1230: Pop(0)
0x1231: Stack[-4] = (bool) 1
0x1232: Push(Stack[-1])
0x1233: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x1234: PushEmpty(float, object)
0x1235: Stack[-1] = Stack[-5]
0x1236: Call2 0xf5a

0x1237: Pop(1)
0x1238: Push((int) 4000000)
0x1239: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x123a: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x123b: Stack[-4] = (bool) 0
0x123c: Return(); Pop(2)

0x123d: PushEmpty()
0x123e: PushEmpty(object)
0x123f: Stack[-1] = Stack[-2]
0x1240: Push(-1, 3); TaskCall(7)
0x1241: Call2 0x626

0x1242: Pop(-1, 3); TaskReturn
0x1243: Pop(1)
0x1244: Return(); Pop(0)

0x1245: PushEmpty()
0x1246: PushEmpty(bool, object)
0x1247: Stack[-1] = Stack[-3]
0x1248: Call2 0x122e

0x1249: Stack[-4] = Stack[-2]
0x124a: Pop(2)
0x124b: Return(); Pop(0)

0x124c: PushEmpty()
0x124d: PushEmpty(object)
0x124e: Stack[-1] = Stack[-2]
0x124f: Call2 0x123d

0x1250: Pop(1)
0x1251: Return(); Pop(0)

0x1252: PushEmpty()
0x1253: Stack[-2] = (bool) 0
0x1254: Return(); Pop(0)

0x1255: PushEmpty()
0x1256: Return(); Pop(0)

0x1257: PushEmpty()
0x1258: Push((int) 1000)
0x1259: @@ SetReturnValue(Stack[-1])
0x125a: Pop(1)
0x125b: Return(); Pop(0)

0x125c: PushEmpty()
0x125d: PushEmpty(int, string)
0x125e: Stack[-1] = "branch"
0x125f: Call2 0x10e0

0x1260: Pop(1)
0x1261: Push((int) 0)
0x1262: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1263: IF (Stack[-1] == 0) GOTO 0x1266; Pop(1)

0x1264: Stack[-2] = (bool) 1
0x1265: Return(); Pop(0)

0x1266: Stack[-2] = (bool) 0
0x1267: Return(); Pop(0)

0x1268: PushEmpty()
0x1269: PushEmpty(int, string)
0x126a: Stack[-1] = "branch"
0x126b: Call2 0x10e0

0x126c: Pop(1)
0x126d: Push((int) 2)
0x126e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126f: IF (Stack[-1] == 0) GOTO 0x1272; Pop(1)

0x1270: Stack[-2] = (bool) 1
0x1271: Return(); Pop(0)

0x1272: Stack[-2] = (bool) 0
0x1273: Return(); Pop(0)

0x1274: PushEmpty()
0x1275: PushEmpty(bool, object)
0x1276: Stack[-1] = Stack[-3]
0x1277: Call2 0x12f6

0x1278: Pop(1)
0x1279: IF (Stack[-1] == 0) GOTO 0x127c; Pop(1)

0x127a: Stack[-2] = (bool) 1
0x127b: Return(); Pop(0)

0x127c: Stack[-2] = (bool) 0
0x127d: Return(); Pop(0)

0x127e: PushEmpty()
0x127f: PushEmpty(bool, object)
0x1280: Stack[-1] = Stack[-3]
0x1281: Call2 0x12fd

0x1282: Pop(1)
0x1283: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x1284: Stack[-2] = (bool) 1
0x1285: Return(); Pop(0)

0x1286: Stack[-2] = (bool) 0
0x1287: Return(); Pop(0)

0x1288: PushEmpty()
0x1289: PushEmpty(bool, object)
0x128a: Stack[-1] = Stack[-3]
0x128b: Call2 0x1304

0x128c: Pop(1)
0x128d: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x128e: Stack[-2] = (bool) 1
0x128f: Return(); Pop(0)

0x1290: Stack[-2] = (bool) 0
0x1291: Return(); Pop(0)

0x1292: PushEmpty()
0x1293: PushEmpty(bool, object)
0x1294: Stack[-1] = Stack[-3]
0x1295: Call2 0x130b

0x1296: Pop(1)
0x1297: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1298: Stack[-2] = (bool) 1
0x1299: Return(); Pop(0)

0x129a: Stack[-2] = (bool) 0
0x129b: Return(); Pop(0)

0x129c: PushEmpty()
0x129d: PushEmpty(bool, object)
0x129e: Stack[-1] = Stack[-3]
0x129f: Call2 0x1312

0x12a0: Pop(1)
0x12a1: IF (Stack[-1] == 0) GOTO 0x12a4; Pop(1)

0x12a2: Stack[-2] = (bool) 1
0x12a3: Return(); Pop(0)

0x12a4: Stack[-2] = (bool) 0
0x12a5: Return(); Pop(0)

0x12a6: PushEmpty()
0x12a7: PushEmpty(bool, object)
0x12a8: Stack[-1] = Stack[-3]
0x12a9: Call2 0x1319

0x12aa: Pop(1)
0x12ab: IF (Stack[-1] == 0) GOTO 0x12ae; Pop(1)

0x12ac: Stack[-2] = (bool) 1
0x12ad: Return(); Pop(0)

0x12ae: Stack[-2] = (bool) 0
0x12af: Return(); Pop(0)

0x12b0: PushEmpty()
0x12b1: PushEmpty(bool, object)
0x12b2: Stack[-1] = Stack[-3]
0x12b3: Call2 0x1320

0x12b4: Pop(1)
0x12b5: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b6: Stack[-2] = (bool) 1
0x12b7: Return(); Pop(0)

0x12b8: Stack[-2] = (bool) 0
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty()
0x12bb: PushEmpty(bool, object)
0x12bc: Stack[-1] = Stack[-3]
0x12bd: Call2 0x1327

0x12be: Pop(1)
0x12bf: IF (Stack[-1] == 0) GOTO 0x12c2; Pop(1)

0x12c0: Stack[-2] = (bool) 1
0x12c1: Return(); Pop(0)

0x12c2: Stack[-2] = (bool) 0
0x12c3: Return(); Pop(0)

0x12c4: PushEmpty()
0x12c5: PushEmpty(bool, object)
0x12c6: Stack[-1] = Stack[-3]
0x12c7: Call2 0x132e

0x12c8: Pop(1)
0x12c9: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12ca: Stack[-2] = (bool) 1
0x12cb: Return(); Pop(0)

0x12cc: Stack[-2] = (bool) 0
0x12cd: Return(); Pop(0)

0x12ce: PushEmpty()
0x12cf: PushEmpty(bool, object)
0x12d0: Stack[-1] = Stack[-3]
0x12d1: Call2 0x1335

0x12d2: Pop(1)
0x12d3: IF (Stack[-1] == 0) GOTO 0x12d6; Pop(1)

0x12d4: Stack[-2] = (bool) 1
0x12d5: Return(); Pop(0)

0x12d6: Stack[-2] = (bool) 0
0x12d7: Return(); Pop(0)

0x12d8: PushEmpty()
0x12d9: PushEmpty(bool, object)
0x12da: Stack[-1] = Stack[-3]
0x12db: Call2 0x133c

0x12dc: Pop(1)
0x12dd: IF (Stack[-1] == 0) GOTO 0x12e0; Pop(1)

0x12de: Stack[-2] = (bool) 1
0x12df: Return(); Pop(0)

0x12e0: Stack[-2] = (bool) 0
0x12e1: Return(); Pop(0)

0x12e2: PushEmpty()
0x12e3: PushEmpty(bool, object)
0x12e4: Stack[-1] = Stack[-3]
0x12e5: Call2 0x1343

0x12e6: Pop(1)
0x12e7: IF (Stack[-1] == 0) GOTO 0x12ea; Pop(1)

0x12e8: Stack[-2] = (bool) 1
0x12e9: Return(); Pop(0)

0x12ea: Stack[-2] = (bool) 0
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty()
0x12ed: PushEmpty(bool, object)
0x12ee: Stack[-1] = Stack[-3]
0x12ef: Call2 0x134a

0x12f0: Pop(1)
0x12f1: IF (Stack[-1] == 0) GOTO 0x12f4; Pop(1)

0x12f2: Stack[-2] = (bool) 1
0x12f3: Return(); Pop(0)

0x12f4: Stack[-2] = (bool) 0
0x12f5: Return(); Pop(0)

0x12f6: PushEmpty()
0x12f7: PushEmpty(int)
0x12f8: Call2 0x10e5

0x12f9: Pop(0)
0x12fa: Push((int) 1)
0x12fb: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12fc: Return(); Pop(0)

0x12fd: PushEmpty()
0x12fe: PushEmpty(int)
0x12ff: Call2 0x10e5

0x1300: Pop(0)
0x1301: Push((int) 2)
0x1302: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1303: Return(); Pop(0)

0x1304: PushEmpty()
0x1305: PushEmpty(int)
0x1306: Call2 0x10e5

0x1307: Pop(0)
0x1308: Push((int) 3)
0x1309: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x130a: Return(); Pop(0)

0x130b: PushEmpty()
0x130c: PushEmpty(int)
0x130d: Call2 0x10e5

0x130e: Pop(0)
0x130f: Push((int) 4)
0x1310: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1311: Return(); Pop(0)

0x1312: PushEmpty()
0x1313: PushEmpty(int)
0x1314: Call2 0x10e5

0x1315: Pop(0)
0x1316: Push((int) 5)
0x1317: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1318: Return(); Pop(0)

0x1319: PushEmpty()
0x131a: PushEmpty(int)
0x131b: Call2 0x10e5

0x131c: Pop(0)
0x131d: Push((int) 6)
0x131e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x131f: Return(); Pop(0)

0x1320: PushEmpty()
0x1321: PushEmpty(int)
0x1322: Call2 0x10e5

0x1323: Pop(0)
0x1324: Push((int) 7)
0x1325: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1326: Return(); Pop(0)

0x1327: PushEmpty()
0x1328: PushEmpty(int)
0x1329: Call2 0x10e5

0x132a: Pop(0)
0x132b: Push((int) 8)
0x132c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x132d: Return(); Pop(0)

0x132e: PushEmpty()
0x132f: PushEmpty(int)
0x1330: Call2 0x10e5

0x1331: Pop(0)
0x1332: Push((int) 9)
0x1333: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1334: Return(); Pop(0)

0x1335: PushEmpty()
0x1336: PushEmpty(int)
0x1337: Call2 0x10e5

0x1338: Pop(0)
0x1339: Push((int) 10)
0x133a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x133b: Return(); Pop(0)

0x133c: PushEmpty()
0x133d: PushEmpty(int)
0x133e: Call2 0x10e5

0x133f: Pop(0)
0x1340: Push((int) 11)
0x1341: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1342: Return(); Pop(0)

0x1343: PushEmpty()
0x1344: PushEmpty(int)
0x1345: Call2 0x10e5

0x1346: Pop(0)
0x1347: Push((int) 12)
0x1348: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1349: Return(); Pop(0)

0x134a: PushEmpty()
0x134b: PushEmpty(bool)
0x134c: Stack[-1] = (bool) 0
0x134d: PushEmpty(int)
0x134e: Call2 0x10ee

0x134f: Pop(0)
0x1350: Push((int) 0)
0x1351: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1352: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1353: PushEmpty(int)
0x1354: Call2 0x10ee

0x1355: Pop(0)
0x1356: Push((int) 12)
0x1357: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1358: IF (Stack[-1] == 0) GOTO 0x135a; Pop(1)

0x1359: Stack[-1] = (bool) 1
0x135a: IF (Stack[-1] == 0) GOTO 0x135d; Pop(1)

0x135b: Stack[-2] = (bool) 1
0x135c: Return(); Pop(0)

0x135d: Stack[-2] = (bool) 0
0x135e: Return(); Pop(0)

0x135f: PushEmpty(int, int)
0x1360: Push("branch")
0x1361: @ GetVariable(Stack[-1], Stack[-2])
0x1362: Pop(1)
0x1363: Push((int) 0)
0x1364: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1365: IF (Stack[-1] == 0) GOTO 0x1369; Pop(1)

0x1366: Stack[-3] = (int) 1
0x1367: Return(); Pop(2)

0x1368: GOTO 0x136e

0x1369: Push((int) 1)
0x136a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x136b: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x136c: Stack[-3] = (int) 2
0x136d: Return(); Pop(2)

0x136e: Stack[-3] = (int) 3
0x136f: Return(); Pop(2)

0x1370: PushEmpty(int, int)
0x1371: Push("branch")
0x1372: @ GetVariable(Stack[-1], Stack[-2])
0x1373: Pop(1)
0x1374: Stack[-3] = Stack[-1]
0x1375: Return(); Pop(2)

0x1376: PushEmpty(object, float, object, float)
0x1377: Push("player")
0x1378: @ FindActor(Stack[-3], Stack[-1])
0x1379: Pop(1)
0x137a: Pop(0); Push((bool) Stack[-2] == 0)
0x137b: IF (Stack[-1] == 0) GOTO 0x137e; Pop(1)

0x137c: Stack[-5] = (int) 0
0x137d: Return(); Pop(4)

0x137e: Push("reputation")
0x137f: @@ GetProperty(Stack[-1], Stack[-2])
0x1380: Pop(1)
0x1381: Stack[-5] = Stack[-1]
0x1382: Return(); Pop(4)

0x1383: Stack[-2] = 0
0x1384: PushEmpty()
0x1385: PushEmpty(int)
0x1386: Call2 0x1370

0x1387: Pop(0)
0x1388: Push((int) 1)
0x1389: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x138a: IF (Stack[-1] == 0) GOTO 0x138e; Pop(1)

0x138b: @ WorkWithCorpse(Stack[-1])
0x138c: Pop(0)
0x138d: GOTO 0x1390

0x138e: @ Barter(Stack[-1])
0x138f: Pop(0)
0x1390: Return(); Pop(0)

0x1391: PushEmpty(int, int)
0x1392: Push((int) 0)
0x1393: @ ClearSubContainer(Stack[-1])
0x1394: Pop(1)
0x1395: Push(Stack[-3])
0x1396: IF (Stack[-1] == 0) GOTO 0x13ad; Pop(1)

0x1397: PushEmpty(string, int, int, int)
0x1398: Stack[-4] = "rifle_ammo"
0x1399: Stack[-3] = (int) 1
0x139a: Stack[-2] = (int) 2
0x139b: Stack[-1] = (int) 2
0x139c: Call2 0x1090

0x139d: Pop(4)
0x139e: PushEmpty(string, int, int, int)
0x139f: Stack[-4] = "revolver_ammo"
0x13a0: Stack[-3] = (int) 1
0x13a1: Stack[-2] = (int) 2
0x13a2: Stack[-1] = (int) 2
0x13a3: Call2 0x1090

0x13a4: Pop(4)
0x13a5: PushEmpty(string, int, int, int)
0x13a6: Stack[-4] = "samopal_ammo"
0x13a7: Stack[-3] = (int) 2
0x13a8: Stack[-2] = (int) 2
0x13a9: Stack[-1] = (int) 2
0x13aa: Call2 0x1090

0x13ab: Pop(4)
0x13ac: GOTO 0x13dc

0x13ad: PushEmpty(string, int, int)
0x13ae: Stack[-3] = "lockpick"
0x13af: Stack[-2] = (int) 1
0x13b0: Stack[-1] = (int) 4
0x13b1: Call2 0x1085

0x13b2: Pop(3)
0x13b3: PushEmpty(string, int, int, int)
0x13b4: Stack[-4] = "alpha_pills"
0x13b5: Stack[-3] = (int) 1
0x13b6: Stack[-2] = (int) 2
0x13b7: Stack[-1] = (int) 3
0x13b8: Call2 0x1090

0x13b9: Pop(4)
0x13ba: PushEmpty(string, int, int)
0x13bb: Stack[-3] = "meradorm"
0x13bc: Stack[-2] = (int) 1
0x13bd: Stack[-1] = (int) 2
0x13be: Call2 0x1085

0x13bf: Pop(3)
0x13c0: PushEmpty(string, int, int)
0x13c1: Stack[-3] = "powder"
0x13c2: Stack[-2] = (int) 1
0x13c3: Stack[-1] = (int) 15
0x13c4: Call2 0x1085

0x13c5: Pop(3)
0x13c6: PushEmpty(int)
0x13c7: Call2 0x10e5

0x13c8: Stack[-2] = Stack[-1]
0x13c9: Pop(1)
0x13ca: Push((int) 4)
0x13cb: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x13cc: IF (Stack[-1] == 0) GOTO 0x13d3; Pop(1)

0x13cd: PushEmpty(string, int, int)
0x13ce: Stack[-3] = "beta_pills"
0x13cf: Stack[-2] = (int) 1
0x13d0: Stack[-1] = (int) 2
0x13d1: Call2 0x1085

0x13d2: Pop(3)
0x13d3: Push((int) 6)
0x13d4: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x13d5: IF (Stack[-1] == 0) GOTO 0x13dc; Pop(1)

0x13d6: PushEmpty(string, int, int)
0x13d7: Stack[-3] = "gamma_pills"
0x13d8: Stack[-2] = (int) 1
0x13d9: Stack[-1] = (int) 7
0x13da: Call2 0x1085

0x13db: Pop(3)
0x13dc: Return(); Pop(2)

0x13dd: Stack[-1] = (int) 515560
0x13de: Return(); Pop(0)

0x13df: Stack[-1] = (int) 503345
0x13e0: Return(); Pop(0)

0x13e1: Stack[-1] = "ui/NPC_Citizen3.png"
0x13e2: Return(); Pop(0)

0x13e3: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x13e4: Return(); Pop(0)

0x13e5: Stack[-1] = (bool) 0
0x13e6: Return(); Pop(0)

0x13e7: Push(GlobalVars[0])
0x13e8: Stack[-1] = (bool) 0
0x13e9: GlobalVars[0] = Stack[-1]; Pop(1)
0x13ea: PushEmpty(bool)
0x13eb: Stack[-1] = (bool) 1
0x13ec: Call2 0x1391

0x13ed: Pop(1)
0x13ee: Return(); Pop(0)

0x13ef: PushEmpty(bool, bool)
0x13f0: Push(GlobalVars[0])
0x13f1: IF (Stack[-1] == 0) GOTO 0x13fc; Pop(1)

0x13f2: @ IsOverrideActive(Stack[-1])
0x13f3: Pop(0)
0x13f4: Pop(0); Push((bool) Stack[-1] == 0)
0x13f5: IF (Stack[-1] == 0) GOTO 0x13fa; Pop(1)

0x13f6: PushEmpty(object)
0x13f7: Stack[-1] = Stack[-4]
0x13f8: Call2 0x1384

0x13f9: Pop(1)
0x13fa: Return(); Pop(2)

0x13fb: GOTO 0x1416

0x13fc: Push((int) 1000)
0x13fd: PushEmpty(int, object)
0x13fe: Stack[-1] = Stack[-6]
0x13ff: Push(-2, 1); TaskCall(8)
0x1400: Call2 0x6c3

0x1401: Pop(-2, 1); TaskReturn
0x1402: Pop(1)
0x1403: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1404: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1405: PushEmpty(bool, object)
0x1406: Stack[-1] = Stack[-5]
0x1407: Call2 0x1019

0x1408: Pop(1)
0x1409: Pop(1); Push((bool) Stack[-1] == 0)
0x140a: IF (Stack[-1] == 0) GOTO 0x140c; Pop(1)

0x140b: Return(); Pop(2)

0x140c: PushEmpty(object)
0x140d: Stack[-1] = Stack[-4]
0x140e: Push(-1, 1); TaskCall(0)
0x140f: Call2 0x0

0x1410: Pop(-1, 1); TaskReturn
0x1411: Pop(1)
0x1412: PushEmpty(object)
0x1413: Stack[-1] = Stack[-4]
0x1414: Call2 0x1050

0x1415: Pop(1)
0x1416: Return(); Pop(2)

0x1417: PushEmpty(float)
0x1418: Call2 0x1376

0x1419: Pop(0)
0x141a: Push((float)0.4)
0x141b: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x141c: Return(); Pop(0)

0x141d: PushEmpty()
0x141e: PushEmpty(bool, object, object, float)
0x141f: Stack[-3] = Stack[-7]
0x1420: Stack[-2] = Stack[-6]
0x1421: Stack[-1] = (float) 700.0
0x1422: Call2 0x11cb

0x1423: Stack[-8] = Stack[-4]
0x1424: Pop(4)
0x1425: Return(); Pop(0)

