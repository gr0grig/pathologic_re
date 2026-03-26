GlobalVarCount = 5
	G_VAR_0 object 
	G_VAR_1 object 
	G_VAR_2 object 
	G_VAR_3 bool 
	G_VAR_4 bool 

Strings:
	W:fire
	A:Fade
	W:fire_begin
	A:FadeIn
	W:fire_loop
	A:FadeOut
	W:loading
	W:disease
	W:corpse
	A:SetRotationY
	W:corpse1
	A:AddSource
	A:Enable
	W:smoke
	A:SetOpacity
// @pool_raw:66006900720065000000466164650066006900720065005f0062006500670069006e00000046616465496e0066006900720065005f006c006f006f0070000000466164654f7574006c006f006100640069006e00670000006400690073006500610073006500000063006f0072007000730065000000536574526f746174696f6e590063006f00720070007300650031000000416464536f7572636500456e61626c650073006d006f006b00650000005365744f70616369747900

Import:
	GetProperty (2 args)
	SetTimer (2 args)
	PlayGlobalSound (2 args)
	PlayLoopedGlobalSound (3 args)
	Trace (1 args)
	SetDeathState (0 args)
	SetProperty (2 args)
	PlaceOnGround (0 args)
	GetPosition (1 args)
	EnableGeometry (2 args)
	FindGeometry (2 args)
	rand (2 args)
	CreateFire (3 args)
	CreateSmoke (3 args)
	Hold (0 args)
	KillTimer (1 args)

RunOp = 0x4c
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_16 Op = 0x0 Vars = (object, string)
		EVENT_7 Op = 0xa9 Vars = (int)


0x0: PushEmpty(float, object, float, object)
0x1: Push("fire") // @poff=0
0x2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x4: Push("fire") // @poff=0
0x5: @ GetProperty(Stack[-1], Stack[-3])
0x6: Pop(1)
0x7: Push((float)0.0)
0x8: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0xa: Push(GlobalVars[3])
0xb: Pop(1); Push((bool) Stack[-1] == 0)
0xc: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0xd: Push(GlobalVars[3])
0xe: Stack[-1] = (bool) 1
0xf: GlobalVars[3] = Stack[-1]; Pop(1)
0x10: Push(GlobalVars[0])
0x11: Push((bool) 0)
0x12: @@ Fade(Stack[-1]); Obj=2 // @poff=10
0x13: Pop(2)
0x14: Push(GlobalVars[1])
0x15: Push((bool) 0)
0x16: @@ Fade(Stack[-1]); Obj=2 // @poff=10
0x17: Pop(2)
0x18: Push(GlobalVars[4])
0x19: Pop(1); Push((bool) Stack[-1] == 0)
0x1a: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1b: Push(GlobalVars[4])
0x1c: Stack[-1] = (bool) 1
0x1d: GlobalVars[4] = Stack[-1]; Pop(1)
0x1e: Push((int) 81)
0x1f: Push((int) 3)
0x20: @ SetTimer(Stack[-2], Stack[-1])
0x21: Pop(2)
0x22: Push("fire_begin") // @poff=15
0x23: Push(CVector(0.0, 10.0, 0.0))
0x24: @ PlayGlobalSound(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: Push(GlobalVars[2])
0x27: Pop(1); Push(( Stack[-1] != 0 )
0x28: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x29: Push(GlobalVars[2])
0x2a: Push((float)1.5)
0x2b: @@ FadeIn(Stack[-1]); Obj=2 // @poff=37
0x2c: Pop(2)
0x2d: GOTO 0x36

0x2e: Push("fire_loop") // @poff=44
0x2f: Push(CVector(0.0, 10.0, 0.0))
0x30: @ PlayLoopedGlobalSound(Stack[-3], Stack[-2], Stack[-1])
0x31: Pop(2)
0x32: Push(GlobalVars[2])
0x33: Stack[-2] = Stack[-1]
0x34: GlobalVars[2] = Stack[-1]; Pop(1)
0x35: Stack[-1] = 0
0x36: GOTO 0x4b

0x37: Push(GlobalVars[3])
0x38: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x39: Push(GlobalVars[3])
0x3a: Stack[-1] = (bool) 0
0x3b: GlobalVars[3] = Stack[-1]; Pop(1)
0x3c: Push(GlobalVars[0])
0x3d: Push((bool) 1)
0x3e: @@ Fade(Stack[-1]); Obj=2 // @poff=10
0x3f: Pop(2)
0x40: Push(GlobalVars[1])
0x41: Push((bool) 1)
0x42: @@ Fade(Stack[-1]); Obj=2 // @poff=10
0x43: Pop(2)
0x44: Push(GlobalVars[2])
0x45: Pop(1); Push(( Stack[-1] != 0 )
0x46: IF (Stack[-1] == 0) GOTO 0x4b; Pop(1)

0x47: Push(GlobalVars[2])
0x48: Push((float)1.5)
0x49: @@ FadeOut(Stack[-1]); Obj=2 // @poff=64
0x4a: Pop(2)
0x4b: Return(); Pop(4)

0x4c: PushEmpty(object, object, object, cvector, cvector, cvector, float, object, object, object, cvector, cvector, cvector, float)
0x4d: Push("loading") // @poff=72
0x4e: @ Trace(Stack[-1])
0x4f: Pop(1)
0x50: Push(GlobalVars[3])
0x51: Stack[-1] = (bool) 0
0x52: GlobalVars[3] = Stack[-1]; Pop(1)
0x53: Push(GlobalVars[4])
0x54: Stack[-1] = (bool) 0
0x55: GlobalVars[4] = Stack[-1]; Pop(1)
0x56: @ SetDeathState()
0x57: Pop(0)
0x58: Push("disease") // @poff=88
0x59: Push((float)0.20000000298023224)
0x5a: @ SetProperty(Stack[-2], Stack[-1])
0x5b: Pop(2)
0x5c: @ PlaceOnGround()
0x5d: Pop(0)
0x5e: @ GetPosition(Stack[-4])
0x5f: Pop(0)
0x60: Stack[-3] = CVector(0.0, 1.0, 0.0)
0x61: Stack[-2] = CVector(0.0, 0.0, 0.0)
0x62: Push("corpse") // @poff=104
0x63: Push((bool) 1)
0x64: @ EnableGeometry(Stack[-2], Stack[-1])
0x65: Pop(2)
0x66: Push("corpse") // @poff=104
0x67: @ FindGeometry(Stack[-1], Stack[-6])
0x68: Pop(1)
0x69: Push((float)6.2831854820251465)
0x6a: @ rand(Stack[-2], Stack[-1])
0x6b: Pop(1)
0x6c: @@ SetRotationY(Stack[-1]); Obj=5 // @poff=118
0x6d: Pop(0)
0x6e: Push("corpse1") // @poff=131
0x6f: @ FindGeometry(Stack[-1], Stack[-6])
0x70: Pop(1)
0x71: @@ SetRotationY(Stack[-1]); Obj=5 // @poff=118
0x72: Pop(0)
0x73: Push("fire") // @poff=0
0x74: Push((int) 50)
0x75: @ CreateFire(Stack[-9], Stack[-2], Stack[-1])
0x76: Pop(2)
0x77: Push(CVector(0.0, 0.0, 0.0))
0x78: @@ AddSource(Stack[-1], Stack[-4]); Obj=8 // @poff=147
0x79: Pop(1)
0x7a: Push(CVector(0.0, 0.0, 50.0))
0x7b: @@ AddSource(Stack[-1], Stack[-4]); Obj=8 // @poff=147
0x7c: Pop(1)
0x7d: Push(CVector(0.0, 0.0, -50.0))
0x7e: @@ AddSource(Stack[-1], Stack[-4]); Obj=8 // @poff=147
0x7f: Pop(1)
0x80: Push(CVector(50.0, 0.0, 0.0))
0x81: @@ AddSource(Stack[-1], Stack[-4]); Obj=8 // @poff=147
0x82: Pop(1)
0x83: Push(CVector(-50.0, 0.0, 0.0))
0x84: @@ AddSource(Stack[-1], Stack[-4]); Obj=8 // @poff=147
0x85: Pop(1)
0x86: @@ Enable(); Obj=7 // @poff=157
0x87: Pop(0)
0x88: @@ Fade(); Obj=7 // @poff=10
0x89: Pop(0)
0x8a: Push("smoke") // @poff=164
0x8b: Push((int) 20)
0x8c: @ CreateSmoke(Stack[-8], Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: Push(CVector(0.0, 0.0, 0.0))
0x8f: @@ AddSource(Stack[-1], Stack[-4]); Obj=7 // @poff=147
0x90: Pop(1)
0x91: Push((float)0.699999988079071)
0x92: @@ SetOpacity(Stack[-1]); Obj=7 // @poff=176
0x93: Pop(1)
0x94: @@ Enable(); Obj=6 // @poff=157
0x95: Pop(0)
0x96: @@ Fade(); Obj=6 // @poff=10
0x97: Pop(0)
0x98: Push(GlobalVars[0])
0x99: Stack[-8] = Stack[-1]
0x9a: GlobalVars[0] = Stack[-1]; Pop(1)
0x9b: Push(GlobalVars[1])
0x9c: Stack[-7] = Stack[-1]
0x9d: GlobalVars[1] = Stack[-1]; Pop(1)
0x9e: Push((int) 80)
0x9f: Push((int) 1)
0xa0: @ SetTimer(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: @ Hold()
0xa3: Pop(0)
0xa4: GOTO 0xa2

0xa5: Return(); Pop(14)

0xa6: Stack[-5] = 0
0xa7: Stack[-6] = 0
0xa8: Stack[-7] = 0
0xa9: PushEmpty()
0xaa: PushEmpty(int)
0xab: Stack[-2] = Stack[-1]
0xac: Call2 0xaf

0xad: Pop(1)
0xae: Return(); Pop(0)

0xaf: PushEmpty(float, float)
0xb0: Push((int) 80)
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xb3: Push("fire") // @poff=0
0xb4: @ GetProperty(Stack[-1], Stack[-2])
0xb5: Pop(1)
0xb6: Push((float)0.009999999776482582)
0xb7: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb9: Stack[-1] = (int) 0
0xba: GOTO 0xc1

0xbb: Push((float)0.009999999776482582)
0xbc: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xbd: Push((int) 0)
0xbe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xbf: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xc0: Stack[-1] = (int) 0
0xc1: Push("fire") // @poff=0
0xc2: @ SetProperty(Stack[-1], Stack[-2])
0xc3: Pop(1)
0xc4: GOTO 0xd3

0xc5: Push((int) 81)
0xc6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc8: Push((int) 81)
0xc9: @ KillTimer(Stack[-1])
0xca: Pop(1)
0xcb: Push("corpse") // @poff=104
0xcc: Push((bool) 0)
0xcd: @ EnableGeometry(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: Push("corpse1") // @poff=131
0xd0: Push((bool) 1)
0xd1: @ EnableGeometry(Stack[-2], Stack[-1])
0xd2: Pop(2)
0xd3: Return(); Pop(2)

