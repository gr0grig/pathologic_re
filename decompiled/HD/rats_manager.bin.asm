GlobalVarCount = 0

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
	GetItemCount
	rat
	rat_big
	GetItem
	GetItemID
	add
	size
	get
	RemoveItem
	quality
	GetProperty
	pers_rat_big
	pers_rat
	You've won a rat race
	Looser!
	race_begin
	ACHIEVEMENT_HELLO_1
	winner
	looser
	pt_rat1
	rat_race.xml
	Index
	SetScriptProperty
	Race
	pt_rat2
	pt_rat3
	race_over1
	race_over2
	race_over3
	rats_track_door
	Open
	Close
	SetProperty
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	GetLocator
	Locator 
	 doesn't exist
	money
	Money
	HasItem
	SetReturnValue
	ooRatsManager1
	money500 is given
	playsound
	givemoney
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	Hold (0 args)
	CreateIntVector (1 args)
	GetInvItemByName (2 args)
	ChooseItem (2 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	UnlockAchievement (1 args)
	GetScene (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	FindActor (2 args)
	IsLoaded (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	rand (1 args)
	CreateObjectVector (1 args)
	AddActor (6 args)
	SendWorldWndMessage (2 args)
	TriggerWorld (2 args)

RunOp = 0x488
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x182 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x250 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x35a Vars = (int, int)
	GTASK_8 Vars = (int) Params = 0
		EVENT_0 Op = 0x48d Vars = (object)
		EVENT_26 Op = 0x523 Vars = (string)
		EVENT_6 Op = 0x52d Vars = ()
	GTASK_9 Vars = (bool, int, int) Params = 3
		EVENT_0 Op = 0x5fa Vars = (object)
		EVENT_26 Op = 0x602 Vars = (string)
		EVENT_6 Op = 0x6a8 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x6b9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x827

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x825

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x829

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x82b

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x80e

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x6fe

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 520060)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 520061)
0x5a: Push((int) -1)
0x5b: Push((int) 21241)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 520062)
0x5f: Push((int) -1)
0x60: Push((int) 21242)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x82d

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x710

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x82d

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x720

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x72f

0x9f: Pop(0)
0xa0: Push((int) 21241)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x7b9

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x7c3

0xac: Pop(2)
0xad: Push((int) 21242)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x7b9

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x7c3

0xb9: Pop(2)
0xba: Push((int) 21240)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral"
0xbf: Call2 0x84

0xc0: Pop(1)
0xc1: Push((int) 520060)
0xc2: @@ SetMessage(Stack[-1])
0xc3: Pop(1)
0xc4: @@ ClearReplies()
0xc5: Pop(0)
0xc6: Push((int) 520061)
0xc7: Push((int) -1)
0xc8: Push((int) 21241)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 520062)
0xcc: Push((int) -1)
0xcd: Push((int) 21242)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: Return(); Pop(0)

0xd1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd2: PushEmpty(bool)
0xd3: Call2 0x82d

0xd4: Pop(0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: @ lshStopAnimation()
0xd7: Pop(0)
0xd8: GOTO 0xdb

0xd9: @ StopAnimation()
0xda: Pop(0)
0xdb: Return(); Pop(0)

0xdc: GOTO 0x9b

0xdd: Return(); Pop(0)

0xde: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe0: PushEmpty(bool, object, float)
0xe1: Stack[-2] = Stack[-12]
0xe2: Stack[-1] = (float) 70.0
0xe3: Call2 0x6b9

0xe4: Pop(2)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe7: Stack[-10] = (int) -2
0xe8: Return(); Pop(8)

0xe9: @ CreateDialog(Stack[-4])
0xea: Pop(0)
0xeb: PushEmpty(int)
0xec: Call2 0x827

0xed: Pop(0)
0xee: @@ SetNPCName(Stack[-1])
0xef: Pop(1)
0xf0: PushEmpty(int)
0xf1: Call2 0x825

0xf2: Pop(0)
0xf3: @@ SetNPCDescription(Stack[-1])
0xf4: Pop(1)
0xf5: PushEmpty(string)
0xf6: Call2 0x829

0xf7: Pop(0)
0xf8: @@ SetPhoto(Stack[-1])
0xf9: Pop(1)
0xfa: PushEmpty(string)
0xfb: Call2 0x82b

0xfc: Pop(0)
0xfd: @@ SetPhoto2(Stack[-1])
0xfe: Pop(1)
0xff: PushEmpty(int)
0x100: Call2 0x80e

0x101: Pop(0)
0x102: @@ SetPlayerName(Stack[-1])
0x103: Pop(1)
0x104: Stack[-2] = (int) -1
0x105: @ IsOverrideActive(Stack[-3])
0x106: Pop(0)
0x107: Push(Stack[-3])
0x108: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x109: Stack[-10] = (int) -2
0x10a: Return(); Pop(8)

0x10b: @ DoDialog(Stack[-4])
0x10c: Pop(0)
0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[-11]
0x10f: Stack[-1] = Stack[-6]
0x110: Push(-2, 4); TaskCall(3)
0x111: Call2 0x128

0x112: Pop(-2, 4); TaskReturn
0x113: Pop(2)
0x114: @@ IsDialogEnd(Stack[-1])
0x115: Pop(0)
0x116: Pop(0); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: @ sync()
0x119: Pop(0)
0x11a: @@ IsDialogEnd(Stack[-1])
0x11b: Pop(0)
0x11c: GOTO 0x116

0x11d: PushEmpty(object)
0x11e: Stack[-1] = Stack[-10]
0x11f: Call2 0x6fe

0x120: Pop(1)
0x121: @ StopDialog(Stack[-4])
0x122: Pop(0)
0x123: @@ GetReturnValue(Stack[-2])
0x124: Pop(0)
0x125: Stack[-10] = Stack[-2]
0x126: Return(); Pop(8)

0x127: Stack[-4] = 0
0x128: PushEmpty()
0x129: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12c: Push((int) 1)
0x12d: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call2 0x16c

0x131: Pop(1)
0x132: Push((int) 520064)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x7d5

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: Push((int) 520065)
0x13d: Push((int) -1)
0x13e: Push((int) 21245)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 520066)
0x142: Push((int) -1)
0x143: Push((int) 21246)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 520067)
0x147: Push((int) -1)
0x148: Push((int) 21247)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: GOTO 0x14e

0x14c: Return(); Pop(0)

0x14d: GOTO 0x12c

0x14e: PushEmpty(bool)
0x14f: Call2 0x82d

0x150: Pop(0)
0x151: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x152: @ lshWaitForAnimEnd()
0x153: Pop(0)
0x154: Push( Stack[3 + Tasks[-1].StackPointer] )
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: GOTO 0x15c

0x157: PushEmpty(string)
0x158: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x159: Call2 0x710

0x15a: Pop(1)
0x15b: GOTO 0x152

0x15c: GOTO 0x16b

0x15d: Push("all")
0x15e: Push("idle")
0x15f: @ PlayAnimation(Stack[-2], Stack[-1])
0x160: Pop(2)
0x161: @ WaitForAnimEnd()
0x162: Pop(0)
0x163: Push( Stack[3 + Tasks[-1].StackPointer] )
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: GOTO 0x16b

0x166: Push("all")
0x167: Push("idle")
0x168: @ PlayAnimation(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: GOTO 0x161

0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: PushEmpty(bool)
0x16e: Call2 0x82d

0x16f: Pop(0)
0x170: Pop(1); Push((bool) Stack[-1] == 0)
0x171: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x172: Return(); Pop(0)

0x173: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x174: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x175: Return(); Pop(0)

0x176: PushEmpty(string, bool)
0x177: Stack[-2] = Stack[-3]
0x178: Push("")
0x179: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17b: Stack[-1] = (bool) 0
0x17c: GOTO 0x17e

0x17d: Stack[-1] = (bool) 1
0x17e: Call2 0x720

0x17f: Pop(2)
0x180: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x181: Return(); Pop(0)

0x182: PushEmpty()
0x183: Push((int) 1)
0x184: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x185: PushEmpty()
0x186: Call2 0x72f

0x187: Pop(0)
0x188: Push((int) 21244)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0x16c

0x18e: Pop(1)
0x18f: Push((int) 520064)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x196: Call2 0x7d5

0x197: Pop(1)
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Push((int) 520065)
0x19a: Push((int) -1)
0x19b: Push((int) 21245)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 520066)
0x19f: Push((int) -1)
0x1a0: Push((int) 21246)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 520067)
0x1a4: Push((int) -1)
0x1a5: Push((int) 21247)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1aa: PushEmpty(bool)
0x1ab: Call2 0x82d

0x1ac: Pop(0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1ae: @ lshStopAnimation()
0x1af: Pop(0)
0x1b0: GOTO 0x1b3

0x1b1: @ StopAnimation()
0x1b2: Pop(0)
0x1b3: Return(); Pop(0)

0x1b4: GOTO 0x183

0x1b5: Return(); Pop(0)

0x1b6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1b7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1b8: PushEmpty(bool, object, float)
0x1b9: Stack[-2] = Stack[-12]
0x1ba: Stack[-1] = (float) 70.0
0x1bb: Call2 0x6b9

0x1bc: Pop(2)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bf: Stack[-10] = (int) -2
0x1c0: Return(); Pop(8)

0x1c1: @ CreateDialog(Stack[-4])
0x1c2: Pop(0)
0x1c3: PushEmpty(int)
0x1c4: Call2 0x827

0x1c5: Pop(0)
0x1c6: @@ SetNPCName(Stack[-1])
0x1c7: Pop(1)
0x1c8: PushEmpty(int)
0x1c9: Call2 0x825

0x1ca: Pop(0)
0x1cb: @@ SetNPCDescription(Stack[-1])
0x1cc: Pop(1)
0x1cd: PushEmpty(string)
0x1ce: Call2 0x829

0x1cf: Pop(0)
0x1d0: @@ SetPhoto(Stack[-1])
0x1d1: Pop(1)
0x1d2: PushEmpty(string)
0x1d3: Call2 0x82b

0x1d4: Pop(0)
0x1d5: @@ SetPhoto2(Stack[-1])
0x1d6: Pop(1)
0x1d7: PushEmpty(int)
0x1d8: Call2 0x80e

0x1d9: Pop(0)
0x1da: @@ SetPlayerName(Stack[-1])
0x1db: Pop(1)
0x1dc: Stack[-2] = (int) -1
0x1dd: @ IsOverrideActive(Stack[-3])
0x1de: Pop(0)
0x1df: Push(Stack[-3])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e1: Stack[-10] = (int) -2
0x1e2: Return(); Pop(8)

0x1e3: @ DoDialog(Stack[-4])
0x1e4: Pop(0)
0x1e5: PushEmpty(object, object)
0x1e6: Stack[-2] = Stack[-11]
0x1e7: Stack[-1] = Stack[-6]
0x1e8: Push(-2, 4); TaskCall(5)
0x1e9: Call2 0x200

0x1ea: Pop(-2, 4); TaskReturn
0x1eb: Pop(2)
0x1ec: @@ IsDialogEnd(Stack[-1])
0x1ed: Pop(0)
0x1ee: Pop(0); Push((bool) Stack[-1] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: @ sync()
0x1f1: Pop(0)
0x1f2: @@ IsDialogEnd(Stack[-1])
0x1f3: Pop(0)
0x1f4: GOTO 0x1ee

0x1f5: PushEmpty(object)
0x1f6: Stack[-1] = Stack[-10]
0x1f7: Call2 0x6fe

0x1f8: Pop(1)
0x1f9: @ StopDialog(Stack[-4])
0x1fa: Pop(0)
0x1fb: @@ GetReturnValue(Stack[-2])
0x1fc: Pop(0)
0x1fd: Stack[-10] = Stack[-2]
0x1fe: Return(); Pop(8)

0x1ff: Stack[-4] = 0
0x200: PushEmpty()
0x201: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x202: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x203: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x204: Push((int) 1)
0x205: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0x23a

0x209: Pop(1)
0x20a: Push((int) 520069)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 520070)
0x210: Push((int) -1)
0x211: Push((int) 21250)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Push((int) 520071)
0x215: Push((int) -1)
0x216: Push((int) 21251)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: GOTO 0x21c

0x21a: Return(); Pop(0)

0x21b: GOTO 0x204

0x21c: PushEmpty(bool)
0x21d: Call2 0x82d

0x21e: Pop(0)
0x21f: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x220: @ lshWaitForAnimEnd()
0x221: Pop(0)
0x222: Push( Stack[3 + Tasks[-1].StackPointer] )
0x223: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x224: GOTO 0x22a

0x225: PushEmpty(string)
0x226: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x227: Call2 0x710

0x228: Pop(1)
0x229: GOTO 0x220

0x22a: GOTO 0x239

0x22b: Push("all")
0x22c: Push("idle")
0x22d: @ PlayAnimation(Stack[-2], Stack[-1])
0x22e: Pop(2)
0x22f: @ WaitForAnimEnd()
0x230: Pop(0)
0x231: Push( Stack[3 + Tasks[-1].StackPointer] )
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x239

0x234: Push("all")
0x235: Push("idle")
0x236: @ PlayAnimation(Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: GOTO 0x22f

0x239: Return(); Pop(0)

0x23a: PushEmpty()
0x23b: PushEmpty(bool)
0x23c: Call2 0x82d

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x240: Return(); Pop(0)

0x241: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Return(); Pop(0)

0x244: PushEmpty(string, bool)
0x245: Stack[-2] = Stack[-3]
0x246: Push("")
0x247: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x249: Stack[-1] = (bool) 0
0x24a: GOTO 0x24c

0x24b: Stack[-1] = (bool) 1
0x24c: Call2 0x720

0x24d: Pop(2)
0x24e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x24f: Return(); Pop(0)

0x250: PushEmpty()
0x251: Push((int) 1)
0x252: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x253: PushEmpty()
0x254: Call2 0x72f

0x255: Pop(0)
0x256: Push((int) 21249)
0x257: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x23a

0x25c: Pop(1)
0x25d: Push((int) 520069)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: Push((int) 520070)
0x263: Push((int) -1)
0x264: Push((int) 21250)
0x265: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x266: Pop(3)
0x267: Push((int) 520071)
0x268: Push((int) -1)
0x269: Push((int) 21251)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: Return(); Pop(0)

0x26d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26e: PushEmpty(bool)
0x26f: Call2 0x82d

0x270: Pop(0)
0x271: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x272: @ lshStopAnimation()
0x273: Pop(0)
0x274: GOTO 0x277

0x275: @ StopAnimation()
0x276: Pop(0)
0x277: Return(); Pop(0)

0x278: GOTO 0x251

0x279: Return(); Pop(0)

0x27a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x27b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x27c: PushEmpty(bool, object, float)
0x27d: Stack[-2] = Stack[-12]
0x27e: Stack[-1] = (float) 70.0
0x27f: Call2 0x6b9

0x280: Pop(2)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-10] = (int) -2
0x284: Return(); Pop(8)

0x285: @ CreateDialog(Stack[-4])
0x286: Pop(0)
0x287: PushEmpty(int)
0x288: Call2 0x827

0x289: Pop(0)
0x28a: @@ SetNPCName(Stack[-1])
0x28b: Pop(1)
0x28c: PushEmpty(int)
0x28d: Call2 0x825

0x28e: Pop(0)
0x28f: @@ SetNPCDescription(Stack[-1])
0x290: Pop(1)
0x291: PushEmpty(string)
0x292: Call2 0x829

0x293: Pop(0)
0x294: @@ SetPhoto(Stack[-1])
0x295: Pop(1)
0x296: PushEmpty(string)
0x297: Call2 0x82b

0x298: Pop(0)
0x299: @@ SetPhoto2(Stack[-1])
0x29a: Pop(1)
0x29b: PushEmpty(int)
0x29c: Call2 0x80e

0x29d: Pop(0)
0x29e: @@ SetPlayerName(Stack[-1])
0x29f: Pop(1)
0x2a0: Stack[-2] = (int) -1
0x2a1: @ IsOverrideActive(Stack[-3])
0x2a2: Pop(0)
0x2a3: Push(Stack[-3])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a5: Stack[-10] = (int) -2
0x2a6: Return(); Pop(8)

0x2a7: @ DoDialog(Stack[-4])
0x2a8: Pop(0)
0x2a9: PushEmpty(object, object)
0x2aa: Stack[-2] = Stack[-11]
0x2ab: Stack[-1] = Stack[-6]
0x2ac: Push(-2, 4); TaskCall(7)
0x2ad: Call2 0x2c4

0x2ae: Pop(-2, 4); TaskReturn
0x2af: Pop(2)
0x2b0: @@ IsDialogEnd(Stack[-1])
0x2b1: Pop(0)
0x2b2: Pop(0); Push((bool) Stack[-1] == 0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: @ sync()
0x2b5: Pop(0)
0x2b6: @@ IsDialogEnd(Stack[-1])
0x2b7: Pop(0)
0x2b8: GOTO 0x2b2

0x2b9: PushEmpty(object)
0x2ba: Stack[-1] = Stack[-10]
0x2bb: Call2 0x6fe

0x2bc: Pop(1)
0x2bd: @ StopDialog(Stack[-4])
0x2be: Pop(0)
0x2bf: @@ GetReturnValue(Stack[-2])
0x2c0: Pop(0)
0x2c1: Stack[-10] = Stack[-2]
0x2c2: Return(); Pop(8)

0x2c3: Stack[-4] = 0
0x2c4: PushEmpty()
0x2c5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2c7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c8: Push((int) 1)
0x2c9: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Call2 0x802

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2cf: PushEmpty(object, object)
0x2d0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d2: Call2 0x7b3

0x2d3: Pop(2)
0x2d4: PushEmpty(string)
0x2d5: Stack[-1] = "Neutral"
0x2d6: Call2 0x344

0x2d7: Pop(1)
0x2d8: Push((int) 520073)
0x2d9: @@ SetMessage(Stack[-1])
0x2da: Pop(1)
0x2db: @@ ClearReplies()
0x2dc: Pop(0)
0x2dd: Push((int) 520074)
0x2de: Push((int) 21255)
0x2df: Push((int) 21254)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: PushEmpty(bool, object)
0x2e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e4: Call2 0x7d5

0x2e5: Pop(1)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: Push((int) 520085)
0x2e8: Push((int) 21266)
0x2e9: Push((int) 21265)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Call2 0x7e1

0x2ef: Pop(1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: Push((int) 541546)
0x2f2: Push((int) 43710)
0x2f3: Push((int) 43709)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f8: Call2 0x7c9

0x2f9: Pop(1)
0x2fa: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fb: Push((int) 541549)
0x2fc: Push((int) 21255)
0x2fd: Push((int) 43713)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: GOTO 0x326

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call2 0x344

0x304: Pop(1)
0x305: Push((int) 520088)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: PushEmpty(bool, object)
0x30b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Call2 0x7ed

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: Push((int) 520089)
0x310: Push((int) -1)
0x311: Push((int) 21270)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: Push((int) 520090)
0x315: Push((int) 21272)
0x316: Push((int) 21271)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 520092)
0x31a: Push((int) 21274)
0x31b: Push((int) 21273)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Push((int) 520095)
0x31f: Push((int) -1)
0x320: Push((int) 21277)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: GOTO 0x326

0x324: Return(); Pop(0)

0x325: GOTO 0x2c8

0x326: PushEmpty(bool)
0x327: Call2 0x82d

0x328: Pop(0)
0x329: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32a: @ lshWaitForAnimEnd()
0x32b: Pop(0)
0x32c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x32d: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32e: GOTO 0x334

0x32f: PushEmpty(string)
0x330: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x331: Call2 0x710

0x332: Pop(1)
0x333: GOTO 0x32a

0x334: GOTO 0x343

0x335: Push("all")
0x336: Push("idle")
0x337: @ PlayAnimation(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: @ WaitForAnimEnd()
0x33a: Pop(0)
0x33b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: GOTO 0x343

0x33e: Push("all")
0x33f: Push("idle")
0x340: @ PlayAnimation(Stack[-2], Stack[-1])
0x341: Pop(2)
0x342: GOTO 0x339

0x343: Return(); Pop(0)

0x344: PushEmpty()
0x345: PushEmpty(bool)
0x346: Call2 0x82d

0x347: Pop(0)
0x348: Pop(1); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: Return(); Pop(0)

0x34b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: Return(); Pop(0)

0x34e: PushEmpty(string, bool)
0x34f: Stack[-2] = Stack[-3]
0x350: Push("")
0x351: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-1] = (bool) 0
0x354: GOTO 0x356

0x355: Stack[-1] = (bool) 1
0x356: Call2 0x720

0x357: Pop(2)
0x358: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x359: Return(); Pop(0)

0x35a: PushEmpty()
0x35b: Push((int) 1)
0x35c: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x35d: PushEmpty()
0x35e: Call2 0x72f

0x35f: Pop(0)
0x360: Push((int) 21270)
0x361: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x362: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x363: PushEmpty(object, object)
0x364: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x365: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x366: Call2 0x7ae

0x367: Pop(2)
0x368: Push((int) 21253)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Call2 0x802

0x36e: Pop(1)
0x36f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x370: PushEmpty(object, object)
0x371: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x372: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x373: Call2 0x7b3

0x374: Pop(2)
0x375: PushEmpty(string)
0x376: Stack[-1] = "Neutral"
0x377: Call2 0x344

0x378: Pop(1)
0x379: Push((int) 520073)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: Push((int) 520074)
0x37f: Push((int) 21255)
0x380: Push((int) 21254)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: PushEmpty(bool, object)
0x384: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x385: Call2 0x7d5

0x386: Pop(1)
0x387: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x388: Push((int) 520085)
0x389: Push((int) 21266)
0x38a: Push((int) 21265)
0x38b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38c: Pop(3)
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Call2 0x7e1

0x390: Pop(1)
0x391: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x392: Push((int) 541546)
0x393: Push((int) 43710)
0x394: Push((int) 43709)
0x395: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(3)
0x397: PushEmpty(bool, object)
0x398: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x399: Call2 0x7c9

0x39a: Pop(1)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push((int) 541549)
0x39d: Push((int) 21255)
0x39e: Push((int) 43713)
0x39f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a0: Pop(3)
0x3a1: Return(); Pop(0)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Neutral"
0x3a4: Call2 0x344

0x3a5: Pop(1)
0x3a6: Push((int) 520088)
0x3a7: @@ SetMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ ClearReplies()
0x3aa: Pop(0)
0x3ab: PushEmpty(bool, object)
0x3ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ad: Call2 0x7ed

0x3ae: Pop(1)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b0: Push((int) 520089)
0x3b1: Push((int) -1)
0x3b2: Push((int) 21270)
0x3b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b4: Pop(3)
0x3b5: Push((int) 520090)
0x3b6: Push((int) 21272)
0x3b7: Push((int) 21271)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Push((int) 520092)
0x3bb: Push((int) 21274)
0x3bc: Push((int) 21273)
0x3bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3be: Pop(3)
0x3bf: Push((int) 520095)
0x3c0: Push((int) -1)
0x3c1: Push((int) 21277)
0x3c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c3: Pop(3)
0x3c4: Return(); Pop(0)

0x3c5: Push((int) 21274)
0x3c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3c8: PushEmpty(string)
0x3c9: Stack[-1] = "Neutral"
0x3ca: Call2 0x344

0x3cb: Pop(1)
0x3cc: Push((int) 520093)
0x3cd: @@ SetMessage(Stack[-1])
0x3ce: Pop(1)
0x3cf: @@ ClearReplies()
0x3d0: Pop(0)
0x3d1: Push((int) 520094)
0x3d2: Push((int) 21272)
0x3d3: Push((int) 21275)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Return(); Pop(0)

0x3d7: Push((int) 21272)
0x3d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3da: PushEmpty(string)
0x3db: Stack[-1] = "Neutral"
0x3dc: Call2 0x344

0x3dd: Pop(1)
0x3de: Push((int) 520091)
0x3df: @@ SetMessage(Stack[-1])
0x3e0: Pop(1)
0x3e1: @@ ClearReplies()
0x3e2: Pop(0)
0x3e3: Push((int) 520096)
0x3e4: Push((int) -1)
0x3e5: Push((int) 21278)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 43710)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call2 0x344

0x3ef: Pop(1)
0x3f0: Push((int) 541547)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 541548)
0x3f6: Push((int) 21255)
0x3f7: Push((int) 43711)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 21266)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Neutral"
0x400: Call2 0x344

0x401: Pop(1)
0x402: Push((int) 520086)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 520087)
0x408: Push((int) 21255)
0x409: Push((int) 21267)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 21255)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral"
0x412: Call2 0x344

0x413: Pop(1)
0x414: Push((int) 520075)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 520076)
0x41a: Push((int) 21257)
0x41b: Push((int) 21256)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 21257)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Neutral"
0x424: Call2 0x344

0x425: Pop(1)
0x426: Push((int) 520077)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 520078)
0x42c: Push((int) 21259)
0x42d: Push((int) 21258)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Push((int) 520082)
0x431: Push((int) 21263)
0x432: Push((int) 21262)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x437: Call2 0x7d5

0x438: Pop(1)
0x439: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x43a: Push((int) 520097)
0x43b: Push((int) 21280)
0x43c: Push((int) 21279)
0x43d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43e: Pop(3)
0x43f: Return(); Pop(0)

0x440: Push((int) 21280)
0x441: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x442: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x443: PushEmpty(string)
0x444: Stack[-1] = "Neutral"
0x445: Call2 0x344

0x446: Pop(1)
0x447: Push((int) 520098)
0x448: @@ SetMessage(Stack[-1])
0x449: Pop(1)
0x44a: @@ ClearReplies()
0x44b: Pop(0)
0x44c: Push((int) 520099)
0x44d: Push((int) -1)
0x44e: Push((int) 21281)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: Return(); Pop(0)

0x452: Push((int) 21263)
0x453: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x455: PushEmpty(string)
0x456: Stack[-1] = "Neutral"
0x457: Call2 0x344

0x458: Pop(1)
0x459: Push((int) 520083)
0x45a: @@ SetMessage(Stack[-1])
0x45b: Pop(1)
0x45c: @@ ClearReplies()
0x45d: Pop(0)
0x45e: Push((int) 520084)
0x45f: Push((int) -1)
0x460: Push((int) 21264)
0x461: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(3)
0x463: Return(); Pop(0)

0x464: Push((int) 21259)
0x465: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x467: PushEmpty(string)
0x468: Stack[-1] = "Neutral"
0x469: Call2 0x344

0x46a: Pop(1)
0x46b: Push((int) 520079)
0x46c: @@ SetMessage(Stack[-1])
0x46d: Pop(1)
0x46e: @@ ClearReplies()
0x46f: Pop(0)
0x470: Push((int) 520080)
0x471: Push((int) -1)
0x472: Push((int) 21260)
0x473: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x474: Pop(3)
0x475: Push((int) 520081)
0x476: Push((int) -1)
0x477: Push((int) 21261)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: Return(); Pop(0)

0x47b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x47c: PushEmpty(bool)
0x47d: Call2 0x82d

0x47e: Pop(0)
0x47f: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x480: @ lshStopAnimation()
0x481: Pop(0)
0x482: GOTO 0x485

0x483: @ StopAnimation()
0x484: Pop(0)
0x485: Return(); Pop(0)

0x486: GOTO 0x35b

0x487: Return(); Pop(0)

0x488: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x489: @ Hold()
0x48a: Pop(0)
0x48b: GOTO 0x489

0x48c: Return(); Pop(0)

0x48d: PushEmpty(object, object, int, int, int, int, object, int, int, object, object, int, float, int, object, object, int, int, int, int, object, int, int, object, object, int, float, int)
0x48e: Push((int) 0)
0x48f: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x491: PushEmpty(int, object)
0x492: Stack[-1] = Stack[-31]
0x493: Push(-2, 1); TaskCall(2)
0x494: Call2 0xde

0x495: Pop(-2, 1); TaskReturn
0x496: Pop(2)
0x497: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x498: GOTO 0x504

0x499: Push((int) 1)
0x49a: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x49b: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x49c: PushEmpty(int, object)
0x49d: Stack[-1] = Stack[-31]
0x49e: Push(-2, 1); TaskCall(0)
0x49f: Call2 0x0

0x4a0: Pop(-2, 1); TaskReturn
0x4a1: Pop(2)
0x4a2: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x4a3: GOTO 0x504

0x4a4: PushEmpty(int, object)
0x4a5: Stack[-1] = Stack[-31]
0x4a6: Push(-2, 1); TaskCall(6)
0x4a7: Call2 0x27a

0x4a8: Pop(-2, 1); TaskReturn
0x4a9: Pop(1)
0x4aa: Push((int) 1)
0x4ab: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4ad: PushEmpty(object)
0x4ae: Call2 0x76b

0x4af: Stack[-15] = Stack[-1]
0x4b0: Pop(1)
0x4b1: @ CreateIntVector(Stack[-13])
0x4b2: Pop(0)
0x4b3: Push((int) 4)
0x4b4: @@ GetItemCount(Stack[-13], Stack[-1])
0x4b5: Pop(1)
0x4b6: Push("rat")
0x4b7: @ GetInvItemByName(Stack[-12], Stack[-1])
0x4b8: Pop(1)
0x4b9: Push("rat_big")
0x4ba: @ GetInvItemByName(Stack[-11], Stack[-1])
0x4bb: Pop(1)
0x4bc: Stack[-9] = (int) 0
0x4bd: Pop(0); Push((bool) Stack[-9] < Stack[-12])
0x4be: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4bf: Push((int) 4)
0x4c0: @@ GetItem(Stack[-9], Stack[-10], Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ GetItemID(Stack[-7])
0x4c3: Pop(0)
0x4c4: PushEmpty(bool)
0x4c5: Stack[-1] = (bool) 1
0x4c6: Pop(0); Push((bool) Stack[-8] == Stack[-12])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c8: Pop(0); Push((bool) Stack[-8] == Stack[-11])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4ca: Stack[-1] = (bool) 0
0x4cb: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cc: @@ add(Stack[-8])
0x4cd: Pop(0)
0x4ce: @@ add(Stack[-9])
0x4cf: Pop(0)
0x4d0: Stack[-8] = 0
0x4d1: Push((int) 1)
0x4d2: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x4d3: GOTO 0x4bd

0x4d4: @@ size(Stack[-12])
0x4d5: Pop(0)
0x4d6: Push(Stack[-12])
0x4d7: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4d8: Push((int) 1)
0x4d9: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x4da: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4db: Stack[-6] = (int) 0
0x4dc: GOTO 0x4eb

0x4dd: @ CreateIntVector(Stack[-5])
0x4de: Pop(0)
0x4df: @ ChooseItem(Stack[-14], Stack[-5])
0x4e0: Pop(0)
0x4e1: @@ size(Stack[-12])
0x4e2: Pop(0)
0x4e3: Push(Stack[-12])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4e5: Push((int) 0)
0x4e6: @@ get(Stack[-7], Stack[-1])
0x4e7: Pop(1)
0x4e8: GOTO 0x4ea

0x4e9: Return(); Pop(28)

0x4ea: Stack[-5] = 0
0x4eb: @@ get(Stack[-4], Stack[-6])
0x4ec: Pop(0)
0x4ed: @@ get(Stack[-3], Stack[-6])
0x4ee: Pop(0)
0x4ef: Push((int) 1)
0x4f0: Push((int) 4)
0x4f1: @@ RemoveItem(Stack[-5], Stack[-2], Stack[-1])
0x4f2: Pop(2)
0x4f3: Push("quality")
0x4f4: @@ GetProperty(Stack[-3], Stack[-1])
0x4f5: Pop(1)
0x4f6: @@ GetItemID(Stack[-1])
0x4f7: Pop(0)
0x4f8: PushEmpty(string, float)
0x4f9: Pop(0); Push((bool) Stack[-3] == Stack[-12])
0x4fa: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fb: Stack[-2] = "pers_rat_big"
0x4fc: GOTO 0x4fe

0x4fd: Stack[-2] = "pers_rat"
0x4fe: Stack[-1] = Stack[-4]
0x4ff: Call2 0x505

0x500: Pop(2)
0x501: Stack[-4] = 0
0x502: Stack[-13] = 0
0x503: Stack[-14] = 0
0x504: Return(); Pop(28)

0x505: PushEmpty()
0x506: PushEmpty(int, string, float)
0x507: Stack[-2] = Stack[-5]
0x508: Stack[-1] = Stack[-4]
0x509: Push(-3, 3); TaskCall(9)
0x50a: Call2 0x52f

0x50b: Pop(-3, 3); TaskReturn
0x50c: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x50d: Pop(3)
0x50e: PushEmpty(bool)
0x50f: Call2 0x6b4

0x510: Pop(0)
0x511: Pop(1); Push((bool) Stack[-1] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x514: GOTO 0x522

0x515: Push((int) 1)
0x516: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x517: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x518: Push("You've won a rat race")
0x519: @ Trace(Stack[-1])
0x51a: Pop(1)
0x51b: GOTO 0x522

0x51c: Push((int) 0)
0x51d: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x51f: Push("Looser!")
0x520: @ Trace(Stack[-1])
0x521: Pop(1)
0x522: Return(); Pop(0)

0x523: PushEmpty()
0x524: Push("race_begin")
0x525: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x527: PushEmpty(string, float)
0x528: Stack[-2] = "pers_rat_big"
0x529: Stack[-1] = (float) 1.0
0x52a: Call2 0x505

0x52b: Pop(2)
0x52c: Return(); Pop(0)

0x52d: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x52e: Return(); Pop(0)

0x52f: PushEmpty(int, int, int, int)
0x530: PushEmpty(int)
0x531: Call2 0x81f

0x532: Pop(0)
0x533: Push((int) 1)
0x534: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x535: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x536: Push("ACHIEVEMENT_HELLO_1")
0x537: @ GetVariable(Stack[-1], Stack[-3])
0x538: Pop(1)
0x539: Push((int) 0)
0x53a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x543; Pop(1)

0x53c: Push("ACHIEVEMENT_HELLO_1")
0x53d: Push((int) 1)
0x53e: @ SetVariable(Stack[-2], Stack[-1])
0x53f: Pop(2)
0x540: Push("ACHIEVEMENT_HELLO_1")
0x541: @ UnlockAchievement(Stack[-1])
0x542: Pop(1)
0x543: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x544: PushEmpty(string, float)
0x545: Stack[-2] = Stack[-8]
0x546: Stack[-1] = Stack[-7]
0x547: Call2 0x55b

0x548: Pop(2)
0x549: @ Hold()
0x54a: Pop(0)
0x54b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x54c: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x54d: Stack[-1] = (int) 0
0x54e: Push((int) 6)
0x54f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x550: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x551: PushEmpty(int, bool)
0x552: Stack[-2] = Stack[-3]
0x553: Stack[-1] = (bool) 0
0x554: Call2 0x697

0x555: Pop(2)
0x556: Push((int) 1)
0x557: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x558: GOTO 0x54e

0x559: Stack[-7] = Stack[2 + Tasks[-1].StackPointer]
0x55a: Return(); Pop(4)

0x55b: PushEmpty(object, object, object, int, int, int, int, object, object, object, object, int, object, object, object, int, int, int, int, object, object, object, object, int)
0x55c: @ CreateIntVector(Stack[-12])
0x55d: Pop(0)
0x55e: @ CreateIntVector(Stack[-11])
0x55f: Pop(0)
0x560: @ CreateIntVector(Stack[-10])
0x561: Pop(0)
0x562: PushEmpty(int, object)
0x563: Stack[-1] = Stack[-14]
0x564: Call2 0x645

0x565: Stack[-11] = Stack[-2]
0x566: Pop(2)
0x567: Push((int) 72)
0x568: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x56a: GOTO 0x58c

0x56b: PushEmpty(int, object)
0x56c: Stack[-1] = Stack[-13]
0x56d: Call2 0x645

0x56e: Stack[-10] = Stack[-2]
0x56f: Pop(2)
0x570: Push((int) 72)
0x571: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x573: GOTO 0x58c

0x574: PushEmpty(int, object)
0x575: Stack[-1] = Stack[-12]
0x576: Call2 0x645

0x577: Stack[-9] = Stack[-2]
0x578: Pop(2)
0x579: Push((int) 72)
0x57a: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x57b: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x57c: GOTO 0x58c

0x57d: PushEmpty(bool)
0x57e: Stack[-1] = (bool) 0
0x57f: PushEmpty(bool)
0x580: Stack[-1] = (bool) 0
0x581: Pop(0); Push((bool) Stack[-11] != Stack[-10])
0x582: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x583: Pop(0); Push((bool) Stack[-11] != Stack[-9])
0x584: IF (Stack[-1] == 0) GOTO 0x586; Pop(1)

0x585: Stack[-1] = (bool) 1
0x586: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x587: Pop(0); Push((bool) Stack[-9] != Stack[-8])
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: Stack[-1] = (bool) 1
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: GOTO 0x58d

0x58c: GOTO 0x562

0x58d: PushEmpty(bool, float)
0x58e: Push((float)0.1)
0x58f: Push((float)0.4)
0x590: Pop(1); Push(Stack[-29] * Stack[-1]);
0x591: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x592: Call2 0x766

0x593: Pop(1)
0x594: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x595: PushEmpty(int, int, int, int)
0x596: Stack[-3] = Stack[-13]
0x597: Stack[-2] = Stack[-12]
0x598: Stack[-1] = Stack[-11]
0x599: Call2 0x736

0x59a: Stack[-10] = Stack[-4]
0x59b: Pop(4)
0x59c: Push("winner")
0x59d: @ Trace(Stack[-1])
0x59e: Pop(1)
0x59f: GOTO 0x5aa

0x5a0: PushEmpty(int, int, int, int)
0x5a1: Stack[-3] = Stack[-13]
0x5a2: Stack[-2] = Stack[-12]
0x5a3: Stack[-1] = Stack[-11]
0x5a4: Call2 0x745

0x5a5: Stack[-10] = Stack[-4]
0x5a6: Pop(4)
0x5a7: Push("looser")
0x5a8: @ Trace(Stack[-1])
0x5a9: Pop(1)
0x5aa: Push((int) 1)
0x5ab: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ad: Stack[-5] = Stack[-12]
0x5ae: Stack[-12] = Stack[-11]
0x5af: Stack[-11] = Stack[-5]
0x5b0: Stack[-5] = 0
0x5b1: GOTO 0x5b9

0x5b2: Push((int) 2)
0x5b3: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x5b4: IF (Stack[-1] == 0) GOTO 0x5b9; Pop(1)

0x5b5: Stack[-4] = Stack[-12]
0x5b6: Stack[-12] = Stack[-10]
0x5b7: Stack[-10] = Stack[-4]
0x5b8: Stack[-4] = 0
0x5b9: @ GetScene(Stack[-3])
0x5ba: Pop(0)
0x5bb: PushEmpty(object, object, string, string, string)
0x5bc: Stack[-4] = Stack[-8]
0x5bd: Stack[-3] = "pt_rat1"
0x5be: Stack[-2] = Stack[-31]
0x5bf: Stack[-1] = "rat_race.xml"
0x5c0: Call2 0x776

0x5c1: Stack[-7] = Stack[-5]
0x5c2: Pop(5)
0x5c3: Push("Index")
0x5c4: Push((int) 1)
0x5c5: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x5c6: Pop(2)
0x5c7: Push("Race")
0x5c8: @@ SetScriptProperty(Stack[-1], Stack[-13])
0x5c9: Pop(1)
0x5ca: PushEmpty(object, object, string, string, string)
0x5cb: Stack[-4] = Stack[-8]
0x5cc: Stack[-3] = "pt_rat2"
0x5cd: Stack[-2] = "pers_rat"
0x5ce: Stack[-1] = "rat_race.xml"
0x5cf: Call2 0x776

0x5d0: Stack[-7] = Stack[-5]
0x5d1: Pop(5)
0x5d2: Push("Index")
0x5d3: Push((int) 2)
0x5d4: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x5d5: Pop(2)
0x5d6: Push("Race")
0x5d7: @@ SetScriptProperty(Stack[-1], Stack[-12])
0x5d8: Pop(1)
0x5d9: PushEmpty(object, object, string, string, string)
0x5da: Stack[-4] = Stack[-8]
0x5db: Stack[-3] = "pt_rat3"
0x5dc: Stack[-2] = "pers_rat"
0x5dd: Stack[-1] = "rat_race.xml"
0x5de: Call2 0x776

0x5df: Stack[-7] = Stack[-5]
0x5e0: Pop(5)
0x5e1: Push("Index")
0x5e2: Push((int) 3)
0x5e3: @@ SetScriptProperty(Stack[-2], Stack[-1])
0x5e4: Pop(2)
0x5e5: Push("Race")
0x5e6: @@ SetScriptProperty(Stack[-1], Stack[-11])
0x5e7: Pop(1)
0x5e8: Stack[-1] = (int) 0
0x5e9: Push((int) 6)
0x5ea: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f4; Pop(1)

0x5ec: PushEmpty(int, bool)
0x5ed: Stack[-2] = Stack[-3]
0x5ee: Stack[-1] = (bool) 1
0x5ef: Call2 0x697

0x5f0: Pop(2)
0x5f1: Push((int) 1)
0x5f2: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5f3: GOTO 0x5e9

0x5f4: Return(); Pop(24)

0x5f5: Stack[-2] = 0
0x5f6: Stack[-3] = 0
0x5f7: Stack[-10] = 0
0x5f8: Stack[-11] = 0
0x5f9: Stack[-12] = 0
0x5fa: PushEmpty()
0x5fb: PushEmpty(int, object)
0x5fc: Stack[-1] = Stack[-3]
0x5fd: Push(-2, 1); TaskCall(4)
0x5fe: Call2 0x1b6

0x5ff: Pop(-2, 1); TaskReturn
0x600: Pop(2)
0x601: Return(); Pop(0)

0x602: PushEmpty()
0x603: Push("race_over1")
0x604: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x605: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x606: PushEmpty(int, bool)
0x607: Stack[-2] = (int) 3
0x608: Stack[-1] = (bool) 0
0x609: Call2 0x697

0x60a: Pop(2)
0x60b: Push((int) 1)
0x60c: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x60d: Push((int) 1)
0x60e: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x611: GOTO 0x618

0x612: Push((int) 3)
0x613: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x615: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x616: @ StopGroup0()
0x617: Pop(0)
0x618: GOTO 0x644

0x619: Push("race_over2")
0x61a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x61c: PushEmpty(int, bool)
0x61d: Stack[-2] = (int) 4
0x61e: Stack[-1] = (bool) 0
0x61f: Call2 0x697

0x620: Pop(2)
0x621: Push((int) 1)
0x622: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x623: Push((int) 1)
0x624: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x627: GOTO 0x62e

0x628: Push((int) 3)
0x629: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x62e; Pop(1)

0x62b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x62c: @ StopGroup0()
0x62d: Pop(0)
0x62e: GOTO 0x644

0x62f: Push("race_over3")
0x630: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x631: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x632: PushEmpty(int, bool)
0x633: Stack[-2] = (int) 5
0x634: Stack[-1] = (bool) 0
0x635: Call2 0x697

0x636: Pop(2)
0x637: Push((int) 1)
0x638: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x639: Push((int) 1)
0x63a: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x63b: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63c: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x63d: GOTO 0x644

0x63e: Push((int) 3)
0x63f: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x641: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x642: @ StopGroup0()
0x643: Pop(0)
0x644: Return(); Pop(0)

0x645: PushEmpty(int, int, bool, bool, int, int, int, bool, bool, int)
0x646: Stack[-5] = (int) 0
0x647: Stack[-4] = (int) 0
0x648: Stack[-3] = (bool) 1
0x649: Stack[-2] = (bool) 0
0x64a: PushEmpty(bool)
0x64b: Stack[-1] = (bool) 1
0x64c: Push(Stack[-4])
0x64d: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x64e: Pop(0); Push((bool) Stack[-6] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x650: Stack[-1] = (bool) 0
0x651: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x652: Push((int) 3)
0x653: @ irand(Stack[-2], Stack[-1])
0x654: Pop(1)
0x655: Push((int) 1)
0x656: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x657: GOTO 0x67b

0x658: PushEmpty(bool, float)
0x659: Stack[-1] = (float) 0.66667
0x65a: Call2 0x766

0x65b: Pop(1)
0x65c: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x65d: Push((int) 3)
0x65e: @ irand(Stack[-2], Stack[-1])
0x65f: Pop(1)
0x660: Push((int) 1)
0x661: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x662: GOTO 0x67b

0x663: PushEmpty(bool)
0x664: Stack[-1] = (bool) 0
0x665: Pop(0); Push((bool) Stack[-3] == 0)
0x666: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x667: PushEmpty(bool, float)
0x668: Stack[-1] = (float) 0.5
0x669: Call2 0x766

0x66a: Pop(1)
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: Stack[-1] = (bool) 1
0x66d: IF (Stack[-1] == 0) GOTO 0x670; Pop(1)

0x66e: Stack[-1] = (int) 0
0x66f: GOTO 0x67b

0x670: Push((int) 2)
0x671: @ irand(Stack[-2], Stack[-1])
0x672: Pop(1)
0x673: Push((int) 1)
0x674: Pop(1); Push(Stack[-2] + Stack[-1]);
0x675: Stack[-2] = -Stack[-1]; Pop(1);
0x676: Pop(0); Push(Stack[-5] + Stack[-1]);
0x677: Push((int) 0)
0x678: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x67a: GOTO 0x694

0x67b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(0);
0x67c: Push((int) 12)
0x67d: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x67e: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x67f: Push((int) 12)
0x680: Pop(1); Push(Stack[-6] - Stack[-1]);
0x681: Pop(1); Push(Stack[-2] - Stack[-1]);
0x682: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x683: GOTO 0x695

0x684: GOTO 0x694

0x685: Push(Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x687: PushEmpty(int, int)
0x688: Stack[-1] = Stack[-3]
0x689: Call2 0x75e

0x68a: Pop(1)
0x68b: GOTO 0x68d

0x68c: Push((int) 1)
0x68d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x68e: @@ add(Stack[-5])
0x68f: Pop(0)
0x690: Push((int) 0)
0x691: Stack[-3] = Stack[-2] == Stack[-1]; Pop(1);
0x692: Push((int) 0)
0x693: Stack[-4] = Stack[-2] < Stack[-1]; Pop(1);
0x694: GOTO 0x64a

0x695: Stack[-12] = Stack[-4]
0x696: Return(); Pop(10)

0x697: PushEmpty(object, object)
0x698: Push("rats_track_door")
0x699: Push((int) 1)
0x69a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x69b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x69c: @ FindActor(Stack[-2], Stack[-1])
0x69d: Pop(1)
0x69e: Push(Stack[-3])
0x69f: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a0: Push((bool) 0)
0x6a1: @@ Open(Stack[-1])
0x6a2: Pop(1)
0x6a3: GOTO 0x6a6

0x6a4: @@ Close()
0x6a5: Pop(0)
0x6a6: Return(); Pop(2)

0x6a7: Stack[-1] = 0
0x6a8: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x6a9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x6aa: @ StopGroup0()
0x6ab: Pop(0)
0x6ac: Return(); Pop(0)

0x6ad: PushEmpty(int, int)
0x6ae: @@ GetProperty(Stack[-4], Stack[-1])
0x6af: Pop(0)
0x6b0: Pop(0); Push(Stack[-1] + Stack[-3]);
0x6b1: @@ SetProperty(Stack[-5], Stack[-1])
0x6b2: Pop(1)
0x6b3: Return(); Pop(2)

0x6b4: PushEmpty(bool, bool)
0x6b5: @ IsLoaded(Stack[-1])
0x6b6: Pop(0)
0x6b7: Stack[-3] = Stack[-1]
0x6b8: Return(); Pop(2)

0x6b9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x6ba: @@ GetPosition(Stack[-8])
0x6bb: Pop(0)
0x6bc: @@ GetEyesHeight(Stack[-9])
0x6bd: Pop(0)
0x6be: Push(CvectorIndex(Stack[-8], 1))
0x6bf: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6c0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x6c1: @ GetPosition(Stack[-7])
0x6c2: Pop(0)
0x6c3: @ GetEyesHeight(Stack[-9])
0x6c4: Pop(0)
0x6c5: Push(CvectorIndex(Stack[-7], 1))
0x6c6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x6c7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x6c8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x6c9: Push(CvectorIndex(Stack[-6], 1))
0x6ca: Stack[-1] = (int) 0
0x6cb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x6cc: Pop(0); Push(Stack[-6] | Stack[-6]);
0x6cd: Pop(1); Push(Sqrt(Stack[-1]))
0x6ce: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x6cf: Stack[-5] = -Stack[-6]; Pop(0);
0x6d0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x6d1: PushEmpty(cvector, cvector)
0x6d2: Push(CVector(0.0, 1.0, 0.0))
0x6d3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x6d4: Call2 0x754

0x6d5: Pop(1)
0x6d6: Push((int) 25)
0x6d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6d8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6d9: Push(CVector(0.0, 10.0, 0.0))
0x6da: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x6db: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x6dc: @ IsOverrideActive(Stack[-2])
0x6dd: Pop(0)
0x6de: Push(Stack[-2])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e0: Stack[-21] = (bool) 0
0x6e1: Return(); Pop(18)

0x6e2: @ StopWorld()
0x6e3: Pop(0)
0x6e4: Push((bool) 1)
0x6e5: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x6e6: Pop(1)
0x6e7: Push(CvectorIndex(Stack[-4], 0))
0x6e8: Push(CvectorIndex(Stack[-5], 2))
0x6e9: @ Rotate(Stack[-2], Stack[-1])
0x6ea: Pop(2)
0x6eb: PushEmpty(bool)
0x6ec: Call2 0x82d

0x6ed: Pop(0)
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ef: GOTO 0x6f8

0x6f0: Push("head")
0x6f1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6f2: Pop(1)
0x6f3: Push(Stack[-1])
0x6f4: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f5: Push("head")
0x6f6: @ LookAsyncCamera(Stack[-1])
0x6f7: Pop(1)
0x6f8: @ CameraWaitForPlayFinish()
0x6f9: Pop(0)
0x6fa: @ ResumeWorld()
0x6fb: Pop(0)
0x6fc: Stack[-21] = (bool) 1
0x6fd: Return(); Pop(18)

0x6fe: PushEmpty(bool, bool)
0x6ff: Push((bool) 1)
0x700: @ CameraSwitchToNormal(Stack[-1])
0x701: Pop(1)
0x702: PushEmpty(bool)
0x703: Call2 0x82d

0x704: Pop(0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: GOTO 0x70f

0x707: Push("head")
0x708: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x709: Pop(1)
0x70a: Push(Stack[-1])
0x70b: IF (Stack[-1] == 0) GOTO 0x70f; Pop(1)

0x70c: Push("head")
0x70d: @ UnlookAsync(Stack[-1])
0x70e: Pop(1)
0x70f: Return(); Pop(2)

0x710: PushEmpty(bool, float, float, bool, float, float)
0x711: @ lshHasAnimation(Stack[-3], Stack[-7])
0x712: Pop(0)
0x713: Push(Stack[-3])
0x714: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x715: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x716: Pop(0)
0x717: Push((bool) 0)
0x718: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(1)
0x71a: GOTO 0x71f

0x71b: Push("Can't find lsh animation : ")
0x71c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x71d: @ Trace(Stack[-1])
0x71e: Pop(1)
0x71f: Return(); Pop(6)

0x720: PushEmpty(bool, float, float, bool, float, float)
0x721: @ lshHasAnimation(Stack[-3], Stack[-8])
0x722: Pop(0)
0x723: Push(Stack[-3])
0x724: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x725: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x726: Pop(0)
0x727: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x728: Pop(0)
0x729: GOTO 0x72e

0x72a: Push("Can't find lsh animation : ")
0x72b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x72c: @ Trace(Stack[-1])
0x72d: Pop(1)
0x72e: Return(); Pop(6)

0x72f: PushEmpty(bool)
0x730: Call2 0x82d

0x731: Pop(0)
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: @ lshStopSpeech()
0x734: Pop(0)
0x735: Return(); Pop(0)

0x736: PushEmpty()
0x737: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x738: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x739: Pop(0); Push((bool) Stack[-3] < Stack[-1])
0x73a: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x73b: Stack[-4] = (int) 0
0x73c: GOTO 0x73e

0x73d: Stack[-4] = (int) 2
0x73e: Return(); Pop(0)

0x73f: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-4] = (int) 1
0x742: GOTO 0x744

0x743: Stack[-4] = (int) 2
0x744: Return(); Pop(0)

0x745: PushEmpty()
0x746: Pop(0); Push((bool) Stack[-3] > Stack[-2])
0x747: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x748: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74a: Stack[-4] = (int) 0
0x74b: GOTO 0x74d

0x74c: Stack[-4] = (int) 2
0x74d: Return(); Pop(0)

0x74e: Pop(0); Push((bool) Stack[-2] > Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-4] = (int) 1
0x751: GOTO 0x753

0x752: Stack[-4] = (int) 2
0x753: Return(); Pop(0)

0x754: PushEmpty(float, float)
0x755: Pop(0); Push(Stack[-3] | Stack[-3]);
0x756: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x757: Push((float)0.0)
0x758: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x75b: Return(); Pop(2)

0x75c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x75d: Return(); Pop(2)

0x75e: PushEmpty()
0x75f: Push((int) 0)
0x760: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x764; Pop(1)

0x762: Stack[-2] = -Stack[-1]; Pop(0);
0x763: GOTO 0x765

0x764: Stack[-2] = Stack[-1]
0x765: Return(); Pop(0)

0x766: PushEmpty(float, float)
0x767: @ rand(Stack[-1])
0x768: Pop(0)
0x769: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x76a: Return(); Pop(2)

0x76b: PushEmpty(object, object)
0x76c: @ CreateObjectVector(Stack[-1])
0x76d: Pop(0)
0x76e: Stack[-3] = Stack[-1]
0x76f: Return(); Pop(2)

0x770: Stack[-1] = 0
0x771: PushEmpty(int, int)
0x772: @ GetVariable(Stack[-3], Stack[-1])
0x773: Pop(0)
0x774: Stack[-4] = Stack[-1]
0x775: Return(); Pop(2)

0x776: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x777: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x778: Pop(0)
0x779: Pop(0); Push((bool) Stack[-4] == 0)
0x77a: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77b: Push("Locator ")
0x77c: Pop(1); Push(Stack[-1] + Stack[-12]);
0x77d: Push(" doesn't exist")
0x77e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x77f: @ Trace(Stack[-1])
0x780: Pop(1)
0x781: Stack[-1] = 0
0x782: GOTO 0x785

0x783: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x784: Pop(0)
0x785: Stack[-13] = Stack[-1]
0x786: Return(); Pop(8)

0x787: Stack[-1] = 0
0x788: PushEmpty(object, object)
0x789: @ CreateIntVector(Stack[-1])
0x78a: Pop(0)
0x78b: @@ add(Stack[-4])
0x78c: Pop(0)
0x78d: @@ add(Stack[-3])
0x78e: Pop(0)
0x78f: Push((int) 3)
0x790: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x791: Pop(1)
0x792: Return(); Pop(2)

0x793: Stack[-1] = 0
0x794: PushEmpty(int, int)
0x795: PushEmpty(object, string, int)
0x796: Stack[-3] = Stack[-7]
0x797: Stack[-2] = "money"
0x798: Stack[-1] = Stack[-6]
0x799: Call2 0x6ad

0x79a: Pop(3)
0x79b: Push((int) 0)
0x79c: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x79d: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x79e: Push("Money")
0x79f: @ GetInvItemByName(Stack[-2], Stack[-1])
0x7a0: Pop(1)
0x7a1: PushEmpty(int, int)
0x7a2: Stack[-2] = Stack[-3]
0x7a3: Stack[-1] = Stack[-5]
0x7a4: Call2 0x788

0x7a5: Pop(2)
0x7a6: Return(); Pop(2)

0x7a7: PushEmpty(int, bool, int, bool)
0x7a8: @ GetInvItemByName(Stack[-2], Stack[-5])
0x7a9: Pop(0)
0x7aa: @@ HasItem(Stack[-2], Stack[-1])
0x7ab: Pop(0)
0x7ac: Stack[-7] = Stack[-1]
0x7ad: Return(); Pop(4)

0x7ae: PushEmpty()
0x7af: Push((int) 1)
0x7b0: @@ SetReturnValue(Stack[-1])
0x7b1: Pop(1)
0x7b2: Return(); Pop(0)

0x7b3: PushEmpty()
0x7b4: Push("ooRatsManager1")
0x7b5: Push((int) 1)
0x7b6: @ SetVariable(Stack[-2], Stack[-1])
0x7b7: Pop(2)
0x7b8: Return(); Pop(0)

0x7b9: PushEmpty()
0x7ba: Push("money500 is given")
0x7bb: @ Trace(Stack[-1])
0x7bc: Pop(1)
0x7bd: PushEmpty(object, int)
0x7be: Stack[-2] = Stack[-4]
0x7bf: Stack[-1] = (int) 500
0x7c0: Call2 0x794

0x7c1: Pop(2)
0x7c2: Return(); Pop(0)

0x7c3: PushEmpty()
0x7c4: Push("playsound")
0x7c5: Push("givemoney")
0x7c6: @ TriggerWorld(Stack[-2], Stack[-1])
0x7c7: Pop(2)
0x7c8: Return(); Pop(0)

0x7c9: PushEmpty()
0x7ca: PushEmpty(int, string)
0x7cb: Stack[-1] = "branch"
0x7cc: Call2 0x771

0x7cd: Pop(1)
0x7ce: Push((int) 0)
0x7cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7d0: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d1: Stack[-2] = (bool) 1
0x7d2: Return(); Pop(0)

0x7d3: Stack[-2] = (bool) 0
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty()
0x7d6: PushEmpty(int, string)
0x7d7: Stack[-1] = "branch"
0x7d8: Call2 0x771

0x7d9: Pop(1)
0x7da: Push((int) 1)
0x7db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7df; Pop(1)

0x7dd: Stack[-2] = (bool) 1
0x7de: Return(); Pop(0)

0x7df: Stack[-2] = (bool) 0
0x7e0: Return(); Pop(0)

0x7e1: PushEmpty()
0x7e2: PushEmpty(int, string)
0x7e3: Stack[-1] = "branch"
0x7e4: Call2 0x771

0x7e5: Pop(1)
0x7e6: Push((int) 2)
0x7e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7e8: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7e9: Stack[-2] = (bool) 1
0x7ea: Return(); Pop(0)

0x7eb: Stack[-2] = (bool) 0
0x7ec: Return(); Pop(0)

0x7ed: PushEmpty()
0x7ee: PushEmpty(bool)
0x7ef: Stack[-1] = (bool) 1
0x7f0: PushEmpty(bool, object, string)
0x7f1: Stack[-2] = Stack[-5]
0x7f2: Stack[-1] = "rat"
0x7f3: Call2 0x7a7

0x7f4: Pop(2)
0x7f5: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7f6: PushEmpty(bool, object, string)
0x7f7: Stack[-2] = Stack[-5]
0x7f8: Stack[-1] = "rat_big"
0x7f9: Call2 0x7a7

0x7fa: Pop(2)
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fc: Stack[-1] = (bool) 0
0x7fd: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fe: Stack[-2] = (bool) 1
0x7ff: Return(); Pop(0)

0x800: Stack[-2] = (bool) 0
0x801: Return(); Pop(0)

0x802: PushEmpty()
0x803: PushEmpty(int, string)
0x804: Stack[-1] = "ooRatsManager1"
0x805: Call2 0x771

0x806: Pop(1)
0x807: Push((int) 0)
0x808: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80a: Stack[-2] = (bool) 1
0x80b: Return(); Pop(0)

0x80c: Stack[-2] = (bool) 0
0x80d: Return(); Pop(0)

0x80e: PushEmpty(int, int)
0x80f: Push("branch")
0x810: @ GetVariable(Stack[-1], Stack[-2])
0x811: Pop(1)
0x812: Push((int) 0)
0x813: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x815: Stack[-3] = (int) 1
0x816: Return(); Pop(2)

0x817: GOTO 0x81d

0x818: Push((int) 1)
0x819: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x81d; Pop(1)

0x81b: Stack[-3] = (int) 2
0x81c: Return(); Pop(2)

0x81d: Stack[-3] = (int) 3
0x81e: Return(); Pop(2)

0x81f: PushEmpty(int, int)
0x820: Push("branch")
0x821: @ GetVariable(Stack[-1], Stack[-2])
0x822: Pop(1)
0x823: Stack[-3] = Stack[-1]
0x824: Return(); Pop(2)

0x825: Stack[-1] = (int) 518097
0x826: Return(); Pop(0)

0x827: Stack[-1] = (int) 518096
0x828: Return(); Pop(0)

0x829: Stack[-1] = "ui/NPC_Citizen2.png"
0x82a: Return(); Pop(0)

0x82b: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x82c: Return(); Pop(0)

0x82d: Stack[-1] = (bool) 0
0x82e: Return(); Pop(0)

