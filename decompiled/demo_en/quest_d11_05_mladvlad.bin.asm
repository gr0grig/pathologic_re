GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Fear
	Sly
	Untrust
	cleanup
	restore
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	add
	money
	Money
	RMap
	quest_d11_05
	place_enemy_after
	completed
	playsound
	mapmark
	d11q05
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_MladVlad.png
	ui/NPC_MladVlad_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1d5
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb6 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x1d9 Vars = (string)
		EVENT_6 Op = 0x1ed Vars = ()
		EVENT_5 Op = 0x1fa Vars = ()
		EVENT_7 Op = 0x243 Vars = (int)
		EVENT_45 Op = 0x285 Vars = (bool)
		EVENT_0 Op = 0x291 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x321

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x539

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x537

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x53b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x53d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x526

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x435

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x376

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x365

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0xa0

0x5a: Pop(1)
0x5b: Push((int) 520941)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x4bd

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 534490)
0x66: Push((int) 38444)
0x67: Push((int) 36135)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x4c9

0x6d: Pop(1)
0x6e: Pop(1); Push((bool) Stack[-1] == 0)
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 520942)
0x71: Push((int) 22160)
0x72: Push((int) 22159)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: Push((int) 520946)
0x76: Push((int) -1)
0x77: Push((int) 22163)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: Push((int) 536616)
0x7b: Push((int) -1)
0x7c: Push((int) 38443)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: GOTO 0x82

0x80: Return(); Pop(0)

0x81: GOTO 0x55

0x82: PushEmpty(bool)
0x83: Call2 0x53f

0x84: Pop(0)
0x85: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x86: @ lshWaitForAnimEnd()
0x87: Pop(0)
0x88: Push( Stack[3 + Tasks[-1].StackPointer] )
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: GOTO 0x90

0x8b: PushEmpty(string)
0x8c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8d: Call2 0x400

0x8e: Pop(1)
0x8f: GOTO 0x86

0x90: GOTO 0x9f

0x91: Push("all")
0x92: Push("idle")
0x93: @ PlayAnimation(Stack[-2], Stack[-1])
0x94: Pop(2)
0x95: @ WaitForAnimEnd()
0x96: Pop(0)
0x97: Push( Stack[3 + Tasks[-1].StackPointer] )
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0x9f

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: GOTO 0x95

0x9f: Return(); Pop(0)

0xa0: PushEmpty()
0xa1: PushEmpty(bool)
0xa2: Call2 0x53f

0xa3: Pop(0)
0xa4: Pop(1); Push((bool) Stack[-1] == 0)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Return(); Pop(0)

0xaa: PushEmpty(string, bool)
0xab: Stack[-2] = Stack[-3]
0xac: Push("")
0xad: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xaf: Stack[-1] = (bool) 0
0xb0: GOTO 0xb2

0xb1: Stack[-1] = (bool) 1
0xb2: Call2 0x410

0xb3: Pop(2)
0xb4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: Push((int) 1)
0xb8: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0xb9: PushEmpty()
0xba: Call2 0x42e

0xbb: Pop(0)
0xbc: Push((int) 36141)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x4a8

0xc3: Pop(2)
0xc4: Push((int) 38456)
0xc5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: PushEmpty(object, object)
0xc8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xca: Call2 0x4a8

0xcb: Pop(2)
0xcc: Push((int) 22161)
0xcd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x4b7

0xd3: Pop(2)
0xd4: PushEmpty(object, object)
0xd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7: Call2 0x496

0xd8: Pop(2)
0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x4a1

0xdd: Pop(2)
0xde: Push((int) 22158)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0xa0

0xe4: Pop(1)
0xe5: Push((int) 520941)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: PushEmpty(bool, object)
0xeb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xec: Call2 0x4bd

0xed: Pop(1)
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: Push((int) 534490)
0xf0: Push((int) 38444)
0xf1: Push((int) 36135)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: PushEmpty(bool, object)
0xf5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Call2 0x4c9

0xf7: Pop(1)
0xf8: Pop(1); Push((bool) Stack[-1] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Push((int) 520942)
0xfb: Push((int) 22160)
0xfc: Push((int) 22159)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 520946)
0x100: Push((int) -1)
0x101: Push((int) 22163)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 536616)
0x105: Push((int) -1)
0x106: Push((int) 38443)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 22160)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0xa0

0x110: Pop(1)
0x111: Push((int) 520943)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x4d3

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11b: Push((int) 520944)
0x11c: Push((int) -1)
0x11d: Push((int) 22161)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Push((int) 520945)
0x121: Push((int) -1)
0x122: Push((int) 22162)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Return(); Pop(0)

0x126: Push((int) 38444)
0x127: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call2 0xa0

0x12c: Pop(1)
0x12d: Push((int) 536617)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 536618)
0x133: Push((int) 38446)
0x134: Push((int) 38445)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 38446)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Fear"
0x13d: Call2 0xa0

0x13e: Pop(1)
0x13f: Push((int) 536619)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 536620)
0x145: Push((int) 36136)
0x146: Push((int) 38447)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 36136)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Fear"
0x14f: Call2 0xa0

0x150: Pop(1)
0x151: Push((int) 534491)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 534492)
0x157: Push((int) 36138)
0x158: Push((int) 36137)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 536621)
0x15c: Push((int) 38449)
0x15d: Push((int) 38448)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Return(); Pop(0)

0x161: Push((int) 38449)
0x162: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x163: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Fear"
0x166: Call2 0xa0

0x167: Pop(1)
0x168: Push((int) 536622)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 536625)
0x16e: Push((int) 36140)
0x16f: Push((int) 38452)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 36138)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xa0

0x179: Pop(1)
0x17a: Push((int) 534493)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 534494)
0x180: Push((int) 36140)
0x181: Push((int) 36139)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Push((int) 536623)
0x185: Push((int) 38451)
0x186: Push((int) 38450)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Push((int) 38451)
0x18b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18c: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Sly"
0x18f: Call2 0xa0

0x190: Pop(1)
0x191: Push((int) 536624)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 536626)
0x197: Push((int) 38455)
0x198: Push((int) 38454)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 38455)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Untrust"
0x1a1: Call2 0xa0

0x1a2: Pop(1)
0x1a3: Push((int) 536627)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 536628)
0x1a9: Push((int) -1)
0x1aa: Push((int) 38456)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 36140)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Untrust"
0x1b3: Call2 0xa0

0x1b4: Pop(1)
0x1b5: Push((int) 534495)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 534496)
0x1bb: Push((int) -1)
0x1bc: Push((int) 36141)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c1: PushEmpty(bool)
0x1c2: Call2 0x53f

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c5: @ lshStopAnimation()
0x1c6: Pop(0)
0x1c7: GOTO 0x1ca

0x1c8: @ StopAnimation()
0x1c9: Pop(0)
0x1ca: Return(); Pop(0)

0x1cb: GOTO 0xb7

0x1cc: Return(); Pop(0)

0x1cd: PushEmpty()
0x1ce: PushEmpty(int, object)
0x1cf: Stack[-1] = Stack[-3]
0x1d0: Push(-2, 1); TaskCall(0)
0x1d1: Call2 0x0

0x1d2: Pop(-2, 1); TaskReturn
0x1d3: Pop(2)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: Call2 0x1fe

0x1d7: Pop(0)
0x1d8: Return(); Pop(0)

0x1d9: PushEmpty(bool, bool)
0x1da: Push("cleanup")
0x1db: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1dd: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1de: @ IsLoaded(Stack[-1])
0x1df: Pop(0)
0x1e0: Pop(0); Push((bool) Stack[-1] == 0)
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1e2: PushEmpty(object)
0x1e3: Call2 0x435

0x1e4: Pop(0)
0x1e5: @ RemoveActor(Stack[-1])
0x1e6: Pop(1)
0x1e7: GOTO 0x1ec

0x1e8: Push("restore")
0x1e9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ec: Return(); Pop(2)

0x1ed: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Call2 0x435

0x1f1: Pop(0)
0x1f2: @ RemoveActor(Stack[-1])
0x1f3: Pop(1)
0x1f4: @ Hold()
0x1f5: Pop(0)
0x1f6: PushEmpty()
0x1f7: Call2 0x269

0x1f8: Pop(0)
0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: Call2 0x278

0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(bool)
0x1ff: Call2 0x31c

0x200: Pop(0)
0x201: Pop(1); Push((bool) Stack[-1] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: @ Hold()
0x204: Pop(0)
0x205: @ GetDirection(Stack[-0])
0x206: Pop(0)
0x207: PushEmpty()
0x208: Call2 0x2ae

0x209: Pop(0)
0x20a: GOTO 0x207

0x20b: Return(); Pop(0)

0x20c: PushEmpty(object, object)
0x20d: Push("player")
0x20e: @ FindActor(Stack[-2], Stack[-1])
0x20f: Pop(1)
0x210: Pop(0); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x212: Stack[-3] = (bool) 0
0x213: Return(); Pop(2)

0x214: PushEmpty(bool, object)
0x215: Stack[-1] = Stack[-3]
0x216: Call2 0x313

0x217: Stack[-5] = Stack[-2]
0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: Stack[-1] = 0
0x21b: Push(CvectorIndex(Stack[-0], 0))
0x21c: Push(CvectorIndex(Stack[-0], 2))
0x21d: @ RotateAsync(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: Return(); Pop(0)

0x220: PushEmpty(object, bool, object, bool)
0x221: Push("player")
0x222: @ FindActor(Stack[-3], Stack[-1])
0x223: Pop(1)
0x224: Pop(0); Push((bool) Stack[-2] == 0)
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-5] = (bool) 0
0x227: Return(); Pop(4)

0x228: PushEmpty(float, object)
0x229: Stack[-1] = Stack[-4]
0x22a: Call2 0x2fa

0x22b: Pop(1)
0x22c: Push((float)90000.0)
0x22d: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x22f: Stack[-5] = (bool) 0
0x230: Return(); Pop(4)

0x231: @ CanSee(Stack[-1], Stack[-2])
0x232: Pop(0)
0x233: Stack[-5] = Stack[-1]
0x234: Return(); Pop(4)

0x235: Stack[-2] = 0
0x236: PushEmpty(float, float)
0x237: Push((int) 8)
0x238: Push((int) 16)
0x239: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: Push((int) 10)
0x23c: @ SetTimer(Stack[-1], Stack[-2])
0x23d: Pop(1)
0x23e: Return(); Pop(2)

0x23f: Push((int) 10)
0x240: @ KillTimer(Stack[-1])
0x241: Pop(1)
0x242: Return(); Pop(0)

0x243: PushEmpty()
0x244: Push((int) 10)
0x245: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x247: PushEmpty()
0x248: Call2 0x23f

0x249: Pop(0)
0x24a: PushEmpty(bool)
0x24b: Stack[-1] = (bool) 0
0x24c: PushEmpty(bool)
0x24d: Call2 0x31c

0x24e: Pop(0)
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x220

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x256: PushEmpty(bool)
0x257: Call2 0x20c

0x258: Pop(0)
0x259: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25a: PushEmpty(bool, object)
0x25b: PushEmpty(object)
0x25c: Call2 0x435

0x25d: Stack[-2] = Stack[-1]
0x25e: Pop(1)
0x25f: Call2 0x3b0

0x260: Pop(2)
0x261: GOTO 0x268

0x262: PushEmpty()
0x263: Call2 0x21b

0x264: Pop(0)
0x265: PushEmpty()
0x266: Call2 0x236

0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: PushEmpty()
0x26a: Call2 0x2f5

0x26b: Pop(0)
0x26c: PushEmpty()
0x26d: Call2 0x23f

0x26e: Pop(0)
0x26f: @ lshStopSpeech()
0x270: Pop(0)
0x271: @ lshStopAnimation()
0x272: Pop(0)
0x273: @ StopAsync()
0x274: Pop(0)
0x275: @ Hold()
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: @ StopGroup0()
0x279: Pop(0)
0x27a: PushEmpty()
0x27b: Call2 0x23f

0x27c: Pop(0)
0x27d: PushEmpty(string)
0x27e: Stack[-1] = "Neutral"
0x27f: Call2 0x400

0x280: Pop(1)
0x281: PushEmpty()
0x282: Call2 0x236

0x283: Pop(0)
0x284: Return(); Pop(0)

0x285: PushEmpty()
0x286: Push(Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x288: PushEmpty()
0x289: Call2 0x236

0x28a: Pop(0)
0x28b: GOTO 0x290

0x28c: PushEmpty(string)
0x28d: Stack[-1] = "Neutral"
0x28e: Call2 0x400

0x28f: Pop(1)
0x290: Return(); Pop(0)

0x291: PushEmpty(bool, bool)
0x292: @ IsOverrideActive(Stack[-1])
0x293: Pop(0)
0x294: Pop(0); Push((bool) Stack[-1] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x296: EventDisable(0)
0x297: PushEmpty()
0x298: Call2 0x2f5

0x299: Pop(0)
0x29a: PushEmpty(bool, object)
0x29b: Stack[-1] = Stack[-5]
0x29c: Call2 0x313

0x29d: Pop(2)
0x29e: EventEnable(0)
0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-4]
0x2a1: Call2 0x1cd

0x2a2: Pop(1)
0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral"
0x2a5: Call2 0x400

0x2a6: Pop(1)
0x2a7: PushEmpty()
0x2a8: Call2 0x23f

0x2a9: Pop(0)
0x2aa: PushEmpty()
0x2ab: Call2 0x236

0x2ac: Pop(0)
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2af: @ WaitForAnimEnd()
0x2b0: Pop(0)
0x2b1: PushEmpty(bool)
0x2b2: Call2 0x31c

0x2b3: Pop(0)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Return(); Pop(12)

0x2b7: PushEmpty(int)
0x2b8: Call2 0x485

0x2b9: Stack[-7] = Stack[-1]
0x2ba: Pop(1)
0x2bb: Stack[-5] = (int) 0
0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 0
0x2be: Push((int) 5)
0x2bf: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c1: PushEmpty(bool)
0x2c2: Call2 0x31c

0x2c3: Pop(0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Stack[-1] = (bool) 1
0x2c6: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2c7: Pop(0); Push((bool) Stack[-6] == 0)
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2c9: Push((int) 3)
0x2ca: @ Sleep(Stack[-1], Stack[-5])
0x2cb: Pop(1)
0x2cc: Pop(0); Push((bool) Stack[-4] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ce: GOTO 0x2f0

0x2cf: GOTO 0x2e5

0x2d0: @ irand(Stack[-3], Stack[-6])
0x2d1: Pop(0)
0x2d2: Push((int) 5)
0x2d3: @ irand(Stack[-3], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push((int) 0)
0x2d6: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x2d7: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d8: Stack[-3] = (int) 0
0x2d9: Push("all")
0x2da: PushEmpty(string, int)
0x2db: Stack[-1] = Stack[-6]
0x2dc: Call2 0x47e

0x2dd: Pop(1)
0x2de: @ PlayAnimation(Stack[-2], Stack[-1])
0x2df: Pop(2)
0x2e0: @ WaitForAnimEnd(Stack[-1])
0x2e1: Pop(0)
0x2e2: Pop(0); Push((bool) Stack[-1] == 0)
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e4: GOTO 0x2f0

0x2e5: PushEmpty(bool)
0x2e6: Call2 0x2f3

0x2e7: Pop(0)
0x2e8: Pop(1); Push((bool) Stack[-1] == 0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2ea: GOTO 0x2f0

0x2eb: @ ResetAAS()
0x2ec: Pop(0)
0x2ed: Push((int) 1)
0x2ee: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x2ef: GOTO 0x2bc

0x2f0: @ ResetAAS()
0x2f1: Pop(0)
0x2f2: Return(); Pop(12)

0x2f3: Stack[-1] = (bool) 1
0x2f4: Return(); Pop(0)

0x2f5: @ StopAnimation()
0x2f6: Pop(0)
0x2f7: @ StopGroup0()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2fb: @ GetPosition(Stack[-3])
0x2fc: Pop(0)
0x2fd: @@ GetPosition(Stack[-2])
0x2fe: Pop(0)
0x2ff: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x300: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x301: Return(); Pop(6)

0x302: PushEmpty(int, int)
0x303: @@ GetProperty(Stack[-4], Stack[-1])
0x304: Pop(0)
0x305: Pop(0); Push(Stack[-1] + Stack[-3]);
0x306: @@ SetProperty(Stack[-5], Stack[-1])
0x307: Pop(1)
0x308: Return(); Pop(2)

0x309: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x30a: @ GetPosition(Stack[-3])
0x30b: Pop(0)
0x30c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x30d: Push(CvectorIndex(Stack[-2], 0))
0x30e: Push(CvectorIndex(Stack[-3], 2))
0x30f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x310: Pop(2)
0x311: Stack[-8] = Stack[-1]
0x312: Return(); Pop(6)

0x313: PushEmpty(cvector, cvector)
0x314: @@ GetPosition(Stack[-1])
0x315: Pop(0)
0x316: PushEmpty(bool, cvector)
0x317: Stack[-1] = Stack[-3]
0x318: Call2 0x309

0x319: Stack[-6] = Stack[-2]
0x31a: Pop(2)
0x31b: Return(); Pop(2)

0x31c: PushEmpty(bool, bool)
0x31d: @ IsLoaded(Stack[-1])
0x31e: Pop(0)
0x31f: Stack[-3] = Stack[-1]
0x320: Return(); Pop(2)

0x321: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x322: @@ GetPosition(Stack[-8])
0x323: Pop(0)
0x324: @@ GetEyesHeight(Stack[-9])
0x325: Pop(0)
0x326: Push(CvectorIndex(Stack[-8], 1))
0x327: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x328: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x329: @ GetPosition(Stack[-7])
0x32a: Pop(0)
0x32b: @ GetEyesHeight(Stack[-9])
0x32c: Pop(0)
0x32d: Push(CvectorIndex(Stack[-7], 1))
0x32e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x32f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x330: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x331: Push(CvectorIndex(Stack[-6], 1))
0x332: Stack[-1] = (int) 0
0x333: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x334: Pop(0); Push(Stack[-6] | Stack[-6]);
0x335: Pop(1); Push(Sqrt(Stack[-1]))
0x336: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x337: Stack[-5] = -Stack[-6]; Pop(0);
0x338: Pop(0); Push(Stack[-6] * Stack[-19]);
0x339: PushEmpty(cvector, cvector)
0x33a: Push(CVector(0.0, 1.0, 0.0))
0x33b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x33c: Call2 0x43b

0x33d: Pop(1)
0x33e: Push((int) 25)
0x33f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x340: Pop(2); Push(Stack[-2] + Stack[-1]);
0x341: Push(CVector(0.0, 10.0, 0.0))
0x342: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x343: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x344: @ IsOverrideActive(Stack[-2])
0x345: Pop(0)
0x346: Push(Stack[-2])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-21] = (bool) 0
0x349: Return(); Pop(18)

0x34a: @ StopWorld()
0x34b: Pop(0)
0x34c: @ CameraTransit(Stack[-3], Stack[-5])
0x34d: Pop(0)
0x34e: Push(CvectorIndex(Stack[-4], 0))
0x34f: Push(CvectorIndex(Stack[-5], 2))
0x350: @ Rotate(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: PushEmpty(bool)
0x353: Call2 0x53f

0x354: Pop(0)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: GOTO 0x35f

0x357: Push("head")
0x358: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x359: Pop(1)
0x35a: Push(Stack[-1])
0x35b: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35c: Push("head")
0x35d: @ LookAsyncCamera(Stack[-1])
0x35e: Pop(1)
0x35f: @ CameraWaitForPlayFinish()
0x360: Pop(0)
0x361: @ ResumeWorld()
0x362: Pop(0)
0x363: Stack[-21] = (bool) 1
0x364: Return(); Pop(18)

0x365: PushEmpty(bool, bool)
0x366: @ CameraSwitchToNormal()
0x367: Pop(0)
0x368: PushEmpty(bool)
0x369: Call2 0x53f

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36c: GOTO 0x375

0x36d: Push("head")
0x36e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x36f: Pop(1)
0x370: Push(Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x372: Push("head")
0x373: @ UnlookAsync(Stack[-1])
0x374: Pop(1)
0x375: Return(); Pop(2)

0x376: PushEmpty(int, int, int, int)
0x377: Push("voice_common")
0x378: @ GetVariable(Stack[-1], Stack[-3])
0x379: Pop(1)
0x37a: Push(Stack[-2])
0x37b: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x37c: PushEmpty(bool, object)
0x37d: Stack[-1] = Stack[-7]
0x37e: Call2 0x3b0

0x37f: Pop(1)
0x380: Pop(1); Push((bool) Stack[-1] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[-7]
0x384: Call2 0x3d5

0x385: Pop(1)
0x386: Pop(1); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-6] = (bool) 0
0x389: Return(); Pop(4)

0x38a: Push((int) 2)
0x38b: @ irand(Stack[-2], Stack[-1])
0x38c: Pop(1)
0x38d: Push(Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x38f: Push("voice_common")
0x390: Push((int) 1)
0x391: Pop(1); Push(Stack[-4] + Stack[-1]);
0x392: Push((int) 3)
0x393: Pop(2); Push(Stack[-2] % Stack[-1]);
0x394: @ SetVariable(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: GOTO 0x39b

0x397: Push("voice_common")
0x398: Push((int) 0)
0x399: @ SetVariable(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: GOTO 0x3ae

0x39c: PushEmpty(bool, object)
0x39d: Stack[-1] = Stack[-7]
0x39e: Call2 0x3d5

0x39f: Pop(1)
0x3a0: Pop(1); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a2: PushEmpty(bool, object)
0x3a3: Stack[-1] = Stack[-7]
0x3a4: Call2 0x3b0

0x3a5: Pop(1)
0x3a6: Pop(1); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-6] = (bool) 0
0x3a9: Return(); Pop(4)

0x3aa: Push("voice_common")
0x3ab: Push((int) 1)
0x3ac: @ SetVariable(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: Stack[-6] = (bool) 1
0x3af: Return(); Pop(4)

0x3b0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3b1: Stack[-5] = "c"
0x3b2: Stack[-4] = (int) 0
0x3b3: Push((int) 1)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3b5: Push((int) 1)
0x3b6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3b7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b8: @@ HasProperty(Stack[-1], Stack[-4])
0x3b9: Pop(1)
0x3ba: Pop(0); Push((bool) Stack[-3] == 0)
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bc: GOTO 0x3c0

0x3bd: Push((int) 1)
0x3be: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3bf: GOTO 0x3b3

0x3c0: Pop(0); Push((bool) Stack[-4] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-12] = (bool) 0
0x3c3: Return(); Pop(10)

0x3c4: Stack[-2] = (int) 0
0x3c5: Push((int) 1)
0x3c6: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: @ irand(Stack[-2], Stack[-4])
0x3c9: Pop(0)
0x3ca: Push((int) 1)
0x3cb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cd: @@ GetProperty(Stack[-1], Stack[-2])
0x3ce: Pop(1)
0x3cf: PushEmpty(bool, string)
0x3d0: Stack[-1] = Stack[-3]
0x3d1: Call2 0x41f

0x3d2: Stack[-14] = Stack[-2]
0x3d3: Pop(2)
0x3d4: Return(); Pop(10)

0x3d5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3d6: Push("d")
0x3d7: PushEmpty(int)
0x3d8: Call2 0x475

0x3d9: Pop(0)
0x3da: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3db: Push("m")
0x3dc: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3dd: Stack[-4] = (int) 0
0x3de: Push((int) 1)
0x3df: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e0: Push((int) 1)
0x3e1: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3e2: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e3: @@ HasProperty(Stack[-1], Stack[-4])
0x3e4: Pop(1)
0x3e5: Pop(0); Push((bool) Stack[-3] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e7: GOTO 0x3eb

0x3e8: Push((int) 1)
0x3e9: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ea: GOTO 0x3de

0x3eb: Pop(0); Push((bool) Stack[-4] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3ed: Stack[-12] = (bool) 0
0x3ee: Return(); Pop(10)

0x3ef: Stack[-2] = (int) 0
0x3f0: Push((int) 1)
0x3f1: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: @ irand(Stack[-2], Stack[-4])
0x3f4: Pop(0)
0x3f5: Push((int) 1)
0x3f6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f8: @@ GetProperty(Stack[-1], Stack[-2])
0x3f9: Pop(1)
0x3fa: PushEmpty(bool, string)
0x3fb: Stack[-1] = Stack[-3]
0x3fc: Call2 0x41f

0x3fd: Stack[-14] = Stack[-2]
0x3fe: Pop(2)
0x3ff: Return(); Pop(10)

0x400: PushEmpty(bool, float, float, bool, float, float)
0x401: @ lshHasAnimation(Stack[-3], Stack[-7])
0x402: Pop(0)
0x403: Push(Stack[-3])
0x404: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x405: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x406: Pop(0)
0x407: Push((bool) 0)
0x408: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x409: Pop(1)
0x40a: GOTO 0x40f

0x40b: Push("Can't find lsh animation : ")
0x40c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x40d: @ Trace(Stack[-1])
0x40e: Pop(1)
0x40f: Return(); Pop(6)

0x410: PushEmpty(bool, float, float, bool, float, float)
0x411: @ lshHasAnimation(Stack[-3], Stack[-8])
0x412: Pop(0)
0x413: Push(Stack[-3])
0x414: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x415: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x416: Pop(0)
0x417: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x418: Pop(0)
0x419: GOTO 0x41e

0x41a: Push("Can't find lsh animation : ")
0x41b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x41c: @ Trace(Stack[-1])
0x41d: Pop(1)
0x41e: Return(); Pop(6)

0x41f: PushEmpty(bool, bool)
0x420: PushEmpty(bool)
0x421: Call2 0x53f

0x422: Pop(0)
0x423: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x424: @ lshHasSpeech(Stack[-1], Stack[-3])
0x425: Pop(0)
0x426: Push(Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x428: @ lshPlaySpeech(Stack[-3])
0x429: Pop(0)
0x42a: Stack[-4] = (bool) 1
0x42b: Return(); Pop(2)

0x42c: Stack[-4] = (bool) 0
0x42d: Return(); Pop(2)

0x42e: PushEmpty(bool)
0x42f: Call2 0x53f

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x432: @ lshStopSpeech()
0x433: Pop(0)
0x434: Return(); Pop(0)

0x435: PushEmpty(object, object)
0x436: @ self(Stack[-1])
0x437: Pop(0)
0x438: Stack[-3] = Stack[-1]
0x439: Return(); Pop(2)

0x43a: Stack[-1] = 0
0x43b: PushEmpty(float, float)
0x43c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x43d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x43e: Push((float)0.0)
0x43f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x442: Return(); Pop(2)

0x443: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x444: Return(); Pop(2)

0x445: PushEmpty(int, int)
0x446: @ GetVariable(Stack[-3], Stack[-1])
0x447: Pop(0)
0x448: Stack[-4] = Stack[-1]
0x449: Return(); Pop(2)

0x44a: PushEmpty(object, object)
0x44b: @ CreateIntVector(Stack[-1])
0x44c: Pop(0)
0x44d: @@ add(Stack[-4])
0x44e: Pop(0)
0x44f: @@ add(Stack[-3])
0x450: Pop(0)
0x451: Push((int) 3)
0x452: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x453: Pop(1)
0x454: Return(); Pop(2)

0x455: Stack[-1] = 0
0x456: PushEmpty(int, int)
0x457: PushEmpty(object, string, int)
0x458: Stack[-3] = Stack[-7]
0x459: Stack[-2] = "money"
0x45a: Stack[-1] = Stack[-6]
0x45b: Call2 0x302

0x45c: Pop(3)
0x45d: Push((int) 0)
0x45e: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x460: Push("Money")
0x461: @ GetInvItemByName(Stack[-2], Stack[-1])
0x462: Pop(1)
0x463: PushEmpty(int, int)
0x464: Stack[-2] = Stack[-3]
0x465: Stack[-1] = Stack[-5]
0x466: Call2 0x44a

0x467: Pop(2)
0x468: Return(); Pop(2)

0x469: PushEmpty(object, object)
0x46a: @ FindActor(Stack[-1], Stack[-4])
0x46b: Pop(0)
0x46c: Pop(0); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-5] = (bool) 0
0x46f: Return(); Pop(2)

0x470: @ Trigger(Stack[-1], Stack[-3])
0x471: Pop(0)
0x472: Stack[-5] = (bool) 1
0x473: Return(); Pop(2)

0x474: Stack[-1] = 0
0x475: PushEmpty(float, float)
0x476: @ GetGameTime(Stack[-1])
0x477: Pop(0)
0x478: Push((int) 1)
0x479: PushEmpty(int)
0x47a: Push((int) 24)
0x47b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x47c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x47d: Return(); Pop(2)

0x47e: PushEmpty(string, string)
0x47f: Stack[-1] = "idle"
0x480: Push(Stack[-3])
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x483: Stack[-4] = Stack[-1]
0x484: Return(); Pop(2)

0x485: PushEmpty(int, bool, int, bool)
0x486: Stack[-2] = (int) 0
0x487: Push("all")
0x488: PushEmpty(string, int)
0x489: Stack[-1] = Stack[-5]
0x48a: Call2 0x47e

0x48b: Pop(1)
0x48c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(2)
0x48e: Pop(0); Push((bool) Stack[-1] == 0)
0x48f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x490: GOTO 0x494

0x491: Push((int) 1)
0x492: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x493: GOTO 0x487

0x494: Stack[-5] = Stack[-2]
0x495: Return(); Pop(4)

0x496: PushEmpty(int, int)
0x497: PushEmpty(int)
0x498: Call2 0x475

0x499: Stack[-2] = Stack[-1]
0x49a: Pop(1)
0x49b: Push("RMap")
0x49c: Pop(1); Push(Stack[-1] + Stack[-2]);
0x49d: Push((int) 1)
0x49e: @ SetVariable(Stack[-2], Stack[-1])
0x49f: Pop(2)
0x4a0: Return(); Pop(2)

0x4a1: PushEmpty()
0x4a2: PushEmpty(object, int)
0x4a3: Stack[-2] = Stack[-4]
0x4a4: Stack[-1] = (int) -1000
0x4a5: Call2 0x456

0x4a6: Pop(2)
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty()
0x4a9: PushEmpty()
0x4aa: Call2 0x4f0

0x4ab: Pop(0)
0x4ac: PushEmpty(bool, string, string)
0x4ad: Stack[-2] = "quest_d11_05"
0x4ae: Stack[-1] = "place_enemy_after"
0x4af: Call2 0x469

0x4b0: Pop(3)
0x4b1: PushEmpty(bool, string, string)
0x4b2: Stack[-2] = "quest_d11_05"
0x4b3: Stack[-1] = "completed"
0x4b4: Call2 0x469

0x4b5: Pop(3)
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: Push("playsound")
0x4b9: Push("mapmark")
0x4ba: @ TriggerWorld(Stack[-2], Stack[-1])
0x4bb: Pop(2)
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: PushEmpty(int, string)
0x4bf: Stack[-1] = "d11q05"
0x4c0: Call2 0x445

0x4c1: Pop(1)
0x4c2: Push((int) 2)
0x4c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c5: Stack[-2] = (bool) 1
0x4c6: Return(); Pop(0)

0x4c7: Stack[-2] = (bool) 0
0x4c8: Return(); Pop(0)

0x4c9: PushEmpty()
0x4ca: PushEmpty(bool, object)
0x4cb: Stack[-1] = Stack[-3]
0x4cc: Call2 0x4dd

0x4cd: Pop(1)
0x4ce: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cf: Stack[-2] = (bool) 1
0x4d0: Return(); Pop(0)

0x4d1: Stack[-2] = (bool) 0
0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: PushEmpty(bool, object)
0x4d5: Stack[-1] = Stack[-3]
0x4d6: Call2 0x4e9

0x4d7: Pop(1)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4d9: Stack[-2] = (bool) 1
0x4da: Return(); Pop(0)

0x4db: Stack[-2] = (bool) 0
0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(int, int, int, int)
0x4de: PushEmpty(int)
0x4df: Call2 0x475

0x4e0: Stack[-3] = Stack[-1]
0x4e1: Pop(1)
0x4e2: Push("RMap")
0x4e3: Pop(1); Push(Stack[-1] + Stack[-3]);
0x4e4: @ GetVariable(Stack[-1], Stack[-2])
0x4e5: Pop(1)
0x4e6: Push((int) 0)
0x4e7: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x4e8: Return(); Pop(4)

0x4e9: PushEmpty(int, int)
0x4ea: Push("money")
0x4eb: @@ GetProperty(Stack[-1], Stack[-2])
0x4ec: Pop(1)
0x4ed: Push((int) 1000)
0x4ee: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0x4ef: Return(); Pop(2)

0x4f0: PushEmpty(object, object)
0x4f1: Push((int) 685)
0x4f2: Push((int) 2)
0x4f3: Push((int) 534500)
0x4f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: PushEmpty(bool, object, int)
0x4f7: Stack[-2] = Stack[-4]
0x4f8: Stack[-1] = (int) 682
0x4f9: Call2 0x50a

0x4fa: Pop(3)
0x4fb: Return(); Pop(2)

0x4fc: Stack[-1] = 0
0x4fd: PushEmpty(object, object)
0x4fe: @ GetDiaryRoot(Stack[-1])
0x4ff: Pop(0)
0x500: Pop(0); Push((bool) Stack[-1] == 0)
0x501: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x502: Push("Can't retrieve diary root")
0x503: @ Trace(Stack[-1])
0x504: Pop(1)
0x505: Stack[-3] = (bool) 0
0x506: Return(); Pop(2)

0x507: Stack[-3] = Stack[-1]
0x508: Return(); Pop(2)

0x509: Stack[-1] = 0
0x50a: PushEmpty(object, object, int, object, object, int)
0x50b: PushEmpty(object)
0x50c: Call2 0x4fd

0x50d: Stack[-4] = Stack[-1]
0x50e: Pop(1)
0x50f: @@ Find(Stack[-7], Stack[-2])
0x510: Pop(0)
0x511: Pop(0); Push((bool) Stack[-2] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x513: Push("Can't find diary parent with id: ")
0x514: Pop(1); Push(Stack[-1] + Stack[-8]);
0x515: @ Trace(Stack[-1])
0x516: Pop(1)
0x517: Stack[-9] = (bool) 0
0x518: Return(); Pop(6)

0x519: @@ AddChild(Stack[-8])
0x51a: Pop(0)
0x51b: Push((int) 7)
0x51c: @ SendWorldWndMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ GetCategory(Stack[-1])
0x51f: Pop(0)
0x520: @ SetDiarySection(Stack[-1])
0x521: Pop(0)
0x522: Stack[-9] = (bool) 0
0x523: Return(); Pop(6)

0x524: Stack[-2] = 0
0x525: Stack[-3] = 0
0x526: PushEmpty(int, int)
0x527: Push("branch")
0x528: @ GetVariable(Stack[-1], Stack[-2])
0x529: Pop(1)
0x52a: Push((int) 0)
0x52b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52d: Stack[-3] = (int) 1
0x52e: Return(); Pop(2)

0x52f: GOTO 0x535

0x530: Push((int) 1)
0x531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-3] = (int) 2
0x534: Return(); Pop(2)

0x535: Stack[-3] = (int) 3
0x536: Return(); Pop(2)

0x537: Stack[-1] = (int) 515547
0x538: Return(); Pop(0)

0x539: Stack[-1] = (int) 502872
0x53a: Return(); Pop(0)

0x53b: Stack[-1] = "ui/NPC_MladVlad.png"
0x53c: Return(); Pop(0)

0x53d: Stack[-1] = "ui/NPC_MladVlad_b.png"
0x53e: Return(); Pop(0)

0x53f: Stack[-1] = (bool) 1
0x540: Return(); Pop(0)

