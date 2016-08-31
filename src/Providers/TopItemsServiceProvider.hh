<?hh //strict

        namespace TopItems\Providers;


        use Plenty\Plugin\ServiceProvider;

        class TopItemsServiceProvider extends ServiceProvider
        {
            public function register():void
            {
                $this->getApplication()->register(TopItemsRouteServiceProvider::class);
            }
        }
