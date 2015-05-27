struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

}

void RegisterAllClasses()
{
	//Total: 71 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//2. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//3. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//4. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//7. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//8. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//9. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//12. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//13. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//14. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//17. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//18. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//19. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//20. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//21. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//22. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//23. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//24. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//25. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//26. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//29. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//30. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//31. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//32. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//33. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//34. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//35. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//36. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//37. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//38. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//39. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//40. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//41. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//42. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//43. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//44. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//45. HaloManager
	void RegisterClass_HaloManager();
	RegisterClass_HaloManager();

	//46. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//47. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//48. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//49. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//50. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//51. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//52. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//53. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//54. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//55. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//56. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//57. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//58. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//59. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//60. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//61. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//65. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//66. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//67. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//68. NetworkManager
	//Skipping

	//69. MasterServerInterface
	//Skipping

	//70. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
