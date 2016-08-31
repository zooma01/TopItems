<?hh //strict

        namespace TopItems\Providers;


        use Plenty\Plugin\RouteServiceProvider;
        use Plenty\Plugin\Routing\Router;

        class TopItemsRouteServiceProvider extends RouteServiceProvider
        {
            public function map(Router $router):void
            {
                $router->get('topitems', 'TopItems\Controllers\ContentController@showTopItems');
            }
        }
